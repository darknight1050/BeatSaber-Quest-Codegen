// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
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
// Type namespace: System
namespace System {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.UnauthorizedAccessException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C93960
  class UnauthorizedAccessException : public System::SystemException {
    public:
    // Creating value type constructor for type: UnauthorizedAccessException
    UnauthorizedAccessException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x20D9774
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnauthorizedAccessException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UnauthorizedAccessException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnauthorizedAccessException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x20D97E8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnauthorizedAccessException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UnauthorizedAccessException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnauthorizedAccessException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x20D981C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnauthorizedAccessException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UnauthorizedAccessException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnauthorizedAccessException*, creationType>(info, context)));
    }
  }; // System.UnauthorizedAccessException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::UnauthorizedAccessException*, "System", "UnauthorizedAccessException");
