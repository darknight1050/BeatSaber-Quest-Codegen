// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UriSyntaxFlags
#include "System/UriSyntaxFlags.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: UriFormatException
  class UriFormatException;
  // Forward declaring type: UriComponents
  struct UriComponents;
  // Forward declaring type: UriFormat
  struct UriFormat;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.UriParser
  // [] Offset: FFFFFFFF
  class UriParser : public ::Il2CppObject {
    public:
    // Nested type: System::UriParser::UriQuirksVersion
    struct UriQuirksVersion;
    // Nested type: System::UriParser::BuiltInUriParser
    class BuiltInUriParser;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.UriParser/UriQuirksVersion
    // [] Offset: FFFFFFFF
    struct UriQuirksVersion/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: UriQuirksVersion
      constexpr UriQuirksVersion(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.UriParser/UriQuirksVersion V2
      static constexpr const int V2 = 2;
      // Get static field: static public System.UriParser/UriQuirksVersion V2
      static System::UriParser::UriQuirksVersion _get_V2();
      // Set static field: static public System.UriParser/UriQuirksVersion V2
      static void _set_V2(System::UriParser::UriQuirksVersion value);
      // static field const value: static public System.UriParser/UriQuirksVersion V3
      static constexpr const int V3 = 3;
      // Get static field: static public System.UriParser/UriQuirksVersion V3
      static System::UriParser::UriQuirksVersion _get_V3();
      // Set static field: static public System.UriParser/UriQuirksVersion V3
      static void _set_V3(System::UriParser::UriQuirksVersion value);
    }; // System.UriParser/UriQuirksVersion
    #pragma pack(pop)
    static check_size<sizeof(UriParser::UriQuirksVersion), 0 + sizeof(int)> __System_UriParser_UriQuirksVersionSizeCheck;
    static_assert(sizeof(UriParser::UriQuirksVersion) == 0x4);
    // private System.UriSyntaxFlags m_Flags
    // Size: 0x4
    // Offset: 0x10
    System::UriSyntaxFlags m_Flags;
    // Field size check
    static_assert(sizeof(System::UriSyntaxFlags) == 0x4);
    // private System.UriSyntaxFlags m_UpdatableFlags
    // Size: 0x4
    // Offset: 0x14
    System::UriSyntaxFlags m_UpdatableFlags;
    // Field size check
    static_assert(sizeof(System::UriSyntaxFlags) == 0x4);
    // private System.Boolean m_UpdatableFlagsUsed
    // Size: 0x1
    // Offset: 0x18
    bool m_UpdatableFlagsUsed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UpdatableFlagsUsed and: m_Port
    char __padding2[0x3] = {};
    // private System.Int32 m_Port
    // Size: 0x4
    // Offset: 0x1C
    int m_Port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String m_Scheme
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_Scheme;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UriParser
    UriParser(System::UriSyntaxFlags m_Flags_ = {}, System::UriSyntaxFlags m_UpdatableFlags_ = {}, bool m_UpdatableFlagsUsed_ = {}, int m_Port_ = {}, ::Il2CppString* m_Scheme_ = {}) noexcept : m_Flags{m_Flags_}, m_UpdatableFlags{m_UpdatableFlags_}, m_UpdatableFlagsUsed{m_UpdatableFlagsUsed_}, m_Port{m_Port_}, m_Scheme{m_Scheme_} {}
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_Table
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::UriParser*>* _get_m_Table();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_Table
    static void _set_m_Table(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::UriParser*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_TempTable
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, System::UriParser*>* _get_m_TempTable();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.UriParser> m_TempTable
    static void _set_m_TempTable(System::Collections::Generic::Dictionary_2<::Il2CppString*, System::UriParser*>* value);
    // Get static field: static System.UriParser HttpUri
    static System::UriParser* _get_HttpUri();
    // Set static field: static System.UriParser HttpUri
    static void _set_HttpUri(System::UriParser* value);
    // Get static field: static System.UriParser HttpsUri
    static System::UriParser* _get_HttpsUri();
    // Set static field: static System.UriParser HttpsUri
    static void _set_HttpsUri(System::UriParser* value);
    // Get static field: static System.UriParser WsUri
    static System::UriParser* _get_WsUri();
    // Set static field: static System.UriParser WsUri
    static void _set_WsUri(System::UriParser* value);
    // Get static field: static System.UriParser WssUri
    static System::UriParser* _get_WssUri();
    // Set static field: static System.UriParser WssUri
    static void _set_WssUri(System::UriParser* value);
    // Get static field: static System.UriParser FtpUri
    static System::UriParser* _get_FtpUri();
    // Set static field: static System.UriParser FtpUri
    static void _set_FtpUri(System::UriParser* value);
    // Get static field: static System.UriParser FileUri
    static System::UriParser* _get_FileUri();
    // Set static field: static System.UriParser FileUri
    static void _set_FileUri(System::UriParser* value);
    // Get static field: static System.UriParser GopherUri
    static System::UriParser* _get_GopherUri();
    // Set static field: static System.UriParser GopherUri
    static void _set_GopherUri(System::UriParser* value);
    // Get static field: static System.UriParser NntpUri
    static System::UriParser* _get_NntpUri();
    // Set static field: static System.UriParser NntpUri
    static void _set_NntpUri(System::UriParser* value);
    // Get static field: static System.UriParser NewsUri
    static System::UriParser* _get_NewsUri();
    // Set static field: static System.UriParser NewsUri
    static void _set_NewsUri(System::UriParser* value);
    // Get static field: static System.UriParser MailToUri
    static System::UriParser* _get_MailToUri();
    // Set static field: static System.UriParser MailToUri
    static void _set_MailToUri(System::UriParser* value);
    // Get static field: static System.UriParser UuidUri
    static System::UriParser* _get_UuidUri();
    // Set static field: static System.UriParser UuidUri
    static void _set_UuidUri(System::UriParser* value);
    // Get static field: static System.UriParser TelnetUri
    static System::UriParser* _get_TelnetUri();
    // Set static field: static System.UriParser TelnetUri
    static void _set_TelnetUri(System::UriParser* value);
    // Get static field: static System.UriParser LdapUri
    static System::UriParser* _get_LdapUri();
    // Set static field: static System.UriParser LdapUri
    static void _set_LdapUri(System::UriParser* value);
    // Get static field: static System.UriParser NetTcpUri
    static System::UriParser* _get_NetTcpUri();
    // Set static field: static System.UriParser NetTcpUri
    static void _set_NetTcpUri(System::UriParser* value);
    // Get static field: static System.UriParser NetPipeUri
    static System::UriParser* _get_NetPipeUri();
    // Set static field: static System.UriParser NetPipeUri
    static void _set_NetPipeUri(System::UriParser* value);
    // Get static field: static System.UriParser VsMacrosUri
    static System::UriParser* _get_VsMacrosUri();
    // Set static field: static System.UriParser VsMacrosUri
    static void _set_VsMacrosUri(System::UriParser* value);
    // Get static field: static private readonly System.UriParser/UriQuirksVersion s_QuirksVersion
    static System::UriParser::UriQuirksVersion _get_s_QuirksVersion();
    // Set static field: static private readonly System.UriParser/UriQuirksVersion s_QuirksVersion
    static void _set_s_QuirksVersion(System::UriParser::UriQuirksVersion value);
    // Get static field: static private readonly System.UriSyntaxFlags HttpSyntaxFlags
    static System::UriSyntaxFlags _get_HttpSyntaxFlags();
    // Set static field: static private readonly System.UriSyntaxFlags HttpSyntaxFlags
    static void _set_HttpSyntaxFlags(System::UriSyntaxFlags value);
    // Get static field: static private readonly System.UriSyntaxFlags FileSyntaxFlags
    static System::UriSyntaxFlags _get_FileSyntaxFlags();
    // Set static field: static private readonly System.UriSyntaxFlags FileSyntaxFlags
    static void _set_FileSyntaxFlags(System::UriSyntaxFlags value);
    // System.String get_SchemeName()
    // Offset: 0x214B2C4
    ::Il2CppString* get_SchemeName();
    // System.Int32 get_DefaultPort()
    // Offset: 0x214B2CC
    int get_DefaultPort();
    // protected System.UriParser OnNewUri()
    // Offset: 0x214B2D4
    System::UriParser* OnNewUri_NEW();
    // protected System.Void InitializeAndValidate(System.Uri uri, out System.UriFormatException parsingError)
    // Offset: 0x214B2D8
    void InitializeAndValidate_NEW(System::Uri* uri, System::UriFormatException*& parsingError);
    // protected System.String Resolve(System.Uri baseUri, System.Uri relativeUri, out System.UriFormatException parsingError)
    // Offset: 0x214B30C
    ::Il2CppString* Resolve_NEW(System::Uri* baseUri, System::Uri* relativeUri, System::UriFormatException*& parsingError);
    // protected System.String GetComponents(System.Uri uri, System.UriComponents components, System.UriFormat format)
    // Offset: 0x214B50C
    ::Il2CppString* GetComponents_NEW(System::Uri* uri, System::UriComponents components, System::UriFormat format);
    // protected System.Boolean IsWellFormedOriginalString(System.Uri uri)
    // Offset: 0x214B748
    bool IsWellFormedOriginalString_NEW(System::Uri* uri);
    // static System.Boolean get_ShouldUseLegacyV2Quirks()
    // Offset: 0x214B138
    static bool get_ShouldUseLegacyV2Quirks();
    // static private System.Void .cctor()
    // Offset: 0x214B764
    static void _cctor();
    // System.UriSyntaxFlags get_Flags()
    // Offset: 0x214BECC
    System::UriSyntaxFlags get_Flags();
    // System.Boolean NotAny(System.UriSyntaxFlags flags)
    // Offset: 0x2149680
    bool NotAny(System::UriSyntaxFlags flags);
    // System.Boolean InFact(System.UriSyntaxFlags flags)
    // Offset: 0x2149660
    bool InFact(System::UriSyntaxFlags flags);
    // System.Boolean IsAllSet(System.UriSyntaxFlags flags)
    // Offset: 0x214BF34
    bool IsAllSet(System::UriSyntaxFlags flags);
    // private System.Boolean IsFullMatch(System.UriSyntaxFlags flags, System.UriSyntaxFlags expected)
    // Offset: 0x214BED4
    bool IsFullMatch(System::UriSyntaxFlags flags, System::UriSyntaxFlags expected);
    // System.Void .ctor(System.UriSyntaxFlags flags)
    // Offset: 0x214BF3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UriParser* New_ctor(System::UriSyntaxFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::UriParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UriParser*, creationType>(flags)));
    }
    // static System.UriParser FindOrFetchAsUnknownV1Syntax(System.String lwrCaseScheme)
    // Offset: 0x214BFB0
    static System::UriParser* FindOrFetchAsUnknownV1Syntax(::Il2CppString* lwrCaseScheme);
    // static System.UriParser GetSyntax(System.String lwrCaseScheme)
    // Offset: 0x2149584
    static System::UriParser* GetSyntax(::Il2CppString* lwrCaseScheme);
    // System.Boolean get_IsSimple()
    // Offset: 0x214C238
    bool get_IsSimple();
    // System.UriParser InternalOnNewUri()
    // Offset: 0x214C244
    System::UriParser* InternalOnNewUri();
    // System.Void InternalValidate(System.Uri thisUri, out System.UriFormatException parsingError)
    // Offset: 0x214C294
    void InternalValidate(System::Uri* thisUri, System::UriFormatException*& parsingError);
    // System.String InternalResolve(System.Uri thisBaseUri, System.Uri uriLink, out System.UriFormatException parsingError)
    // Offset: 0x214C2A0
    ::Il2CppString* InternalResolve(System::Uri* thisBaseUri, System::Uri* uriLink, System::UriFormatException*& parsingError);
    // System.String InternalGetComponents(System.Uri thisUri, System.UriComponents uriComponents, System.UriFormat uriFormat)
    // Offset: 0x214C2AC
    ::Il2CppString* InternalGetComponents(System::Uri* thisUri, System::UriComponents uriComponents, System::UriFormat uriFormat);
    // System.Boolean InternalIsWellFormedOriginalString(System.Uri thisUri)
    // Offset: 0x214C2B8
    bool InternalIsWellFormedOriginalString(System::Uri* thisUri);
  }; // System.UriParser
  #pragma pack(pop)
  static check_size<sizeof(UriParser), 32 + sizeof(::Il2CppString*)> __System_UriParserSizeCheck;
  static_assert(sizeof(UriParser) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::UriParser*, "System", "UriParser");
DEFINE_IL2CPP_ARG_TYPE(System::UriParser::UriQuirksVersion, "System", "UriParser/UriQuirksVersion");
