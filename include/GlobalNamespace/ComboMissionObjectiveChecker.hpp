// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleValueMissionObjectiveChecker
#include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScoreController
  class ScoreController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  // Autogenerated type: ComboMissionObjectiveChecker
  // [] Offset: FFFFFFFF
  class ComboMissionObjectiveChecker : public GlobalNamespace::SimpleValueMissionObjectiveChecker {
    public:
    // Writing base type padding for base size: 0x41 to desired offset: 0x48
    char ___base_padding[0x7] = {};
    // [InjectAttribute] Offset: 0xDC86F0
    // private ScoreController _scoreController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ScoreController* scoreController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScoreController*) == 0x8);
    // Creating value type constructor for type: ComboMissionObjectiveChecker
    ComboMissionObjectiveChecker(GlobalNamespace::ScoreController* scoreController_ = {}) noexcept : scoreController{scoreController_} {}
    // protected System.Void OnDestroy()
    // Offset: 0x1A5325C
    void OnDestroy();
    // private System.Void HandleComboDidChange(System.Int32 combo)
    // Offset: 0x1A53338
    void HandleComboDidChange(int combo);
    // protected override System.Void Init()
    // Offset: 0x1A5315C
    // Implemented from: MissionObjectiveChecker
    // Base method: System.Void MissionObjectiveChecker::Init()
    void Init();
    // public System.Void .ctor()
    // Offset: 0x1A53374
    // Implemented from: SimpleValueMissionObjectiveChecker
    // Base method: System.Void SimpleValueMissionObjectiveChecker::.ctor()
    // Base method: System.Void MissionObjectiveChecker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ComboMissionObjectiveChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ComboMissionObjectiveChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ComboMissionObjectiveChecker*, creationType>()));
    }
  }; // ComboMissionObjectiveChecker
  static check_size<sizeof(ComboMissionObjectiveChecker), 72 + sizeof(GlobalNamespace::ScoreController*)> __GlobalNamespace_ComboMissionObjectiveCheckerSizeCheck;
  static_assert(sizeof(ComboMissionObjectiveChecker) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ComboMissionObjectiveChecker*, "", "ComboMissionObjectiveChecker");
#pragma pack(pop)
