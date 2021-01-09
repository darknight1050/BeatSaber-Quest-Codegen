// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
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
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x90
  // Autogenerated type: System.IO.DriveNotFoundException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D392E8
  class DriveNotFoundException : public System::IO::IOException {
    public:
    // Creating value type constructor for type: DriveNotFoundException
    DriveNotFoundException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1436268
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DriveNotFoundException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DriveNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DriveNotFoundException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x14362F0
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DriveNotFoundException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DriveNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DriveNotFoundException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1436338
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DriveNotFoundException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DriveNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DriveNotFoundException*, creationType>(info, context)));
    }
  }; // System.IO.DriveNotFoundException
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::DriveNotFoundException*, "System.IO", "DriveNotFoundException");
#pragma pack(pop)
