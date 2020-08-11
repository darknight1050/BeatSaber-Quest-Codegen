// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: UIntPtr
  struct UIntPtr;
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.TraceLoggingDataCollector
  class TraceLoggingDataCollector : public ::CsObject {
    public:
    // Get static field: static readonly System.Diagnostics.Tracing.TraceLoggingDataCollector Instance
    static System::Diagnostics::Tracing::TraceLoggingDataCollector* _get_Instance();
    // Set static field: static readonly System.Diagnostics.Tracing.TraceLoggingDataCollector Instance
    static void _set_Instance(System::Diagnostics::Tracing::TraceLoggingDataCollector* value);
    // public System.Int32 BeginBufferedArray()
    // Offset: 0xD873E4
    int BeginBufferedArray();
    // public System.Void EndBufferedArray(System.Int32 bookmark, System.Int32 count)
    // Offset: 0xD87434
    void EndBufferedArray(int bookmark, int count);
    // public System.Void AddScalar(System.Boolean value)
    // Offset: 0xD8749C
    void AddScalar(bool value);
    // public System.Void AddScalar(System.SByte value)
    // Offset: 0xD861E0
    void AddScalar(int8_t value);
    // public System.Void AddScalar(System.Byte value)
    // Offset: 0xD87500
    void AddScalar(uint8_t value);
    // public System.Void AddScalar(System.Int16 value)
    // Offset: 0xD8045C
    void AddScalar(int16_t value);
    // public System.Void AddScalar(System.UInt16 value)
    // Offset: 0xD87560
    void AddScalar(uint16_t value);
    // public System.Void AddScalar(System.Int32 value)
    // Offset: 0xD807D4
    void AddScalar(int value);
    // public System.Void AddScalar(System.UInt32 value)
    // Offset: 0xD875C0
    void AddScalar(uint value);
    // public System.Void AddScalar(System.Int64 value)
    // Offset: 0xD80B24
    void AddScalar(int64_t value);
    // public System.Void AddScalar(System.UInt64 value)
    // Offset: 0xD87620
    void AddScalar(uint64_t value);
    // public System.Void AddScalar(System.IntPtr value)
    // Offset: 0xD80EBC
    void AddScalar(System::IntPtr value);
    // public System.Void AddScalar(System.UIntPtr value)
    // Offset: 0xD87680
    void AddScalar(System::UIntPtr value);
    // public System.Void AddScalar(System.Single value)
    // Offset: 0xD8653C
    void AddScalar(float value);
    // public System.Void AddScalar(System.Double value)
    // Offset: 0xD87710
    void AddScalar(double value);
    // public System.Void AddScalar(System.Char value)
    // Offset: 0xD87770
    void AddScalar(::Il2CppChar value);
    // public System.Void AddScalar(System.Guid value)
    // Offset: 0xD800F4
    void AddScalar(System::Guid value);
    // public System.Void AddBinary(System.String value)
    // Offset: 0xD86FD4
    void AddBinary(::CsString* value);
    // public System.Void AddBinary(System.Byte[] value)
    // Offset: 0xD877D0
    void AddBinary(::Array<uint8_t>* value);
    // public System.Void AddArray(System.Boolean[] value)
    // Offset: 0xD87840
    void AddArray(::Array<bool>* value);
    // public System.Void AddArray(System.SByte[] value)
    // Offset: 0xD86074
    void AddArray(::Array<int8_t>* value);
    // public System.Void AddArray(System.Int16[] value)
    // Offset: 0xD802F0
    void AddArray(::Array<int16_t>* value);
    // public System.Void AddArray(System.UInt16[] value)
    // Offset: 0xD878B4
    void AddArray(::Array<uint16_t>* value);
    // public System.Void AddArray(System.Int32[] value)
    // Offset: 0xD80668
    void AddArray(::Array<int>* value);
    // public System.Void AddArray(System.UInt32[] value)
    // Offset: 0xD87928
    void AddArray(::Array<uint>* value);
    // public System.Void AddArray(System.Int64[] value)
    // Offset: 0xD809B8
    void AddArray(::Array<int64_t>* value);
    // public System.Void AddArray(System.UInt64[] value)
    // Offset: 0xD8799C
    void AddArray(::Array<uint64_t>* value);
    // public System.Void AddArray(System.IntPtr[] value)
    // Offset: 0xD80D28
    void AddArray(::Array<System::IntPtr>* value);
    // public System.Void AddArray(System.UIntPtr[] value)
    // Offset: 0xD87A10
    void AddArray(::Array<System::UIntPtr>* value);
    // public System.Void AddArray(System.Single[] value)
    // Offset: 0xD863D0
    void AddArray(::Array<float>* value);
    // public System.Void AddArray(System.Double[] value)
    // Offset: 0xD87AC4
    void AddArray(::Array<double>* value);
    // public System.Void AddArray(System.Char[] value)
    // Offset: 0xD87B38
    void AddArray(::Array<::Il2CppChar>* value);
    // public System.Void AddArray(System.Guid[] value)
    // Offset: 0xD7FE80
    void AddArray(::Array<System::Guid>* value);
    // static private System.Void .cctor()
    // Offset: 0xD87BAC
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0xD873DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TraceLoggingDataCollector* New_ctor();
  }; // System.Diagnostics.Tracing.TraceLoggingDataCollector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingDataCollector*, "System.Diagnostics.Tracing", "TraceLoggingDataCollector");
#pragma pack(pop)
