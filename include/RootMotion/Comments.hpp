// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.Comments
  class Comments : public UnityEngine::MonoBehaviour {
    public:
    // public System.String text
    // Offset: 0x18
    ::Il2CppString* text;
    // public System.Void .ctor()
    // Offset: 0x1304664
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Comments* New_ctor();
  }; // RootMotion.Comments
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Comments*, "RootMotion", "Comments");
#pragma pack(pop)
