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
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: System.MissingMethodException
  // [ComVisibleAttribute] Offset: D7AA34
  class MissingMethodException : public System::MissingMemberException {
    public:
    // private System.String signature
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* signature;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MissingMethodException
    MissingMethodException(::Il2CppString* signature_ = {}) noexcept : signature{signature_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return signature;
    }
    // public System.Void .ctor(System.String className, System.String methodName)
    // Offset: 0x180AE00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor(::Il2CppString* className, ::Il2CppString* methodName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>(className, methodName)));
    }
    // private System.Void .ctor(System.String className, System.String methodName, System.String signature, System.String message)
    // Offset: 0x180AE34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor(::Il2CppString* className, ::Il2CppString* methodName, ::Il2CppString* signature, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>(className, methodName, signature, message)));
    }
    // public System.Void .ctor()
    // Offset: 0x180AC60
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor()
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x180ACD0
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.String message)
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x180AD00
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMethodException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MissingMethodException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMethodException*, creationType>(info, context)));
    }
    // public override System.String get_Message()
    // Offset: 0x180AD04
    // Implemented from: System.MissingMemberException
    // Base method: System.String MissingMemberException::get_Message()
    ::Il2CppString* get_Message();
  }; // System.MissingMethodException
  #pragma pack(pop)
  static check_size<sizeof(MissingMethodException), 160 + sizeof(::Il2CppString*)> __System_MissingMethodExceptionSizeCheck;
  static_assert(sizeof(MissingMethodException) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(System::MissingMethodException*, "System", "MissingMethodException");
