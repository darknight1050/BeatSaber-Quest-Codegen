// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: AuthenticatedStream
  class AuthenticatedStream;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.IMonoSslStream
  // [] Offset: FFFFFFFF
  class IMonoSslStream/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IMonoSslStream
    IMonoSslStream() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void AuthenticateAsClient(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    // Offset: 0xFFFFFFFF
    void AuthenticateAsClient_NEW(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
    // public System.Void AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Boolean clientCertificateRequired, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    // Offset: 0xFFFFFFFF
    void AuthenticateAsServer_NEW(System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
    // public System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int Read_NEW(::Array<uint8_t>* buffer, int offset, int count);
    // public System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFF
    void Write_NEW(::Array<uint8_t>* buffer, int offset, int count);
    // public System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginRead_NEW(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0xFFFFFFFF
    int EndRead_NEW(System::IAsyncResult* asyncResult);
    // public System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginWrite_NEW(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0xFFFFFFFF
    void EndWrite_NEW(System::IAsyncResult* asyncResult);
    // public System.Boolean get_IsAuthenticated()
    // Offset: 0xFFFFFFFF
    bool get_IsAuthenticated_NEW();
    // public System.Boolean get_CanRead()
    // Offset: 0xFFFFFFFF
    bool get_CanRead_NEW();
    // public System.Boolean get_CanWrite()
    // Offset: 0xFFFFFFFF
    bool get_CanWrite_NEW();
    // public System.Int64 get_Length()
    // Offset: 0xFFFFFFFF
    int64_t get_Length_NEW();
    // public System.Int64 get_Position()
    // Offset: 0xFFFFFFFF
    int64_t get_Position_NEW();
    // public System.Void SetLength(System.Int64 value)
    // Offset: 0xFFFFFFFF
    void SetLength_NEW(int64_t value);
    // public System.Net.Security.AuthenticatedStream get_AuthenticatedStream()
    // Offset: 0xFFFFFFFF
    System::Net::Security::AuthenticatedStream* get_AuthenticatedStream_NEW();
    // public System.Int32 get_ReadTimeout()
    // Offset: 0xFFFFFFFF
    int get_ReadTimeout_NEW();
    // public System.Int32 get_WriteTimeout()
    // Offset: 0xFFFFFFFF
    int get_WriteTimeout_NEW();
    // public System.Security.Cryptography.X509Certificates.X509Certificate get_InternalLocalCertificate()
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate_NEW();
  }; // Mono.Security.Interface.IMonoSslStream
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::IMonoSslStream*, "Mono.Security.Interface", "IMonoSslStream");
