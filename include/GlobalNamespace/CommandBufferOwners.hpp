// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CommandBufferOwners
  class CommandBufferOwners : public ::CsObject {
    public:
    // private System.Collections.Generic.HashSet`1<UnityEngine.Object> _owners
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<UnityEngine::Object*>* owners;
    // public UnityEngine.Rendering.CommandBuffer commandBuffer
    // Offset: 0x18
    UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // public System.Void AddOwner(UnityEngine.Object owner)
    // Offset: 0x18F69A4
    void AddOwner(UnityEngine::Object* owner);
    // public System.Void RemoveOwner(UnityEngine.Object owner)
    // Offset: 0x18F66CC
    void RemoveOwner(UnityEngine::Object* owner);
    // public System.Boolean ContainsOwner(UnityEngine.Object owner)
    // Offset: 0x18F693C
    bool ContainsOwner(UnityEngine::Object* owner);
    // public System.Int32 get_NumberOfOwners()
    // Offset: 0x18F6740
    int get_NumberOfOwners();
    // public System.Void .ctor()
    // Offset: 0x18F6A48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CommandBufferOwners* New_ctor();
  }; // CommandBufferOwners
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferOwners*, "", "CommandBufferOwners");
#pragma pack(pop)
