// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Number
#include "System/Number.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Number/NumberBuffer
  // [FriendAccessAllowedAttribute] Offset: D7AAF0
  struct Number::NumberBuffer/*, public System::ValueType*/ {
    public:
    // private System.Byte* baseAddress
    // Size: 0x8
    // Offset: 0x0
    uint8_t* baseAddress;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // public System.Char* digits
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppChar* digits;
    // Field size check
    static_assert(sizeof(::Il2CppChar*) == 0x8);
    // public System.Int32 precision
    // Size: 0x4
    // Offset: 0x10
    int precision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 scale
    // Size: 0x4
    // Offset: 0x14
    int scale;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean sign
    // Size: 0x1
    // Offset: 0x18
    bool sign;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NumberBuffer
    constexpr NumberBuffer(uint8_t* baseAddress_ = {}, ::Il2CppChar* digits_ = {}, int precision_ = {}, int scale_ = {}, bool sign_ = {}) noexcept : baseAddress{baseAddress_}, digits{digits_}, precision{precision_}, scale{scale_}, sign{sign_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public readonly System.Int32 NumberBufferBytes
    static int _get_NumberBufferBytes();
    // Set static field: static public readonly System.Int32 NumberBufferBytes
    static void _set_NumberBufferBytes(int value);
    // public System.Void .ctor(System.Byte* stackBuffer)
    // Offset: 0xEFDCB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    NumberBuffer(uint8_t* stackBuffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Number::NumberBuffer::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stackBuffer)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, stackBuffer);
    }
    // public System.Byte* PackForNative()
    // Offset: 0xEFDCC8
    uint8_t* PackForNative();
    // static private System.Void .cctor()
    // Offset: 0x1810000
    static void _cctor();
  }; // System.Number/NumberBuffer
  #pragma pack(pop)
  static check_size<sizeof(Number::NumberBuffer), 24 + sizeof(bool)> __System_Number_NumberBufferSizeCheck;
  static_assert(sizeof(Number::NumberBuffer) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(System::Number::NumberBuffer, "System", "Number/NumberBuffer");
