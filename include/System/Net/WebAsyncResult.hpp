// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.SimpleAsyncResult
#include "System/Net/SimpleAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IAsyncResult because it is already included!
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpWebResponse
  class HttpWebResponse;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebAsyncResult
  // [] Offset: FFFFFFFF
  class WebAsyncResult : public System::Net::SimpleAsyncResult {
    public:
    // private System.Int32 nbytes
    // Size: 0x4
    // Offset: 0x4C
    int nbytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IAsyncResult innerAsyncResult
    // Size: 0x8
    // Offset: 0x50
    System::IAsyncResult* innerAsyncResult;
    // Field size check
    static_assert(sizeof(System::IAsyncResult*) == 0x8);
    // private System.Net.HttpWebResponse response
    // Size: 0x8
    // Offset: 0x58
    System::Net::HttpWebResponse* response;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebResponse*) == 0x8);
    // private System.IO.Stream writeStream
    // Size: 0x8
    // Offset: 0x60
    System::IO::Stream* writeStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x68
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 offset
    // Size: 0x4
    // Offset: 0x70
    int offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 size
    // Size: 0x4
    // Offset: 0x74
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean EndCalled
    // Size: 0x1
    // Offset: 0x78
    bool EndCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean AsyncWriteAll
    // Size: 0x1
    // Offset: 0x79
    bool AsyncWriteAll;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Net.HttpWebRequest AsyncObject
    // Size: 0x8
    // Offset: 0x80
    System::Net::HttpWebRequest* AsyncObject;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // Creating value type constructor for type: WebAsyncResult
    WebAsyncResult(int nbytes_ = {}, System::IAsyncResult* innerAsyncResult_ = {}, System::Net::HttpWebResponse* response_ = {}, System::IO::Stream* writeStream_ = {}, ::Array<uint8_t>* buffer_ = {}, int offset_ = {}, int size_ = {}, bool EndCalled_ = {}, bool AsyncWriteAll_ = {}, System::Net::HttpWebRequest* AsyncObject_ = {}) noexcept : nbytes{nbytes_}, innerAsyncResult{innerAsyncResult_}, response{response_}, writeStream{writeStream_}, buffer{buffer_}, offset{offset_}, size{size_}, EndCalled{EndCalled_}, AsyncWriteAll{AsyncWriteAll_}, AsyncObject{AsyncObject_} {}
    // public System.Void .ctor(System.Net.HttpWebRequest request, System.AsyncCallback cb, System.Object state)
    // Offset: 0x1404708
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebAsyncResult* New_ctor(System::Net::HttpWebRequest* request, System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebAsyncResult*, creationType>(request, cb, state)));
    }
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x140473C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state, ::Array<uint8_t>* buffer, int offset, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebAsyncResult*, creationType>(cb, state, buffer, offset, size)));
    }
    // System.Void Reset()
    // Offset: 0x140477C
    void Reset();
    // System.Void SetCompleted(System.Boolean synch, System.Int32 nbytes)
    // Offset: 0x1404790
    void SetCompleted(bool synch, int nbytes);
    // System.Void SetCompleted(System.Boolean synch, System.IO.Stream writeStream)
    // Offset: 0x14047A0
    void SetCompleted(bool synch, System::IO::Stream* writeStream);
    // System.Void SetCompleted(System.Boolean synch, System.Net.HttpWebResponse response)
    // Offset: 0x14047B0
    void SetCompleted(bool synch, System::Net::HttpWebResponse* response);
    // System.Void DoCallback()
    // Offset: 0x14047C0
    void DoCallback();
    // System.Int32 get_NBytes()
    // Offset: 0x14047C8
    int get_NBytes();
    // System.Void set_NBytes(System.Int32 value)
    // Offset: 0x14047D0
    void set_NBytes(int value);
    // System.IAsyncResult get_InnerAsyncResult()
    // Offset: 0x14047D8
    System::IAsyncResult* get_InnerAsyncResult();
    // System.Void set_InnerAsyncResult(System.IAsyncResult value)
    // Offset: 0x14047E0
    void set_InnerAsyncResult(System::IAsyncResult* value);
    // System.IO.Stream get_WriteStream()
    // Offset: 0x14047E8
    System::IO::Stream* get_WriteStream();
    // System.Net.HttpWebResponse get_Response()
    // Offset: 0x14047F0
    System::Net::HttpWebResponse* get_Response();
    // System.Byte[] get_Buffer()
    // Offset: 0x14047F8
    ::Array<uint8_t>* get_Buffer();
    // System.Int32 get_Offset()
    // Offset: 0x1404800
    int get_Offset();
    // System.Int32 get_Size()
    // Offset: 0x1404808
    int get_Size();
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x1404700
    // Implemented from: System.Net.SimpleAsyncResult
    // Base method: System.Void SimpleAsyncResult::.ctor(System.AsyncCallback cb, System.Object state)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebAsyncResult* New_ctor(System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebAsyncResult*, creationType>(cb, state)));
    }
  }; // System.Net.WebAsyncResult
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebAsyncResult*, "System.Net", "WebAsyncResult");
