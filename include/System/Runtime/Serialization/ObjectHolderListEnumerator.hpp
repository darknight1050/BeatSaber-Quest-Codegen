// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: ObjectHolderList
  class ObjectHolderList;
  // Forward declaring type: ObjectHolder
  class ObjectHolder;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.ObjectHolderListEnumerator
  class ObjectHolderListEnumerator : public ::Il2CppObject {
    public:
    // private System.Boolean m_isFixupEnumerator
    // Offset: 0x10
    bool m_isFixupEnumerator;
    // private System.Runtime.Serialization.ObjectHolderList m_list
    // Offset: 0x18
    System::Runtime::Serialization::ObjectHolderList* m_list;
    // private System.Int32 m_startingVersion
    // Offset: 0x20
    int m_startingVersion;
    // private System.Int32 m_currPos
    // Offset: 0x24
    int m_currPos;
    // System.Void .ctor(System.Runtime.Serialization.ObjectHolderList list, System.Boolean isFixupEnumerator)
    // Offset: 0xF55D70
    static ObjectHolderListEnumerator* New_ctor(System::Runtime::Serialization::ObjectHolderList* list, bool isFixupEnumerator);
    // System.Boolean MoveNext()
    // Offset: 0xF55DE8
    bool MoveNext();
    // System.Runtime.Serialization.ObjectHolder get_Current()
    // Offset: 0xF55E9C
    System::Runtime::Serialization::ObjectHolder* get_Current();
  }; // System.Runtime.Serialization.ObjectHolderListEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectHolderListEnumerator*, "System.Runtime.Serialization", "ObjectHolderListEnumerator");
#pragma pack(pop)
