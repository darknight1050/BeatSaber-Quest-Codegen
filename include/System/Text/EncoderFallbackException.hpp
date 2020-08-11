// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
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
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.EncoderFallbackException
  class EncoderFallbackException : public System::ArgumentException {
    public:
    // private System.Char charUnknown
    // Offset: 0x90
    ::Il2CppChar charUnknown;
    // private System.Char charUnknownHigh
    // Offset: 0x92
    ::Il2CppChar charUnknownHigh;
    // private System.Char charUnknownLow
    // Offset: 0x94
    ::Il2CppChar charUnknownLow;
    // private System.Int32 index
    // Offset: 0x98
    int index;
    // System.Void .ctor(System.String message, System.Char charUnknown, System.Int32 index)
    // Offset: 0x12D8190
    static EncoderFallbackException* New_ctor(::CsString* message, ::Il2CppChar charUnknown, int index);
    // System.Void .ctor(System.String message, System.Char charUnknownHigh, System.Char charUnknownLow, System.Int32 index)
    // Offset: 0x12D8554
    static EncoderFallbackException* New_ctor(::CsString* message, ::Il2CppChar charUnknownHigh, ::Il2CppChar charUnknownLow, int index);
    // public System.Void .ctor()
    // Offset: 0x12D8D40
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static EncoderFallbackException* New_ctor();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12D8DB4
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static EncoderFallbackException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Text.EncoderFallbackException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderFallbackException*, "System.Text", "EncoderFallbackException");
#pragma pack(pop)
