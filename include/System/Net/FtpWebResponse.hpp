// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.FtpStatusCode
#include "System/Net/FtpStatusCode.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FtpWebRequest
  class FtpWebRequest;
  // Forward declaring type: FtpStatus
  class FtpStatus;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpWebResponse
  class FtpWebResponse : public System::Net::WebResponse {
    public:
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Uri uri
    // Size: 0x8
    // Offset: 0x20
    System::Uri* uri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // private System.Net.FtpStatusCode statusCode
    // Size: 0x4
    // Offset: 0x28
    System::Net::FtpStatusCode statusCode;
    // Field size check
    static_assert(sizeof(System::Net::FtpStatusCode) == 0x4);
    // Padding between fields: statusCode and: lastModified
    char __padding2[0x4] = {};
    // private System.DateTime lastModified
    // Size: 0x8
    // Offset: 0x30
    System::DateTime lastModified;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.String bannerMessage
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* bannerMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String welcomeMessage
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* welcomeMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String exitMessage
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* exitMessage;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String statusDescription
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* statusDescription;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String method
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* method;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x60
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: request
    char __padding9[0x7] = {};
    // private System.Net.FtpWebRequest request
    // Size: 0x8
    // Offset: 0x68
    System::Net::FtpWebRequest* request;
    // Field size check
    static_assert(sizeof(System::Net::FtpWebRequest*) == 0x8);
    // System.Int64 contentLength
    // Size: 0x8
    // Offset: 0x70
    int64_t contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // Creating value type constructor for type: FtpWebResponse
    FtpWebResponse(System::IO::Stream* stream_ = {}, System::Uri* uri_ = {}, System::Net::FtpStatusCode statusCode_ = {}, System::DateTime lastModified_ = {}, ::Il2CppString* bannerMessage_ = {}, ::Il2CppString* welcomeMessage_ = {}, ::Il2CppString* exitMessage_ = {}, ::Il2CppString* statusDescription_ = {}, ::Il2CppString* method_ = {}, bool disposed_ = {}, System::Net::FtpWebRequest* request_ = {}, int64_t contentLength_ = {}) noexcept : stream{stream_}, uri{uri_}, statusCode{statusCode_}, lastModified{lastModified_}, bannerMessage{bannerMessage_}, welcomeMessage{welcomeMessage_}, exitMessage{exitMessage_}, statusDescription{statusDescription_}, method{method_}, disposed{disposed_}, request{request_}, contentLength{contentLength_} {}
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Boolean keepAlive)
    // Offset: 0x162E22C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpWebResponse* New_ctor(System::Net::FtpWebRequest* request, System::Uri* uri, ::Il2CppString* method, bool keepAlive) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpWebResponse*, creationType>(request, uri, method, keepAlive)));
    }
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Net.FtpStatusCode statusCode, System.String statusDescription)
    // Offset: 0x162E308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpWebResponse* New_ctor(System::Net::FtpWebRequest* request, System::Uri* uri, ::Il2CppString* method, System::Net::FtpStatusCode statusCode, ::Il2CppString* statusDescription) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpWebResponse*, creationType>(request, uri, method, statusCode, statusDescription)));
    }
    // System.Void .ctor(System.Net.FtpWebRequest request, System.Uri uri, System.String method, System.Net.FtpStatus status)
    // Offset: 0x162E3F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpWebResponse* New_ctor(System::Net::FtpWebRequest* request, System::Uri* uri, ::Il2CppString* method, System::Net::FtpStatus* status) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpWebResponse*, creationType>(request, uri, method, status)));
    }
    // System.Void set_LastModified(System.DateTime value)
    // Offset: 0x162E47C
    void set_LastModified(System::DateTime value);
    // System.Void set_BannerMessage(System.String value)
    // Offset: 0x162E484
    void set_BannerMessage(::Il2CppString* value);
    // System.Void set_WelcomeMessage(System.String value)
    // Offset: 0x162E48C
    void set_WelcomeMessage(::Il2CppString* value);
    // System.Void set_StatusCode(System.Net.FtpStatusCode value)
    // Offset: 0x162E494
    void set_StatusCode(System::Net::FtpStatusCode value);
    // System.Void set_Stream(System.IO.Stream value)
    // Offset: 0x162E6C4
    void set_Stream(System::IO::Stream* value);
    // System.Void UpdateStatus(System.Net.FtpStatus status)
    // Offset: 0x162E6CC
    void UpdateStatus(System::Net::FtpStatus* status);
    // private System.Void CheckDisposed()
    // Offset: 0x162E618
    void CheckDisposed();
    // System.Boolean IsFinal()
    // Offset: 0x162E6F0
    bool IsFinal();
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x162E418
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    System::Net::WebHeaderCollection* get_Headers();
    // public override System.Uri get_ResponseUri()
    // Offset: 0x162E474
    // Implemented from: System.Net.WebResponse
    // Base method: System.Uri WebResponse::get_ResponseUri()
    System::Uri* get_ResponseUri();
    // public override System.Void Close()
    // Offset: 0x162E49C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0x162E55C
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    System::IO::Stream* GetResponseStream();
  }; // System.Net.FtpWebResponse
  #pragma pack(pop)
  static check_size<sizeof(FtpWebResponse), 112 + sizeof(int64_t)> __System_Net_FtpWebResponseSizeCheck;
  static_assert(sizeof(FtpWebResponse) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpWebResponse*, "System.Net", "FtpWebResponse");
