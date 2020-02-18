# Install script for directory: /root/lmms

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
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/include/lmms/AboutDialog.h;/include/lmms/ActionGroup.h;/include/lmms/AudioAlsa.h;/include/lmms/AudioAlsaSetupWidget.h;/include/lmms/AudioDevice.h;/include/lmms/AudioDeviceSetupWidget.h;/include/lmms/AudioDummy.h;/include/lmms/AudioFileDevice.h;/include/lmms/AudioFileFlac.h;/include/lmms/AudioFileMP3.h;/include/lmms/AudioFileOgg.h;/include/lmms/AudioFileWave.h;/include/lmms/AudioJack.h;/include/lmms/AudioOss.h;/include/lmms/AudioPort.h;/include/lmms/AudioPortAudio.h;/include/lmms/AudioPulseAudio.h;/include/lmms/AudioSampleRecorder.h;/include/lmms/AudioSdl.h;/include/lmms/AudioSndio.h;/include/lmms/AudioSoundIo.h;/include/lmms/AutomatableButton.h;/include/lmms/AutomatableModel.h;/include/lmms/AutomatableModelView.h;/include/lmms/AutomatableSlider.h;/include/lmms/AutomationEditor.h;/include/lmms/AutomationPattern.h;/include/lmms/AutomationPatternView.h;/include/lmms/AutomationTrack.h;/include/lmms/BBEditor.h;/include/lmms/BBTrack.h;/include/lmms/BBTrackContainer.h;/include/lmms/BandLimitedWave.h;/include/lmms/BasicFilters.h;/include/lmms/BufferManager.h;/include/lmms/CPULoadWidget.h;/include/lmms/CaptionMenu.h;/include/lmms/Clipboard.h;/include/lmms/ColorChooser.h;/include/lmms/ComboBox.h;/include/lmms/ComboBoxModel.h;/include/lmms/ConfigManager.h;/include/lmms/Controller.h;/include/lmms/ControllerConnection.h;/include/lmms/ControllerConnectionDialog.h;/include/lmms/ControllerDialog.h;/include/lmms/ControllerRackView.h;/include/lmms/ControllerView.h;/include/lmms/DataFile.h;/include/lmms/Delay.h;/include/lmms/DetuningHelper.h;/include/lmms/DrumSynth.h;/include/lmms/DspEffectLibrary.h;/include/lmms/DummyEffect.h;/include/lmms/DummyInstrument.h;/include/lmms/DummyPlugin.h;/include/lmms/Editor.h;/include/lmms/Effect.h;/include/lmms/EffectChain.h;/include/lmms/EffectControlDialog.h;/include/lmms/EffectControls.h;/include/lmms/EffectRackView.h;/include/lmms/EffectSelectDialog.h;/include/lmms/EffectView.h;/include/lmms/Engine.h;/include/lmms/EnvelopeAndLfoParameters.h;/include/lmms/EnvelopeAndLfoView.h;/include/lmms/ExportFilter.h;/include/lmms/ExportProjectDialog.h;/include/lmms/FadeButton.h;/include/lmms/Fader.h;/include/lmms/FileBrowser.h;/include/lmms/FileDialog.h;/include/lmms/FxLine.h;/include/lmms/FxLineLcdSpinBox.h;/include/lmms/FxMixer.h;/include/lmms/FxMixerView.h;/include/lmms/Graph.h;/include/lmms/GroupBox.h;/include/lmms/GuiApplication.h;/include/lmms/ImportFilter.h;/include/lmms/InlineAutomation.h;/include/lmms/Instrument.h;/include/lmms/InstrumentFunctionViews.h;/include/lmms/InstrumentFunctions.h;/include/lmms/InstrumentMidiIOView.h;/include/lmms/InstrumentPlayHandle.h;/include/lmms/InstrumentSoundShaping.h;/include/lmms/InstrumentSoundShapingView.h;/include/lmms/InstrumentTrack.h;/include/lmms/InstrumentView.h;/include/lmms/IoHelper.h;/include/lmms/JournallingObject.h;/include/lmms/Knob.h;/include/lmms/Ladspa2LMMS.h;/include/lmms/LadspaBase.h;/include/lmms/LadspaControl.h;/include/lmms/LadspaControlView.h;/include/lmms/LadspaManager.h;/include/lmms/LcdSpinBox.h;/include/lmms/LcdWidget.h;/include/lmms/LedCheckbox.h;/include/lmms/LeftRightNav.h;/include/lmms/LfoController.h;/include/lmms/LmmsPalette.h;/include/lmms/LmmsStyle.h;/include/lmms/LocaleHelper.h;/include/lmms/LocklessAllocator.h;/include/lmms/LocklessList.h;/include/lmms/LocklessRingBuffer.h;/include/lmms/MainApplication.h;/include/lmms/MainWindow.h;/include/lmms/MemoryHelper.h;/include/lmms/MemoryManager.h;/include/lmms/MeterDialog.h;/include/lmms/MeterModel.h;/include/lmms/MicroTimer.h;/include/lmms/Midi.h;/include/lmms/MidiAlsaRaw.h;/include/lmms/MidiAlsaSeq.h;/include/lmms/MidiApple.h;/include/lmms/MidiClient.h;/include/lmms/MidiController.h;/include/lmms/MidiDummy.h;/include/lmms/MidiEvent.h;/include/lmms/MidiEventProcessor.h;/include/lmms/MidiJack.h;/include/lmms/MidiOss.h;/include/lmms/MidiPort.h;/include/lmms/MidiPortMenu.h;/include/lmms/MidiSetupWidget.h;/include/lmms/MidiSndio.h;/include/lmms/MidiTime.h;/include/lmms/MidiWinMM.h;/include/lmms/MixHelpers.h;/include/lmms/Mixer.h;/include/lmms/MixerProfiler.h;/include/lmms/MixerWorkerThread.h;/include/lmms/Model.h;/include/lmms/ModelView.h;/include/lmms/ModelVisitor.h;/include/lmms/NStateButton.h;/include/lmms/Note.h;/include/lmms/NotePlayHandle.h;/include/lmms/Oscillator.h;/include/lmms/OutputSettings.h;/include/lmms/Pattern.h;/include/lmms/PeakController.h;/include/lmms/PerfLog.h;/include/lmms/Piano.h;/include/lmms/PianoRoll.h;/include/lmms/PianoView.h;/include/lmms/Pitch.h;/include/lmms/PixmapButton.h;/include/lmms/PlayHandle.h;/include/lmms/Plugin.h;/include/lmms/PluginBrowser.h;/include/lmms/PluginFactory.h;/include/lmms/PluginIssue.h;/include/lmms/PluginView.h;/include/lmms/PresetPreviewPlayHandle.h;/include/lmms/ProjectJournal.h;/include/lmms/ProjectNotes.h;/include/lmms/ProjectRenderer.h;/include/lmms/ProjectVersion.h;/include/lmms/RecentProjectsMenu.h;/include/lmms/RemotePlugin.h;/include/lmms/RenameDialog.h;/include/lmms/RenderManager.h;/include/lmms/RingBuffer.h;/include/lmms/RmsHelper.h;/include/lmms/RowTableView.h;/include/lmms/Rubberband.h;/include/lmms/SampleBuffer.h;/include/lmms/SamplePlayHandle.h;/include/lmms/SampleRecordHandle.h;/include/lmms/SampleTrack.h;/include/lmms/SendButtonIndicator.h;/include/lmms/SerializingObject.h;/include/lmms/SetupDialog.h;/include/lmms/SideBar.h;/include/lmms/SideBarWidget.h;/include/lmms/Song.h;/include/lmms/SongEditor.h;/include/lmms/StepRecorder.h;/include/lmms/StepRecorderWidget.h;/include/lmms/StringPairDrag.h;/include/lmms/SubWindow.h;/include/lmms/SweepOscillator.h;/include/lmms/TabBar.h;/include/lmms/TabButton.h;/include/lmms/TabWidget.h;/include/lmms/TemplatesMenu.h;/include/lmms/TempoSyncKnob.h;/include/lmms/TempoSyncKnobModel.h;/include/lmms/TextFloat.h;/include/lmms/ThreadableJob.h;/include/lmms/TimeDisplayWidget.h;/include/lmms/TimeLineWidget.h;/include/lmms/ToolButton.h;/include/lmms/ToolPlugin.h;/include/lmms/ToolPluginView.h;/include/lmms/ToolTip.h;/include/lmms/Track.h;/include/lmms/TrackContainer.h;/include/lmms/TrackContainerView.h;/include/lmms/TrackLabelButton.h;/include/lmms/TrackRenameLineEdit.h;/include/lmms/ValueBuffer.h;/include/lmms/VersionedSaveDialog.h;/include/lmms/VisualizationWidget.h;/include/lmms/VstSyncController.h;/include/lmms/VstSyncData.h;/include/lmms/aeffectx.h;/include/lmms/base64.h;/include/lmms/debug.h;/include/lmms/denormals.h;/include/lmms/embed.h;/include/lmms/endian_handling.h;/include/lmms/fenv.h;/include/lmms/fft_helpers.h;/include/lmms/fifo_buffer.h;/include/lmms/gui_templates.h;/include/lmms/interpolation.h;/include/lmms/ladspa.h;/include/lmms/lmms_basics.h;/include/lmms/lmms_constants.h;/include/lmms/lmms_math.h;/include/lmms/panning.h;/include/lmms/panning_constants.h;/include/lmms/shared_object.h;/include/lmms/stdshims.h;/include/lmms/versioninfo.h;/include/lmms/volume.h;/include/lmms/lmmsconfig.h;/include/lmms/lmmsversion.h;/include/lmms/embed.cpp")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/include/lmms" TYPE FILE FILES
    "/root/lmms/include/AboutDialog.h"
    "/root/lmms/include/ActionGroup.h"
    "/root/lmms/include/AudioAlsa.h"
    "/root/lmms/include/AudioAlsaSetupWidget.h"
    "/root/lmms/include/AudioDevice.h"
    "/root/lmms/include/AudioDeviceSetupWidget.h"
    "/root/lmms/include/AudioDummy.h"
    "/root/lmms/include/AudioFileDevice.h"
    "/root/lmms/include/AudioFileFlac.h"
    "/root/lmms/include/AudioFileMP3.h"
    "/root/lmms/include/AudioFileOgg.h"
    "/root/lmms/include/AudioFileWave.h"
    "/root/lmms/include/AudioJack.h"
    "/root/lmms/include/AudioOss.h"
    "/root/lmms/include/AudioPort.h"
    "/root/lmms/include/AudioPortAudio.h"
    "/root/lmms/include/AudioPulseAudio.h"
    "/root/lmms/include/AudioSampleRecorder.h"
    "/root/lmms/include/AudioSdl.h"
    "/root/lmms/include/AudioSndio.h"
    "/root/lmms/include/AudioSoundIo.h"
    "/root/lmms/include/AutomatableButton.h"
    "/root/lmms/include/AutomatableModel.h"
    "/root/lmms/include/AutomatableModelView.h"
    "/root/lmms/include/AutomatableSlider.h"
    "/root/lmms/include/AutomationEditor.h"
    "/root/lmms/include/AutomationPattern.h"
    "/root/lmms/include/AutomationPatternView.h"
    "/root/lmms/include/AutomationTrack.h"
    "/root/lmms/include/BBEditor.h"
    "/root/lmms/include/BBTrack.h"
    "/root/lmms/include/BBTrackContainer.h"
    "/root/lmms/include/BandLimitedWave.h"
    "/root/lmms/include/BasicFilters.h"
    "/root/lmms/include/BufferManager.h"
    "/root/lmms/include/CPULoadWidget.h"
    "/root/lmms/include/CaptionMenu.h"
    "/root/lmms/include/Clipboard.h"
    "/root/lmms/include/ColorChooser.h"
    "/root/lmms/include/ComboBox.h"
    "/root/lmms/include/ComboBoxModel.h"
    "/root/lmms/include/ConfigManager.h"
    "/root/lmms/include/Controller.h"
    "/root/lmms/include/ControllerConnection.h"
    "/root/lmms/include/ControllerConnectionDialog.h"
    "/root/lmms/include/ControllerDialog.h"
    "/root/lmms/include/ControllerRackView.h"
    "/root/lmms/include/ControllerView.h"
    "/root/lmms/include/DataFile.h"
    "/root/lmms/include/Delay.h"
    "/root/lmms/include/DetuningHelper.h"
    "/root/lmms/include/DrumSynth.h"
    "/root/lmms/include/DspEffectLibrary.h"
    "/root/lmms/include/DummyEffect.h"
    "/root/lmms/include/DummyInstrument.h"
    "/root/lmms/include/DummyPlugin.h"
    "/root/lmms/include/Editor.h"
    "/root/lmms/include/Effect.h"
    "/root/lmms/include/EffectChain.h"
    "/root/lmms/include/EffectControlDialog.h"
    "/root/lmms/include/EffectControls.h"
    "/root/lmms/include/EffectRackView.h"
    "/root/lmms/include/EffectSelectDialog.h"
    "/root/lmms/include/EffectView.h"
    "/root/lmms/include/Engine.h"
    "/root/lmms/include/EnvelopeAndLfoParameters.h"
    "/root/lmms/include/EnvelopeAndLfoView.h"
    "/root/lmms/include/ExportFilter.h"
    "/root/lmms/include/ExportProjectDialog.h"
    "/root/lmms/include/FadeButton.h"
    "/root/lmms/include/Fader.h"
    "/root/lmms/include/FileBrowser.h"
    "/root/lmms/include/FileDialog.h"
    "/root/lmms/include/FxLine.h"
    "/root/lmms/include/FxLineLcdSpinBox.h"
    "/root/lmms/include/FxMixer.h"
    "/root/lmms/include/FxMixerView.h"
    "/root/lmms/include/Graph.h"
    "/root/lmms/include/GroupBox.h"
    "/root/lmms/include/GuiApplication.h"
    "/root/lmms/include/ImportFilter.h"
    "/root/lmms/include/InlineAutomation.h"
    "/root/lmms/include/Instrument.h"
    "/root/lmms/include/InstrumentFunctionViews.h"
    "/root/lmms/include/InstrumentFunctions.h"
    "/root/lmms/include/InstrumentMidiIOView.h"
    "/root/lmms/include/InstrumentPlayHandle.h"
    "/root/lmms/include/InstrumentSoundShaping.h"
    "/root/lmms/include/InstrumentSoundShapingView.h"
    "/root/lmms/include/InstrumentTrack.h"
    "/root/lmms/include/InstrumentView.h"
    "/root/lmms/include/IoHelper.h"
    "/root/lmms/include/JournallingObject.h"
    "/root/lmms/include/Knob.h"
    "/root/lmms/include/Ladspa2LMMS.h"
    "/root/lmms/include/LadspaBase.h"
    "/root/lmms/include/LadspaControl.h"
    "/root/lmms/include/LadspaControlView.h"
    "/root/lmms/include/LadspaManager.h"
    "/root/lmms/include/LcdSpinBox.h"
    "/root/lmms/include/LcdWidget.h"
    "/root/lmms/include/LedCheckbox.h"
    "/root/lmms/include/LeftRightNav.h"
    "/root/lmms/include/LfoController.h"
    "/root/lmms/include/LmmsPalette.h"
    "/root/lmms/include/LmmsStyle.h"
    "/root/lmms/include/LocaleHelper.h"
    "/root/lmms/include/LocklessAllocator.h"
    "/root/lmms/include/LocklessList.h"
    "/root/lmms/include/LocklessRingBuffer.h"
    "/root/lmms/include/MainApplication.h"
    "/root/lmms/include/MainWindow.h"
    "/root/lmms/include/MemoryHelper.h"
    "/root/lmms/include/MemoryManager.h"
    "/root/lmms/include/MeterDialog.h"
    "/root/lmms/include/MeterModel.h"
    "/root/lmms/include/MicroTimer.h"
    "/root/lmms/include/Midi.h"
    "/root/lmms/include/MidiAlsaRaw.h"
    "/root/lmms/include/MidiAlsaSeq.h"
    "/root/lmms/include/MidiApple.h"
    "/root/lmms/include/MidiClient.h"
    "/root/lmms/include/MidiController.h"
    "/root/lmms/include/MidiDummy.h"
    "/root/lmms/include/MidiEvent.h"
    "/root/lmms/include/MidiEventProcessor.h"
    "/root/lmms/include/MidiJack.h"
    "/root/lmms/include/MidiOss.h"
    "/root/lmms/include/MidiPort.h"
    "/root/lmms/include/MidiPortMenu.h"
    "/root/lmms/include/MidiSetupWidget.h"
    "/root/lmms/include/MidiSndio.h"
    "/root/lmms/include/MidiTime.h"
    "/root/lmms/include/MidiWinMM.h"
    "/root/lmms/include/MixHelpers.h"
    "/root/lmms/include/Mixer.h"
    "/root/lmms/include/MixerProfiler.h"
    "/root/lmms/include/MixerWorkerThread.h"
    "/root/lmms/include/Model.h"
    "/root/lmms/include/ModelView.h"
    "/root/lmms/include/ModelVisitor.h"
    "/root/lmms/include/NStateButton.h"
    "/root/lmms/include/Note.h"
    "/root/lmms/include/NotePlayHandle.h"
    "/root/lmms/include/Oscillator.h"
    "/root/lmms/include/OutputSettings.h"
    "/root/lmms/include/Pattern.h"
    "/root/lmms/include/PeakController.h"
    "/root/lmms/include/PerfLog.h"
    "/root/lmms/include/Piano.h"
    "/root/lmms/include/PianoRoll.h"
    "/root/lmms/include/PianoView.h"
    "/root/lmms/include/Pitch.h"
    "/root/lmms/include/PixmapButton.h"
    "/root/lmms/include/PlayHandle.h"
    "/root/lmms/include/Plugin.h"
    "/root/lmms/include/PluginBrowser.h"
    "/root/lmms/include/PluginFactory.h"
    "/root/lmms/include/PluginIssue.h"
    "/root/lmms/include/PluginView.h"
    "/root/lmms/include/PresetPreviewPlayHandle.h"
    "/root/lmms/include/ProjectJournal.h"
    "/root/lmms/include/ProjectNotes.h"
    "/root/lmms/include/ProjectRenderer.h"
    "/root/lmms/include/ProjectVersion.h"
    "/root/lmms/include/RecentProjectsMenu.h"
    "/root/lmms/include/RemotePlugin.h"
    "/root/lmms/include/RenameDialog.h"
    "/root/lmms/include/RenderManager.h"
    "/root/lmms/include/RingBuffer.h"
    "/root/lmms/include/RmsHelper.h"
    "/root/lmms/include/RowTableView.h"
    "/root/lmms/include/Rubberband.h"
    "/root/lmms/include/SampleBuffer.h"
    "/root/lmms/include/SamplePlayHandle.h"
    "/root/lmms/include/SampleRecordHandle.h"
    "/root/lmms/include/SampleTrack.h"
    "/root/lmms/include/SendButtonIndicator.h"
    "/root/lmms/include/SerializingObject.h"
    "/root/lmms/include/SetupDialog.h"
    "/root/lmms/include/SideBar.h"
    "/root/lmms/include/SideBarWidget.h"
    "/root/lmms/include/Song.h"
    "/root/lmms/include/SongEditor.h"
    "/root/lmms/include/StepRecorder.h"
    "/root/lmms/include/StepRecorderWidget.h"
    "/root/lmms/include/StringPairDrag.h"
    "/root/lmms/include/SubWindow.h"
    "/root/lmms/include/SweepOscillator.h"
    "/root/lmms/include/TabBar.h"
    "/root/lmms/include/TabButton.h"
    "/root/lmms/include/TabWidget.h"
    "/root/lmms/include/TemplatesMenu.h"
    "/root/lmms/include/TempoSyncKnob.h"
    "/root/lmms/include/TempoSyncKnobModel.h"
    "/root/lmms/include/TextFloat.h"
    "/root/lmms/include/ThreadableJob.h"
    "/root/lmms/include/TimeDisplayWidget.h"
    "/root/lmms/include/TimeLineWidget.h"
    "/root/lmms/include/ToolButton.h"
    "/root/lmms/include/ToolPlugin.h"
    "/root/lmms/include/ToolPluginView.h"
    "/root/lmms/include/ToolTip.h"
    "/root/lmms/include/Track.h"
    "/root/lmms/include/TrackContainer.h"
    "/root/lmms/include/TrackContainerView.h"
    "/root/lmms/include/TrackLabelButton.h"
    "/root/lmms/include/TrackRenameLineEdit.h"
    "/root/lmms/include/ValueBuffer.h"
    "/root/lmms/include/VersionedSaveDialog.h"
    "/root/lmms/include/VisualizationWidget.h"
    "/root/lmms/include/VstSyncController.h"
    "/root/lmms/include/VstSyncData.h"
    "/root/lmms/include/aeffectx.h"
    "/root/lmms/include/base64.h"
    "/root/lmms/include/debug.h"
    "/root/lmms/include/denormals.h"
    "/root/lmms/include/embed.h"
    "/root/lmms/include/endian_handling.h"
    "/root/lmms/include/fenv.h"
    "/root/lmms/include/fft_helpers.h"
    "/root/lmms/include/fifo_buffer.h"
    "/root/lmms/include/gui_templates.h"
    "/root/lmms/include/interpolation.h"
    "/root/lmms/include/ladspa.h"
    "/root/lmms/include/lmms_basics.h"
    "/root/lmms/include/lmms_constants.h"
    "/root/lmms/include/lmms_math.h"
    "/root/lmms/include/panning.h"
    "/root/lmms/include/panning_constants.h"
    "/root/lmms/include/shared_object.h"
    "/root/lmms/include/stdshims.h"
    "/root/lmms/include/versioninfo.h"
    "/root/lmms/include/volume.h"
    "/root/lmms/build/lmmsconfig.h"
    "/root/lmms/build/lmmsversion.h"
    "/root/lmms/src/gui/embed.cpp"
    )
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/root/lmms/build/cmake/cmake_install.cmake")
  include("/root/lmms/build/src/cmake_install.cmake")
  include("/root/lmms/build/plugins/cmake_install.cmake")
  include("/root/lmms/build/tests/cmake_install.cmake")
  include("/root/lmms/build/data/cmake_install.cmake")
  include("/root/lmms/build/doc/cmake_install.cmake")
  include("/root/lmms/build/cmake/install/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/lmms/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
