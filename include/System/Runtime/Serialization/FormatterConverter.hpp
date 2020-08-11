// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.IFormatterConverter
#include "System/Runtime/Serialization/IFormatterConverter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.FormatterConverter
  class FormatterConverter : public ::CsObject, public System::Runtime::Serialization::IFormatterConverter {
    public:
    // public System.Void .ctor()
    // Offset: 0xE0A818
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FormatterConverter* New_ctor();
    // public System.Object Convert(System.Object value, System.Type type)
    // Offset: 0xE0A820
    // Implemented from: System.Runtime.Serialization.IFormatterConverter
    // Base method: System.Object IFormatterConverter::Convert(System.Object value, System.Type type)
    ::CsObject* Convert(::CsObject* value, System::Type* type);
    // public System.Boolean ToBoolean(System.Object value)
    // Offset: 0xE0A90C
    // Implemented from: System.Runtime.Serialization.IFormatterConverter
    // Base method: System.Boolean IFormatterConverter::ToBoolean(System.Object value)
    bool ToBoolean(::CsObject* value);
    // public System.Int32 ToInt32(System.Object value)
    // Offset: 0xE0A9E8
    // Implemented from: System.Runtime.Serialization.IFormatterConverter
    // Base method: System.Int32 IFormatterConverter::ToInt32(System.Object value)
    int ToInt32(::CsObject* value);
    // public System.Int64 ToInt64(System.Object value)
    // Offset: 0xE0AAC4
    // Implemented from: System.Runtime.Serialization.IFormatterConverter
    // Base method: System.Int64 IFormatterConverter::ToInt64(System.Object value)
    int64_t ToInt64(::CsObject* value);
    // public System.Single ToSingle(System.Object value)
    // Offset: 0xE0ABA0
    // Implemented from: System.Runtime.Serialization.IFormatterConverter
    // Base method: System.Single IFormatterConverter::ToSingle(System.Object value)
    float ToSingle(::CsObject* value);
    // public System.String ToString(System.Object value)
    // Offset: 0xE0AC7C
    // Implemented from: System.Runtime.Serialization.IFormatterConverter
    // Base method: System.String IFormatterConverter::ToString(System.Object value)
    ::CsString* ToString(::CsObject* value);
  }; // System.Runtime.Serialization.FormatterConverter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::FormatterConverter*, "System.Runtime.Serialization", "FormatterConverter");
#pragma pack(pop)
