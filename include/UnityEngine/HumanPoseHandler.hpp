// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
  // Autogenerated type: UnityEngine.HumanPoseHandler
  class HumanPoseHandler : public System::IDisposable, public ::Il2CppObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // static private System.IntPtr Internal_Create(UnityEngine.Avatar avatar, UnityEngine.Transform root)
    // Offset: 0x1895C80
    static System::IntPtr Internal_Create(UnityEngine::Avatar* avatar, UnityEngine::Transform* root);
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x1895CD0
    static void Internal_Destroy(System::IntPtr ptr);
    // private System.Void GetHumanPose(UnityEngine.Vector3 bodyPosition, UnityEngine.Quaternion bodyRotation, System.Single[] muscles)
    // Offset: 0x1895D10
    void GetHumanPose(UnityEngine::Vector3& bodyPosition, UnityEngine::Quaternion& bodyRotation, ::Array<float>*& muscles);
    // public System.Void .ctor(UnityEngine.Avatar avatar, UnityEngine.Transform root)
    // Offset: 0x1895E2C
    static HumanPoseHandler* New_ctor(UnityEngine::Avatar* avatar, UnityEngine::Transform* root);
    // public System.Void GetHumanPose(UnityEngine.HumanPose humanPose)
    // Offset: 0x189601C
    void GetHumanPose(UnityEngine::HumanPose& humanPose);
    // public System.Void Dispose()
    // Offset: 0x1895D78
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // UnityEngine.HumanPoseHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanPoseHandler*, "UnityEngine", "HumanPoseHandler");
#pragma pack(pop)
