// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.RuntimeAnimatorController
#include "UnityEngine/RuntimeAnimatorController.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimatorOverrideController
  // [UsedByNativeCodeAttribute] Offset: DA8EC4
  // [NativeHeaderAttribute] Offset: DA8EC4
  // [NativeHeaderAttribute] Offset: DA8EC4
  // [DefaultMemberAttribute] Offset: DA8EC4
  class AnimatorOverrideController : public UnityEngine::RuntimeAnimatorController {
    public:
    // Nested type: UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback
    class OnOverrideControllerDirtyCallback;
    // UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback OnOverrideControllerDirty
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback* OnOverrideControllerDirty;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*) == 0x8);
    // Creating value type constructor for type: AnimatorOverrideController
    AnimatorOverrideController(UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback* OnOverrideControllerDirty_ = {}) noexcept : OnOverrideControllerDirty{OnOverrideControllerDirty_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void .ctor(UnityEngine.RuntimeAnimatorController controller)
    // Offset: 0x23420FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorOverrideController* New_ctor(UnityEngine::RuntimeAnimatorController* controller) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimatorOverrideController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorOverrideController*, creationType>(controller)));
    }
    // static private System.Void Internal_Create(UnityEngine.AnimatorOverrideController self, UnityEngine.RuntimeAnimatorController controller)
    // Offset: 0x23421C0
    static void Internal_Create(UnityEngine::AnimatorOverrideController* self, UnityEngine::RuntimeAnimatorController* controller);
    // private System.Void SetClip(UnityEngine.AnimationClip originalClip, UnityEngine.AnimationClip overrideClip, System.Boolean notify)
    // Offset: 0x2342210
    void SetClip(UnityEngine::AnimationClip* originalClip, UnityEngine::AnimationClip* overrideClip, bool notify);
    // private System.Void SendNotification()
    // Offset: 0x2342278
    void SendNotification();
    // public System.Void ApplyOverrides(System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.AnimationClip,UnityEngine.AnimationClip>> overrides)
    // Offset: 0x23422B8
    void ApplyOverrides(System::Collections::Generic::IList_1<System::Collections::Generic::KeyValuePair_2<UnityEngine::AnimationClip*, UnityEngine::AnimationClip*>>* overrides);
    // static System.Void OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController controller)
    // Offset: 0x234250C
    static void OnInvalidateOverrideController(UnityEngine::AnimatorOverrideController* controller);
  }; // UnityEngine.AnimatorOverrideController
  #pragma pack(pop)
  static check_size<sizeof(AnimatorOverrideController), 24 + sizeof(UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*)> __UnityEngine_AnimatorOverrideControllerSizeCheck;
  static_assert(sizeof(AnimatorOverrideController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorOverrideController*, "UnityEngine", "AnimatorOverrideController");
