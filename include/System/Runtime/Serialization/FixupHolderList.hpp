// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: FixupHolder
  class FixupHolder;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.FixupHolderList
  class FixupHolderList : public ::CsObject {
    public:
    // System.Runtime.Serialization.FixupHolder[] m_values
    // Offset: 0x10
    ::Array<System::Runtime::Serialization::FixupHolder*>* m_values;
    // System.Int32 m_count
    // Offset: 0x18
    int m_count;
    // System.Void .ctor(System.Int32 startingSize)
    // Offset: 0xE0A640
    static FixupHolderList* New_ctor(int startingSize);
    // System.Void Add(System.Runtime.Serialization.FixupHolder fixup)
    // Offset: 0xE0A6BC
    void Add(System::Runtime::Serialization::FixupHolder* fixup);
    // private System.Void EnlargeArray()
    // Offset: 0xE0A774
    void EnlargeArray();
    // System.Void .ctor()
    // Offset: 0xE0A638
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FixupHolderList* New_ctor();
  }; // System.Runtime.Serialization.FixupHolderList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FixupHolderList*, "System.Runtime.Serialization", "FixupHolderList");
#pragma pack(pop)
