// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: FtpWebResponse
  class FtpWebResponse;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpAsyncResult
  // [] Offset: FFFFFFFF
  class FtpAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // private System.Net.FtpWebResponse response
    // Size: 0x8
    // Offset: 0x10
    System::Net::FtpWebResponse* response;
    // Field size check
    static_assert(sizeof(System::Net::FtpWebResponse*) == 0x8);
    // private System.Threading.ManualResetEvent waitHandle
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ManualResetEvent* waitHandle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Exception exception
    // Size: 0x8
    // Offset: 0x20
    System::Exception* exception;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private System.AsyncCallback callback
    // Size: 0x8
    // Offset: 0x28
    System::AsyncCallback* callback;
    // Field size check
    static_assert(sizeof(System::AsyncCallback*) == 0x8);
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x30
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Object state
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x40
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean synch
    // Size: 0x1
    // Offset: 0x41
    bool synch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: synch and: locker
    char __padding7[0x6] = {};
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: FtpAsyncResult
    FtpAsyncResult(System::Net::FtpWebResponse* response_ = {}, System::Threading::ManualResetEvent* waitHandle_ = {}, System::Exception* exception_ = {}, System::AsyncCallback* callback_ = {}, System::IO::Stream* stream_ = {}, ::Il2CppObject* state_ = {}, bool completed_ = {}, bool synch_ = {}, ::Il2CppObject* locker_ = {}) noexcept : response{response_}, waitHandle{waitHandle_}, exception{exception_}, callback{callback_}, stream{stream_}, state{state_}, completed{completed_}, synch{synch_}, locker{locker_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // public System.Void .ctor(System.AsyncCallback callback, System.Object state)
    // Offset: 0x14D5908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpAsyncResult* New_ctor(System::AsyncCallback* callback, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpAsyncResult*, creationType>(callback, state)));
    }
    // public System.Object get_AsyncState()
    // Offset: 0x14D598C
    ::Il2CppObject* get_AsyncState_NEW();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x14D5994
    System::Threading::WaitHandle* get_AsyncWaitHandle_NEW();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x14D5A7C
    bool get_CompletedSynchronously_NEW();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x14D5A84
    bool get_IsCompleted_NEW();
    // System.Boolean get_GotException()
    // Offset: 0x14D5B18
    bool get_GotException();
    // System.Exception get_Exception()
    // Offset: 0x14D5B28
    System::Exception* get_Exception();
    // System.Net.FtpWebResponse get_Response()
    // Offset: 0x14D5B30
    System::Net::FtpWebResponse* get_Response();
    // System.IO.Stream get_Stream()
    // Offset: 0x14D5B38
    System::IO::Stream* get_Stream();
    // System.Void set_Stream(System.IO.Stream value)
    // Offset: 0x14D5B40
    void set_Stream(System::IO::Stream* value);
    // System.Boolean WaitUntilComplete(System.Int32 timeout, System.Boolean exitContext)
    // Offset: 0x14D5B48
    bool WaitUntilComplete(int timeout, bool exitContext);
    // System.Void SetCompleted(System.Boolean synch, System.Exception exc, System.Net.FtpWebResponse response)
    // Offset: 0x14D5BB0
    void SetCompleted(bool synch, System::Exception* exc, System::Net::FtpWebResponse* response);
    // System.Void SetCompleted(System.Boolean synch, System.Net.FtpWebResponse response)
    // Offset: 0x14D5D34
    void SetCompleted(bool synch, System::Net::FtpWebResponse* response);
    // System.Void SetCompleted(System.Boolean synch, System.Exception exc)
    // Offset: 0x14D5D44
    void SetCompleted(bool synch, System::Exception* exc);
    // System.Void DoCallback()
    // Offset: 0x14D5C6C
    void DoCallback();
  }; // System.Net.FtpAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(FtpAsyncResult), 72 + sizeof(::Il2CppObject*)> __System_Net_FtpAsyncResultSizeCheck;
  static_assert(sizeof(FtpAsyncResult) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpAsyncResult*, "System.Net", "FtpAsyncResult");
