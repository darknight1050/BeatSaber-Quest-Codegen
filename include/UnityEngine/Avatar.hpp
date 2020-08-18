// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Avatar
  class Avatar : public UnityEngine::Object {
    public:
    // public System.Boolean get_isValid()
    // Offset: 0x1895898
    bool get_isValid();
    // public System.Boolean get_isHuman()
    // Offset: 0x18958D8
    bool get_isHuman();
    // System.Single GetAxisLength(System.Int32 humanId)
    // Offset: 0x1895918
    float GetAxisLength(int humanId);
    // UnityEngine.Quaternion GetPostRotation(System.Int32 humanId)
    // Offset: 0x18959E4
    UnityEngine::Quaternion GetPostRotation(int humanId);
    // System.Single Internal_GetAxisLength(System.Int32 humanId)
    // Offset: 0x1895994
    float Internal_GetAxisLength(int humanId);
    // UnityEngine.Quaternion Internal_GetPostRotation(System.Int32 humanId)
    // Offset: 0x1895A3C
    UnityEngine::Quaternion Internal_GetPostRotation(int humanId);
    // private System.Void Internal_GetPostRotation_Injected(System.Int32 humanId, UnityEngine.Quaternion ret)
    // Offset: 0x1895AA8
    void Internal_GetPostRotation_Injected(int humanId, UnityEngine::Quaternion& ret);
    // private System.Void .ctor()
    // Offset: 0x1895830
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Avatar* New_ctor();
  }; // UnityEngine.Avatar
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Avatar*, "UnityEngine", "Avatar");
#pragma pack(pop)
