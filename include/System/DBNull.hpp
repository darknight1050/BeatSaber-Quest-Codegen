// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.DBNull
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C92DD0
  class DBNull : public ::Il2CppObject/*, public System::Runtime::Serialization::ISerializable, public System::IConvertible*/ {
    public:
    // Creating value type constructor for type: DBNull
    DBNull() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IConvertible
    operator System::IConvertible() noexcept {
      return *reinterpret_cast<System::IConvertible*>(this);
    }
    // Get static field: static public readonly System.DBNull Value
    static System::DBNull* _get_Value();
    // Set static field: static public readonly System.DBNull Value
    static void _set_Value(System::DBNull* value);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1825AE4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DBNull* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DBNull::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DBNull*, creationType>(info, context)));
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1825B74
    void GetObjectData_NEW(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0x1825BDC
    ::Il2CppString* ToString_NEW(System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0x1825C2C
    System::TypeCode GetTypeCode_NEW();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0x1825C34
    bool System_IConvertible_ToBoolean_NEW(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0x1825CB4
    ::Il2CppChar System_IConvertible_ToChar_NEW(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0x1825D34
    int8_t System_IConvertible_ToSByte_NEW(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0x1825DB4
    uint8_t System_IConvertible_ToByte_NEW(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0x1825E34
    int16_t System_IConvertible_ToInt16_NEW(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0x1825EB4
    uint16_t System_IConvertible_ToUInt16_NEW(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0x1825F34
    int System_IConvertible_ToInt32_NEW(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0x1825FB4
    uint System_IConvertible_ToUInt32_NEW(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0x1826034
    int64_t System_IConvertible_ToInt64_NEW(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0x18260B4
    uint64_t System_IConvertible_ToUInt64_NEW(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0x1826134
    float System_IConvertible_ToSingle_NEW(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0x18261B4
    double System_IConvertible_ToDouble_NEW(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0x1826234
    System::Decimal System_IConvertible_ToDecimal_NEW(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0x18262B4
    System::DateTime System_IConvertible_ToDateTime_NEW(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0x1826334
    ::Il2CppObject* System_IConvertible_ToType_NEW(System::Type* type, System::IFormatProvider* provider);
    // static private System.Void .cctor()
    // Offset: 0x18263B0
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1825ADC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DBNull* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::DBNull::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DBNull*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1825B8C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString_NEW()
    ::Il2CppString* ToString();
  }; // System.DBNull
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::DBNull*, "System", "DBNull");
