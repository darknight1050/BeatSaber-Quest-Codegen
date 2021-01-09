// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StringSO
  class StringSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: InputFieldSettingsController
  // [] Offset: FFFFFFFF
  class InputFieldSettingsController : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.InputFieldView _inputFieldView
    // Size: 0x8
    // Offset: 0x18
    HMUI::InputFieldView* inputFieldView;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // protected StringSO _settingsValue
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::StringSO* settingsValue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StringSO*) == 0x8);
    // Creating value type constructor for type: InputFieldSettingsController
    InputFieldSettingsController(HMUI::InputFieldView* inputFieldView_ = {}, GlobalNamespace::StringSO* settingsValue_ = {}) noexcept : inputFieldView{inputFieldView_}, settingsValue{settingsValue_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0xF1B2F8
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0xF1B398
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0xF1B438
    void OnEnable();
    // protected System.Void HandleInputFieldDidChange(HMUI.InputFieldView inputFieldView)
    // Offset: 0xF1B494
    void HandleInputFieldDidChange(HMUI::InputFieldView* inputFieldView);
    // public System.Void .ctor()
    // Offset: 0xF1B500
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputFieldSettingsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::InputFieldSettingsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputFieldSettingsController*, creationType>()));
    }
  }; // InputFieldSettingsController
  static check_size<sizeof(InputFieldSettingsController), 32 + sizeof(GlobalNamespace::StringSO*)> __GlobalNamespace_InputFieldSettingsControllerSizeCheck;
  static_assert(sizeof(InputFieldSettingsController) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InputFieldSettingsController*, "", "InputFieldSettingsController");
#pragma pack(pop)
