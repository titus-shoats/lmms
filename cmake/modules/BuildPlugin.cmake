# BuildPlugin.cmake - Copyright (c) 2008 Tobias Doerffel
#
# description: build LMMS-plugin
# usage: BUILD_PLUGIN(<PLUGIN_NAME> <PLUGIN_SOURCES> MOCFILES <HEADERS_FOR_MOC> EMBEDDED_RESOURCES <LIST_OF_FILES_TO_EMBED> UICFILES <UI_FILES_TO_COMPILE> LINK <SHARED|MODULE>)

INCLUDE(GenQrc)

MACRO(BUILD_PLUGIN PLUGIN_NAME)
	CMAKE_PARSE_ARGUMENTS(PLUGIN "" "LINK;EXPORT_BASE_NAME" "MOCFILES;EMBEDDED_RESOURCES;UICFILES" ${ARGN})
	SET(PLUGIN_SOURCES ${PLUGIN_UNPARSED_ARGUMENTS})

	INCLUDE_DIRECTORIES("${CMAKE_CURRENT_BINARY_DIR}" "${CMAKE_BINARY_DIR}" "${CMAKE_SOURCE_DIR}/include")

	ADD_DEFINITIONS(-DPLUGIN_NAME=${PLUGIN_NAME})

	LIST(LENGTH PLUGIN_EMBEDDED_RESOURCES ER_LEN)
	IF(ER_LEN)
		# Expand and sort arguments to avoid locale dependent sorting in
		# shell
		SET(NEW_ARGS)
		FOREACH(ARG ${PLUGIN_EMBEDDED_RESOURCES})
			FILE(GLOB EXPANDED "${ARG}")
			LIST(SORT EXPANDED)
			FOREACH(ITEM ${EXPANDED})
				LIST(APPEND NEW_ARGS "${ITEM}")
			ENDFOREACH()
		ENDFOREACH()
		SET(PLUGIN_EMBEDDED_RESOURCES ${NEW_ARGS})

		ADD_GEN_QRC(RCC_OUT "${PLUGIN_NAME}.qrc" PREFIX artwork/${PLUGIN_NAME} ${PLUGIN_EMBEDDED_RESOURCES})
	ENDIF(ER_LEN)

	QT5_WRAP_CPP(plugin_MOC_out ${PLUGIN_MOCFILES})
	QT5_WRAP_UI(plugin_UIC_out ${PLUGIN_UICFILES})

	FOREACH(f ${PLUGIN_SOURCES})
		ADD_FILE_DEPENDENCIES(${f} ${RCC_OUT} ${plugin_UIC_out})
	ENDFOREACH(f)

	IF(LMMS_BUILD_APPLE)
		LINK_DIRECTORIES("${CMAKE_BINARY_DIR}")
		LINK_LIBRARIES(${QT_LIBRARIES})
	ENDIF(LMMS_BUILD_APPLE)
	IF(LMMS_BUILD_WIN32)
		LINK_DIRECTORIES("${CMAKE_BINARY_DIR}" "${CMAKE_SOURCE_DIR}")
		LINK_LIBRARIES(${QT_LIBRARIES})
	ENDIF(LMMS_BUILD_WIN32)
	IF(LMMS_BUILD_MSYS AND CMAKE_BUILD_TYPE STREQUAL "Debug")
		# Override Qt debug libraries with release versions
		SET(QT_LIBRARIES "${QT_OVERRIDE_LIBRARIES}")
	ENDIF()

	IF (NOT PLUGIN_LINK)
		SET(PLUGIN_LINK "MODULE")
	ENDIF()

	ADD_LIBRARY(${PLUGIN_NAME} ${PLUGIN_LINK} ${PLUGIN_SOURCES} ${plugin_MOC_out} ${RCC_OUT})

	TARGET_LINK_LIBRARIES(${PLUGIN_NAME} Qt5::Widgets Qt5::Xml)

	IF(LMMS_BUILD_WIN32)
		TARGET_LINK_LIBRARIES(${PLUGIN_NAME} lmms)
	ENDIF(LMMS_BUILD_WIN32)

	INSTALL(TARGETS ${PLUGIN_NAME}
		LIBRARY DESTINATION "${PLUGIN_DIR}"
		RUNTIME DESTINATION "${PLUGIN_DIR}"
	)

	IF(LMMS_BUILD_APPLE)
		IF ("${PLUGIN_LINK}" STREQUAL "SHARED")
			SET_TARGET_PROPERTIES(${PLUGIN_NAME} PROPERTIES LINK_FLAGS "-undefined dynamic_lookup")
		ELSE()
			SET_TARGET_PROPERTIES(${PLUGIN_NAME} PROPERTIES LINK_FLAGS "-bundle_loader \"${CMAKE_BINARY_DIR}/lmms\"")
		ENDIF()
		ADD_DEPENDENCIES(${PLUGIN_NAME} lmms)
	ENDIF(LMMS_BUILD_APPLE)
	IF(LMMS_BUILD_WIN32)
		IF(STRIP)
			ADD_CUSTOM_COMMAND(TARGET ${PLUGIN_NAME} POST_BUILD COMMAND ${STRIP} "$<TARGET_FILE:${PLUGIN_NAME}>")
		ENDIF()
		SET_TARGET_PROPERTIES(${PLUGIN_NAME} PROPERTIES PREFIX "")
	ENDIF()

	SET_DIRECTORY_PROPERTIES(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${RCC_OUT} ${plugin_MOC_out}")

	IF(NOT PLUGIN_EXPORT_BASE_NAME)
		SET(PLUGIN_EXPORT_BASE_NAME "PLUGIN")
	ENDIF()

	GENERATE_EXPORT_HEADER(${PLUGIN_NAME}
		BASE_NAME ${PLUGIN_EXPORT_BASE_NAME}
	)
	TARGET_INCLUDE_DIRECTORIES(${PLUGIN_NAME}
		PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>
	)

	SET_PROPERTY(GLOBAL APPEND PROPERTY PLUGINS_BUILT ${PLUGIN_NAME})
	GET_PROPERTY(PLUGINS_BUILT GLOBAL PROPERTY PLUGINS_BUILT)
ENDMACRO(BUILD_PLUGIN)
