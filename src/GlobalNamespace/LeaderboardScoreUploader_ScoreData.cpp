// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardScoreUploader/ScoreData
#include "GlobalNamespace/LeaderboardScoreUploader_ScoreData.hpp"
// Including type: IDifficultyBeatmap
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
// Including type: GameplayModifiers
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_playerId
::CsString* GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_playerId() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(this, "get_playerId"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_playerId
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_playerId(::CsString* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_playerId", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_beatmap
GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_beatmap() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IDifficultyBeatmap*>(this, "get_beatmap"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_beatmap
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_beatmap(GlobalNamespace::IDifficultyBeatmap* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_beatmap", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_gameplayModifiers
GlobalNamespace::GameplayModifiers* GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_gameplayModifiers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::GameplayModifiers*>(this, "get_gameplayModifiers"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_gameplayModifiers
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_gameplayModifiers(GlobalNamespace::GameplayModifiers* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_gameplayModifiers", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_rawScore
int GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_rawScore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_rawScore"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_rawScore
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_rawScore(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_rawScore", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_modifiedScore
int GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_modifiedScore() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_modifiedScore"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_modifiedScore
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_modifiedScore(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_modifiedScore", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_fullCombo
bool GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_fullCombo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_fullCombo"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_fullCombo
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_fullCombo(bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_fullCombo", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_goodCutsCount
int GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_goodCutsCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_goodCutsCount"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_goodCutsCount
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_goodCutsCount(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_goodCutsCount", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_badCutsCount
int GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_badCutsCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_badCutsCount"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_badCutsCount
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_badCutsCount(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_badCutsCount", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_missedCount
int GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_missedCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_missedCount"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_missedCount
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_missedCount(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_missedCount", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.get_maxCombo
int GlobalNamespace::LeaderboardScoreUploader::ScoreData::get_maxCombo() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_maxCombo"));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData.set_maxCombo
void GlobalNamespace::LeaderboardScoreUploader::ScoreData::set_maxCombo(int value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_maxCombo", value));
}
// Autogenerated method: LeaderboardScoreUploader/ScoreData..ctor
GlobalNamespace::LeaderboardScoreUploader::ScoreData* GlobalNamespace::LeaderboardScoreUploader::ScoreData::New_ctor(::CsString* playerId, GlobalNamespace::IDifficultyBeatmap* beatmap, int rawScore, int modifiedScore, bool fullCombo, int goodCutsCount, int badCutsCount, int missedCount, int maxCombo, GlobalNamespace::GameplayModifiers* gameplayModifiers) {
  return (LeaderboardScoreUploader::ScoreData*)THROW_UNLESS(il2cpp_utils::New("", "LeaderboardScoreUploader/ScoreData", playerId, beatmap, rawScore, modifiedScore, fullCombo, goodCutsCount, badCutsCount, missedCount, maxCombo, gameplayModifiers));
}
