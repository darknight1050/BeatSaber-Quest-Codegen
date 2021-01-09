// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x88
  // Autogenerated type: System.OutOfMemoryException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D37578
  class OutOfMemoryException : public System::SystemException {
    public:
    // Creating value type constructor for type: OutOfMemoryException
    OutOfMemoryException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x171B660
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OutOfMemoryException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OutOfMemoryException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OutOfMemoryException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x171B6EC
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OutOfMemoryException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OutOfMemoryException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OutOfMemoryException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x171B720
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OutOfMemoryException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::OutOfMemoryException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OutOfMemoryException*, creationType>(info, context)));
    }
  }; // System.OutOfMemoryException
}
DEFINE_IL2CPP_ARG_TYPE(System::OutOfMemoryException*, "System", "OutOfMemoryException");
#pragma pack(pop)
