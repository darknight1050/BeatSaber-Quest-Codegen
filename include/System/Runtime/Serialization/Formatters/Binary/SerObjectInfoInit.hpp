// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
  class SerObjectInfoInit : public ::Il2CppObject {
    public:
    // System.Collections.Hashtable seenBeforeTable
    // Offset: 0x10
    System::Collections::Hashtable* seenBeforeTable;
    // System.Int32 objectInfoIdCount
    // Offset: 0x18
    int objectInfoIdCount;
    // System.Runtime.Serialization.Formatters.Binary.SerStack oiPool
    // Offset: 0x20
    System::Runtime::Serialization::Formatters::Binary::SerStack* oiPool;
    // public System.Void .ctor()
    // Offset: 0xF46E1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SerObjectInfoInit* New_ctor();
  }; // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoInit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoInit*, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoInit");
#pragma pack(pop)
