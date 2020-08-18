// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  class TraceLoggingDataCollector : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Diagnostics.Tracing.TraceLoggingDataCollector Instance
    static System::Diagnostics::Tracing::TraceLoggingDataCollector* _get_Instance();
    // Set static field: static readonly System.Diagnostics.Tracing.TraceLoggingDataCollector Instance
    static void _set_Instance(System::Diagnostics::Tracing::TraceLoggingDataCollector* value);
    // public System.Int32 BeginBufferedArray()
    // Offset: 0xCFB0EC
    int BeginBufferedArray();
    // public System.Void EndBufferedArray(System.Int32 bookmark, System.Int32 count)
    // Offset: 0xCFB13C
    void EndBufferedArray(int bookmark, int count);
    // public System.Void AddScalar(System.Boolean value)
    // Offset: 0xCFB1A4
    void AddScalar(bool value);
    // public System.Void AddScalar(System.SByte value)
    // Offset: 0xCF9EE8
    void AddScalar(int8_t value);
    // public System.Void AddScalar(System.Byte value)
    // Offset: 0xCFB208
    void AddScalar(uint8_t value);
    // public System.Void AddScalar(System.Int16 value)
    // Offset: 0xCF4164
    void AddScalar(int16_t value);
    // public System.Void AddScalar(System.UInt16 value)
    // Offset: 0xCFB268
    void AddScalar(uint16_t value);
    // public System.Void AddScalar(System.Int32 value)
    // Offset: 0xCF44DC
    void AddScalar(int value);
    // public System.Void AddScalar(System.UInt32 value)
    // Offset: 0xCFB2C8
    void AddScalar(uint value);
    // public System.Void AddScalar(System.Int64 value)
    // Offset: 0xCF482C
    void AddScalar(int64_t value);
    // public System.Void AddScalar(System.UInt64 value)
    // Offset: 0xCFB328
    void AddScalar(uint64_t value);
    // public System.Void AddScalar(System.IntPtr value)
    // Offset: 0xCF4BC4
    void AddScalar(System::IntPtr value);
    // public System.Void AddScalar(System.UIntPtr value)
    // Offset: 0xCFB388
    void AddScalar(System::UIntPtr value);
    // public System.Void AddScalar(System.Single value)
    // Offset: 0xCFA244
    void AddScalar(float value);
    // public System.Void AddScalar(System.Double value)
    // Offset: 0xCFB418
    void AddScalar(double value);
    // public System.Void AddScalar(System.Char value)
    // Offset: 0xCFB478
    void AddScalar(::Il2CppChar value);
    // public System.Void AddScalar(System.Guid value)
    // Offset: 0xCF3DFC
    void AddScalar(System::Guid value);
    // public System.Void AddBinary(System.String value)
    // Offset: 0xCFACDC
    void AddBinary(::Il2CppString* value);
    // public System.Void AddBinary(System.Byte[] value)
    // Offset: 0xCFB4D8
    void AddBinary(::Array<uint8_t>* value);
    // public System.Void AddArray(System.Boolean[] value)
    // Offset: 0xCFB548
    void AddArray(::Array<bool>* value);
    // public System.Void AddArray(System.SByte[] value)
    // Offset: 0xCF9D7C
    void AddArray(::Array<int8_t>* value);
    // public System.Void AddArray(System.Int16[] value)
    // Offset: 0xCF3FF8
    void AddArray(::Array<int16_t>* value);
    // public System.Void AddArray(System.UInt16[] value)
    // Offset: 0xCFB5BC
    void AddArray(::Array<uint16_t>* value);
    // public System.Void AddArray(System.Int32[] value)
    // Offset: 0xCF4370
    void AddArray(::Array<int>* value);
    // public System.Void AddArray(System.UInt32[] value)
    // Offset: 0xCFB630
    void AddArray(::Array<uint>* value);
    // public System.Void AddArray(System.Int64[] value)
    // Offset: 0xCF46C0
    void AddArray(::Array<int64_t>* value);
    // public System.Void AddArray(System.UInt64[] value)
    // Offset: 0xCFB6A4
    void AddArray(::Array<uint64_t>* value);
    // public System.Void AddArray(System.IntPtr[] value)
    // Offset: 0xCF4A30
    void AddArray(::Array<System::IntPtr>* value);
    // public System.Void AddArray(System.UIntPtr[] value)
    // Offset: 0xCFB718
    void AddArray(::Array<System::UIntPtr>* value);
    // public System.Void AddArray(System.Single[] value)
    // Offset: 0xCFA0D8
    void AddArray(::Array<float>* value);
    // public System.Void AddArray(System.Double[] value)
    // Offset: 0xCFB7CC
    void AddArray(::Array<double>* value);
    // public System.Void AddArray(System.Char[] value)
    // Offset: 0xCFB840
    void AddArray(::Array<::Il2CppChar>* value);
    // public System.Void AddArray(System.Guid[] value)
    // Offset: 0xCF3B88
    void AddArray(::Array<System::Guid>* value);
    // static private System.Void .cctor()
    // Offset: 0xCFB8B4
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0xCFB0E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TraceLoggingDataCollector* New_ctor();
  }; // System.Diagnostics.Tracing.TraceLoggingDataCollector
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::TraceLoggingDataCollector*, "System.Diagnostics.Tracing", "TraceLoggingDataCollector");
#pragma pack(pop)
