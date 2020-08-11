// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum
#include "System/Runtime/Serialization/Formatters/Binary/ValueFixupEnum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ReadObjectInfo
  class ReadObjectInfo;
  // Forward declaring type: ParseRecord
  class ParseRecord;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ValueFixup
  class ValueFixup : public ::CsObject {
    public:
    // System.Runtime.Serialization.Formatters.Binary.ValueFixupEnum valueFixupEnum
    // Offset: 0x10
    System::Runtime::Serialization::Formatters::Binary::ValueFixupEnum valueFixupEnum;
    // System.Array arrayObj
    // Offset: 0x18
    System::Array* arrayObj;
    // System.Int32[] indexMap
    // Offset: 0x20
    ::Array<int>* indexMap;
    // System.Object header
    // Offset: 0x28
    ::CsObject* header;
    // System.Object memberObject
    // Offset: 0x30
    ::CsObject* memberObject;
    // Get static field: static System.Reflection.MemberInfo valueInfo
    static System::Reflection::MemberInfo* _get_valueInfo();
    // Set static field: static System.Reflection.MemberInfo valueInfo
    static void _set_valueInfo(System::Reflection::MemberInfo* value);
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo
    // Offset: 0x38
    System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;
    // System.String memberName
    // Offset: 0x40
    ::CsString* memberName;
    // System.Void .ctor(System.Array arrayObj, System.Int32[] indexMap)
    // Offset: 0xFDB878
    static ValueFixup* New_ctor(System::Array* arrayObj, ::Array<int>* indexMap);
    // System.Void .ctor(System.Object memberObject, System.String memberName, System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo)
    // Offset: 0xFDB8D0
    static ValueFixup* New_ctor(::CsObject* memberObject, ::CsString* memberName, System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo);
    // System.Void Fixup(System.Runtime.Serialization.Formatters.Binary.ParseRecord record, System.Runtime.Serialization.Formatters.Binary.ParseRecord parent)
    // Offset: 0xFDB93C
    void Fixup(System::Runtime::Serialization::Formatters::Binary::ParseRecord* record, System::Runtime::Serialization::Formatters::Binary::ParseRecord* parent);
  }; // System.Runtime.Serialization.Formatters.Binary.ValueFixup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::ValueFixup*, "System.Runtime.Serialization.Formatters.Binary", "ValueFixup");
#pragma pack(pop)
