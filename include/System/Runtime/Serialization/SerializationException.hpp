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
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C96768
  class SerializationException : public System::SystemException {
    public:
    // Creating value type constructor for type: SerializationException
    SerializationException() noexcept {}
    // Get static field: static private System.String _nullMessage
    static ::Il2CppString* _get__nullMessage();
    // Set static field: static private System.String _nullMessage
    static void _set__nullMessage(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x14E6A3C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x14DF958
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x14E37AC
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationException* New_ctor(::Il2CppString* message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x14E6AC4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationException*, creationType>(info, context)));
    }
    // static private System.Void .cctor()
    // Offset: 0x14E6ACC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.cctor()
    static void _cctor();
  }; // System.Runtime.Serialization.SerializationException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationException*, "System.Runtime.Serialization", "SerializationException");
