// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.MonoRemoteCertificateValidationCallback
  // [] Offset: FFFFFFFF
  class MonoRemoteCertificateValidationCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: MonoRemoteCertificateValidationCallback
    MonoRemoteCertificateValidationCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B913DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoRemoteCertificateValidationCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::MonoRemoteCertificateValidationCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoRemoteCertificateValidationCallback*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String targetHost, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, Mono.Security.Interface.MonoSslPolicyErrors sslPolicyErrors)
    // Offset: 0x1B913EC
    bool Invoke_NEW(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors);
    // public System.IAsyncResult BeginInvoke(System.String targetHost, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, Mono.Security.Interface.MonoSslPolicyErrors sslPolicyErrors, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B91830
    System::IAsyncResult* BeginInvoke_NEW(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, Mono::Security::Interface::MonoSslPolicyErrors sslPolicyErrors, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B918E0
    bool EndInvoke_NEW(System::IAsyncResult* result);
  }; // Mono.Security.Interface.MonoRemoteCertificateValidationCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoRemoteCertificateValidationCallback*, "Mono.Security.Interface", "MonoRemoteCertificateValidationCallback");
