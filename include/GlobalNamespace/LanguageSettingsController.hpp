// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DropdownSettingsController
#include "GlobalNamespace/DropdownSettingsController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LanguageSO
  class LanguageSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LanguageSettingsController
  class LanguageSettingsController : public GlobalNamespace::DropdownSettingsController {
    public:
    // private LanguageSO _settingsValue
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::LanguageSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LanguageSO*) == 0x8);
    // Creating value type constructor for type: LanguageSettingsController
    LanguageSettingsController(GlobalNamespace::LanguageSO* settingsValue_ = {}) noexcept : settingsValue{settingsValue_} {}
    // protected override System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0x106B674
    // Implemented from: DropdownSettingsController
    // Base method: System.Boolean DropdownSettingsController::GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected override System.Void ApplyValue(System.Int32 idx)
    // Offset: 0x106B720
    // Implemented from: DropdownSettingsController
    // Base method: System.Void DropdownSettingsController::ApplyValue(System.Int32 idx)
    void ApplyValue(int idx);
    // protected override System.String TextForValue(System.Int32 idx)
    // Offset: 0x106B7BC
    // Implemented from: DropdownSettingsController
    // Base method: System.String DropdownSettingsController::TextForValue(System.Int32 idx)
    ::Il2CppString* TextForValue(int idx);
    // public System.Void .ctor()
    // Offset: 0x106B83C
    // Implemented from: DropdownSettingsController
    // Base method: System.Void DropdownSettingsController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguageSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LanguageSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguageSettingsController*, creationType>()));
    }
  }; // LanguageSettingsController
  #pragma pack(pop)
  static check_size<sizeof(LanguageSettingsController), 48 + sizeof(GlobalNamespace::LanguageSO*)> __GlobalNamespace_LanguageSettingsControllerSizeCheck;
  static_assert(sizeof(LanguageSettingsController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LanguageSettingsController*, "", "LanguageSettingsController");
