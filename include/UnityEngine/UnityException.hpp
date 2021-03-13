// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UnityException
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CA8998
  class UnityException : public System::Exception {
    public:
    // Creating value type constructor for type: UnityException
    UnityException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1988BB8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UnityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x19833F0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UnityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1988C3C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UnityException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityException*, creationType>(info, context)));
    }
  }; // UnityEngine.UnityException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityException*, "UnityEngine", "UnityException");
