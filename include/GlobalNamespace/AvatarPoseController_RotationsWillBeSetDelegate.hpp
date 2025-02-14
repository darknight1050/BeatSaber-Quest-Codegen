// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AvatarPoseController
#include "GlobalNamespace/AvatarPoseController.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Quaternion
  struct Quaternion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPoseController/RotationsWillBeSetDelegate
  class AvatarPoseController::RotationsWillBeSetDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: RotationsWillBeSetDelegate
    RotationsWillBeSetDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1130FE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPoseController::RotationsWillBeSetDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPoseController::RotationsWillBeSetDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation, out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation)
    // Offset: 0x1130520
    void Invoke(UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation, UnityEngine::Quaternion& newHeadRotation, UnityEngine::Quaternion& newLeftHandRotation, UnityEngine::Quaternion& newRightHandRotation);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Quaternion headRotation, UnityEngine.Quaternion leftHandRotation, UnityEngine.Quaternion rightHandRotation, out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1130FF0
    System::IAsyncResult* BeginInvoke(UnityEngine::Quaternion headRotation, UnityEngine::Quaternion leftHandRotation, UnityEngine::Quaternion rightHandRotation, UnityEngine::Quaternion& newHeadRotation, UnityEngine::Quaternion& newLeftHandRotation, UnityEngine::Quaternion& newRightHandRotation, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(out UnityEngine.Quaternion newHeadRotation, out UnityEngine.Quaternion newLeftHandRotation, out UnityEngine.Quaternion newRightHandRotation, System.IAsyncResult result)
    // Offset: 0x1131110
    void EndInvoke(UnityEngine::Quaternion& newHeadRotation, UnityEngine::Quaternion& newLeftHandRotation, UnityEngine::Quaternion& newRightHandRotation, System::IAsyncResult* result);
  }; // AvatarPoseController/RotationsWillBeSetDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPoseController::RotationsWillBeSetDelegate*, "", "AvatarPoseController/RotationsWillBeSetDelegate");
