// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MissingMemberException
#include "System/MissingMemberException.hpp"
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
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.MissingFieldException
  // [ComVisibleAttribute] Offset: D7AA0C
  class MissingFieldException : public System::MissingMemberException {
    public:
    // Creating value type constructor for type: MissingFieldException
    MissingFieldException() noexcept {}
    // public System.Void .ctor(System.String className, System.String fieldName)
    // Offset: 0x180AA2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingFieldException* New_ctor(::Il2CppString* className, ::Il2CppString* fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingFieldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingFieldException*, creationType>(className, fieldName)));
    }
    // public System.Void .ctor()
    // Offset: 0x180A588
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor()
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingFieldException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingFieldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingFieldException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x180A644
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.String message)
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingFieldException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingFieldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingFieldException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x180A674
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingFieldException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingFieldException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingFieldException*, creationType>(info, context)));
    }
    // public override System.String get_Message()
    // Offset: 0x180A7B0
    // Implemented from: System.MissingMemberException
    // Base method: System.String MissingMemberException::get_Message()
    ::Il2CppString* get_Message();
  }; // System.MissingFieldException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::MissingFieldException*, "System", "MissingFieldException");
