// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Stack
#include "System/Collections/Stack.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Size: 0x20
  // Autogenerated type: UnityEngineInternal.GenericStack
  // [] Offset: FFFFFFFF
  class GenericStack : public System::Collections::Stack {
    public:
    // Creating value type constructor for type: GenericStack
    GenericStack() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16CE5D8
    // Implemented from: System.Collections.Stack
    // Base method: System.Void Stack::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericStack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngineInternal::GenericStack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericStack*, creationType>()));
    }
  }; // UnityEngineInternal.GenericStack
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::GenericStack*, "UnityEngineInternal", "GenericStack");
#pragma pack(pop)
