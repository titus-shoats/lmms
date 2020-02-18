# Install script for directory: /root/lmms/data/locale

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/lmms/locale" TYPE FILE FILES
    "/root/lmms/data/locale/ar.qm"
    "/root/lmms/data/locale/bs.qm"
    "/root/lmms/data/locale/ca.qm"
    "/root/lmms/data/locale/cs.qm"
    "/root/lmms/data/locale/de.qm"
    "/root/lmms/data/locale/en.qm"
    "/root/lmms/data/locale/es.qm"
    "/root/lmms/data/locale/fa.qm"
    "/root/lmms/data/locale/fr.qm"
    "/root/lmms/data/locale/gl.qm"
    "/root/lmms/data/locale/hu_HU.qm"
    "/root/lmms/data/locale/id.qm"
    "/root/lmms/data/locale/it.qm"
    "/root/lmms/data/locale/ja.qm"
    "/root/lmms/data/locale/ko.qm"
    "/root/lmms/data/locale/nl.qm"
    "/root/lmms/data/locale/pl.qm"
    "/root/lmms/data/locale/pt.qm"
    "/root/lmms/data/locale/ru.qm"
    "/root/lmms/data/locale/sl.qm"
    "/root/lmms/data/locale/sr.qm"
    "/root/lmms/data/locale/sv.qm"
    "/root/lmms/data/locale/uk.qm"
    "/root/lmms/data/locale/zh_CN.qm"
    "/root/lmms/data/locale/zh_TW.qm"
    )
endif()

