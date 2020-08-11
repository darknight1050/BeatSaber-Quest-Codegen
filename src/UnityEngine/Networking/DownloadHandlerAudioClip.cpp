// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.DownloadHandlerAudioClip
#include "UnityEngine/Networking/DownloadHandlerAudioClip.hpp"
// Including type: UnityEngine.AudioType
#include "UnityEngine/AudioType.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: UnityEngine.Networking.UnityWebRequest
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Networking.DownloadHandlerAudioClip.Create
System::IntPtr UnityEngine::Networking::DownloadHandlerAudioClip::Create(UnityEngine::Networking::DownloadHandlerAudioClip* obj, ::CsString* url, UnityEngine::AudioType audioType) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IntPtr>("UnityEngine.Networking", "DownloadHandlerAudioClip", "Create", obj, url, audioType));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerAudioClip.InternalCreateAudioClip
void UnityEngine::Networking::DownloadHandlerAudioClip::InternalCreateAudioClip(::CsString* url, UnityEngine::AudioType audioType) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InternalCreateAudioClip", url, audioType));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerAudioClip..ctor
UnityEngine::Networking::DownloadHandlerAudioClip* UnityEngine::Networking::DownloadHandlerAudioClip::New_ctor(::CsString* url, UnityEngine::AudioType audioType) {
  return (DownloadHandlerAudioClip*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Networking", "DownloadHandlerAudioClip", url, audioType));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerAudioClip.get_audioClip
UnityEngine::AudioClip* UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AudioClip*>(this, "get_audioClip"));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerAudioClip.set_streamAudio
void UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_streamAudio", value));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerAudioClip.GetContent
UnityEngine::AudioClip* UnityEngine::Networking::DownloadHandlerAudioClip::GetContent(UnityEngine::Networking::UnityWebRequest* www) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AudioClip*>("UnityEngine.Networking", "DownloadHandlerAudioClip", "GetContent", www));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerAudioClip.GetData
::Array<uint8_t>* UnityEngine::Networking::DownloadHandlerAudioClip::GetData() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<uint8_t>*>(this, "GetData"));
}
// Autogenerated method: UnityEngine.Networking.DownloadHandlerAudioClip.GetText
::CsString* UnityEngine::Networking::DownloadHandlerAudioClip::GetText() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "GetText"));
}
