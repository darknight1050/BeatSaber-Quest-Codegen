// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.InvalidTimeZoneException
  class InvalidTimeZoneException : public System::Exception {
    public:
    // public System.Void .ctor(System.String message)
    // Offset: 0xFFE380
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    static InvalidTimeZoneException* New_ctor(::CsString* message);
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0xFFE3F8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    static InvalidTimeZoneException* New_ctor(::CsString* message, System::Exception* innerException);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFE478
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static InvalidTimeZoneException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void .ctor()
    // Offset: 0xFFE508
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static InvalidTimeZoneException* New_ctor();
  }; // System.InvalidTimeZoneException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::InvalidTimeZoneException*, "System", "InvalidTimeZoneException");
#pragma pack(pop)
