// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: SerStack
  class SerStack;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
  // [] Offset: FFFFFFFF
  class SerObjectInfoInit : public ::Il2CppObject {
    public:
    // System.Collections.Hashtable seenBeforeTable
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Hashtable* seenBeforeTable;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Int32 objectInfoIdCount
    // Size: 0x4
    // Offset: 0x18
    int objectInfoIdCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectInfoIdCount and: oiPool
    char __padding1[0x4] = {};
    // System.Runtime.Serialization.Formatters.Binary.SerStack oiPool
    // Size: 0x8
    // Offset: 0x20
    System::Runtime::Serialization::Formatters::Binary::SerStack* oiPool;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::Formatters::Binary::SerStack*) == 0x8);
    // Creating value type constructor for type: SerObjectInfoInit
    SerObjectInfoInit(System::Collections::Hashtable* seenBeforeTable_ = {}, int objectInfoIdCount_ = {}, System::Runtime::Serialization::Formatters::Binary::SerStack* oiPool_ = {}) noexcept : seenBeforeTable{seenBeforeTable_}, objectInfoIdCount{objectInfoIdCount_}, oiPool{oiPool_} {}
    // public System.Void .ctor()
    // Offset: 0x145F75C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerObjectInfoInit* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerObjectInfoInit*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
  #pragma pack(pop)
  static check_size<sizeof(SerObjectInfoInit), 32 + sizeof(System::Runtime::Serialization::Formatters::Binary::SerStack*)> __System_Runtime_Serialization_Formatters_Binary_SerObjectInfoInitSizeCheck;
  static_assert(sizeof(SerObjectInfoInit) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit");
