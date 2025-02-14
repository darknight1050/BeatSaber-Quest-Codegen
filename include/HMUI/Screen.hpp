// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Screen
  // [RequireComponent] Offset: DF57C4
  class Screen : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::Screen::$TransitionCoroutine$d__5
    class $TransitionCoroutine$d__5;
    // private HMUI.ViewController _rootViewController
    // Size: 0x8
    // Offset: 0x18
    HMUI::ViewController* rootViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // private System.Boolean _isBeingDestroyed
    // Size: 0x1
    // Offset: 0x20
    bool isBeingDestroyed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Screen
    Screen(HMUI::ViewController* rootViewController_ = {}, bool isBeingDestroyed_ = {}) noexcept : rootViewController{rootViewController_}, isBeingDestroyed{isBeingDestroyed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isBeingDestroyed()
    // Offset: 0x129A008
    bool get_isBeingDestroyed();
    // public System.Void SetRootViewController(HMUI.ViewController newRootViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x129A010
    void SetRootViewController(HMUI::ViewController* newRootViewController, HMUI::ViewController::AnimationType animationType);
    // private System.Collections.IEnumerator TransitionCoroutine(HMUI.ViewController newRootViewController, HMUI.ViewController/AnimationType animationType)
    // Offset: 0x129A0F0
    System::Collections::IEnumerator* TransitionCoroutine(HMUI::ViewController* newRootViewController, HMUI::ViewController::AnimationType animationType);
    // protected System.Void OnDestroy()
    // Offset: 0x129A1A0
    void OnDestroy();
    // public System.Void .ctor()
    // Offset: 0x129A1AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Screen* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::Screen::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Screen*, creationType>()));
    }
  }; // HMUI.Screen
  #pragma pack(pop)
  static check_size<sizeof(Screen), 32 + sizeof(bool)> __HMUI_ScreenSizeCheck;
  static_assert(sizeof(Screen) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::Screen*, "HMUI", "Screen");
