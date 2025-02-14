// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.HashHelpers
  // [FriendAccessAllowedAttribute] Offset: D7FDCC
  class HashHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: HashHelpers
    HashHelpers() noexcept {}
    // Get static field: static public readonly System.Int32[] primes
    static ::Array<int>* _get_primes();
    // Set static field: static public readonly System.Int32[] primes
    static void _set_primes(::Array<int>* value);
    // Get static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> s_SerializationInfoTable
    static System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* _get_s_SerializationInfoTable();
    // Set static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> s_SerializationInfoTable
    static void _set_s_SerializationInfoTable(System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* value);
    // static System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> get_SerializationInfoTable()
    // Offset: 0x176E0B4
    static System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();
    // static public System.Boolean IsPrime(System.Int32 candidate)
    // Offset: 0x176E198
    static bool IsPrime(int candidate);
    // static public System.Int32 GetPrime(System.Int32 min)
    // Offset: 0x176E254
    static int GetPrime(int min);
    // static public System.Int32 ExpandPrime(System.Int32 oldSize)
    // Offset: 0x176E410
    static int ExpandPrime(int oldSize);
    // static private System.Void .cctor()
    // Offset: 0x176E4A4
    static void _cctor();
  }; // System.Collections.HashHelpers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::HashHelpers*, "System.Collections", "HashHelpers");
