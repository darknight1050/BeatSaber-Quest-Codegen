// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimeStructs/MonoError
  struct RuntimeStructs::MonoError : public System::ValueType {
    public:
    // private System.UInt16 error_code
    // Offset: 0x0
    uint16_t error_code;
    // private System.UInt16 hidden_0
    // Offset: 0x2
    uint16_t hidden_0;
    // private System.IntPtr hidden_1
    // Offset: 0x8
    System::IntPtr hidden_1;
    // private System.IntPtr hidden_2
    // Offset: 0x10
    System::IntPtr hidden_2;
    // private System.IntPtr hidden_3
    // Offset: 0x18
    System::IntPtr hidden_3;
    // private System.IntPtr hidden_4
    // Offset: 0x20
    System::IntPtr hidden_4;
    // private System.IntPtr hidden_5
    // Offset: 0x28
    System::IntPtr hidden_5;
    // private System.IntPtr hidden_6
    // Offset: 0x30
    System::IntPtr hidden_6;
    // private System.IntPtr hidden_7
    // Offset: 0x38
    System::IntPtr hidden_7;
    // private System.IntPtr hidden_8
    // Offset: 0x40
    System::IntPtr hidden_8;
    // private System.IntPtr hidden_11
    // Offset: 0x48
    System::IntPtr hidden_11;
    // private System.IntPtr hidden_12
    // Offset: 0x50
    System::IntPtr hidden_12;
    // private System.IntPtr hidden_13
    // Offset: 0x58
    System::IntPtr hidden_13;
    // private System.IntPtr hidden_14
    // Offset: 0x60
    System::IntPtr hidden_14;
    // private System.IntPtr hidden_15
    // Offset: 0x68
    System::IntPtr hidden_15;
    // private System.IntPtr hidden_16
    // Offset: 0x70
    System::IntPtr hidden_16;
    // private System.IntPtr hidden_17
    // Offset: 0x78
    System::IntPtr hidden_17;
    // private System.IntPtr hidden_18
    // Offset: 0x80
    System::IntPtr hidden_18;
    // Creating value type constructor for type: MonoError
    MonoError(uint16_t error_code_ = {}, uint16_t hidden_0_ = {}, System::IntPtr hidden_1_ = {}, System::IntPtr hidden_2_ = {}, System::IntPtr hidden_3_ = {}, System::IntPtr hidden_4_ = {}, System::IntPtr hidden_5_ = {}, System::IntPtr hidden_6_ = {}, System::IntPtr hidden_7_ = {}, System::IntPtr hidden_8_ = {}, System::IntPtr hidden_11_ = {}, System::IntPtr hidden_12_ = {}, System::IntPtr hidden_13_ = {}, System::IntPtr hidden_14_ = {}, System::IntPtr hidden_15_ = {}, System::IntPtr hidden_16_ = {}, System::IntPtr hidden_17_ = {}, System::IntPtr hidden_18_ = {}) : error_code{error_code_}, hidden_0{hidden_0_}, hidden_1{hidden_1_}, hidden_2{hidden_2_}, hidden_3{hidden_3_}, hidden_4{hidden_4_}, hidden_5{hidden_5_}, hidden_6{hidden_6_}, hidden_7{hidden_7_}, hidden_8{hidden_8_}, hidden_11{hidden_11_}, hidden_12{hidden_12_}, hidden_13{hidden_13_}, hidden_14{hidden_14_}, hidden_15{hidden_15_}, hidden_16{hidden_16_}, hidden_17{hidden_17_}, hidden_18{hidden_18_} {}
  }; // Mono.RuntimeStructs/MonoError
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeStructs::MonoError, "Mono", "RuntimeStructs/MonoError");
#pragma pack(pop)
