
#include "JuceHeader.h"
#include "PresetData.h"

BEGIN_EMBEDDED_DATA()
DEFINE_EMBEDDED_DATA(hise::FileHandlerBase::AudioFiles, PresetData::impulses, PresetData::impulsesSize);
DEFINE_EMBEDDED_DATA(hise::FileHandlerBase::Images, PresetData::images, PresetData::imagesSize);
DEFINE_EMBEDDED_DATA(hise::FileHandlerBase::MidiFiles, PresetData::midiFiles, PresetData::midiFilesSize);
DEFINE_EMBEDDED_DATA(hise::FileHandlerBase::SampleMaps, PresetData::samplemaps, PresetData::samplemapsSize);
DEFINE_EMBEDDED_DATA(hise::FileHandlerBase::Scripts, PresetData::externalFiles, PresetData::externalFilesSize);
DEFINE_EMBEDDED_DATA(hise::FileHandlerBase::Presets, PresetData::preset, PresetData::presetSize);
DEFINE_EMBEDDED_DATA(hise::FileHandlerBase::UserPresets, PresetData::userPresets, PresetData::userPresetsSize);
END_EMBEDDED_DATA()

REGISTER_STATIC_DSP_LIBRARIES()
{
	REGISTER_STATIC_DSP_FACTORY(hise::HiseCoreDspFactory);
}
#if USE_COPY_PROTECTION
RSAKey hise::Unlocker::getPublicKey() { return RSAKey(""); };
#endif
AudioProcessor* hise::StandaloneProcessor::createProcessor() { CREATE_PLUGIN(deviceManager, callback); }

START_JUCE_APPLICATION(hise::FrontendStandaloneApplication)
String hise::FrontendHandler::getProjectName() { return "oi grandad"; };
String hise::FrontendHandler::getCompanyName() { return "modularsamples"; };
String hise::FrontendHandler::getCompanyWebsiteName() { return "http://modularsamples.com"; };
String hise::FrontendHandler::getCompanyCopyright() { return ""; };
String hise::FrontendHandler::getVersionString() { return "0.0.1"; };
String hise::FrontendHandler::getAppGroupId() { return ""; };
String hise::FrontendHandler::getExpansionKey() { return ""; };
String hise::FrontendHandler::getExpansionType() { return "Disabled"; };
