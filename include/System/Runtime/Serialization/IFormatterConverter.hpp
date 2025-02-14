// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.IFormatterConverter
  // [CLSCompliantAttribute] Offset: D7DD28
  // [ComVisibleAttribute] Offset: D7DD28
  class IFormatterConverter {
    public:
    // Creating value type constructor for type: IFormatterConverter
    IFormatterConverter() noexcept {}
    // public System.Object Convert(System.Object value, System.Type type)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Convert(::Il2CppObject* value, System::Type* type);
    // public System.Boolean ToBoolean(System.Object value)
    // Offset: 0xFFFFFFFF
    bool ToBoolean(::Il2CppObject* value);
    // public System.Int32 ToInt32(System.Object value)
    // Offset: 0xFFFFFFFF
    int ToInt32(::Il2CppObject* value);
    // public System.Int64 ToInt64(System.Object value)
    // Offset: 0xFFFFFFFF
    int64_t ToInt64(::Il2CppObject* value);
    // public System.Single ToSingle(System.Object value)
    // Offset: 0xFFFFFFFF
    float ToSingle(::Il2CppObject* value);
    // public System.String ToString(System.Object value)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* ToString(::Il2CppObject* value);
  }; // System.Runtime.Serialization.IFormatterConverter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::IFormatterConverter*, "System.Runtime.Serialization", "IFormatterConverter");
