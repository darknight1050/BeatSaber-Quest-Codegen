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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoStrings
  struct TermInfoStrings;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ByteMatcher
  class ByteMatcher : public ::CsObject {
    public:
    // private System.Collections.Hashtable map
    // Offset: 0x10
    System::Collections::Hashtable* map;
    // private System.Collections.Hashtable starts
    // Offset: 0x18
    System::Collections::Hashtable* starts;
    // public System.Void AddMapping(System.TermInfoStrings key, System.Byte[] val)
    // Offset: 0x1319ECC
    void AddMapping(System::TermInfoStrings key, ::Array<uint8_t>* val);
    // public System.Void Sort()
    // Offset: 0x1319FE4
    void Sort();
    // public System.Boolean StartsWith(System.Int32 c)
    // Offset: 0x1319FE8
    bool StartsWith(int c);
    // public System.TermInfoStrings Match(System.Char[] buffer, System.Int32 offset, System.Int32 length, System.Int32 used)
    // Offset: 0x131A078
    System::TermInfoStrings Match(::Array<::Il2CppChar>* buffer, int offset, int length, int& used);
    // public System.Void .ctor()
    // Offset: 0x131A4AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ByteMatcher* New_ctor();
  }; // System.ByteMatcher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ByteMatcher*, "System", "ByteMatcher");
#pragma pack(pop)
