// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UnescapeMode
  struct UnescapeMode;
  // Forward declaring type: UriParser
  class UriParser;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.UriHelper
  class UriHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UriHelper
    UriHelper() noexcept {}
    // Get static field: static private readonly System.Char[] HexUpperChars
    static ::Array<::Il2CppChar>* _get_HexUpperChars();
    // Set static field: static private readonly System.Char[] HexUpperChars
    static void _set_HexUpperChars(::Array<::Il2CppChar>* value);
    // static System.Char[] EscapeString(System.String input, System.Int32 start, System.Int32 end, System.Char[] dest, ref System.Int32 destPos, System.Boolean isUriString, System.Char force1, System.Char force2, System.Char rsvd)
    // Offset: 0x23A47C0
    static ::Array<::Il2CppChar>* EscapeString(::Il2CppString* input, int start, int end, ::Array<::Il2CppChar>* dest, int& destPos, bool isUriString, ::Il2CppChar force1, ::Il2CppChar force2, ::Il2CppChar rsvd);
    // static private System.Char[] EnsureDestinationSize(System.Char* pStr, System.Char[] dest, System.Int32 currentInputPos, System.Int16 charsToAdd, System.Int16 minReallocateChars, ref System.Int32 destPos, System.Int32 prevInputPos)
    // Offset: 0x23A4D34
    static ::Array<::Il2CppChar>* EnsureDestinationSize(::Il2CppChar* pStr, ::Array<::Il2CppChar>* dest, int currentInputPos, int16_t charsToAdd, int16_t minReallocateChars, int& destPos, int prevInputPos);
    // static System.Char[] UnescapeString(System.String input, System.Int32 start, System.Int32 end, System.Char[] dest, ref System.Int32 destPosition, System.Char rsvd1, System.Char rsvd2, System.Char rsvd3, System.UnescapeMode unescapeMode, System.UriParser syntax, System.Boolean isQuery)
    // Offset: 0x23A5234
    static ::Array<::Il2CppChar>* UnescapeString(::Il2CppString* input, int start, int end, ::Array<::Il2CppChar>* dest, int& destPosition, ::Il2CppChar rsvd1, ::Il2CppChar rsvd2, ::Il2CppChar rsvd3, System::UnescapeMode unescapeMode, System::UriParser* syntax, bool isQuery);
    // static System.Char[] UnescapeString(System.Char* pStr, System.Int32 start, System.Int32 end, System.Char[] dest, ref System.Int32 destPosition, System.Char rsvd1, System.Char rsvd2, System.Char rsvd3, System.UnescapeMode unescapeMode, System.UriParser syntax, System.Boolean isQuery)
    // Offset: 0x23A531C
    static ::Array<::Il2CppChar>* UnescapeString(::Il2CppChar* pStr, int start, int end, ::Array<::Il2CppChar>* dest, int& destPosition, ::Il2CppChar rsvd1, ::Il2CppChar rsvd2, ::Il2CppChar rsvd3, System::UnescapeMode unescapeMode, System::UriParser* syntax, bool isQuery);
    // static System.Void MatchUTF8Sequence(System.Char* pDest, System.Char[] dest, ref System.Int32 destOffset, System.Char[] unescapedChars, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteCount, System.Boolean isQuery, System.Boolean iriParsing)
    // Offset: 0x23A5D7C
    static void MatchUTF8Sequence(::Il2CppChar* pDest, ::Array<::Il2CppChar>* dest, int& destOffset, ::Array<::Il2CppChar>* unescapedChars, int charCount, ::Array<uint8_t>* bytes, int byteCount, bool isQuery, bool iriParsing);
    // static System.Void EscapeAsciiChar(System.Char ch, System.Char[] to, ref System.Int32 pos)
    // Offset: 0x23A4E60
    static void EscapeAsciiChar(::Il2CppChar ch, ::Array<::Il2CppChar>* to, int& pos);
    // static System.Char EscapedAscii(System.Char digit, System.Char next)
    // Offset: 0x23A4FA4
    static ::Il2CppChar EscapedAscii(::Il2CppChar digit, ::Il2CppChar next);
    // static System.Boolean IsNotSafeForUnescape(System.Char ch)
    // Offset: 0x23A5CF0
    static bool IsNotSafeForUnescape(::Il2CppChar ch);
    // static private System.Boolean IsReservedUnreservedOrHash(System.Char c)
    // Offset: 0x23A5138
    static bool IsReservedUnreservedOrHash(::Il2CppChar c);
    // static System.Boolean IsUnreserved(System.Char c)
    // Offset: 0x23A5064
    static bool IsUnreserved(::Il2CppChar c);
    // static System.Boolean Is3986Unreserved(System.Char c)
    // Offset: 0x23A62C8
    static bool Is3986Unreserved(::Il2CppChar c);
    // static private System.Void .cctor()
    // Offset: 0x23A6368
    static void _cctor();
  }; // System.UriHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::UriHelper*, "System", "UriHelper");
