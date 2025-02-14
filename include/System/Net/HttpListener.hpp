// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.AuthenticationSchemes
#include "System/Net/AuthenticationSchemes.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListenerPrefixCollection
  class HttpListenerPrefixCollection;
  // Forward declaring type: AuthenticationSchemeSelector
  class AuthenticationSchemeSelector;
  // Forward declaring type: ServiceNameStore
  class ServiceNameStore;
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: HttpConnection
  class HttpConnection;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ExtendedProtectionPolicy
  class ExtendedProtectionPolicy;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpListener
  class HttpListener : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private Mono.Security.Interface.MonoTlsProvider tlsProvider
    // Size: 0x8
    // Offset: 0x10
    Mono::Security::Interface::MonoTlsProvider* tlsProvider;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // private Mono.Security.Interface.MonoTlsSettings tlsSettings
    // Size: 0x8
    // Offset: 0x18
    Mono::Security::Interface::MonoTlsSettings* tlsSettings;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsSettings*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate certificate
    // Size: 0x8
    // Offset: 0x20
    System::Security::Cryptography::X509Certificates::X509Certificate* certificate;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // private System.Net.AuthenticationSchemes auth_schemes
    // Size: 0x4
    // Offset: 0x28
    System::Net::AuthenticationSchemes auth_schemes;
    // Field size check
    static_assert(sizeof(System::Net::AuthenticationSchemes) == 0x4);
    // Padding between fields: auth_schemes and: prefixes
    char __padding3[0x4] = {};
    // private System.Net.HttpListenerPrefixCollection prefixes
    // Size: 0x8
    // Offset: 0x30
    System::Net::HttpListenerPrefixCollection* prefixes;
    // Field size check
    static_assert(sizeof(System::Net::HttpListenerPrefixCollection*) == 0x8);
    // private System.Net.AuthenticationSchemeSelector auth_selector
    // Size: 0x8
    // Offset: 0x38
    System::Net::AuthenticationSchemeSelector* auth_selector;
    // Field size check
    static_assert(sizeof(System::Net::AuthenticationSchemeSelector*) == 0x8);
    // private System.String realm
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* realm;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean ignore_write_exceptions
    // Size: 0x1
    // Offset: 0x48
    bool ignore_write_exceptions;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean listening
    // Size: 0x1
    // Offset: 0x49
    bool listening;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x4A
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: internalLock
    char __padding9[0x5] = {};
    // private readonly System.Object _internalLock
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppObject* internalLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Collections.Hashtable registry
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Hashtable* registry;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Collections.ArrayList ctx_queue
    // Size: 0x8
    // Offset: 0x60
    System::Collections::ArrayList* ctx_queue;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList wait_queue
    // Size: 0x8
    // Offset: 0x68
    System::Collections::ArrayList* wait_queue;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.Hashtable connections
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Hashtable* connections;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Net.ServiceNameStore defaultServiceNames
    // Size: 0x8
    // Offset: 0x78
    System::Net::ServiceNameStore* defaultServiceNames;
    // Field size check
    static_assert(sizeof(System::Net::ServiceNameStore*) == 0x8);
    // private System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy extendedProtectionPolicy
    // Size: 0x8
    // Offset: 0x80
    System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* extendedProtectionPolicy;
    // Field size check
    static_assert(sizeof(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*) == 0x8);
    // Creating value type constructor for type: HttpListener
    HttpListener(Mono::Security::Interface::MonoTlsProvider* tlsProvider_ = {}, Mono::Security::Interface::MonoTlsSettings* tlsSettings_ = {}, System::Security::Cryptography::X509Certificates::X509Certificate* certificate_ = {}, System::Net::AuthenticationSchemes auth_schemes_ = {}, System::Net::HttpListenerPrefixCollection* prefixes_ = {}, System::Net::AuthenticationSchemeSelector* auth_selector_ = {}, ::Il2CppString* realm_ = {}, bool ignore_write_exceptions_ = {}, bool listening_ = {}, bool disposed_ = {}, ::Il2CppObject* internalLock_ = {}, System::Collections::Hashtable* registry_ = {}, System::Collections::ArrayList* ctx_queue_ = {}, System::Collections::ArrayList* wait_queue_ = {}, System::Collections::Hashtable* connections_ = {}, System::Net::ServiceNameStore* defaultServiceNames_ = {}, System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* extendedProtectionPolicy_ = {}) noexcept : tlsProvider{tlsProvider_}, tlsSettings{tlsSettings_}, certificate{certificate_}, auth_schemes{auth_schemes_}, prefixes{prefixes_}, auth_selector{auth_selector_}, realm{realm_}, ignore_write_exceptions{ignore_write_exceptions_}, listening{listening_}, disposed{disposed_}, internalLock{internalLock_}, registry{registry_}, ctx_queue{ctx_queue_}, wait_queue{wait_queue_}, connections{connections_}, defaultServiceNames{defaultServiceNames_}, extendedProtectionPolicy{extendedProtectionPolicy_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // System.Security.Cryptography.X509Certificates.X509Certificate LoadCertificateAndKey(System.Net.IPAddress addr, System.Int32 port)
    // Offset: 0x16342F4
    System::Security::Cryptography::X509Certificates::X509Certificate* LoadCertificateAndKey(System::Net::IPAddress* addr, int port);
    // System.Net.Security.SslStream CreateSslStream(System.IO.Stream innerStream, System.Boolean ownsStream, System.Net.Security.RemoteCertificateValidationCallback callback)
    // Offset: 0x1630848
    System::Net::Security::SslStream* CreateSslStream(System::IO::Stream* innerStream, bool ownsStream, System::Net::Security::RemoteCertificateValidationCallback* callback);
    // public System.Net.AuthenticationSchemes get_AuthenticationSchemes()
    // Offset: 0x16347EC
    System::Net::AuthenticationSchemes get_AuthenticationSchemes();
    // public System.Net.AuthenticationSchemeSelector get_AuthenticationSchemeSelectorDelegate()
    // Offset: 0x16347F4
    System::Net::AuthenticationSchemeSelector* get_AuthenticationSchemeSelectorDelegate();
    // public System.Boolean get_IgnoreWriteExceptions()
    // Offset: 0x16347FC
    bool get_IgnoreWriteExceptions();
    // public System.Boolean get_IsListening()
    // Offset: 0x1634804
    bool get_IsListening();
    // public System.Net.HttpListenerPrefixCollection get_Prefixes()
    // Offset: 0x163480C
    System::Net::HttpListenerPrefixCollection* get_Prefixes();
    // public System.String get_Realm()
    // Offset: 0x16348D8
    ::Il2CppString* get_Realm();
    // public System.Void Close()
    // Offset: 0x16348E0
    void Close();
    // private System.Void Close(System.Boolean force)
    // Offset: 0x1634924
    void Close(bool force);
    // private System.Void Cleanup(System.Boolean close_existing)
    // Offset: 0x16349AC
    void Cleanup(bool close_existing);
    // public System.IAsyncResult BeginGetContext(System.AsyncCallback callback, System.Object state)
    // Offset: 0x16354F8
    System::IAsyncResult* BeginGetContext(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.Net.HttpListenerContext EndGetContext(System.IAsyncResult asyncResult)
    // Offset: 0x1635E74
    System::Net::HttpListenerContext* EndGetContext(System::IAsyncResult* asyncResult);
    // System.Net.AuthenticationSchemes SelectAuthenticationScheme(System.Net.HttpListenerContext context)
    // Offset: 0x16362E0
    System::Net::AuthenticationSchemes SelectAuthenticationScheme(System::Net::HttpListenerContext* context);
    // public System.Net.HttpListenerContext GetContext()
    // Offset: 0x1636430
    System::Net::HttpListenerContext* GetContext();
    // public System.Void Start()
    // Offset: 0x1636574
    void Start();
    // public System.Void Stop()
    // Offset: 0x16365F8
    void Stop();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x1636624
    void System_IDisposable_Dispose();
    // System.Void CheckDisposed()
    // Offset: 0x1634830
    void CheckDisposed();
    // private System.Net.HttpListenerContext GetContextFromQueue()
    // Offset: 0x16357FC
    System::Net::HttpListenerContext* GetContextFromQueue();
    // System.Void RegisterContext(System.Net.HttpListenerContext context)
    // Offset: 0x163234C
    void RegisterContext(System::Net::HttpListenerContext* context);
    // System.Void UnregisterContext(System.Net.HttpListenerContext context)
    // Offset: 0x1636664
    void UnregisterContext(System::Net::HttpListenerContext* context);
    // System.Void AddConnection(System.Net.HttpConnection cnc)
    // Offset: 0x1632324
    void AddConnection(System::Net::HttpConnection* cnc);
    // System.Void RemoveConnection(System.Net.HttpConnection cnc)
    // Offset: 0x163265C
    void RemoveConnection(System::Net::HttpConnection* cnc);
    // public System.Void .ctor()
    // Offset: 0x163460C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpListener*, creationType>()));
    }
  }; // System.Net.HttpListener
  #pragma pack(pop)
  static check_size<sizeof(HttpListener), 128 + sizeof(System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*)> __System_Net_HttpListenerSizeCheck;
  static_assert(sizeof(HttpListener) == 0x88);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListener*, "System.Net", "HttpListener");
