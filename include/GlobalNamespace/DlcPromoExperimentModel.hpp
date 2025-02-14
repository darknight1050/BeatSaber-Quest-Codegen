// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DlcPromoExperimentDataSO
#include "GlobalNamespace/DlcPromoExperimentDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
  // Forward declaring type: IAnalyticsModel
  class IAnalyticsModel;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: DlcPromoExperimentModel
  class DlcPromoExperimentModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::DlcPromoExperimentModel::$InitAfterPlatformWasInitializedAsync$d__8
    struct $InitAfterPlatformWasInitializedAsync$d__8;
    // Nested type: GlobalNamespace::DlcPromoExperimentModel::$UpdateNotOwnedPacksAsync$d__17
    struct $UpdateNotOwnedPacksAsync$d__17;
    // [InjectAttribute] Offset: 0xE16194
    // private readonly AdditionalContentModel _additionalContentModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE161A4
    // private readonly IPlatformUserModel _platformUserModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPlatformUserModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE161B4
    // private readonly IAnalyticsModel _analyticsModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IAnalyticsModel* analyticsModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAnalyticsModel*) == 0x8);
    // [InjectAttribute] Offset: 0xE161C4
    // private DlcPromoExperimentDataSO _dlcPromoExperimentData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::DlcPromoExperimentDataSO* dlcPromoExperimentData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::DlcPromoExperimentDataSO*) == 0x8);
    // private DlcPromoExperimentDataSO/MusicPackPromoInfo[] _notOwnedMusicPackPromoInfos
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* notOwnedMusicPackPromoInfos;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>*) == 0x8);
    // private System.Boolean _updatingNotOwnedPacks
    // Size: 0x1
    // Offset: 0x38
    bool updatingNotOwnedPacks;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x39
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initialized and: random
    char __padding6[0x6] = {};
    // private System.Random _random
    // Size: 0x8
    // Offset: 0x40
    System::Random* random;
    // Field size check
    static_assert(sizeof(System::Random*) == 0x8);
    // Creating value type constructor for type: DlcPromoExperimentModel
    DlcPromoExperimentModel(GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, GlobalNamespace::IPlatformUserModel* platformUserModel_ = {}, GlobalNamespace::IAnalyticsModel* analyticsModel_ = {}, GlobalNamespace::DlcPromoExperimentDataSO* dlcPromoExperimentData_ = {}, ::Array<GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*>* notOwnedMusicPackPromoInfos_ = {}, bool updatingNotOwnedPacks_ = {}, bool initialized_ = {}, System::Random* random_ = {}) noexcept : additionalContentModel{additionalContentModel_}, platformUserModel{platformUserModel_}, analyticsModel{analyticsModel_}, dlcPromoExperimentData{dlcPromoExperimentData_}, notOwnedMusicPackPromoInfos{notOwnedMusicPackPromoInfos_}, updatingNotOwnedPacks{updatingNotOwnedPacks_}, initialized{initialized_}, random{random_} {}
    // public System.Void InitAfterPlatformWasInitializedAsync(System.Boolean force)
    // Offset: 0x10B7B28
    void InitAfterPlatformWasInitializedAsync(bool force);
    // public DlcPromoExperimentDataSO/MusicPackPromoInfo GetPackDataForMainMenuPromoBanner(out System.Boolean probablyOwned)
    // Offset: 0x10B7BF4
    GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo* GetPackDataForMainMenuPromoBanner(bool& probablyOwned);
    // public System.Void MainMenuDlcPromoBannerWasShown(IBeatmapLevelPack promoPack, System.String customText)
    // Offset: 0x10B7DA4
    void MainMenuDlcPromoBannerWasShown(GlobalNamespace::IBeatmapLevelPack* promoPack, ::Il2CppString* customText);
    // public System.Void MainMenuDlcPromoBannerWasPressed(IBeatmapLevelPack promoPack, System.String customText)
    // Offset: 0x10B80E8
    void MainMenuDlcPromoBannerWasPressed(GlobalNamespace::IBeatmapLevelPack* promoPack, ::Il2CppString* customText);
    // public System.Void BuyLevelButtonWasPressed(IPreviewBeatmapLevel level, System.String page, System.String customText)
    // Offset: 0x10B824C
    void BuyLevelButtonWasPressed(GlobalNamespace::IPreviewBeatmapLevel* level, ::Il2CppString* page, ::Il2CppString* customText);
    // public System.Void BuyLevelButtonWasShown(IPreviewBeatmapLevel level, System.String page, System.String customText)
    // Offset: 0x10B83B4
    void BuyLevelButtonWasShown(GlobalNamespace::IPreviewBeatmapLevel* level, ::Il2CppString* page, ::Il2CppString* customText);
    // public System.Void BuyPackButtonWasPressed(IBeatmapLevelPack pack, System.String page, System.String customText)
    // Offset: 0x10B851C
    void BuyPackButtonWasPressed(GlobalNamespace::IBeatmapLevelPack* pack, ::Il2CppString* page, ::Il2CppString* customText);
    // public System.Void BuyPackButtonWasShown(IBeatmapLevelPack pack, System.String page, System.String customText)
    // Offset: 0x10B8684
    void BuyPackButtonWasShown(GlobalNamespace::IBeatmapLevelPack* pack, ::Il2CppString* page, ::Il2CppString* customText);
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> GetExperimentEventData(System.String itemId, System.String page, System.String customText)
    // Offset: 0x10B7F08
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* GetExperimentEventData(::Il2CppString* itemId, ::Il2CppString* page, ::Il2CppString* customText);
    // private System.Void UpdateNotOwnedPacksAsync()
    // Offset: 0x10B87EC
    void UpdateNotOwnedPacksAsync();
    // private System.Void HandleAdditionalContentModelDidInvalidateData()
    // Offset: 0x10B88A4
    void HandleAdditionalContentModelDidInvalidateData();
    // public System.Void .ctor()
    // Offset: 0x10B88A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DlcPromoExperimentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DlcPromoExperimentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DlcPromoExperimentModel*, creationType>()));
    }
  }; // DlcPromoExperimentModel
  #pragma pack(pop)
  static check_size<sizeof(DlcPromoExperimentModel), 64 + sizeof(System::Random*)> __GlobalNamespace_DlcPromoExperimentModelSizeCheck;
  static_assert(sizeof(DlcPromoExperimentModel) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DlcPromoExperimentModel*, "", "DlcPromoExperimentModel");
