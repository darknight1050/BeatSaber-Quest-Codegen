// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CommandBufferOwners
  // [] Offset: FFFFFFFF
  class CommandBufferOwners : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.HashSet`1<UnityEngine.Object> _owners
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<UnityEngine::Object*>* owners;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<UnityEngine::Object*>*) == 0x8);
    // public UnityEngine.Rendering.CommandBuffer commandBuffer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Rendering::CommandBuffer* commandBuffer;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::CommandBuffer*) == 0x8);
    // Creating value type constructor for type: CommandBufferOwners
    CommandBufferOwners(System::Collections::Generic::HashSet_1<UnityEngine::Object*>* owners_ = {}, UnityEngine::Rendering::CommandBuffer* commandBuffer_ = {}) noexcept : owners{owners_}, commandBuffer{commandBuffer_} {}
    // public System.Void AddOwner(UnityEngine.Object owner)
    // Offset: 0x20F8BE0
    void AddOwner(UnityEngine::Object* owner);
    // public System.Void RemoveOwner(UnityEngine.Object owner)
    // Offset: 0x20F8918
    void RemoveOwner(UnityEngine::Object* owner);
    // public System.Boolean ContainsOwner(UnityEngine.Object owner)
    // Offset: 0x20F8B78
    bool ContainsOwner(UnityEngine::Object* owner);
    // public System.Int32 get_NumberOfOwners()
    // Offset: 0x20F898C
    int get_NumberOfOwners();
    // public System.Void .ctor()
    // Offset: 0x20F8C78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CommandBufferOwners* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CommandBufferOwners::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CommandBufferOwners*, creationType>()));
    }
  }; // CommandBufferOwners
  #pragma pack(pop)
  static check_size<sizeof(CommandBufferOwners), 24 + sizeof(UnityEngine::Rendering::CommandBuffer*)> __GlobalNamespace_CommandBufferOwnersSizeCheck;
  static_assert(sizeof(CommandBufferOwners) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferOwners*, "", "CommandBufferOwners");
