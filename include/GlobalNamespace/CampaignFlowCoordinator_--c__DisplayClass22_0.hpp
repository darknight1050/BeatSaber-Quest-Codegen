// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CampaignFlowCoordinator
#include "GlobalNamespace/CampaignFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionResultsViewController
  class MissionResultsViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CampaignFlowCoordinator/<>c__DisplayClass22_0
  // [CompilerGeneratedAttribute] Offset: E1248C
  class CampaignFlowCoordinator::$$c__DisplayClass22_0 : public ::Il2CppObject {
    public:
    // public CampaignFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::CampaignFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CampaignFlowCoordinator*) == 0x8);
    // public MissionResultsViewController viewController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionResultsViewController* viewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionResultsViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass22_0
    $$c__DisplayClass22_0(GlobalNamespace::CampaignFlowCoordinator* $$4__this_ = {}, GlobalNamespace::MissionResultsViewController* viewController_ = {}) noexcept : $$4__this{$$4__this_}, viewController{viewController_} {}
    // System.Void <HandleMissionResultsViewControllerRetryButtonPressed>b__0()
    // Offset: 0x108A950
    void $HandleMissionResultsViewControllerRetryButtonPressed$b__0();
    // public System.Void .ctor()
    // Offset: 0x108A948
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CampaignFlowCoordinator::$$c__DisplayClass22_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass22_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CampaignFlowCoordinator::$$c__DisplayClass22_0*, creationType>()));
    }
  }; // CampaignFlowCoordinator/<>c__DisplayClass22_0
  #pragma pack(pop)
  static check_size<sizeof(CampaignFlowCoordinator::$$c__DisplayClass22_0), 24 + sizeof(GlobalNamespace::MissionResultsViewController*)> __GlobalNamespace_CampaignFlowCoordinator_$$c__DisplayClass22_0SizeCheck;
  static_assert(sizeof(CampaignFlowCoordinator::$$c__DisplayClass22_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass22_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass22_0");
