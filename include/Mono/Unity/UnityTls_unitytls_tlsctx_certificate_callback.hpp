// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
  // [UnmanagedFunctionPointerAttribute] Offset: D87210
  class UnityTls::unitytls_tlsctx_certificate_callback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_tlsctx_certificate_callback
    unitytls_tlsctx_certificate_callback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15E2FA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_tlsctx_certificate_callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_tlsctx_certificate_callback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Void* userData, Mono.Unity.UnityTls/unitytls_tlsctx* ctx, System.Byte* cn, System.IntPtr cnLen, Mono.Unity.UnityTls/unitytls_x509name* caList, System.IntPtr caListLen, Mono.Unity.UnityTls/unitytls_x509list_ref* chain, Mono.Unity.UnityTls/unitytls_key_ref* key, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x15E2FB0
    void Invoke(void* userData, Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* cn, System::IntPtr cnLen, Mono::Unity::UnityTls::unitytls_x509name* caList, System::IntPtr caListLen, Mono::Unity::UnityTls::unitytls_x509list_ref* chain, Mono::Unity::UnityTls::unitytls_key_ref* key, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(System.Void* userData, Mono.Unity.UnityTls/unitytls_tlsctx* ctx, System.Byte* cn, System.IntPtr cnLen, Mono.Unity.UnityTls/unitytls_x509name* caList, System.IntPtr caListLen, Mono.Unity.UnityTls/unitytls_x509list_ref* chain, Mono.Unity.UnityTls/unitytls_key_ref* key, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15E32C0
    System::IAsyncResult* BeginInvoke(void* userData, Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* cn, System::IntPtr cnLen, Mono::Unity::UnityTls::unitytls_x509name* caList, System::IntPtr caListLen, Mono::Unity::UnityTls::unitytls_x509list_ref* chain, Mono::Unity::UnityTls::unitytls_key_ref* key, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x15E33A0
    void EndInvoke(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_tlsctx_certificate_callback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_certificate_callback");
