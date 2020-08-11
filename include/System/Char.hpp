// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: UnicodeCategory
  struct UnicodeCategory;
  // Forward declaring type: CultureInfo
  class CultureInfo;
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
  // Autogenerated type: System.Char
  struct Char : public System::ValueType, public System::IComparable, public System::IConvertible, public System::IComparable_1<::Il2CppChar>, public System::IEquatable_1<::Il2CppChar> {
    public:
    // System.Char m_value
    // Offset: 0x0
    ::Il2CppChar m_value;
    // static field const value: static public System.Char MaxValue
    static constexpr const ::Il2CppChar MaxValue = u'\uffff';
    // Get static field: static public System.Char MaxValue
    static ::Il2CppChar _get_MaxValue();
    // Set static field: static public System.Char MaxValue
    static void _set_MaxValue(::Il2CppChar value);
    // static field const value: static public System.Char MinValue
    static constexpr const ::Il2CppChar MinValue = u'\u0000';
    // Get static field: static public System.Char MinValue
    static ::Il2CppChar _get_MinValue();
    // Set static field: static public System.Char MinValue
    static void _set_MinValue(::Il2CppChar value);
    // Get static field: static private readonly System.Byte[] categoryForLatin1
    static ::Array<uint8_t>* _get_categoryForLatin1();
    // Set static field: static private readonly System.Byte[] categoryForLatin1
    static void _set_categoryForLatin1(::Array<uint8_t>* value);
    // static field const value: static System.Int32 UNICODE_PLANE00_END
    static constexpr const int UNICODE_PLANE00_END = 65535;
    // Get static field: static System.Int32 UNICODE_PLANE00_END
    static int _get_UNICODE_PLANE00_END();
    // Set static field: static System.Int32 UNICODE_PLANE00_END
    static void _set_UNICODE_PLANE00_END(int value);
    // static field const value: static System.Int32 UNICODE_PLANE01_START
    static constexpr const int UNICODE_PLANE01_START = 65536;
    // Get static field: static System.Int32 UNICODE_PLANE01_START
    static int _get_UNICODE_PLANE01_START();
    // Set static field: static System.Int32 UNICODE_PLANE01_START
    static void _set_UNICODE_PLANE01_START(int value);
    // static field const value: static System.Int32 UNICODE_PLANE16_END
    static constexpr const int UNICODE_PLANE16_END = 1114111;
    // Get static field: static System.Int32 UNICODE_PLANE16_END
    static int _get_UNICODE_PLANE16_END();
    // Set static field: static System.Int32 UNICODE_PLANE16_END
    static void _set_UNICODE_PLANE16_END(int value);
    // static field const value: static System.Int32 HIGH_SURROGATE_START
    static constexpr const int HIGH_SURROGATE_START = 55296;
    // Get static field: static System.Int32 HIGH_SURROGATE_START
    static int _get_HIGH_SURROGATE_START();
    // Set static field: static System.Int32 HIGH_SURROGATE_START
    static void _set_HIGH_SURROGATE_START(int value);
    // static field const value: static System.Int32 LOW_SURROGATE_END
    static constexpr const int LOW_SURROGATE_END = 57343;
    // Get static field: static System.Int32 LOW_SURROGATE_END
    static int _get_LOW_SURROGATE_END();
    // Set static field: static System.Int32 LOW_SURROGATE_END
    static void _set_LOW_SURROGATE_END(int value);
    // Creating value type constructor for type: Char
    Char(::Il2CppChar m_value_ = {}) : m_value{m_value_} {}
    // static private System.Boolean IsLatin1(System.Char ch)
    // Offset: 0x131A650
    static bool IsLatin1(::Il2CppChar ch);
    // static private System.Boolean IsAscii(System.Char ch)
    // Offset: 0x131A660
    static bool IsAscii(::Il2CppChar ch);
    // static private System.Globalization.UnicodeCategory GetLatin1UnicodeCategory(System.Char ch)
    // Offset: 0x131A670
    static System::Globalization::UnicodeCategory GetLatin1UnicodeCategory(::Il2CppChar ch);
    // static public System.String ToString(System.Char c)
    // Offset: 0x131A900
    static ::CsString* ToString(::Il2CppChar c);
    // static public System.Char Parse(System.String s)
    // Offset: 0x131A988
    static ::Il2CppChar Parse(::CsString* s);
    // static public System.Boolean IsDigit(System.Char c)
    // Offset: 0x131AA70
    static bool IsDigit(::Il2CppChar c);
    // static System.Boolean CheckLetter(System.Globalization.UnicodeCategory uc)
    // Offset: 0x131AB24
    static bool CheckLetter(System::Globalization::UnicodeCategory uc);
    // static public System.Boolean IsLetter(System.Char c)
    // Offset: 0x131AB30
    static bool IsLetter(::Il2CppChar c);
    // static private System.Boolean IsWhiteSpaceLatin1(System.Char c)
    // Offset: 0x131AC50
    static bool IsWhiteSpaceLatin1(::Il2CppChar c);
    // static public System.Boolean IsWhiteSpace(System.Char c)
    // Offset: 0x13183BC
    static bool IsWhiteSpace(::Il2CppChar c);
    // static public System.Boolean IsUpper(System.Char c)
    // Offset: 0x131AC98
    static bool IsUpper(::Il2CppChar c);
    // static public System.Boolean IsLower(System.Char c)
    // Offset: 0x131AD94
    static bool IsLower(::Il2CppChar c);
    // static System.Boolean CheckPunctuation(System.Globalization.UnicodeCategory uc)
    // Offset: 0x131AE90
    static bool CheckPunctuation(System::Globalization::UnicodeCategory uc);
    // static public System.Boolean IsPunctuation(System.Char c)
    // Offset: 0x131AEA0
    static bool IsPunctuation(::Il2CppChar c);
    // static System.Boolean CheckLetterOrDigit(System.Globalization.UnicodeCategory uc)
    // Offset: 0x131AF8C
    static bool CheckLetterOrDigit(System::Globalization::UnicodeCategory uc);
    // static public System.Boolean IsLetterOrDigit(System.Char c)
    // Offset: 0x131AFA8
    static bool IsLetterOrDigit(::Il2CppChar c);
    // static public System.Char ToUpper(System.Char c, System.Globalization.CultureInfo culture)
    // Offset: 0x131B0A4
    static ::Il2CppChar ToUpper(::Il2CppChar c, System::Globalization::CultureInfo* culture);
    // static public System.Char ToUpper(System.Char c)
    // Offset: 0x131B154
    static ::Il2CppChar ToUpper(::Il2CppChar c);
    // static public System.Char ToUpperInvariant(System.Char c)
    // Offset: 0x131B1EC
    static ::Il2CppChar ToUpperInvariant(::Il2CppChar c);
    // static public System.Char ToLower(System.Char c, System.Globalization.CultureInfo culture)
    // Offset: 0x131B284
    static ::Il2CppChar ToLower(::Il2CppChar c, System::Globalization::CultureInfo* culture);
    // static public System.Char ToLower(System.Char c)
    // Offset: 0x131B334
    static ::Il2CppChar ToLower(::Il2CppChar c);
    // static public System.Char ToLowerInvariant(System.Char c)
    // Offset: 0x131B3CC
    static ::Il2CppChar ToLowerInvariant(::Il2CppChar c);
    // static public System.Boolean IsControl(System.Char c)
    // Offset: 0x131BD34
    static bool IsControl(::Il2CppChar c);
    // static public System.Boolean IsLetterOrDigit(System.String s, System.Int32 index)
    // Offset: 0x131BDF8
    static bool IsLetterOrDigit(::CsString* s, int index);
    // static System.Boolean CheckNumber(System.Globalization.UnicodeCategory uc)
    // Offset: 0x131BF94
    static bool CheckNumber(System::Globalization::UnicodeCategory uc);
    // static public System.Boolean IsNumber(System.Char c)
    // Offset: 0x131BFA4
    static bool IsNumber(::Il2CppChar c);
    // static System.Boolean CheckSeparator(System.Globalization.UnicodeCategory uc)
    // Offset: 0x131C0C4
    static bool CheckSeparator(System::Globalization::UnicodeCategory uc);
    // static private System.Boolean IsSeparatorLatin1(System.Char c)
    // Offset: 0x131C0D4
    static bool IsSeparatorLatin1(::Il2CppChar c);
    // static public System.Boolean IsSeparator(System.Char c)
    // Offset: 0x131C0E8
    static bool IsSeparator(::Il2CppChar c);
    // static public System.Boolean IsSurrogate(System.Char c)
    // Offset: 0x131C1D8
    static bool IsSurrogate(::Il2CppChar c);
    // static public System.Boolean IsSurrogate(System.String s, System.Int32 index)
    // Offset: 0x131C1E8
    static bool IsSurrogate(::CsString* s, int index);
    // static public System.Boolean IsWhiteSpace(System.String s, System.Int32 index)
    // Offset: 0x131C2F0
    static bool IsWhiteSpace(::CsString* s, int index);
    // static public System.Globalization.UnicodeCategory GetUnicodeCategory(System.Char c)
    // Offset: 0x131C468
    static System::Globalization::UnicodeCategory GetUnicodeCategory(::Il2CppChar c);
    // static public System.Globalization.UnicodeCategory GetUnicodeCategory(System.String s, System.Int32 index)
    // Offset: 0x131C524
    static System::Globalization::UnicodeCategory GetUnicodeCategory(::CsString* s, int index);
    // static public System.Boolean IsHighSurrogate(System.Char c)
    // Offset: 0x131C69C
    static bool IsHighSurrogate(::Il2CppChar c);
    // static public System.Boolean IsHighSurrogate(System.String s, System.Int32 index)
    // Offset: 0x131C6AC
    static bool IsHighSurrogate(::CsString* s, int index);
    // static public System.Boolean IsLowSurrogate(System.Char c)
    // Offset: 0x131C7B8
    static bool IsLowSurrogate(::Il2CppChar c);
    // static public System.Boolean IsSurrogatePair(System.Char highSurrogate, System.Char lowSurrogate)
    // Offset: 0x131C7C8
    static bool IsSurrogatePair(::Il2CppChar highSurrogate, ::Il2CppChar lowSurrogate);
    // static public System.Int32 ConvertToUtf32(System.Char highSurrogate, System.Char lowSurrogate)
    // Offset: 0x131C7EC
    static int ConvertToUtf32(::Il2CppChar highSurrogate, ::Il2CppChar lowSurrogate);
    // static private System.Void .cctor()
    // Offset: 0x131C934
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0xA42910
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xA4291C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public System.Boolean Equals(System.Char obj)
    // Offset: 0xA42924
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.Char obj)
    bool Equals(::Il2CppChar obj);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0xA42934
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object value)
    int CompareTo(::CsObject* value);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::CsObject* value);
    // public System.Int32 CompareTo(System.Char value)
    // Offset: 0xA4293C
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable`1::CompareTo(System.Char value)
    int CompareTo(::Il2CppChar value);
    // public override System.String ToString()
    // Offset: 0xA42948
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::CsString* ToString();
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xA42950
    // Implemented from: System.IConvertible
    // Base method: System.String IConvertible::ToString(System.IFormatProvider provider)
    ::CsString* ToString(System::IFormatProvider* provider);
    // public System.TypeCode GetTypeCode()
    // Offset: 0xA42958
    // Implemented from: System.IConvertible
    // Base method: System.TypeCode IConvertible::GetTypeCode()
    System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0xA42960
    // Implemented from: System.IConvertible
    // Base method: System.Boolean IConvertible::ToBoolean(System.IFormatProvider provider)
    bool System_IConvertible_ToBoolean(System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0xA4296C
    // Implemented from: System.IConvertible
    // Base method: System.Char IConvertible::ToChar(System.IFormatProvider provider)
    ::Il2CppChar System_IConvertible_ToChar(System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0xA42974
    // Implemented from: System.IConvertible
    // Base method: System.SByte IConvertible::ToSByte(System.IFormatProvider provider)
    int8_t System_IConvertible_ToSByte(System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0xA4297C
    // Implemented from: System.IConvertible
    // Base method: System.Byte IConvertible::ToByte(System.IFormatProvider provider)
    uint8_t System_IConvertible_ToByte(System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0xA42984
    // Implemented from: System.IConvertible
    // Base method: System.Int16 IConvertible::ToInt16(System.IFormatProvider provider)
    int16_t System_IConvertible_ToInt16(System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0xA4298C
    // Implemented from: System.IConvertible
    // Base method: System.UInt16 IConvertible::ToUInt16(System.IFormatProvider provider)
    uint16_t System_IConvertible_ToUInt16(System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0xA42994
    // Implemented from: System.IConvertible
    // Base method: System.Int32 IConvertible::ToInt32(System.IFormatProvider provider)
    int System_IConvertible_ToInt32(System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0xA4299C
    // Implemented from: System.IConvertible
    // Base method: System.UInt32 IConvertible::ToUInt32(System.IFormatProvider provider)
    uint System_IConvertible_ToUInt32(System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0xA429A4
    // Implemented from: System.IConvertible
    // Base method: System.Int64 IConvertible::ToInt64(System.IFormatProvider provider)
    int64_t System_IConvertible_ToInt64(System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0xA429AC
    // Implemented from: System.IConvertible
    // Base method: System.UInt64 IConvertible::ToUInt64(System.IFormatProvider provider)
    uint64_t System_IConvertible_ToUInt64(System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0xA429B4
    // Implemented from: System.IConvertible
    // Base method: System.Single IConvertible::ToSingle(System.IFormatProvider provider)
    float System_IConvertible_ToSingle(System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0xA429C0
    // Implemented from: System.IConvertible
    // Base method: System.Double IConvertible::ToDouble(System.IFormatProvider provider)
    double System_IConvertible_ToDouble(System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0xA429CC
    // Implemented from: System.IConvertible
    // Base method: System.Decimal IConvertible::ToDecimal(System.IFormatProvider provider)
    System::Decimal System_IConvertible_ToDecimal(System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0xA429D8
    // Implemented from: System.IConvertible
    // Base method: System.DateTime IConvertible::ToDateTime(System.IFormatProvider provider)
    System::DateTime System_IConvertible_ToDateTime(System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0xA429E4
    // Implemented from: System.IConvertible
    // Base method: System.Object IConvertible::ToType(System.Type type, System.IFormatProvider provider)
    ::CsObject* System_IConvertible_ToType(System::Type* type, System::IFormatProvider* provider);
  }; // System.Char
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Char, "System", "Char");
#pragma pack(pop)
