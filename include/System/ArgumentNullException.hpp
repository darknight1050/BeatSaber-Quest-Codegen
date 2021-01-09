// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
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
  // Size: 0x90
  // Autogenerated type: System.ArgumentNullException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D36D30
  class ArgumentNullException : public System::ArgumentException {
    public:
    // Creating value type constructor for type: ArgumentNullException
    ArgumentNullException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1CA20E8
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentNullException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentNullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentNullException*, creationType>()));
    }
    // public System.Void .ctor(System.String paramName)
    // Offset: 0x1C9F338
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName)
    // Base method: System.Void SystemException::.ctor(System.String paramName)
    // Base method: System.Void Exception::.ctor(System.String paramName)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentNullException* New_ctor(::Il2CppString* paramName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentNullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentNullException*, creationType>(paramName)));
    }
    // public System.Void .ctor(System.String paramName, System.String message)
    // Offset: 0x1CA2170
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName, System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentNullException* New_ctor(::Il2CppString* paramName, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentNullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentNullException*, creationType>(paramName, message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1CA21AC
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArgumentNullException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ArgumentNullException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArgumentNullException*, creationType>(info, context)));
    }
  }; // System.ArgumentNullException
}
DEFINE_IL2CPP_ARG_TYPE(System::ArgumentNullException*, "System", "ArgumentNullException");
#pragma pack(pop)
