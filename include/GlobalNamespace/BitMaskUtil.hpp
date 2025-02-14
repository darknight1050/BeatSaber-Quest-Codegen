// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BitMaskUtil
  // [ExtensionAttribute] Offset: FFFFFFFF
  class BitMaskUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BitMaskUtil
    BitMaskUtil() noexcept {}
    // static public System.UInt32 NumberOfSetBits(System.UInt64 i)
    // Offset: 0x23C4774
    static uint NumberOfSetBits(uint64_t i);
    // static public System.UInt32 NumberOfSetBits(System.UInt32 i)
    // Offset: 0x23C4114
    static uint NumberOfSetBits(uint i);
    // static public System.UInt64 ShiftLeft(in System.UInt64 value, in System.Int32 shift)
    // Offset: 0x23C47D8
    static uint64_t ShiftLeft(uint64_t& value, int& shift);
    // static public System.UInt64 ShiftRight(in System.UInt64 value, in System.Int32 shift)
    // Offset: 0x23C482C
    static uint64_t ShiftRight(uint64_t& value, int& shift);
  }; // BitMaskUtil
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BitMaskUtil*, "", "BitMaskUtil");
