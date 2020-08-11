// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelFilterModel/LevelFilterParams
#include "GlobalNamespace/BeatmapLevelFilterModel_LevelFilterParams.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: BeatmapCharacteristicSO
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: BeatmapLevelFilterModel/LevelFilterParams..ctor
GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams* GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams::New_ctor(System::Collections::Generic::HashSet_1<::CsString*>* beatmapLevelIds) {
  return (BeatmapLevelFilterModel::LevelFilterParams*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapLevelFilterModel/LevelFilterParams", beatmapLevelIds));
}
// Autogenerated method: BeatmapLevelFilterModel/LevelFilterParams..ctor
GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams* GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams::New_ctor(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  return (BeatmapLevelFilterModel::LevelFilterParams*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapLevelFilterModel/LevelFilterParams", beatmapCharacteristic));
}
// Autogenerated method: BeatmapLevelFilterModel/LevelFilterParams.NoFilter
GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams* GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams::NoFilter() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams*>("", "BeatmapLevelFilterModel/LevelFilterParams", "NoFilter"));
}
// Autogenerated method: BeatmapLevelFilterModel/LevelFilterParams.ByBeatmapLevelIds
GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams* GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams::ByBeatmapLevelIds(System::Collections::Generic::HashSet_1<::CsString*>* beatmapLevelIds) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams*>("", "BeatmapLevelFilterModel/LevelFilterParams", "ByBeatmapLevelIds", beatmapLevelIds));
}
// Autogenerated method: BeatmapLevelFilterModel/LevelFilterParams.ByBeatmapCharacteristic
GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams* GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams::ByBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams*>("", "BeatmapLevelFilterModel/LevelFilterParams", "ByBeatmapCharacteristic", beatmapCharacteristic));
}
// Autogenerated method: BeatmapLevelFilterModel/LevelFilterParams..ctor
GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams* GlobalNamespace::BeatmapLevelFilterModel::LevelFilterParams::New_ctor() {
  return (BeatmapLevelFilterModel::LevelFilterParams*)THROW_UNLESS(il2cpp_utils::New("", "BeatmapLevelFilterModel/LevelFilterParams"));
}
