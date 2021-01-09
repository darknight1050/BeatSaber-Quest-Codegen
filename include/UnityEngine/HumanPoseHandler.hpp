// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Avatar
  class Avatar;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Quaternion
  struct Quaternion;
  // Forward declaring type: HumanPose
  struct HumanPose;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  // Autogenerated type: UnityEngine.HumanPoseHandler
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D62338
  // [NativeHeaderAttribute] Offset: D62338
  class HumanPoseHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: HumanPoseHandler
    HumanPoseHandler(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // static private System.IntPtr Internal_Create(UnityEngine.Avatar avatar, UnityEngine.Transform root)
    // Offset: 0x19CC074
    static System::IntPtr Internal_Create(UnityEngine::Avatar* avatar, UnityEngine::Transform* root);
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x19CC0C4
    static void Internal_Destroy(System::IntPtr ptr);
    // private System.Void GetHumanPose(out UnityEngine.Vector3 bodyPosition, out UnityEngine.Quaternion bodyRotation, out System.Single[] muscles)
    // Offset: 0x19CC104
    void GetHumanPose(UnityEngine::Vector3& bodyPosition, UnityEngine::Quaternion& bodyRotation, ::Array<float>*& muscles);
    // public System.Void .ctor(UnityEngine.Avatar avatar, UnityEngine.Transform root)
    // Offset: 0x19CC220
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HumanPoseHandler* New_ctor(UnityEngine::Avatar* avatar, UnityEngine::Transform* root) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::HumanPoseHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HumanPoseHandler*, creationType>(avatar, root)));
    }
    // public System.Void GetHumanPose(ref UnityEngine.HumanPose humanPose)
    // Offset: 0x19CC410
    void GetHumanPose(UnityEngine::HumanPose& humanPose);
    // public System.Void Dispose()
    // Offset: 0x19CC16C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.HumanPoseHandler
  static check_size<sizeof(HumanPoseHandler), 16 + sizeof(System::IntPtr)> __UnityEngine_HumanPoseHandlerSizeCheck;
  static_assert(sizeof(HumanPoseHandler) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanPoseHandler*, "UnityEngine", "HumanPoseHandler");
#pragma pack(pop)
