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
  // Autogenerated type: System.MulticastNotSupportedException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D37448
  class MulticastNotSupportedException : public System::SystemException {
    public:
    // Creating value type constructor for type: MulticastNotSupportedException
    MulticastNotSupportedException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x17128A4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MulticastNotSupportedException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MulticastNotSupportedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MulticastNotSupportedException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1712918
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MulticastNotSupportedException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MulticastNotSupportedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MulticastNotSupportedException*, creationType>(message)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x171294C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MulticastNotSupportedException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MulticastNotSupportedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MulticastNotSupportedException*, creationType>(info, context)));
    }
  }; // System.MulticastNotSupportedException
}
DEFINE_IL2CPP_ARG_TYPE(System::MulticastNotSupportedException*, "System", "MulticastNotSupportedException");
#pragma pack(pop)
