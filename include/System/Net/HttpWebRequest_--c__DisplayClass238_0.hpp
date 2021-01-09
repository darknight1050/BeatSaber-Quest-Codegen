// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.HttpWebRequest
#include "System/Net/HttpWebRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebAsyncResult
  class WebAsyncResult;
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  // Autogenerated type: System.Net.HttpWebRequest/<>c__DisplayClass238_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D458DC
  class HttpWebRequest::$$c__DisplayClass238_0 : public ::Il2CppObject {
    public:
    // public System.Net.WebAsyncResult aread
    // Size: 0x8
    // Offset: 0x10
    System::Net::WebAsyncResult* aread;
    // Field size check
    static_assert(sizeof(System::Net::WebAsyncResult*) == 0x8);
    // public System.Net.HttpWebRequest <>4__this
    // Size: 0x8
    // Offset: 0x18
    System::Net::HttpWebRequest* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass238_0
    $$c__DisplayClass238_0(System::Net::WebAsyncResult* aread_ = {}, System::Net::HttpWebRequest* $$4__this_ = {}) noexcept : aread{aread_}, $$4__this{$$4__this_} {}
    // System.Void <BeginGetResponse>b__0(System.Net.SimpleAsyncResult inner)
    // Offset: 0x12BA954
    void $BeginGetResponse$b__0(System::Net::SimpleAsyncResult* inner);
    // public System.Void .ctor()
    // Offset: 0x12B6BB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpWebRequest::$$c__DisplayClass238_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpWebRequest::$$c__DisplayClass238_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpWebRequest::$$c__DisplayClass238_0*, creationType>()));
    }
  }; // System.Net.HttpWebRequest/<>c__DisplayClass238_0
  static check_size<sizeof(HttpWebRequest::$$c__DisplayClass238_0), 24 + sizeof(System::Net::HttpWebRequest*)> __System_Net_HttpWebRequest_$$c__DisplayClass238_0SizeCheck;
  static_assert(sizeof(HttpWebRequest::$$c__DisplayClass238_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpWebRequest::$$c__DisplayClass238_0*, "System.Net", "HttpWebRequest/<>c__DisplayClass238_0");
#pragma pack(pop)
