// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: Thread
  class Thread;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.NumberFormatter
  class NumberFormatter : public ::Il2CppObject {
    public:
    // Nested type: System::NumberFormatter::CustomInfo
    class CustomInfo;
    // private System.Globalization.NumberFormatInfo _nfi
    // Size: 0x8
    // Offset: 0x10
    System::Globalization::NumberFormatInfo* nfi;
    // Field size check
    static_assert(sizeof(System::Globalization::NumberFormatInfo*) == 0x8);
    // private System.Char[] _cbuf
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppChar>* cbuf;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Boolean _NaN
    // Size: 0x1
    // Offset: 0x20
    bool NaN;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _infinity
    // Size: 0x1
    // Offset: 0x21
    bool infinity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isCustomFormat
    // Size: 0x1
    // Offset: 0x22
    bool isCustomFormat;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _specifierIsUpper
    // Size: 0x1
    // Offset: 0x23
    bool specifierIsUpper;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _positive
    // Size: 0x1
    // Offset: 0x24
    bool positive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: positive and: specifier
    char __padding6[0x1] = {};
    // private System.Char _specifier
    // Size: 0x2
    // Offset: 0x26
    ::Il2CppChar specifier;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // private System.Int32 _precision
    // Size: 0x4
    // Offset: 0x28
    int precision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _defPrecision
    // Size: 0x4
    // Offset: 0x2C
    int defPrecision;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _digitsLen
    // Size: 0x4
    // Offset: 0x30
    int digitsLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _offset
    // Size: 0x4
    // Offset: 0x34
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _decPointPos
    // Size: 0x4
    // Offset: 0x38
    int decPointPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt32 _val1
    // Size: 0x4
    // Offset: 0x3C
    uint val1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _val2
    // Size: 0x4
    // Offset: 0x40
    uint val2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _val3
    // Size: 0x4
    // Offset: 0x44
    uint val3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _val4
    // Size: 0x4
    // Offset: 0x48
    uint val4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 _ind
    // Size: 0x4
    // Offset: 0x4C
    int ind;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NumberFormatter
    NumberFormatter(System::Globalization::NumberFormatInfo* nfi_ = {}, ::Array<::Il2CppChar>* cbuf_ = {}, bool NaN_ = {}, bool infinity_ = {}, bool isCustomFormat_ = {}, bool specifierIsUpper_ = {}, bool positive_ = {}, ::Il2CppChar specifier_ = {}, int precision_ = {}, int defPrecision_ = {}, int digitsLen_ = {}, int offset_ = {}, int decPointPos_ = {}, uint val1_ = {}, uint val2_ = {}, uint val3_ = {}, uint val4_ = {}, int ind_ = {}) noexcept : nfi{nfi_}, cbuf{cbuf_}, NaN{NaN_}, infinity{infinity_}, isCustomFormat{isCustomFormat_}, specifierIsUpper{specifierIsUpper_}, positive{positive_}, specifier{specifier_}, precision{precision_}, defPrecision{defPrecision_}, digitsLen{digitsLen_}, offset{offset_}, decPointPos{decPointPos_}, val1{val1_}, val2{val2_}, val3{val3_}, val4{val4_}, ind{ind_} {}
    // Get static field: static private readonly System.UInt64* MantissaBitsTable
    static uint64_t* _get_MantissaBitsTable();
    // Set static field: static private readonly System.UInt64* MantissaBitsTable
    static void _set_MantissaBitsTable(uint64_t* value);
    // Get static field: static private readonly System.Int32* TensExponentTable
    static int* _get_TensExponentTable();
    // Set static field: static private readonly System.Int32* TensExponentTable
    static void _set_TensExponentTable(int* value);
    // Get static field: static private readonly System.Char* DigitLowerTable
    static ::Il2CppChar* _get_DigitLowerTable();
    // Set static field: static private readonly System.Char* DigitLowerTable
    static void _set_DigitLowerTable(::Il2CppChar* value);
    // Get static field: static private readonly System.Char* DigitUpperTable
    static ::Il2CppChar* _get_DigitUpperTable();
    // Set static field: static private readonly System.Char* DigitUpperTable
    static void _set_DigitUpperTable(::Il2CppChar* value);
    // Get static field: static private readonly System.Int64* TenPowersList
    static int64_t* _get_TenPowersList();
    // Set static field: static private readonly System.Int64* TenPowersList
    static void _set_TenPowersList(int64_t* value);
    // Get static field: static private readonly System.Int32* DecHexDigits
    static int* _get_DecHexDigits();
    // Set static field: static private readonly System.Int32* DecHexDigits
    static void _set_DecHexDigits(int* value);
    // [ThreadStaticAttribute] Offset: 0xD8120C
    // Get static field: static private System.NumberFormatter threadNumberFormatter
    static System::NumberFormatter* _get_threadNumberFormatter();
    // Set static field: static private System.NumberFormatter threadNumberFormatter
    static void _set_threadNumberFormatter(System::NumberFormatter* value);
    // [ThreadStaticAttribute] Offset: 0xD8121C
    // Get static field: static private System.NumberFormatter userFormatProvider
    static System::NumberFormatter* _get_userFormatProvider();
    // Set static field: static private System.NumberFormatter userFormatProvider
    static void _set_userFormatProvider(System::NumberFormatter* value);
    // static private System.Void GetFormatterTables(out System.UInt64* MantissaBitsTable, out System.Int32* TensExponentTable, out System.Char* DigitLowerTable, out System.Char* DigitUpperTable, out System.Int64* TenPowersList, out System.Int32* DecHexDigits)
    // Offset: 0x1810054
    static void GetFormatterTables(uint64_t*& MantissaBitsTable, int*& TensExponentTable, ::Il2CppChar*& DigitLowerTable, ::Il2CppChar*& DigitUpperTable, int64_t*& TenPowersList, int*& DecHexDigits);
    // static private System.Void .cctor()
    // Offset: 0x1810058
    static void _cctor();
    // static private System.Int64 GetTenPowerOf(System.Int32 i)
    // Offset: 0x18100B8
    static int64_t GetTenPowerOf(int i);
    // private System.Void InitDecHexDigits(System.UInt32 value)
    // Offset: 0x1810128
    void InitDecHexDigits(uint value);
    // private System.Void InitDecHexDigits(System.UInt64 value)
    // Offset: 0x1810384
    void InitDecHexDigits(uint64_t value);
    // private System.Void InitDecHexDigits(System.UInt32 hi, System.UInt64 lo)
    // Offset: 0x18104A8
    void InitDecHexDigits(uint hi, uint64_t lo);
    // static private System.UInt32 FastToDecHex(System.Int32 val)
    // Offset: 0x18101F0
    static uint FastToDecHex(int val);
    // static private System.UInt32 ToDecHex(System.Int32 val)
    // Offset: 0x18102C0
    static uint ToDecHex(int val);
    // static private System.Int32 FastDecHexLen(System.Int32 val)
    // Offset: 0x1810674
    static int FastDecHexLen(int val);
    // static private System.Int32 DecHexLen(System.UInt32 val)
    // Offset: 0x181069C
    static int DecHexLen(uint val);
    // private System.Int32 DecHexLen()
    // Offset: 0x1810764
    int DecHexLen();
    // static private System.Int32 ScaleOrder(System.Int64 hi)
    // Offset: 0x1810888
    static int ScaleOrder(int64_t hi);
    // private System.Int32 InitialFloatingPrecision()
    // Offset: 0x181091C
    int InitialFloatingPrecision();
    // static private System.Int32 ParsePrecision(System.String format)
    // Offset: 0x18109F4
    static int ParsePrecision(::Il2CppString* format);
    // private System.Void .ctor(System.Threading.Thread current)
    // Offset: 0x1810A90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NumberFormatter* New_ctor(System::Threading::Thread* current) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::NumberFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NumberFormatter*, creationType>(current)));
    }
    // private System.Void Init(System.String format)
    // Offset: 0x1810B9C
    void Init(::Il2CppString* format);
    // private System.Void InitHex(System.UInt64 value)
    // Offset: 0x1810CC4
    void InitHex(uint64_t value);
    // private System.Void Init(System.String format, System.Int32 value, System.Int32 defPrecision)
    // Offset: 0x1810D0C
    void Init(::Il2CppString* format, int value, int defPrecision);
    // private System.Void Init(System.String format, System.UInt32 value, System.Int32 defPrecision)
    // Offset: 0x1810DB0
    void Init(::Il2CppString* format, uint value, int defPrecision);
    // private System.Void Init(System.String format, System.Int64 value)
    // Offset: 0x1810E38
    void Init(::Il2CppString* format, int64_t value);
    // private System.Void Init(System.String format, System.UInt64 value)
    // Offset: 0x1810EC4
    void Init(::Il2CppString* format, uint64_t value);
    // private System.Void Init(System.String format, System.Double value, System.Int32 defPrecision)
    // Offset: 0x1810F48
    void Init(::Il2CppString* format, double value, int defPrecision);
    // private System.Void Init(System.String format, System.Decimal value)
    // Offset: 0x1811350
    void Init(::Il2CppString* format, System::Decimal value);
    // private System.Void ResetCharBuf(System.Int32 size)
    // Offset: 0x18114C4
    void ResetCharBuf(int size);
    // private System.Void Resize(System.Int32 len)
    // Offset: 0x1811544
    void Resize(int len);
    // private System.Void Append(System.Char c)
    // Offset: 0x18115A4
    void Append(::Il2CppChar c);
    // private System.Void Append(System.Char c, System.Int32 cnt)
    // Offset: 0x1811628
    void Append(::Il2CppChar c, int cnt);
    // private System.Void Append(System.String s)
    // Offset: 0x18116CC
    void Append(::Il2CppString* s);
    // private System.Globalization.NumberFormatInfo GetNumberFormatInstance(System.IFormatProvider fp)
    // Offset: 0x181178C
    System::Globalization::NumberFormatInfo* GetNumberFormatInstance(System::IFormatProvider* fp);
    // private System.Void set_CurrentCulture(System.Globalization.CultureInfo value)
    // Offset: 0x1810B50
    void set_CurrentCulture(System::Globalization::CultureInfo* value);
    // private System.Int32 get_IntegerDigits()
    // Offset: 0x18117A8
    int get_IntegerDigits();
    // private System.Int32 get_DecimalDigits()
    // Offset: 0x18117B8
    int get_DecimalDigits();
    // private System.Boolean get_IsFloatingSource()
    // Offset: 0x18117CC
    bool get_IsFloatingSource();
    // private System.Boolean get_IsZero()
    // Offset: 0x18117E0
    bool get_IsZero();
    // private System.Boolean get_IsZeroInteger()
    // Offset: 0x18117F0
    bool get_IsZeroInteger();
    // private System.Void RoundPos(System.Int32 pos)
    // Offset: 0x1811810
    void RoundPos(int pos);
    // private System.Boolean RoundDecimal(System.Int32 decimals)
    // Offset: 0x1811988
    bool RoundDecimal(int decimals);
    // private System.Boolean RoundBits(System.Int32 shift)
    // Offset: 0x181181C
    bool RoundBits(int shift);
    // private System.Void RemoveTrailingZeros()
    // Offset: 0x1811AD0
    void RemoveTrailingZeros();
    // private System.Void AddOneToDecHex()
    // Offset: 0x181199C
    void AddOneToDecHex();
    // static private System.UInt32 AddOneToDecHex(System.UInt32 val)
    // Offset: 0x1811B14
    static uint AddOneToDecHex(uint val);
    // private System.Int32 CountTrailingZeros()
    // Offset: 0x181122C
    int CountTrailingZeros();
    // static private System.Int32 CountTrailingZeros(System.UInt32 val)
    // Offset: 0x1811BBC
    static int CountTrailingZeros(uint val);
    // static private System.NumberFormatter GetInstance(System.IFormatProvider fp)
    // Offset: 0x1811C10
    static System::NumberFormatter* GetInstance(System::IFormatProvider* fp);
    // private System.Void Release()
    // Offset: 0x1811D88
    void Release();
    // static public System.String NumberToString(System.String format, System.UInt32 value, System.IFormatProvider fp)
    // Offset: 0x180E2D8
    static ::Il2CppString* NumberToString(::Il2CppString* format, uint value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Int32 value, System.IFormatProvider fp)
    // Offset: 0x180E224
    static ::Il2CppString* NumberToString(::Il2CppString* format, int value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.UInt64 value, System.IFormatProvider fp)
    // Offset: 0x180E4B8
    static ::Il2CppString* NumberToString(::Il2CppString* format, uint64_t value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Int64 value, System.IFormatProvider fp)
    // Offset: 0x180E38C
    static ::Il2CppString* NumberToString(::Il2CppString* format, int64_t value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Single value, System.IFormatProvider fp)
    // Offset: 0x180E5EC
    static ::Il2CppString* NumberToString(::Il2CppString* format, float value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Double value, System.IFormatProvider fp)
    // Offset: 0x180E0FC
    static ::Il2CppString* NumberToString(::Il2CppString* format, double value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Decimal value, System.IFormatProvider fp)
    // Offset: 0x180DFA0
    static ::Il2CppString* NumberToString(::Il2CppString* format, System::Decimal value, System::IFormatProvider* fp);
    // private System.String IntegerToString(System.String format, System.IFormatProvider fp)
    // Offset: 0x1811E20
    ::Il2CppString* IntegerToString(::Il2CppString* format, System::IFormatProvider* fp);
    // private System.String NumberToString(System.String format, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x181209C
    ::Il2CppString* NumberToString(::Il2CppString* format, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatCurrency(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x1812340
    ::Il2CppString* FormatCurrency(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatDecimal(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x18125A8
    ::Il2CppString* FormatDecimal(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatHexadecimal(System.Int32 precision)
    // Offset: 0x1812BD8
    ::Il2CppString* FormatHexadecimal(int precision);
    // private System.String FormatFixedPoint(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x18126C4
    ::Il2CppString* FormatFixedPoint(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatRoundtrip(System.Double origval, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x181223C
    ::Il2CppString* FormatRoundtrip(double origval, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatRoundtrip(System.Single origval, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x1812008
    ::Il2CppString* FormatRoundtrip(float origval, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatGeneral(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x18127AC
    ::Il2CppString* FormatGeneral(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatNumber(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x18128FC
    ::Il2CppString* FormatNumber(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatPercent(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x1812A70
    ::Il2CppString* FormatPercent(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatExponential(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x1812670
    ::Il2CppString* FormatExponential(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatExponential(System.Int32 precision, System.Globalization.NumberFormatInfo nfi, System.Int32 expDigits)
    // Offset: 0x1813804
    ::Il2CppString* FormatExponential(int precision, System::Globalization::NumberFormatInfo* nfi, int expDigits);
    // private System.String FormatCustom(System.String format, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x1812D2C
    ::Il2CppString* FormatCustom(::Il2CppString* format, System::Globalization::NumberFormatInfo* nfi);
    // static private System.Void ZeroTrimEnd(System.Text.StringBuilder sb, System.Boolean canEmpty)
    // Offset: 0x1814570
    static void ZeroTrimEnd(System::Text::StringBuilder* sb, bool canEmpty);
    // static private System.Boolean IsZeroOnly(System.Text.StringBuilder sb)
    // Offset: 0x1814480
    static bool IsZeroOnly(System::Text::StringBuilder* sb);
    // static private System.Void AppendNonNegativeNumber(System.Text.StringBuilder sb, System.Int32 v)
    // Offset: 0x18142D4
    static void AppendNonNegativeNumber(System::Text::StringBuilder* sb, int v);
    // private System.Void AppendIntegerString(System.Int32 minLength, System.Text.StringBuilder sb)
    // Offset: 0x18143DC
    void AppendIntegerString(int minLength, System::Text::StringBuilder* sb);
    // private System.Void AppendIntegerString(System.Int32 minLength)
    // Offset: 0x1813730
    void AppendIntegerString(int minLength);
    // private System.Void AppendDecimalString(System.Int32 precision, System.Text.StringBuilder sb)
    // Offset: 0x1814460
    void AppendDecimalString(int precision, System::Text::StringBuilder* sb);
    // private System.Void AppendDecimalString(System.Int32 precision)
    // Offset: 0x18134A4
    void AppendDecimalString(int precision);
    // private System.Void AppendIntegerStringWithGroupSeparator(System.Int32[] groups, System.String groupSeparator)
    // Offset: 0x181325C
    void AppendIntegerStringWithGroupSeparator(::Array<int>* groups, ::Il2CppString* groupSeparator);
    // private System.Void AppendExponent(System.Globalization.NumberFormatInfo nfi, System.Int32 exponent, System.Int32 minDigits)
    // Offset: 0x18139D0
    void AppendExponent(System::Globalization::NumberFormatInfo* nfi, int exponent, int minDigits);
    // private System.Void AppendOneDigit(System.Int32 start)
    // Offset: 0x18138F4
    void AppendOneDigit(int start);
    // private System.Void AppendDigits(System.Int32 start, System.Int32 end)
    // Offset: 0x18134BC
    void AppendDigits(int start, int end);
    // private System.Void AppendDigits(System.Int32 start, System.Int32 end, System.Text.StringBuilder sb)
    // Offset: 0x1814DAC
    void AppendDigits(int start, int end, System::Text::StringBuilder* sb);
    // private System.Void Multiply10(System.Int32 count)
    // Offset: 0x18138D4
    void Multiply10(int count);
    // private System.Void Divide10(System.Int32 count)
    // Offset: 0x18142B4
    void Divide10(int count);
    // private System.NumberFormatter GetClone()
    // Offset: 0x1813798
    System::NumberFormatter* GetClone();
  }; // System.NumberFormatter
  #pragma pack(pop)
  static check_size<sizeof(NumberFormatter), 76 + sizeof(int)> __System_NumberFormatterSizeCheck;
  static_assert(sizeof(NumberFormatter) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::NumberFormatter*, "System", "NumberFormatter");
