// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamPlatformAdditionalContentModel
#include "GlobalNamespace/SteamPlatformAdditionalContentModel.hpp"
// Including type: SteamPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__6
#include "GlobalNamespace/SteamPlatformAdditionalContentModel_-GetLevelEntitlementStatusInternalAsync-d__6.hpp"
// Including type: SteamPlatformAdditionalContentModel/<GetPackEntitlementStatusInternalAsync>d__7
#include "GlobalNamespace/SteamPlatformAdditionalContentModel_-GetPackEntitlementStatusInternalAsync-d__7.hpp"
// Including type: SteamPlatformAdditionalContentModel/<DataIsValidAsync>d__8
#include "GlobalNamespace/SteamPlatformAdditionalContentModel_-DataIsValidAsync-d__8.hpp"
// Including type: SteamPlatformAdditionalContentModel/<OpenLevelProductStoreAsync>d__9
#include "GlobalNamespace/SteamPlatformAdditionalContentModel_-OpenLevelProductStoreAsync-d__9.hpp"
// Including type: SteamPlatformAdditionalContentModel/<OpenLevelPackProductStoreAsync>d__10
#include "GlobalNamespace/SteamPlatformAdditionalContentModel_-OpenLevelPackProductStoreAsync-d__10.hpp"
// Including type: SteamPlatformAdditionalContentModel/<CheckForNewEntitlementsAsync>d__14
#include "GlobalNamespace/SteamPlatformAdditionalContentModel_-CheckForNewEntitlementsAsync-d__14.hpp"
// Including type: SteamLevelProductsModelSO
#include "GlobalNamespace/SteamLevelProductsModelSO.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: System.Threading.Tasks.TaskCompletionSource`1
#include "System/Threading/Tasks/TaskCompletionSource_1.hpp"
// Including type: System.Threading.SemaphoreSlim
#include "System/Threading/SemaphoreSlim.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: SteamPlatformAdditionalContentModel.DataIsValidAsync
System::Threading::Tasks::Task_1<bool>* GlobalNamespace::SteamPlatformAdditionalContentModel::DataIsValidAsync(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<bool>*>(this, "DataIsValidAsync", cancellationToken));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.OpenProductStore
void GlobalNamespace::SteamPlatformAdditionalContentModel::OpenProductStore(uint appId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OpenProductStore", appId));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.OpenBundleUrl
void GlobalNamespace::SteamPlatformAdditionalContentModel::OpenBundleUrl(uint bundleId) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OpenBundleUrl", bundleId));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.CheckForNewEntitlementsAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>* GlobalNamespace::SteamPlatformAdditionalContentModel::CheckForNewEntitlementsAsync(System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::UpdateEntitlementsResult>*>(this, "CheckForNewEntitlementsAsync", cancellationToken));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.HasLevelEntitlement
bool GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelEntitlement(::CsString* levelId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasLevelEntitlement", levelId));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.HasLevelPackEntitlement
bool GlobalNamespace::SteamPlatformAdditionalContentModel::HasLevelPackEntitlement(::CsString* levelPackId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasLevelPackEntitlement", levelPackId));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.InvalidateDataInternal
void GlobalNamespace::SteamPlatformAdditionalContentModel::InvalidateDataInternal() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InvalidateDataInternal"));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.GetLevelEntitlementStatusInternalAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GlobalNamespace::SteamPlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync(::CsString* levelId, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*>(this, "GetLevelEntitlementStatusInternalAsync", levelId, cancellationToken));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.GetPackEntitlementStatusInternalAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GlobalNamespace::SteamPlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync(::CsString* packId, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>*>(this, "GetPackEntitlementStatusInternalAsync", packId, cancellationToken));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.OpenLevelProductStoreAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelProductStoreAsync(::CsString* levelId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>*>(this, "OpenLevelProductStoreAsync", levelId, token));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.OpenLevelPackProductStoreAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* GlobalNamespace::SteamPlatformAdditionalContentModel::OpenLevelPackProductStoreAsync(::CsString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>*>(this, "OpenLevelPackProductStoreAsync", levelPackId, token));
}
// Autogenerated method: SteamPlatformAdditionalContentModel.IsPackBetterBuyThanLevelAsync
System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* GlobalNamespace::SteamPlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync(::CsString* levelPackId, System::Threading::CancellationToken token) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>*>(this, "IsPackBetterBuyThanLevelAsync", levelPackId, token));
}
// Autogenerated method: SteamPlatformAdditionalContentModel..ctor
GlobalNamespace::SteamPlatformAdditionalContentModel* GlobalNamespace::SteamPlatformAdditionalContentModel::New_ctor() {
  return (SteamPlatformAdditionalContentModel*)THROW_UNLESS(il2cpp_utils::New("", "SteamPlatformAdditionalContentModel"));
}
