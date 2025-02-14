// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ListSettingsController
#include "GlobalNamespace/ListSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IntSO
  class IntSO;
  // Forward declaring type: NamedPresetsSO
  class NamedPresetsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PresetsSettingsController
  class PresetsSettingsController : public GlobalNamespace::ListSettingsController {
    public:
    // private IntSO _settingsValue
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IntSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntSO*) == 0x8);
    // private NamedPresetsSO _presets
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::NamedPresetsSO* presets;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NamedPresetsSO*) == 0x8);
    // Creating value type constructor for type: PresetsSettingsController
    PresetsSettingsController(GlobalNamespace::IntSO* settingsValue_ = {}, GlobalNamespace::NamedPresetsSO* presets_ = {}) noexcept : settingsValue{settingsValue_}, presets{presets_} {}
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x10A3D60
    // Implemented from: ListSettingsController
    // Base method: System.Boolean ListSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x10A3E54
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x10A3EBC
    // Implemented from: ListSettingsController
    // Base method: System.String ListSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0x10A3F20
    // Implemented from: ListSettingsController
    // Base method: System.Void ListSettingsController::.ctor()
    // Base method: System.Void IncDecSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PresetsSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PresetsSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PresetsSettingsController*, creationType>()));
    }
  }; // PresetsSettingsController
  #pragma pack(pop)
  static check_size<sizeof(PresetsSettingsController), 48 + sizeof(GlobalNamespace::NamedPresetsSO*)> __GlobalNamespace_PresetsSettingsControllerSizeCheck;
  static_assert(sizeof(PresetsSettingsController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PresetsSettingsController*, "", "PresetsSettingsController");
