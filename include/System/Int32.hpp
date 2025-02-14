// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
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
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Int32
  // [ComVisibleAttribute] Offset: D7A948
  struct Int32/*, public System::ValueType, public System::IComparable, public System::IFormattable, public System::IConvertible, public System::IComparable_1<int>, public System::IEquatable_1<int>*/ {
    public:
    // System.Int32 m_value
    // Size: 0x4
    // Offset: 0x0
    int m_value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Int32
    constexpr Int32(int m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IFormattable
    operator System::IFormattable() noexcept {
      return *reinterpret_cast<System::IFormattable*>(this);
    }
    // Creating interface conversion operator: operator System::IConvertible
    operator System::IConvertible() noexcept {
      return *reinterpret_cast<System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<int>
    operator System::IComparable_1<int>() noexcept {
      return *reinterpret_cast<System::IComparable_1<int>*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<int>
    operator System::IEquatable_1<int>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<int>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Int32 MaxValue
    static constexpr const int MaxValue = 2147483647;
    // Get static field: static public System.Int32 MaxValue
    static int _get_MaxValue();
    // Set static field: static public System.Int32 MaxValue
    static void _set_MaxValue(int value);
    // static field const value: static public System.Int32 MinValue
    static constexpr const int MinValue = -2147483648;
    // Get static field: static public System.Int32 MinValue
    static int _get_MinValue();
    // Set static field: static public System.Int32 MinValue
    static void _set_MinValue(int value);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xEFD2E0
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Int32 value)
    // Offset: 0xEFD2E8
    int CompareTo(int value);
    // public System.Boolean Equals(System.Int32 obj)
    // Offset: 0xEFD304
    bool Equals(int obj);
    // public System.String ToString(System.String format)
    // Offset: 0xEFD34C
    ::Il2CppString* ToString(::Il2CppString* format);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xEFD380
    ::Il2CppString* ToString(System::IFormatProvider* provider);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0xEFD3B4
    ::Il2CppString* ToString(::Il2CppString* format, System::IFormatProvider* provider);
    // static public System.Int32 Parse(System.String s)
    // Offset: 0x18069F8
    static int Parse(::Il2CppString* s);
    // static public System.Int32 Parse(System.String s, System.Globalization.NumberStyles style)
    // Offset: 0x1806A28
    static int Parse(::Il2CppString* s, System::Globalization::NumberStyles style);
    // static public System.Int32 Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x1806A68
    static int Parse(::Il2CppString* s, System::IFormatProvider* provider);
    // static public System.Int32 Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x1806A9C
    static int Parse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider);
    // static public System.Boolean TryParse(System.String s, out System.Int32 result)
    // Offset: 0x1806AEC
    static bool TryParse(::Il2CppString* s, int& result);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, out System.Int32 result)
    // Offset: 0x1806C5C
    static bool TryParse(::Il2CppString* s, System::Globalization::NumberStyles style, System::IFormatProvider* provider, int& result);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xEFD3EC
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xEFD3F4
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xEFD3FC
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xEFD404
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xEFD40C
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xEFD414
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xEFD41C
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xEFD424
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xEFD42C
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xEFD434
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xEFD43C
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xEFD444
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xEFD44C
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xEFD454
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xEFD45C
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xEFD468
    ::Il2CppObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xEFD2FC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xEFD314
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xEFD31C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.Int32
  #pragma pack(pop)
  static check_size<sizeof(Int32), 0 + sizeof(int)> __System_Int32SizeCheck;
  static_assert(sizeof(Int32) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Int32, "System", "Int32");
