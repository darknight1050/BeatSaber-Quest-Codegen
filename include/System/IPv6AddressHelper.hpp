// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IPv6AddressHelper
  // [] Offset: FFFFFFFF
  class IPv6AddressHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IPv6AddressHelper
    IPv6AddressHelper() noexcept {}
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, ref System.Boolean isLoopback, ref System.String scopeId)
    // Offset: 0x16D6460
    static ::Il2CppString* ParseCanonicalName(::Il2CppString* str, int start, bool& isLoopback, ::Il2CppString*& scopeId);
    // static System.String CreateCanonicalName(System.UInt16* numbers)
    // Offset: 0x16D6A10
    static ::Il2CppString* CreateCanonicalName(uint16_t* numbers);
    // static private System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> FindCompressionRange(System.UInt16* numbers)
    // Offset: 0x16D701C
    static System::Collections::Generic::KeyValuePair_2<int, int> FindCompressionRange(uint16_t* numbers);
    // static private System.Boolean ShouldHaveIpv4Embedded(System.UInt16* numbers)
    // Offset: 0x16D70F4
    static bool ShouldHaveIpv4Embedded(uint16_t* numbers);
    // static private System.Boolean InternalIsValid(System.Char* name, System.Int32 start, ref System.Int32 end, System.Boolean validateStrictAddress)
    // Offset: 0x16D7184
    static bool InternalIsValid(::Il2CppChar* name, int start, int& end, bool validateStrictAddress);
    // static System.Boolean IsValid(System.Char* name, System.Int32 start, ref System.Int32 end)
    // Offset: 0x16D7458
    static bool IsValid(::Il2CppChar* name, int start, int& end);
    // static System.Boolean IsValidStrict(System.Char* name, System.Int32 start, ref System.Int32 end)
    // Offset: 0x16D7460
    static bool IsValidStrict(::Il2CppChar* name, int start, int& end);
    // static System.Boolean Parse(System.String address, System.UInt16* numbers, System.Int32 start, ref System.String scopeId)
    // Offset: 0x16D6524
    static bool Parse(::Il2CppString* address, uint16_t* numbers, int start, ::Il2CppString*& scopeId);
  }; // System.IPv6AddressHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IPv6AddressHelper*, "System", "IPv6AddressHelper");
