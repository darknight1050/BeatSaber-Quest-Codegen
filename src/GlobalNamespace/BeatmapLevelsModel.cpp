// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelsModel
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
// Including type: LevelDataAssetDownloadUpdate
#include "GlobalNamespace/LevelDataAssetDownloadUpdate.hpp"
// Including type: IBeatmapLevelPackCollection
#include "GlobalNamespace/IBeatmapLevelPackCollection.hpp"
// Including type: BeatmapLevelsModel/<GetCustomLevelPackCollectionAsync>d__28
#include "GlobalNamespace/BeatmapLevelsModel_-GetCustomLevelPackCollectionAsync-d__28.hpp"
// Including type: BeatmapLevelsModel/<GetBeatmapLevelAsync>d__33
#include "GlobalNamespace/BeatmapLevelsModel_-GetBeatmapLevelAsync-d__33.hpp"
// Including type: BeatmapLevelPackCollectionContainerSO
#include "GlobalNamespace/BeatmapLevelPackCollectionContainerSO.hpp"
// Including type: BeatmapLevelPackCollectionSO
#include "GlobalNamespace/BeatmapLevelPackCollectionSO.hpp"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: IBeatmapDataAssetFileModel
#include "GlobalNamespace/IBeatmapDataAssetFileModel.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: HMCache`2
#include "GlobalNamespace/HMCache_2.hpp"
// Including type: IBeatmapLevel
#include "GlobalNamespace/IBeatmapLevel.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: IPreviewBeatmapLevel
#include "GlobalNamespace/IPreviewBeatmapLevel.hpp"
// Including type: BeatmapLevelLoader
#include "GlobalNamespace/BeatmapLevelLoader.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: IBeatmapLevelPack
#include "GlobalNamespace/IBeatmapLevelPack.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapLevelsModel.add_levelDownloadingUpdateEvent
void GlobalNamespace::BeatmapLevelsModel::add_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_levelDownloadingUpdateEvent", value));
}
// Autogenerated method: BeatmapLevelsModel.remove_levelDownloadingUpdateEvent
void GlobalNamespace::BeatmapLevelsModel::remove_levelDownloadingUpdateEvent(System::Action_1<GlobalNamespace::BeatmapLevelsModel::LevelDownloadingUpdate>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_levelDownloadingUpdateEvent", value));
}
// Autogenerated method: BeatmapLevelsModel.get_ostAndExtrasPackCollection
GlobalNamespace::BeatmapLevelPackCollectionSO* GlobalNamespace::BeatmapLevelsModel::get_ostAndExtrasPackCollection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapLevelPackCollectionSO*>(this, "get_ostAndExtrasPackCollection"));
}
// Autogenerated method: BeatmapLevelsModel.get_dlcBeatmapLevelPackCollection
GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::get_dlcBeatmapLevelPackCollection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IBeatmapLevelPackCollection*>(this, "get_dlcBeatmapLevelPackCollection"));
}
// Autogenerated method: BeatmapLevelsModel.get_allLoadedBeatmapLevelPackCollection
GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::get_allLoadedBeatmapLevelPackCollection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IBeatmapLevelPackCollection*>(this, "get_allLoadedBeatmapLevelPackCollection"));
}
// Autogenerated method: BeatmapLevelsModel.get_customLevelPackCollection
GlobalNamespace::IBeatmapLevelPackCollection* GlobalNamespace::BeatmapLevelsModel::get_customLevelPackCollection() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IBeatmapLevelPackCollection*>(this, "get_customLevelPackCollection"));
}
// Autogenerated method: BeatmapLevelsModel.Init
void GlobalNamespace::BeatmapLevelsModel::Init() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Init"));
}
// Autogenerated method: BeatmapLevelsModel.Start
void GlobalNamespace::BeatmapLevelsModel::Start() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Start"));
}
// Autogenerated method: BeatmapLevelsModel.OnDestroy
void GlobalNamespace::BeatmapLevelsModel::OnDestroy() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnDestroy"));
}
// Autogenerated method: BeatmapLevelsModel.ClearLoadedBeatmapLevelsCaches
void GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearLoadedBeatmapLevelsCaches"));
}
// Autogenerated method: BeatmapLevelsModel.GetCustomLevelPackCollectionAsync
System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection*>* GlobalNamespace::BeatmapLevelsModel::GetCustomLevelPackCollectionAsync(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::IBeatmapLevelPackCollection*>*>(this, "GetCustomLevelPackCollectionAsync", cancellationToken));
}
// Autogenerated method: BeatmapLevelsModel.GetLevelPackForLevelId
GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId(::CsString* levelId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IBeatmapLevelPack*>(this, "GetLevelPackForLevelId", levelId));
}
// Autogenerated method: BeatmapLevelsModel.GetLevelPack
GlobalNamespace::IBeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::GetLevelPack(::CsString* levePacklId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IBeatmapLevelPack*>(this, "GetLevelPack", levePacklId));
}
// Autogenerated method: BeatmapLevelsModel.IsBeatmapLevelLoaded
bool GlobalNamespace::BeatmapLevelsModel::IsBeatmapLevelLoaded(::CsString* levelId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsBeatmapLevelLoaded", levelId));
}
// Autogenerated method: BeatmapLevelsModel.GetBeatmapLevelIfLoaded
GlobalNamespace::IBeatmapLevel* GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelIfLoaded(::CsString* levelId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IBeatmapLevel*>(this, "GetBeatmapLevelIfLoaded", levelId));
}
// Autogenerated method: BeatmapLevelsModel.GetBeatmapLevelAsync
System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>* GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelAsync(::CsString* levelID, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult>*>(this, "GetBeatmapLevelAsync", levelID, cancellationToken));
}
// Autogenerated method: BeatmapLevelsModel.HandleLevelDataAssetDownloadUpdate
void GlobalNamespace::BeatmapLevelsModel::HandleLevelDataAssetDownloadUpdate(GlobalNamespace::LevelDataAssetDownloadUpdate update) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleLevelDataAssetDownloadUpdate", update));
}
// Autogenerated method: BeatmapLevelsModel.UpdateLoadedPreviewLevels
void GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateLoadedPreviewLevels"));
}
// Autogenerated method: BeatmapLevelsModel.UpdateAllLoadedBeatmapLevelPacks
void GlobalNamespace::BeatmapLevelsModel::UpdateAllLoadedBeatmapLevelPacks() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateAllLoadedBeatmapLevelPacks"));
}
// Autogenerated method: BeatmapLevelsModel..ctor
GlobalNamespace::BeatmapLevelsModel* GlobalNamespace::BeatmapLevelsModel::New_ctor() {
  return (BeatmapLevelsModel*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapLevelsModel"));
}
