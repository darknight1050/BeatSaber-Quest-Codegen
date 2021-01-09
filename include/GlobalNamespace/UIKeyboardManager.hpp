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
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
  // Forward declaring type: ModalView
  class ModalView;
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: VRInputModule
  class VRInputModule;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: UIKeyboardManager
  // [] Offset: FFFFFFFF
  class UIKeyboardManager : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.UIKeyboard _uiKeyboard
    // Size: 0x8
    // Offset: 0x18
    HMUI::UIKeyboard* uiKeyboard;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboard*) == 0x8);
    // private HMUI.ModalView _keyboardModalView
    // Size: 0x8
    // Offset: 0x20
    HMUI::ModalView* keyboardModalView;
    // Field size check
    static_assert(sizeof(HMUI::ModalView*) == 0x8);
    // private UnityEngine.RectTransform _keyboardContainerTransform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::RectTransform* keyboardContainerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.Transform _parentContainerTransform
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Transform* parentContainerTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xDCD364
    // private readonly VRUIControls.VRInputModule _vrInputModule
    // Size: 0x8
    // Offset: 0x38
    VRUIControls::VRInputModule* vrInputModule;
    // Field size check
    static_assert(sizeof(VRUIControls::VRInputModule*) == 0x8);
    // private HMUI.InputFieldView _selectedInput
    // Size: 0x8
    // Offset: 0x40
    HMUI::InputFieldView* selectedInput;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // Creating value type constructor for type: UIKeyboardManager
    UIKeyboardManager(HMUI::UIKeyboard* uiKeyboard_ = {}, HMUI::ModalView* keyboardModalView_ = {}, UnityEngine::RectTransform* keyboardContainerTransform_ = {}, UnityEngine::Transform* parentContainerTransform_ = {}, VRUIControls::VRInputModule* vrInputModule_ = {}, HMUI::InputFieldView* selectedInput_ = {}) noexcept : uiKeyboard{uiKeyboard_}, keyboardModalView{keyboardModalView_}, keyboardContainerTransform{keyboardContainerTransform_}, parentContainerTransform{parentContainerTransform_}, vrInputModule{vrInputModule_}, selectedInput{selectedInput_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kKeyboardTopOffset
    static constexpr const float kKeyboardTopOffset = 5;
    // Get static field: static private System.Single kKeyboardTopOffset
    static float _get_kKeyboardTopOffset();
    // Set static field: static private System.Single kKeyboardTopOffset
    static void _set_kKeyboardTopOffset(float value);
    // public HMUI.UIKeyboard get_keyboard()
    // Offset: 0xFF6C68
    HMUI::UIKeyboard* get_keyboard();
    // protected System.Void Start()
    // Offset: 0xFF6C70
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0xFF6D04
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xFF6D90
    void OnDisable();
    // protected System.Void OnDestroy()
    // Offset: 0xFF6E1C
    void OnDestroy();
    // public System.Void OpenKeyboardFor(HMUI.InputFieldView input)
    // Offset: 0xFF6EF4
    void OpenKeyboardFor(HMUI::InputFieldView* input);
    // public System.Void CloseKeyboard()
    // Offset: 0xFF7194
    void CloseKeyboard();
    // private System.Void TransferKeyboardTo(HMUI.InputFieldView nextInput)
    // Offset: 0xFF7254
    void TransferKeyboardTo(HMUI::InputFieldView* nextInput);
    // private System.Boolean ShouldCloseKeyboard(UnityEngine.GameObject root)
    // Offset: 0xFF72F8
    bool ShouldCloseKeyboard(UnityEngine::GameObject* root);
    // private System.Void ProcessMousePress(UnityEngine.GameObject currentOverGo)
    // Offset: 0xFF735C
    void ProcessMousePress(UnityEngine::GameObject* currentOverGo);
    // private System.Void HandleKeyboardOkButton()
    // Offset: 0xFF74F4
    void HandleKeyboardOkButton();
    // public System.Void .ctor()
    // Offset: 0xFF7678
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UIKeyboardManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::UIKeyboardManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UIKeyboardManager*, creationType>()));
    }
  }; // UIKeyboardManager
  static check_size<sizeof(UIKeyboardManager), 64 + sizeof(HMUI::InputFieldView*)> __GlobalNamespace_UIKeyboardManagerSizeCheck;
  static_assert(sizeof(UIKeyboardManager) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIKeyboardManager*, "", "UIKeyboardManager");
#pragma pack(pop)
