// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SoloFreePlayFlowCoordinator
#include "GlobalNamespace/SoloFreePlayFlowCoordinator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ResultsViewController
  class ResultsViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SoloFreePlayFlowCoordinator/<>c__DisplayClass23_0
  // [CompilerGeneratedAttribute] Offset: E125EC
  class SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0 : public ::Il2CppObject {
    public:
    // public SoloFreePlayFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::SoloFreePlayFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SoloFreePlayFlowCoordinator*) == 0x8);
    // public ResultsViewController resultsViewController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ResultsViewController* resultsViewController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ResultsViewController*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass23_0
    $$c__DisplayClass23_0(GlobalNamespace::SoloFreePlayFlowCoordinator* $$4__this_ = {}, GlobalNamespace::ResultsViewController* resultsViewController_ = {}) noexcept : $$4__this{$$4__this_}, resultsViewController{resultsViewController_} {}
    // System.Void <HandleResultsViewControllerRestartButtonPressed>b__0()
    // Offset: 0x1170CEC
    void $HandleResultsViewControllerRestartButtonPressed$b__0();
    // public System.Void .ctor()
    // Offset: 0x1170CDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0*, creationType>()));
    }
  }; // SoloFreePlayFlowCoordinator/<>c__DisplayClass23_0
  #pragma pack(pop)
  static check_size<sizeof(SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0), 24 + sizeof(GlobalNamespace::ResultsViewController*)> __GlobalNamespace_SoloFreePlayFlowCoordinator_$$c__DisplayClass23_0SizeCheck;
  static_assert(sizeof(SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SoloFreePlayFlowCoordinator::$$c__DisplayClass23_0*, "", "SoloFreePlayFlowCoordinator/<>c__DisplayClass23_0");
