// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebExceptionStatus
#include "System/Net/WebExceptionStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: Uri
  class Uri;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: IWebConnectionState
  class IWebConnectionState;
  // Forward declaring type: WebConnectionData
  class WebConnectionData;
  // Forward declaring type: MonoChunkStream
  class MonoChunkStream;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Queue
  class Queue;
}
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MonoTlsStream
  class MonoTlsStream;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnection
  class WebConnection : public ::Il2CppObject {
    public:
    // Nested type: System::Net::WebConnection::NtlmAuthState
    struct NtlmAuthState;
    // Nested type: System::Net::WebConnection::AbortHelper
    class AbortHelper;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Net.WebConnection/NtlmAuthState
    struct NtlmAuthState/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: NtlmAuthState
      constexpr NtlmAuthState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Net.WebConnection/NtlmAuthState None
      static constexpr const int None = 0;
      // Get static field: static public System.Net.WebConnection/NtlmAuthState None
      static System::Net::WebConnection::NtlmAuthState _get_None();
      // Set static field: static public System.Net.WebConnection/NtlmAuthState None
      static void _set_None(System::Net::WebConnection::NtlmAuthState value);
      // static field const value: static public System.Net.WebConnection/NtlmAuthState Challenge
      static constexpr const int Challenge = 1;
      // Get static field: static public System.Net.WebConnection/NtlmAuthState Challenge
      static System::Net::WebConnection::NtlmAuthState _get_Challenge();
      // Set static field: static public System.Net.WebConnection/NtlmAuthState Challenge
      static void _set_Challenge(System::Net::WebConnection::NtlmAuthState value);
      // static field const value: static public System.Net.WebConnection/NtlmAuthState Response
      static constexpr const int Response = 2;
      // Get static field: static public System.Net.WebConnection/NtlmAuthState Response
      static System::Net::WebConnection::NtlmAuthState _get_Response();
      // Set static field: static public System.Net.WebConnection/NtlmAuthState Response
      static void _set_Response(System::Net::WebConnection::NtlmAuthState value);
    }; // System.Net.WebConnection/NtlmAuthState
    #pragma pack(pop)
    static check_size<sizeof(WebConnection::NtlmAuthState), 0 + sizeof(int)> __System_Net_WebConnection_NtlmAuthStateSizeCheck;
    static_assert(sizeof(WebConnection::NtlmAuthState) == 0x4);
    // private System.Net.ServicePoint sPoint
    // Size: 0x8
    // Offset: 0x10
    System::Net::ServicePoint* sPoint;
    // Field size check
    static_assert(sizeof(System::Net::ServicePoint*) == 0x8);
    // private System.IO.Stream nstream
    // Size: 0x8
    // Offset: 0x18
    System::IO::Stream* nstream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // System.Net.Sockets.Socket socket
    // Size: 0x8
    // Offset: 0x20
    System::Net::Sockets::Socket* socket;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Object socketLock
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* socketLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Net.IWebConnectionState state
    // Size: 0x8
    // Offset: 0x30
    System::Net::IWebConnectionState* state;
    // Field size check
    static_assert(sizeof(System::Net::IWebConnectionState*) == 0x8);
    // private System.Net.WebExceptionStatus status
    // Size: 0x4
    // Offset: 0x38
    System::Net::WebExceptionStatus status;
    // Field size check
    static_assert(sizeof(System::Net::WebExceptionStatus) == 0x4);
    // private System.Boolean keepAlive
    // Size: 0x1
    // Offset: 0x3C
    bool keepAlive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: keepAlive and: buffer
    char __padding6[0x3] = {};
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.EventHandler abortHandler
    // Size: 0x8
    // Offset: 0x48
    System::EventHandler* abortHandler;
    // Field size check
    static_assert(sizeof(System::EventHandler*) == 0x8);
    // private System.Net.WebConnection/AbortHelper abortHelper
    // Size: 0x8
    // Offset: 0x50
    System::Net::WebConnection::AbortHelper* abortHelper;
    // Field size check
    static_assert(sizeof(System::Net::WebConnection::AbortHelper*) == 0x8);
    // System.Net.WebConnectionData Data
    // Size: 0x8
    // Offset: 0x58
    System::Net::WebConnectionData* Data;
    // Field size check
    static_assert(sizeof(System::Net::WebConnectionData*) == 0x8);
    // private System.Boolean chunkedRead
    // Size: 0x1
    // Offset: 0x60
    bool chunkedRead;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: chunkedRead and: chunkStream
    char __padding11[0x7] = {};
    // private System.Net.MonoChunkStream chunkStream
    // Size: 0x8
    // Offset: 0x68
    System::Net::MonoChunkStream* chunkStream;
    // Field size check
    static_assert(sizeof(System::Net::MonoChunkStream*) == 0x8);
    // private System.Collections.Queue queue
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Queue* queue;
    // Field size check
    static_assert(sizeof(System::Collections::Queue*) == 0x8);
    // private System.Boolean reused
    // Size: 0x1
    // Offset: 0x78
    bool reused;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reused and: position
    char __padding14[0x3] = {};
    // private System.Int32 position
    // Size: 0x4
    // Offset: 0x7C
    int position;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Net.HttpWebRequest priority_request
    // Size: 0x8
    // Offset: 0x80
    System::Net::HttpWebRequest* priority_request;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // private System.Net.NetworkCredential ntlm_credentials
    // Size: 0x8
    // Offset: 0x88
    System::Net::NetworkCredential* ntlm_credentials;
    // Field size check
    static_assert(sizeof(System::Net::NetworkCredential*) == 0x8);
    // private System.Boolean ntlm_authenticated
    // Size: 0x1
    // Offset: 0x90
    bool ntlm_authenticated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean unsafe_sharing
    // Size: 0x1
    // Offset: 0x91
    bool unsafe_sharing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: unsafe_sharing and: connect_ntlm_auth_state
    char __padding19[0x2] = {};
    // private System.Net.WebConnection/NtlmAuthState connect_ntlm_auth_state
    // Size: 0x4
    // Offset: 0x94
    System::Net::WebConnection::NtlmAuthState connect_ntlm_auth_state;
    // Field size check
    static_assert(sizeof(System::Net::WebConnection::NtlmAuthState) == 0x4);
    // private System.Net.HttpWebRequest connect_request
    // Size: 0x8
    // Offset: 0x98
    System::Net::HttpWebRequest* connect_request;
    // Field size check
    static_assert(sizeof(System::Net::HttpWebRequest*) == 0x8);
    // private System.Exception connect_exception
    // Size: 0x8
    // Offset: 0xA0
    System::Exception* connect_exception;
    // Field size check
    static_assert(sizeof(System::Exception*) == 0x8);
    // private Mono.Net.Security.MonoTlsStream tlsStream
    // Size: 0x8
    // Offset: 0xA8
    Mono::Net::Security::MonoTlsStream* tlsStream;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::MonoTlsStream*) == 0x8);
    // Creating value type constructor for type: WebConnection
    WebConnection(System::Net::ServicePoint* sPoint_ = {}, System::IO::Stream* nstream_ = {}, System::Net::Sockets::Socket* socket_ = {}, ::Il2CppObject* socketLock_ = {}, System::Net::IWebConnectionState* state_ = {}, System::Net::WebExceptionStatus status_ = {}, bool keepAlive_ = {}, ::Array<uint8_t>* buffer_ = {}, System::EventHandler* abortHandler_ = {}, System::Net::WebConnection::AbortHelper* abortHelper_ = {}, System::Net::WebConnectionData* Data_ = {}, bool chunkedRead_ = {}, System::Net::MonoChunkStream* chunkStream_ = {}, System::Collections::Queue* queue_ = {}, bool reused_ = {}, int position_ = {}, System::Net::HttpWebRequest* priority_request_ = {}, System::Net::NetworkCredential* ntlm_credentials_ = {}, bool ntlm_authenticated_ = {}, bool unsafe_sharing_ = {}, System::Net::WebConnection::NtlmAuthState connect_ntlm_auth_state_ = {}, System::Net::HttpWebRequest* connect_request_ = {}, System::Exception* connect_exception_ = {}, Mono::Net::Security::MonoTlsStream* tlsStream_ = {}) noexcept : sPoint{sPoint_}, nstream{nstream_}, socket{socket_}, socketLock{socketLock_}, state{state_}, status{status_}, keepAlive{keepAlive_}, buffer{buffer_}, abortHandler{abortHandler_}, abortHelper{abortHelper_}, Data{Data_}, chunkedRead{chunkedRead_}, chunkStream{chunkStream_}, queue{queue_}, reused{reused_}, position{position_}, priority_request{priority_request_}, ntlm_credentials{ntlm_credentials_}, ntlm_authenticated{ntlm_authenticated_}, unsafe_sharing{unsafe_sharing_}, connect_ntlm_auth_state{connect_ntlm_auth_state_}, connect_request{connect_request_}, connect_exception{connect_exception_}, tlsStream{tlsStream_} {}
    // public System.Void .ctor(System.Net.IWebConnectionState wcs, System.Net.ServicePoint sPoint)
    // Offset: 0x15A26F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnection* New_ctor(System::Net::IWebConnectionState* wcs, System::Net::ServicePoint* sPoint) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnection*, creationType>(wcs, sPoint)));
    }
    // private System.Boolean CanReuse()
    // Offset: 0x15A28C0
    bool CanReuse();
    // private System.Void Connect(System.Net.HttpWebRequest request)
    // Offset: 0x15A28F4
    void Connect(System::Net::HttpWebRequest* request);
    // private System.Boolean CreateTunnel(System.Net.HttpWebRequest request, System.Uri connectUri, System.IO.Stream stream, out System.Byte[] buffer)
    // Offset: 0x15A2F74
    bool CreateTunnel(System::Net::HttpWebRequest* request, System::Uri* connectUri, System::IO::Stream* stream, ::Array<uint8_t>*& buffer);
    // private System.Net.WebHeaderCollection ReadHeaders(System.IO.Stream stream, out System.Byte[] retBuffer, out System.Int32 status)
    // Offset: 0x15A3870
    System::Net::WebHeaderCollection* ReadHeaders(System::IO::Stream* stream, ::Array<uint8_t>*& retBuffer, int& status);
    // private System.Void FlushContents(System.IO.Stream stream, System.Int32 contentLength)
    // Offset: 0x15A3FBC
    void FlushContents(System::IO::Stream* stream, int contentLength);
    // private System.Boolean CreateStream(System.Net.HttpWebRequest request)
    // Offset: 0x15A4528
    bool CreateStream(System::Net::HttpWebRequest* request);
    // private System.Void HandleError(System.Net.WebExceptionStatus st, System.Exception e, System.String where)
    // Offset: 0x15A3D14
    void HandleError(System::Net::WebExceptionStatus st, System::Exception* e, ::Il2CppString* where);
    // private System.Void ReadDone(System.IAsyncResult result)
    // Offset: 0x15A4B20
    void ReadDone(System::IAsyncResult* result);
    // static private System.Boolean ExpectContent(System.Int32 statusCode, System.String method)
    // Offset: 0x15A5E78
    static bool ExpectContent(int statusCode, ::Il2CppString* method);
    // System.Void InitRead()
    // Offset: 0x15A5A24
    void InitRead();
    // static private System.Int32 GetResponse(System.Net.WebConnectionData data, System.Net.ServicePoint sPoint, System.Byte[] buffer, System.Int32 max)
    // Offset: 0x15A512C
    static int GetResponse(System::Net::WebConnectionData* data, System::Net::ServicePoint* sPoint, ::Array<uint8_t>* buffer, int max);
    // private System.Void InitConnection(System.Net.HttpWebRequest request)
    // Offset: 0x15A62C0
    void InitConnection(System::Net::HttpWebRequest* request);
    // System.EventHandler SendRequest(System.Net.HttpWebRequest request)
    // Offset: 0x15A66C8
    System::EventHandler* SendRequest(System::Net::HttpWebRequest* request);
    // private System.Void SendNext()
    // Offset: 0x15A68EC
    void SendNext();
    // System.Void NextRead()
    // Offset: 0x15A6A2C
    void NextRead();
    // static private System.Boolean ReadLine(System.Byte[] buffer, ref System.Int32 start, System.Int32 max, ref System.String output)
    // Offset: 0x15A4320
    static bool ReadLine(::Array<uint8_t>* buffer, int& start, int max, ::Il2CppString*& output);
    // System.IAsyncResult BeginRead(System.Net.HttpWebRequest request, System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x15A6E10
    System::IAsyncResult* BeginRead(System::Net::HttpWebRequest* request, ::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // System.Int32 EndRead(System.Net.HttpWebRequest request, System.IAsyncResult result)
    // Offset: 0x15A7168
    int EndRead(System::Net::HttpWebRequest* request, System::IAsyncResult* result);
    // private System.Int32 EnsureRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x15A774C
    int EnsureRead(::Array<uint8_t>* buffer, int offset, int size);
    // private System.Boolean CompleteChunkedRead()
    // Offset: 0x15A2ED8
    bool CompleteChunkedRead();
    // System.IAsyncResult BeginWrite(System.Net.HttpWebRequest request, System.Byte[] buffer, System.Int32 offset, System.Int32 size, System.AsyncCallback cb, System.Object state)
    // Offset: 0x15A7894
    System::IAsyncResult* BeginWrite(System::Net::HttpWebRequest* request, ::Array<uint8_t>* buffer, int offset, int size, System::AsyncCallback* cb, ::Il2CppObject* state);
    // System.Boolean EndWrite(System.Net.HttpWebRequest request, System.Boolean throwOnError, System.IAsyncResult result)
    // Offset: 0x15A7C84
    bool EndWrite(System::Net::HttpWebRequest* request, bool throwOnError, System::IAsyncResult* result);
    // System.Int32 Read(System.Net.HttpWebRequest request, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x15A7FD4
    int Read(System::Net::HttpWebRequest* request, ::Array<uint8_t>* buffer, int offset, int size);
    // System.Boolean Write(System.Net.HttpWebRequest request, System.Byte[] buffer, System.Int32 offset, System.Int32 size, ref System.String err_msg)
    // Offset: 0x15A8444
    bool Write(System::Net::HttpWebRequest* request, ::Array<uint8_t>* buffer, int offset, int size, ::Il2CppString*& err_msg);
    // System.Void Close(System.Boolean sendNext)
    // Offset: 0x15A4774
    void Close(bool sendNext);
    // private System.Void Abort(System.Object sender, System.EventArgs args)
    // Offset: 0x15A8710
    void Abort(::Il2CppObject* sender, System::EventArgs* args);
    // System.Void ResetNtlm()
    // Offset: 0x15A8704
    void ResetNtlm();
    // System.Void set_PriorityRequest(System.Net.HttpWebRequest value)
    // Offset: 0x15A8B0C
    void set_PriorityRequest(System::Net::HttpWebRequest* value);
    // System.Boolean get_NtlmAuthenticated()
    // Offset: 0x15A8B14
    bool get_NtlmAuthenticated();
    // System.Void set_NtlmAuthenticated(System.Boolean value)
    // Offset: 0x15A8B1C
    void set_NtlmAuthenticated(bool value);
    // System.Net.NetworkCredential get_NtlmCredential()
    // Offset: 0x15A8B28
    System::Net::NetworkCredential* get_NtlmCredential();
    // System.Void set_NtlmCredential(System.Net.NetworkCredential value)
    // Offset: 0x15A8B30
    void set_NtlmCredential(System::Net::NetworkCredential* value);
    // System.Boolean get_UnsafeAuthenticatedConnectionSharing()
    // Offset: 0x15A8B38
    bool get_UnsafeAuthenticatedConnectionSharing();
    // System.Void set_UnsafeAuthenticatedConnectionSharing(System.Boolean value)
    // Offset: 0x15A8B40
    void set_UnsafeAuthenticatedConnectionSharing(bool value);
    // private System.Void <SendRequest>b__41_0(System.Object o)
    // Offset: 0x15A8B4C
    void $SendRequest$b__41_0(::Il2CppObject* o);
  }; // System.Net.WebConnection
  #pragma pack(pop)
  static check_size<sizeof(WebConnection), 168 + sizeof(Mono::Net::Security::MonoTlsStream*)> __System_Net_WebConnectionSizeCheck;
  static_assert(sizeof(WebConnection) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnection*, "System.Net", "WebConnection");
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnection::NtlmAuthState, "System.Net", "WebConnection/NtlmAuthState");
