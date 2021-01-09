// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CookieCollection
  class CookieCollection;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Collections::Specialized
namespace System::Collections::Specialized {
  // Forward declaring type: NameValueCollection
  class NameValueCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x83
  // Autogenerated type: System.Net.HttpListenerRequest
  // [] Offset: FFFFFFFF
  class HttpListenerRequest : public ::Il2CppObject {
    public:
    // private System.String[] accept_types
    // Size: 0x8
    // Offset: 0x10
    ::Array<::Il2CppString*>* accept_types;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int64 content_length
    // Size: 0x8
    // Offset: 0x18
    int64_t content_length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean cl_set
    // Size: 0x1
    // Offset: 0x20
    bool cl_set;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cl_set and: cookies
    char __padding2[0x7] = {};
    // private System.Net.CookieCollection cookies
    // Size: 0x8
    // Offset: 0x28
    System::Net::CookieCollection* cookies;
    // Field size check
    static_assert(sizeof(System::Net::CookieCollection*) == 0x8);
    // private System.Net.WebHeaderCollection headers
    // Size: 0x8
    // Offset: 0x30
    System::Net::WebHeaderCollection* headers;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // private System.String method
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* method;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.IO.Stream input_stream
    // Size: 0x8
    // Offset: 0x40
    System::IO::Stream* input_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Version version
    // Size: 0x8
    // Offset: 0x48
    System::Version* version;
    // Field size check
    static_assert(sizeof(System::Version*) == 0x8);
    // private System.Collections.Specialized.NameValueCollection query_string
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Specialized::NameValueCollection* query_string;
    // Field size check
    static_assert(sizeof(System::Collections::Specialized::NameValueCollection*) == 0x8);
    // private System.String raw_url
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* raw_url;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Uri url
    // Size: 0x8
    // Offset: 0x60
    System::Uri* url;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Uri referrer
    // Size: 0x8
    // Offset: 0x68
    System::Uri* referrer;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.String[] user_languages
    // Size: 0x8
    // Offset: 0x70
    ::Array<::Il2CppString*>* user_languages;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Net.HttpListenerContext context
    // Size: 0x8
    // Offset: 0x78
    System::Net::HttpListenerContext* context;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerContext*) == 0x8);
    // private System.Boolean is_chunked
    // Size: 0x1
    // Offset: 0x80
    bool is_chunked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean ka_set
    // Size: 0x1
    // Offset: 0x81
    bool ka_set;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean keep_alive
    // Size: 0x1
    // Offset: 0x82
    bool keep_alive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HttpListenerRequest
    HttpListenerRequest(::Array<::Il2CppString*>* accept_types_ = {}, int64_t content_length_ = {}, bool cl_set_ = {}, System::Net::CookieCollection* cookies_ = {}, System::Net::WebHeaderCollection* headers_ = {}, ::Il2CppString* method_ = {}, System::IO::Stream* input_stream_ = {}, System::Version* version_ = {}, System::Collections::Specialized::NameValueCollection* query_string_ = {}, ::Il2CppString* raw_url_ = {}, System::Uri* url_ = {}, System::Uri* referrer_ = {}, ::Array<::Il2CppString*>* user_languages_ = {}, System::Net::HttpListenerContext* context_ = {}, bool is_chunked_ = {}, bool ka_set_ = {}, bool keep_alive_ = {}) noexcept : accept_types{accept_types_}, content_length{content_length_}, cl_set{cl_set_}, cookies{cookies_}, headers{headers_}, method{method_}, input_stream{input_stream_}, version{version_}, query_string{query_string_}, raw_url{raw_url_}, url{url_}, referrer{referrer_}, user_languages{user_languages_}, context{context_}, is_chunked{is_chunked_}, ka_set{ka_set_}, keep_alive{keep_alive_} {}
    // Get static field: static private System.Byte[] _100continue
    static ::Array<uint8_t>* _get__100continue();
    // Set static field: static private System.Byte[] _100continue
    static void _set__100continue(::Array<uint8_t>* value);
    // Get static field: static private System.Char[] separators
    static ::Array<::Il2CppChar>* _get_separators();
    // Set static field: static private System.Char[] separators
    static void _set_separators(::Array<::Il2CppChar>* value);
    // System.Void .ctor(System.Net.HttpListenerContext context)
    // Offset: 0x12B002C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListenerRequest* New_ctor(System::Net::HttpListenerContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListenerRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListenerRequest*, creationType>(context)));
    }
    // System.Void SetRequestLine(System.String req)
    // Offset: 0x12ABCA4
    void SetRequestLine(::Il2CppString* req);
    // private System.Void CreateQueryString(System.String query)
    // Offset: 0x12B0DC8
    void CreateQueryString(::Il2CppString* query);
    // static private System.Boolean MaybeUri(System.String s)
    // Offset: 0x12B1048
    static bool MaybeUri(::Il2CppString* s);
    // static private System.Boolean IsPredefinedScheme(System.String scheme)
    // Offset: 0x12B1100
    static bool IsPredefinedScheme(::Il2CppString* scheme);
    // System.Void FinishInitialization()
    // Offset: 0x12AB154
    void FinishInitialization();
    // static System.String Unquote(System.String str)
    // Offset: 0x12B13EC
    static ::Il2CppString* Unquote(::Il2CppString* str);
    // System.Void AddHeader(System.String header)
    // Offset: 0x12ABFE8
    void AddHeader(::Il2CppString* header);
    // System.Boolean FlushInput()
    // Offset: 0x12AD0C8
    bool FlushInput();
    // public System.Boolean get_HasEntityBody()
    // Offset: 0x12B145C
    bool get_HasEntityBody();
    // public System.Collections.Specialized.NameValueCollection get_Headers()
    // Offset: 0x12B154C
    System::Collections::Specialized::NameValueCollection* get_Headers();
    // public System.IO.Stream get_InputStream()
    // Offset: 0x12B1480
    System::IO::Stream* get_InputStream();
    // public System.Boolean get_IsSecureConnection()
    // Offset: 0x12B1308
    bool get_IsSecureConnection();
    // public System.Boolean get_KeepAlive()
    // Offset: 0x12ACF50
    bool get_KeepAlive();
    // public System.Net.IPEndPoint get_LocalEndPoint()
    // Offset: 0x12B1330
    System::Net::IPEndPoint* get_LocalEndPoint();
    // public System.Version get_ProtocolVersion()
    // Offset: 0x12B1554
    System::Version* get_ProtocolVersion();
    // public System.Uri get_Url()
    // Offset: 0x12B155C
    System::Uri* get_Url();
    // public System.String get_UserHostAddress()
    // Offset: 0x12B12E4
    ::Il2CppString* get_UserHostAddress();
    // public System.String get_UserHostName()
    // Offset: 0x12B1288
    ::Il2CppString* get_UserHostName();
    // static private System.Void .cctor()
    // Offset: 0x12B1564
    static void _cctor();
  }; // System.Net.HttpListenerRequest
  static check_size<sizeof(HttpListenerRequest), 130 + sizeof(bool)> __System_Net_HttpListenerRequestSizeCheck;
  static_assert(sizeof(HttpListenerRequest) == 0x83);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerRequest*, "System.Net", "HttpListenerRequest");
#pragma pack(pop)
