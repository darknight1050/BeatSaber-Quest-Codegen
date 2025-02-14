// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AnimatorOverrideController
#include "UnityEngine/AnimatorOverrideController.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
  class AnimatorOverrideController::OnOverrideControllerDirtyCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: OnOverrideControllerDirtyCallback
    OnOverrideControllerDirtyCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2342738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnimatorOverrideController::OnOverrideControllerDirtyCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnimatorOverrideController::OnOverrideControllerDirtyCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x234252C
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x2342748
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x2342774
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorOverrideController::OnOverrideControllerDirtyCallback*, "UnityEngine", "AnimatorOverrideController/OnOverrideControllerDirtyCallback");
