// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Unity
namespace Mono::Unity {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls
  class UnityTls : public ::Il2CppObject {
    public:
    // Nested type: Mono::Unity::UnityTls::unitytls_error_code
    struct unitytls_error_code;
    // Nested type: Mono::Unity::UnityTls::unitytls_errorstate
    struct unitytls_errorstate;
    // Nested type: Mono::Unity::UnityTls::unitytls_key
    struct unitytls_key;
    // Nested type: Mono::Unity::UnityTls::unitytls_key_ref
    struct unitytls_key_ref;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509_ref
    struct unitytls_x509_ref;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509list
    struct unitytls_x509list;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509list_ref
    struct unitytls_x509list_ref;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509verify_result
    struct unitytls_x509verify_result;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509verify_callback
    class unitytls_x509verify_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx
    struct unitytls_tlsctx;
    // Nested type: Mono::Unity::UnityTls::unitytls_x509name
    struct unitytls_x509name;
    // Nested type: Mono::Unity::UnityTls::unitytls_ciphersuite
    struct unitytls_ciphersuite;
    // Nested type: Mono::Unity::UnityTls::unitytls_protocol
    struct unitytls_protocol;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_protocolrange
    struct unitytls_tlsctx_protocolrange;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_write_callback
    class unitytls_tlsctx_write_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_read_callback
    class unitytls_tlsctx_read_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_trace_callback
    class unitytls_tlsctx_trace_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_certificate_callback
    class unitytls_tlsctx_certificate_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_x509verify_callback
    class unitytls_tlsctx_x509verify_callback;
    // Nested type: Mono::Unity::UnityTls::unitytls_tlsctx_callbacks
    struct unitytls_tlsctx_callbacks;
    // Nested type: Mono::Unity::UnityTls::unitytls_interface_struct
    class unitytls_interface_struct;
    // Creating value type constructor for type: UnityTls
    UnityTls() noexcept {}
    // Get static field: static private Mono.Unity.UnityTls/unitytls_interface_struct marshalledInterface
    static Mono::Unity::UnityTls::unitytls_interface_struct* _get_marshalledInterface();
    // Set static field: static private Mono.Unity.UnityTls/unitytls_interface_struct marshalledInterface
    static void _set_marshalledInterface(Mono::Unity::UnityTls::unitytls_interface_struct* value);
    // static private System.IntPtr GetUnityTlsInterface()
    // Offset: 0x15DD54C
    static System::IntPtr GetUnityTlsInterface();
    // static public System.Boolean get_IsSupported()
    // Offset: 0x15DB960
    static bool get_IsSupported();
    // static public Mono.Unity.UnityTls/unitytls_interface_struct get_NativeInterface()
    // Offset: 0x15DC8A0
    static Mono::Unity::UnityTls::unitytls_interface_struct* get_NativeInterface();
  }; // Mono.Unity.UnityTls
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTls*, "Mono.Unity", "UnityTls");
