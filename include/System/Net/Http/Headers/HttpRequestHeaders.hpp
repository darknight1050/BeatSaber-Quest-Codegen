// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.HttpHeaders
#include "System/Net/Http/Headers/HttpHeaders.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: HttpHeaderValueCollection`1<T>
  template<typename T>
  class HttpHeaderValueCollection_1;
  // Forward declaring type: TransferCodingHeaderValue
  class TransferCodingHeaderValue;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HttpRequestHeaders
  class HttpRequestHeaders : public System::Net::Http::Headers::HttpHeaders {
    public:
    // Nested type: System::Net::Http::Headers::HttpRequestHeaders::$$c
    class $$c;
    // private System.Nullable`1<System.Boolean> expectContinue
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Nullable_1<bool> expectContinue;
    // Creating value type constructor for type: HttpRequestHeaders
    HttpRequestHeaders(System::Nullable_1<bool> expectContinue_ = {}) noexcept : expectContinue{expectContinue_} {}
    // Creating conversion operator: operator System::Nullable_1<bool>
    constexpr operator System::Nullable_1<bool>() const noexcept {
      return expectContinue;
    }
    // public System.Net.Http.Headers.HttpHeaderValueCollection`1<System.String> get_Connection()
    // Offset: 0x157B6C4
    System::Net::Http::Headers::HttpHeaderValueCollection_1<::Il2CppString*>* get_Connection();
    // public System.Nullable`1<System.Boolean> get_ConnectionClose()
    // Offset: 0x157B720
    System::Nullable_1<bool> get_ConnectionClose();
    // System.Boolean get_ConnectionKeepAlive()
    // Offset: 0x157B878
    bool get_ConnectionKeepAlive();
    // public System.Nullable`1<System.Boolean> get_ExpectContinue()
    // Offset: 0x157B98C
    System::Nullable_1<bool> get_ExpectContinue();
    // public System.String get_Host()
    // Offset: 0x157BB34
    ::Il2CppString* get_Host();
    // public System.Net.Http.Headers.HttpHeaderValueCollection`1<System.Net.Http.Headers.TransferCodingHeaderValue> get_TransferEncoding()
    // Offset: 0x157BAD8
    System::Net::Http::Headers::HttpHeaderValueCollection_1<System::Net::Http::Headers::TransferCodingHeaderValue*>* get_TransferEncoding();
    // public System.Nullable`1<System.Boolean> get_TransferEncodingChunked()
    // Offset: 0x157BB90
    System::Nullable_1<bool> get_TransferEncodingChunked();
    // System.Void AddHeaders(System.Net.Http.Headers.HttpRequestHeaders headers)
    // Offset: 0x157BCDC
    void AddHeaders(System::Net::Http::Headers::HttpRequestHeaders* headers);
    // System.Void .ctor()
    // Offset: 0x157B654
    // Implemented from: System.Net.Http.Headers.HttpHeaders
    // Base method: System.Void HttpHeaders::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestHeaders* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HttpRequestHeaders::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestHeaders*, creationType>()));
    }
  }; // System.Net.Http.Headers.HttpRequestHeaders
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpRequestHeaders*, "System.Net.Http.Headers", "HttpRequestHeaders");
