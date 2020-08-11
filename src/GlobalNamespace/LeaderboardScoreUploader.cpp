// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
// Including type: LeaderboardScoreUploader/ScoreData
#include "GlobalNamespace/LeaderboardScoreUploader_ScoreData.hpp"
// Including type: LeaderboardScoreUploader/ScoresToUploadData
#include "GlobalNamespace/LeaderboardScoreUploader_ScoresToUploadData.hpp"
// Including type: LeaderboardScoreUploader/UploadScoreCallback
#include "GlobalNamespace/LeaderboardScoreUploader_UploadScoreCallback.hpp"
// Including type: LeaderboardScoreUploader/<>c__DisplayClass14_0
#include "GlobalNamespace/LeaderboardScoreUploader_--c__DisplayClass14_0.hpp"
// Including type: LeaderboardScoreUploader/<UploadScoresCoroutine>d__14
#include "GlobalNamespace/LeaderboardScoreUploader_-UploadScoresCoroutine-d__14.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kScoresToUploadFileName
::CsString* GlobalNamespace::LeaderboardScoreUploader::_get_kScoresToUploadFileName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::CsString*>("", "LeaderboardScoreUploader", "kScoresToUploadFileName"));
}
// Autogenerated static field setter
// Set static field: static private System.String kScoresToUploadFileName
void GlobalNamespace::LeaderboardScoreUploader::_set_kScoresToUploadFileName(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LeaderboardScoreUploader", "kScoresToUploadFileName", value));
}
// Autogenerated method: LeaderboardScoreUploader.add_allScoresDidUploadEvent
void GlobalNamespace::LeaderboardScoreUploader::add_allScoresDidUploadEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_allScoresDidUploadEvent", value));
}
// Autogenerated method: LeaderboardScoreUploader.remove_allScoresDidUploadEvent
void GlobalNamespace::LeaderboardScoreUploader::remove_allScoresDidUploadEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_allScoresDidUploadEvent", value));
}
// Autogenerated method: LeaderboardScoreUploader.Init
void GlobalNamespace::LeaderboardScoreUploader::Init(GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback* uploadScoreCallback, ::CsString* playerId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init", uploadScoreCallback, playerId));
}
// Autogenerated method: LeaderboardScoreUploader.OnApplicationQuit
void GlobalNamespace::LeaderboardScoreUploader::OnApplicationQuit() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnApplicationQuit"));
}
// Autogenerated method: LeaderboardScoreUploader.UploadScoresCoroutine
System::Collections::IEnumerator* GlobalNamespace::LeaderboardScoreUploader::UploadScoresCoroutine() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "UploadScoresCoroutine"));
}
// Autogenerated method: LeaderboardScoreUploader.LoadScoresToUploadFromFile
void GlobalNamespace::LeaderboardScoreUploader::LoadScoresToUploadFromFile() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "LoadScoresToUploadFromFile"));
}
// Autogenerated method: LeaderboardScoreUploader.SaveScoresToUploadToFile
void GlobalNamespace::LeaderboardScoreUploader::SaveScoresToUploadToFile() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SaveScoresToUploadToFile"));
}
// Autogenerated method: LeaderboardScoreUploader.AddScore
void GlobalNamespace::LeaderboardScoreUploader::AddScore(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddScore", scoreData));
}
// Autogenerated method: LeaderboardScoreUploader.<UploadScoresCoroutine>b__14_1
bool GlobalNamespace::LeaderboardScoreUploader::$UploadScoresCoroutine$b__14_1() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "<UploadScoresCoroutine>b__14_1")));
}
// Autogenerated method: LeaderboardScoreUploader..ctor
GlobalNamespace::LeaderboardScoreUploader* GlobalNamespace::LeaderboardScoreUploader::New_ctor() {
  return (LeaderboardScoreUploader*)THROW_UNLESS(il2cpp_utils::New("", "LeaderboardScoreUploader"));
}
