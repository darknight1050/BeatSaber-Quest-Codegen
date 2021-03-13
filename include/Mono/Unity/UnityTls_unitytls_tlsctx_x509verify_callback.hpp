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
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: C9FA18
  class UnityTls::unitytls_tlsctx_x509verify_callback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: unitytls_tlsctx_x509verify_callback
    unitytls_tlsctx_x509verify_callback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x143D8F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_tlsctx_x509verify_callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_tlsctx_x509verify_callback*, creationType>(object, method)));
    }
    // public Mono.Unity.UnityTls/unitytls_x509verify_result Invoke(System.Void* userData, Mono.Unity.UnityTls/unitytls_x509list_ref chain, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x143D908
    Mono::Unity::UnityTls::unitytls_x509verify_result Invoke_NEW(void* userData, Mono::Unity::UnityTls::unitytls_x509list_ref chain, Mono::Unity::UnityTls::unitytls_errorstate* errorState);
    // public System.IAsyncResult BeginInvoke(System.Void* userData, Mono.Unity.UnityTls/unitytls_x509list_ref chain, Mono.Unity.UnityTls/unitytls_errorstate* errorState, System.AsyncCallback callback, System.Object object)
    // Offset: 0x143DB9C
    System::IAsyncResult* BeginInvoke_NEW(void* userData, Mono::Unity::UnityTls::unitytls_x509list_ref chain, Mono::Unity::UnityTls::unitytls_errorstate* errorState, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Mono.Unity.UnityTls/unitytls_x509verify_result EndInvoke(System.IAsyncResult result)
    // Offset: 0x143DC3C
    Mono::Unity::UnityTls::unitytls_x509verify_result EndInvoke_NEW(System::IAsyncResult* result);
  }; // Mono.Unity.UnityTls/unitytls_tlsctx_x509verify_callback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback*, "Mono.Unity", "UnityTls/unitytls_tlsctx_x509verify_callback");
