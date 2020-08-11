// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
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
  // Autogenerated type: System.Runtime.Serialization.IFormatterConverter
  class IFormatterConverter {
    public:
    // public System.Object Convert(System.Object value, System.Type type)
    // Offset: 0xFFFFFFFF
    ::CsObject* Convert(::CsObject* value, System::Type* type);
    // public System.Boolean ToBoolean(System.Object value)
    // Offset: 0xFFFFFFFF
    bool ToBoolean(::CsObject* value);
    // public System.Int32 ToInt32(System.Object value)
    // Offset: 0xFFFFFFFF
    int ToInt32(::CsObject* value);
    // public System.Int64 ToInt64(System.Object value)
    // Offset: 0xFFFFFFFF
    int64_t ToInt64(::CsObject* value);
    // public System.Single ToSingle(System.Object value)
    // Offset: 0xFFFFFFFF
    float ToSingle(::CsObject* value);
    // public System.String ToString(System.Object value)
    // Offset: 0xFFFFFFFF
    ::CsString* ToString(::CsObject* value);
  }; // System.Runtime.Serialization.IFormatterConverter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::IFormatterConverter*, "System.Runtime.Serialization", "IFormatterConverter");
#pragma pack(pop)
