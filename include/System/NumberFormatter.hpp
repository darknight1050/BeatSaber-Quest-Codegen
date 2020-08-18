// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: System.NumberFormatter
  class NumberFormatter : public ::Il2CppObject {
    public:
    // Nested type: System::NumberFormatter::CustomInfo
    class CustomInfo;
    // private System.Globalization.NumberFormatInfo _nfi
    // Offset: 0x10
    System::Globalization::NumberFormatInfo* nfi;
    // private System.Char[] _cbuf
    // Offset: 0x18
    ::Array<::Il2CppChar>* cbuf;
    // private System.Boolean _NaN
    // Offset: 0x20
    bool NaN;
    // private System.Boolean _infinity
    // Offset: 0x21
    bool infinity;
    // private System.Boolean _isCustomFormat
    // Offset: 0x22
    bool isCustomFormat;
    // private System.Boolean _specifierIsUpper
    // Offset: 0x23
    bool specifierIsUpper;
    // private System.Boolean _positive
    // Offset: 0x24
    bool positive;
    // private System.Char _specifier
    // Offset: 0x26
    ::Il2CppChar specifier;
    // private System.Int32 _precision
    // Offset: 0x28
    int precision;
    // private System.Int32 _defPrecision
    // Offset: 0x2C
    int defPrecision;
    // private System.Int32 _digitsLen
    // Offset: 0x30
    int digitsLen;
    // private System.Int32 _offset
    // Offset: 0x34
    int offset;
    // private System.Int32 _decPointPos
    // Offset: 0x38
    int decPointPos;
    // private System.UInt32 _val1
    // Offset: 0x3C
    uint val1;
    // private System.UInt32 _val2
    // Offset: 0x40
    uint val2;
    // private System.UInt32 _val3
    // Offset: 0x44
    uint val3;
    // private System.UInt32 _val4
    // Offset: 0x48
    uint val4;
    // private System.Int32 _ind
    // Offset: 0x4C
    int ind;
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
    // Get static field: static private System.NumberFormatter threadNumberFormatter
    static System::NumberFormatter* _get_threadNumberFormatter();
    // Set static field: static private System.NumberFormatter threadNumberFormatter
    static void _set_threadNumberFormatter(System::NumberFormatter* value);
    // Get static field: static private System.NumberFormatter userFormatProvider
    static System::NumberFormatter* _get_userFormatProvider();
    // Set static field: static private System.NumberFormatter userFormatProvider
    static void _set_userFormatProvider(System::NumberFormatter* value);
    // static private System.Void GetFormatterTables(System.UInt64* MantissaBitsTable, System.Int32* TensExponentTable, System.Char* DigitLowerTable, System.Char* DigitUpperTable, System.Int64* TenPowersList, System.Int32* DecHexDigits)
    // Offset: 0x12B5694
    static void GetFormatterTables(uint64_t*& MantissaBitsTable, int*& TensExponentTable, ::Il2CppChar*& DigitLowerTable, ::Il2CppChar*& DigitUpperTable, int64_t*& TenPowersList, int*& DecHexDigits);
    // static private System.Void .cctor()
    // Offset: 0x12B5698
    static void _cctor();
    // static private System.Int64 GetTenPowerOf(System.Int32 i)
    // Offset: 0x12B56F8
    static int64_t GetTenPowerOf(int i);
    // private System.Void InitDecHexDigits(System.UInt32 value)
    // Offset: 0x12B5768
    void InitDecHexDigits(uint value);
    // private System.Void InitDecHexDigits(System.UInt64 value)
    // Offset: 0x12B59C4
    void InitDecHexDigits(uint64_t value);
    // private System.Void InitDecHexDigits(System.UInt32 hi, System.UInt64 lo)
    // Offset: 0x12B5AE8
    void InitDecHexDigits(uint hi, uint64_t lo);
    // static private System.UInt32 FastToDecHex(System.Int32 val)
    // Offset: 0x12B5830
    static uint FastToDecHex(int val);
    // static private System.UInt32 ToDecHex(System.Int32 val)
    // Offset: 0x12B5900
    static uint ToDecHex(int val);
    // static private System.Int32 FastDecHexLen(System.Int32 val)
    // Offset: 0x12B5CB4
    static int FastDecHexLen(int val);
    // static private System.Int32 DecHexLen(System.UInt32 val)
    // Offset: 0x12B5CDC
    static int DecHexLen(uint val);
    // private System.Int32 DecHexLen()
    // Offset: 0x12B5DA4
    int DecHexLen();
    // static private System.Int32 ScaleOrder(System.Int64 hi)
    // Offset: 0x12B5EC8
    static int ScaleOrder(int64_t hi);
    // private System.Int32 InitialFloatingPrecision()
    // Offset: 0x12B5F5C
    int InitialFloatingPrecision();
    // static private System.Int32 ParsePrecision(System.String format)
    // Offset: 0x12B6038
    static int ParsePrecision(::Il2CppString* format);
    // private System.Void .ctor(System.Threading.Thread current)
    // Offset: 0x12B60D4
    static NumberFormatter* New_ctor(System::Threading::Thread* current);
    // private System.Void Init(System.String format)
    // Offset: 0x12B61E0
    void Init(::Il2CppString* format);
    // private System.Void InitHex(System.UInt64 value)
    // Offset: 0x12B6308
    void InitHex(uint64_t value);
    // private System.Void Init(System.String format, System.Int32 value, System.Int32 defPrecision)
    // Offset: 0x12B6350
    void Init(::Il2CppString* format, int value, int defPrecision);
    // private System.Void Init(System.String format, System.UInt32 value, System.Int32 defPrecision)
    // Offset: 0x12B63F4
    void Init(::Il2CppString* format, uint value, int defPrecision);
    // private System.Void Init(System.String format, System.Int64 value)
    // Offset: 0x12B647C
    void Init(::Il2CppString* format, int64_t value);
    // private System.Void Init(System.String format, System.UInt64 value)
    // Offset: 0x12B6508
    void Init(::Il2CppString* format, uint64_t value);
    // private System.Void Init(System.String format, System.Double value, System.Int32 defPrecision)
    // Offset: 0x12B658C
    void Init(::Il2CppString* format, double value, int defPrecision);
    // private System.Void Init(System.String format, System.Decimal value)
    // Offset: 0x12B6994
    void Init(::Il2CppString* format, System::Decimal value);
    // private System.Void ResetCharBuf(System.Int32 size)
    // Offset: 0x12B6B08
    void ResetCharBuf(int size);
    // private System.Void Resize(System.Int32 len)
    // Offset: 0x12B6BA0
    void Resize(int len);
    // private System.Void Append(System.Char c)
    // Offset: 0x12B6C00
    void Append(::Il2CppChar c);
    // private System.Void Append(System.Char c, System.Int32 cnt)
    // Offset: 0x12B6C84
    void Append(::Il2CppChar c, int cnt);
    // private System.Void Append(System.String s)
    // Offset: 0x12B6D28
    void Append(::Il2CppString* s);
    // private System.Globalization.NumberFormatInfo GetNumberFormatInstance(System.IFormatProvider fp)
    // Offset: 0x12B6DE8
    System::Globalization::NumberFormatInfo* GetNumberFormatInstance(System::IFormatProvider* fp);
    // private System.Void set_CurrentCulture(System.Globalization.CultureInfo value)
    // Offset: 0x12B6184
    void set_CurrentCulture(System::Globalization::CultureInfo* value);
    // private System.Int32 get_IntegerDigits()
    // Offset: 0x12B6E04
    int get_IntegerDigits();
    // private System.Int32 get_DecimalDigits()
    // Offset: 0x12B6E14
    int get_DecimalDigits();
    // private System.Boolean get_IsFloatingSource()
    // Offset: 0x12B6E28
    bool get_IsFloatingSource();
    // private System.Boolean get_IsZero()
    // Offset: 0x12B6E3C
    bool get_IsZero();
    // private System.Boolean get_IsZeroInteger()
    // Offset: 0x12B6E4C
    bool get_IsZeroInteger();
    // private System.Void RoundPos(System.Int32 pos)
    // Offset: 0x12B6E6C
    void RoundPos(int pos);
    // private System.Boolean RoundDecimal(System.Int32 decimals)
    // Offset: 0x12B6FE4
    bool RoundDecimal(int decimals);
    // private System.Boolean RoundBits(System.Int32 shift)
    // Offset: 0x12B6E78
    bool RoundBits(int shift);
    // private System.Void RemoveTrailingZeros()
    // Offset: 0x12B712C
    void RemoveTrailingZeros();
    // private System.Void AddOneToDecHex()
    // Offset: 0x12B6FF8
    void AddOneToDecHex();
    // static private System.UInt32 AddOneToDecHex(System.UInt32 val)
    // Offset: 0x12B7170
    static uint AddOneToDecHex(uint val);
    // private System.Int32 CountTrailingZeros()
    // Offset: 0x12B6870
    int CountTrailingZeros();
    // static private System.Int32 CountTrailingZeros(System.UInt32 val)
    // Offset: 0x12B7218
    static int CountTrailingZeros(uint val);
    // static private System.NumberFormatter GetInstance(System.IFormatProvider fp)
    // Offset: 0x12B726C
    static System::NumberFormatter* GetInstance(System::IFormatProvider* fp);
    // private System.Void Release()
    // Offset: 0x12B73D0
    void Release();
    // static public System.String NumberToString(System.String format, System.UInt32 value, System.IFormatProvider fp)
    // Offset: 0x12B7478
    static ::Il2CppString* NumberToString(::Il2CppString* format, uint value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Int32 value, System.IFormatProvider fp)
    // Offset: 0x12B7714
    static ::Il2CppString* NumberToString(::Il2CppString* format, int value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.UInt64 value, System.IFormatProvider fp)
    // Offset: 0x12B77C8
    static ::Il2CppString* NumberToString(::Il2CppString* format, uint64_t value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Int64 value, System.IFormatProvider fp)
    // Offset: 0x12B7878
    static ::Il2CppString* NumberToString(::Il2CppString* format, int64_t value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Single value, System.IFormatProvider fp)
    // Offset: 0x12B7928
    static ::Il2CppString* NumberToString(::Il2CppString* format, float value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Double value, System.IFormatProvider fp)
    // Offset: 0x12B7C84
    static ::Il2CppString* NumberToString(::Il2CppString* format, double value, System::IFormatProvider* fp);
    // static public System.String NumberToString(System.String format, System.Decimal value, System.IFormatProvider fp)
    // Offset: 0x12B7EB0
    static ::Il2CppString* NumberToString(::Il2CppString* format, System::Decimal value, System::IFormatProvider* fp);
    // private System.String IntegerToString(System.String format, System.IFormatProvider fp)
    // Offset: 0x12B752C
    ::Il2CppString* IntegerToString(::Il2CppString* format, System::IFormatProvider* fp);
    // private System.String NumberToString(System.String format, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B7AE4
    ::Il2CppString* NumberToString(::Il2CppString* format, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatCurrency(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B7F88
    ::Il2CppString* FormatCurrency(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatDecimal(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B81F0
    ::Il2CppString* FormatDecimal(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatHexadecimal(System.Int32 precision)
    // Offset: 0x12B8820
    ::Il2CppString* FormatHexadecimal(int precision);
    // private System.String FormatFixedPoint(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B830C
    ::Il2CppString* FormatFixedPoint(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatRoundtrip(System.Double origval, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B7DAC
    ::Il2CppString* FormatRoundtrip(double origval, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatRoundtrip(System.Single origval, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B7A50
    ::Il2CppString* FormatRoundtrip(float origval, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatGeneral(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B83F4
    ::Il2CppString* FormatGeneral(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatNumber(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B8544
    ::Il2CppString* FormatNumber(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatPercent(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B86B8
    ::Il2CppString* FormatPercent(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatExponential(System.Int32 precision, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B82B8
    ::Il2CppString* FormatExponential(int precision, System::Globalization::NumberFormatInfo* nfi);
    // private System.String FormatExponential(System.Int32 precision, System.Globalization.NumberFormatInfo nfi, System.Int32 expDigits)
    // Offset: 0x12B945C
    ::Il2CppString* FormatExponential(int precision, System::Globalization::NumberFormatInfo* nfi, int expDigits);
    // private System.String FormatCustom(System.String format, System.Globalization.NumberFormatInfo nfi)
    // Offset: 0x12B8988
    ::Il2CppString* FormatCustom(::Il2CppString* format, System::Globalization::NumberFormatInfo* nfi);
    // static private System.Void ZeroTrimEnd(System.Text.StringBuilder sb, System.Boolean canEmpty)
    // Offset: 0x12BA1C0
    static void ZeroTrimEnd(System::Text::StringBuilder* sb, bool canEmpty);
    // static private System.Boolean IsZeroOnly(System.Text.StringBuilder sb)
    // Offset: 0x12BA0D0
    static bool IsZeroOnly(System::Text::StringBuilder* sb);
    // static private System.Void AppendNonNegativeNumber(System.Text.StringBuilder sb, System.Int32 v)
    // Offset: 0x12B9F24
    static void AppendNonNegativeNumber(System::Text::StringBuilder* sb, int v);
    // private System.Void AppendIntegerString(System.Int32 minLength, System.Text.StringBuilder sb)
    // Offset: 0x12BA02C
    void AppendIntegerString(int minLength, System::Text::StringBuilder* sb);
    // private System.Void AppendIntegerString(System.Int32 minLength)
    // Offset: 0x12B938C
    void AppendIntegerString(int minLength);
    // private System.Void AppendDecimalString(System.Int32 precision, System.Text.StringBuilder sb)
    // Offset: 0x12BA0B0
    void AppendDecimalString(int precision, System::Text::StringBuilder* sb);
    // private System.Void AppendDecimalString(System.Int32 precision)
    // Offset: 0x12B9100
    void AppendDecimalString(int precision);
    // private System.Void AppendIntegerStringWithGroupSeparator(System.Int32[] groups, System.String groupSeparator)
    // Offset: 0x12B8EB8
    void AppendIntegerStringWithGroupSeparator(::Array<int>* groups, ::Il2CppString* groupSeparator);
    // private System.Void AppendExponent(System.Globalization.NumberFormatInfo nfi, System.Int32 exponent, System.Int32 minDigits)
    // Offset: 0x12B9628
    void AppendExponent(System::Globalization::NumberFormatInfo* nfi, int exponent, int minDigits);
    // private System.Void AppendOneDigit(System.Int32 start)
    // Offset: 0x12B954C
    void AppendOneDigit(int start);
    // private System.Void AppendDigits(System.Int32 start, System.Int32 end)
    // Offset: 0x12B9118
    void AppendDigits(int start, int end);
    // private System.Void AppendDigits(System.Int32 start, System.Int32 end, System.Text.StringBuilder sb)
    // Offset: 0x12BA9FC
    void AppendDigits(int start, int end, System::Text::StringBuilder* sb);
    // private System.Void Multiply10(System.Int32 count)
    // Offset: 0x12B952C
    void Multiply10(int count);
    // private System.Void Divide10(System.Int32 count)
    // Offset: 0x12B9F04
    void Divide10(int count);
    // private System.NumberFormatter GetClone()
    // Offset: 0x12B93F4
    System::NumberFormatter* GetClone();
  }; // System.NumberFormatter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::NumberFormatter*, "System", "NumberFormatter");
#pragma pack(pop)
