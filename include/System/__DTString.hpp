// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: DateTimeFormatInfo
  class DateTimeFormatInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TokenType
  struct TokenType;
  // Forward declaring type: DTSubString
  struct DTSubString;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x21
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.__DTString
  struct __DTString/*, public System::ValueType*/ {
    public:
    // System.String Value
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* Value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Int32 Index
    // Size: 0x4
    // Offset: 0x8
    int Index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 len
    // Size: 0x4
    // Offset: 0xC
    int len;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Char m_current
    // Size: 0x2
    // Offset: 0x10
    ::Il2CppChar m_current;
    // Field size check
    static_assert(sizeof(::Il2CppChar) == 0x2);
    // Padding between fields: m_current and: m_info
    char __padding3[0x6] = {};
    // private System.Globalization.CompareInfo m_info
    // Size: 0x8
    // Offset: 0x18
    System::Globalization::CompareInfo* m_info;
    // Field size check
    static_assert(sizeof(System::Globalization::CompareInfo*) == 0x8);
    // private System.Boolean m_checkDigitToken
    // Size: 0x1
    // Offset: 0x20
    bool m_checkDigitToken;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: __DTString
    constexpr __DTString(::Il2CppString* Value_ = {}, int Index_ = {}, int len_ = {}, ::Il2CppChar m_current_ = {}, System::Globalization::CompareInfo* m_info_ = {}, bool m_checkDigitToken_ = {}) noexcept : Value{Value_}, Index{Index_}, len{len_}, m_current{m_current_}, m_info{m_info_}, m_checkDigitToken{m_checkDigitToken_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static private System.Char[] WhiteSpaceChecks
    static ::Array<::Il2CppChar>* _get_WhiteSpaceChecks();
    // Set static field: static private System.Char[] WhiteSpaceChecks
    static void _set_WhiteSpaceChecks(::Array<::Il2CppChar>* value);
    // System.Void .ctor(System.String str, System.Globalization.DateTimeFormatInfo dtfi, System.Boolean checkDigitToken)
    // Offset: 0xF19040
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    __DTString(::Il2CppString* str, System::Globalization::DateTimeFormatInfo* dtfi, bool checkDigitToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::__DTString::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(str), ::il2cpp_utils::ExtractType(dtfi), ::il2cpp_utils::ExtractType(checkDigitToken)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, str, dtfi, checkDigitToken);
    }
    // System.Void .ctor(System.String str, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0xF19070
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    __DTString(::Il2CppString* str, System::Globalization::DateTimeFormatInfo* dtfi) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::__DTString::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(str), ::il2cpp_utils::ExtractType(dtfi)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, str, dtfi);
    }
    // System.Globalization.CompareInfo get_CompareInfo()
    // Offset: 0xF19078
    System::Globalization::CompareInfo* get_CompareInfo();
    // System.Boolean GetNext()
    // Offset: 0xF19080
    bool GetNext();
    // System.Boolean AtEnd()
    // Offset: 0xF19088
    bool AtEnd();
    // System.Boolean Advance(System.Int32 count)
    // Offset: 0xF19098
    bool Advance(int count);
    // System.Void GetRegularToken(out System.TokenType tokenType, out System.Int32 tokenValue, System.Globalization.DateTimeFormatInfo dtfi)
    // Offset: 0xF190A0
    void GetRegularToken(System::TokenType& tokenType, int& tokenValue, System::Globalization::DateTimeFormatInfo* dtfi);
    // System.TokenType GetSeparatorToken(System.Globalization.DateTimeFormatInfo dtfi, out System.Int32 indexBeforeSeparator, out System.Char charBeforeSeparator)
    // Offset: 0xF190A8
    System::TokenType GetSeparatorToken(System::Globalization::DateTimeFormatInfo* dtfi, int& indexBeforeSeparator, ::Il2CppChar& charBeforeSeparator);
    // System.Boolean MatchSpecifiedWord(System.String target)
    // Offset: 0xF190B0
    bool MatchSpecifiedWord(::Il2CppString* target);
    // System.Boolean MatchSpecifiedWord(System.String target, System.Int32 endIndex)
    // Offset: 0xF190B8
    bool MatchSpecifiedWord(::Il2CppString* target, int endIndex);
    // System.Boolean MatchSpecifiedWords(System.String target, System.Boolean checkWordBoundary, ref System.Int32 matchLength)
    // Offset: 0xF190C0
    bool MatchSpecifiedWords(::Il2CppString* target, bool checkWordBoundary, int& matchLength);
    // System.Boolean Match(System.String str)
    // Offset: 0xF190CC
    bool Match(::Il2CppString* str);
    // System.Boolean Match(System.Char ch)
    // Offset: 0xF190D4
    bool Match(::Il2CppChar ch);
    // System.Int32 MatchLongestWords(System.String[] words, ref System.Int32 maxMatchStrLen)
    // Offset: 0xF190DC
    int MatchLongestWords(::Array<::Il2CppString*>* words, int& maxMatchStrLen);
    // System.Int32 GetRepeatCount()
    // Offset: 0xF190E4
    int GetRepeatCount();
    // System.Boolean GetNextDigit()
    // Offset: 0xF190EC
    bool GetNextDigit();
    // System.Char GetChar()
    // Offset: 0xF190F4
    ::Il2CppChar GetChar();
    // System.Int32 GetDigit()
    // Offset: 0xF190FC
    int GetDigit();
    // System.Void SkipWhiteSpaces()
    // Offset: 0xF19104
    void SkipWhiteSpaces();
    // System.Boolean SkipWhiteSpaceCurrent()
    // Offset: 0xF1910C
    bool SkipWhiteSpaceCurrent();
    // System.Void TrimTail()
    // Offset: 0xF19114
    void TrimTail();
    // System.Void RemoveTrailingInQuoteSpaces()
    // Offset: 0xF1911C
    void RemoveTrailingInQuoteSpaces();
    // System.Void RemoveLeadingInQuoteSpaces()
    // Offset: 0xF19124
    void RemoveLeadingInQuoteSpaces();
    // System.DTSubString GetSubString()
    // Offset: 0xF1912C
    System::DTSubString GetSubString();
    // System.Void ConsumeSubString(System.DTSubString sub)
    // Offset: 0xF19134
    void ConsumeSubString(System::DTSubString sub);
    // static private System.Void .cctor()
    // Offset: 0x231B634
    static void _cctor();
  }; // System.__DTString
  #pragma pack(pop)
  static check_size<sizeof(__DTString), 32 + sizeof(bool)> __System___DTStringSizeCheck;
  static_assert(sizeof(__DTString) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(System::__DTString, "System", "__DTString");
