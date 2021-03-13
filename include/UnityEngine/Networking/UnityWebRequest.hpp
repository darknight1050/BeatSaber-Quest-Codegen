// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: DownloadHandler
  class DownloadHandler;
  // Forward declaring type: UploadHandler
  class UploadHandler;
  // Forward declaring type: CertificateHandler
  class CertificateHandler;
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x3B
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.UnityWebRequest
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CECD1C
  class UnityWebRequest : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod
    struct UnityWebRequestMethod;
    // Nested type: UnityEngine::Networking::UnityWebRequest::UnityWebRequestError
    struct UnityWebRequestError;
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // UnityEngine.Networking.DownloadHandler m_DownloadHandler
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Networking::DownloadHandler* m_DownloadHandler;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::DownloadHandler*) == 0x8);
    // UnityEngine.Networking.UploadHandler m_UploadHandler
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Networking::UploadHandler* m_UploadHandler;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UploadHandler*) == 0x8);
    // UnityEngine.Networking.CertificateHandler m_CertificateHandler
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Networking::CertificateHandler* m_CertificateHandler;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::CertificateHandler*) == 0x8);
    // System.Uri m_Uri
    // Size: 0x8
    // Offset: 0x30
    System::Uri* m_Uri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCECEA8
    // [DebuggerBrowsableAttribute] Offset: 0xCECEA8
    // private System.Boolean <disposeCertificateHandlerOnDispose>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool disposeCertificateHandlerOnDispose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xCECEE4
    // [CompilerGeneratedAttribute] Offset: 0xCECEE4
    // private System.Boolean <disposeDownloadHandlerOnDispose>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool disposeDownloadHandlerOnDispose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DebuggerBrowsableAttribute] Offset: 0xCECF20
    // [CompilerGeneratedAttribute] Offset: 0xCECF20
    // private System.Boolean <disposeUploadHandlerOnDispose>k__BackingField
    // Size: 0x1
    // Offset: 0x3A
    bool disposeUploadHandlerOnDispose;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UnityWebRequest
    UnityWebRequest(System::IntPtr m_Ptr_ = {}, UnityEngine::Networking::DownloadHandler* m_DownloadHandler_ = {}, UnityEngine::Networking::UploadHandler* m_UploadHandler_ = {}, UnityEngine::Networking::CertificateHandler* m_CertificateHandler_ = {}, System::Uri* m_Uri_ = {}, bool disposeCertificateHandlerOnDispose_ = {}, bool disposeDownloadHandlerOnDispose_ = {}, bool disposeUploadHandlerOnDispose_ = {}) noexcept : m_Ptr{m_Ptr_}, m_DownloadHandler{m_DownloadHandler_}, m_UploadHandler{m_UploadHandler_}, m_CertificateHandler{m_CertificateHandler_}, m_Uri{m_Uri_}, disposeCertificateHandlerOnDispose{disposeCertificateHandlerOnDispose_}, disposeDownloadHandlerOnDispose{disposeDownloadHandlerOnDispose_}, disposeUploadHandlerOnDispose{disposeUploadHandlerOnDispose_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static private System.String GetWebErrorString(UnityEngine.Networking.UnityWebRequest/UnityWebRequestError err)
    // Offset: 0x215CD0C
    static ::Il2CppString* GetWebErrorString(UnityEngine::Networking::UnityWebRequest::UnityWebRequestError err);
    // static System.String GetHTTPStatusString(System.Int64 responseCode)
    // Offset: 0x215CD4C
    static ::Il2CppString* GetHTTPStatusString(int64_t responseCode);
    // public System.Boolean get_disposeCertificateHandlerOnDispose()
    // Offset: 0x215CD8C
    bool get_disposeCertificateHandlerOnDispose();
    // public System.Void set_disposeCertificateHandlerOnDispose(System.Boolean value)
    // Offset: 0x215CD94
    void set_disposeCertificateHandlerOnDispose(bool value);
    // public System.Boolean get_disposeDownloadHandlerOnDispose()
    // Offset: 0x215CDA0
    bool get_disposeDownloadHandlerOnDispose();
    // public System.Void set_disposeDownloadHandlerOnDispose(System.Boolean value)
    // Offset: 0x215CDA8
    void set_disposeDownloadHandlerOnDispose(bool value);
    // public System.Boolean get_disposeUploadHandlerOnDispose()
    // Offset: 0x215CDB4
    bool get_disposeUploadHandlerOnDispose();
    // public System.Void set_disposeUploadHandlerOnDispose(System.Boolean value)
    // Offset: 0x215CDBC
    void set_disposeUploadHandlerOnDispose(bool value);
    // static System.IntPtr Create()
    // Offset: 0x215CDC8
    static System::IntPtr Create();
    // private System.Void Release()
    // Offset: 0x215CDFC
    void Release();
    // System.Void InternalDestroy()
    // Offset: 0x215CE3C
    void InternalDestroy();
    // private System.Void InternalSetDefaults()
    // Offset: 0x215CF24
    void InternalSetDefaults();
    // public System.Void .ctor(System.String url, System.String method)
    // Offset: 0x215CF38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityWebRequest* New_ctor(::Il2CppString* url, ::Il2CppString* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::UnityWebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityWebRequest*, creationType>(url, method)));
    }
    // public System.Void .ctor(System.String url, System.String method, UnityEngine.Networking.DownloadHandler downloadHandler, UnityEngine.Networking.UploadHandler uploadHandler)
    // Offset: 0x215D1A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityWebRequest* New_ctor(::Il2CppString* url, ::Il2CppString* method, UnityEngine::Networking::DownloadHandler* downloadHandler, UnityEngine::Networking::UploadHandler* uploadHandler) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::UnityWebRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityWebRequest*, creationType>(url, method, downloadHandler, uploadHandler)));
    }
    // public System.Void Dispose()
    // Offset: 0x215D570
    void Dispose_NEW();
    // private System.Void DisposeHandlers()
    // Offset: 0x215D510
    void DisposeHandlers();
    // UnityEngine.Networking.UnityWebRequestAsyncOperation BeginWebRequest()
    // Offset: 0x215D680
    UnityEngine::Networking::UnityWebRequestAsyncOperation* BeginWebRequest();
    // public UnityEngine.Networking.UnityWebRequestAsyncOperation SendWebRequest()
    // Offset: 0x215D6C0
    UnityEngine::Networking::UnityWebRequestAsyncOperation* SendWebRequest();
    // public System.Void Abort()
    // Offset: 0x215CEE4
    void Abort();
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod methodType)
    // Offset: 0x215D70C
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetMethod(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod methodType);
    // System.Void InternalSetMethod(UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod methodType)
    // Offset: 0x215D75C
    void InternalSetMethod(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod methodType);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetCustomMethod(System.String customMethodName)
    // Offset: 0x215D8C0
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetCustomMethod(::Il2CppString* customMethodName);
    // System.Void InternalSetCustomMethod(System.String customMethodName)
    // Offset: 0x215D910
    void InternalSetCustomMethod(::Il2CppString* customMethodName);
    // public System.Void set_method(System.String value)
    // Offset: 0x215D044
    void set_method(::Il2CppString* value);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError GetError()
    // Offset: 0x215DA34
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError GetError();
    // public System.String get_error()
    // Offset: 0x215DA74
    ::Il2CppString* get_error();
    // public System.Void set_url(System.String value)
    // Offset: 0x215CFB8
    void set_url(::Il2CppString* value);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetUrl(System.String url)
    // Offset: 0x215E1D8
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetUrl(::Il2CppString* url);
    // private System.Void InternalSetUrl(System.String url)
    // Offset: 0x215E0B4
    void InternalSetUrl(::Il2CppString* url);
    // public System.Int64 get_responseCode()
    // Offset: 0x215DCEC
    int64_t get_responseCode();
    // private System.Boolean IsExecuting()
    // Offset: 0x215E228
    bool IsExecuting();
    // public System.Boolean get_isModifiable()
    // Offset: 0x215D880
    bool get_isModifiable();
    // public System.Boolean get_isDone()
    // Offset: 0x215E268
    bool get_isDone();
    // public System.Boolean get_isNetworkError()
    // Offset: 0x215DC6C
    bool get_isNetworkError();
    // public System.Boolean get_isHttpError()
    // Offset: 0x215DCAC
    bool get_isHttpError();
    // private System.Single GetDownloadProgress()
    // Offset: 0x215E2A8
    float GetDownloadProgress();
    // public System.Single get_downloadProgress()
    // Offset: 0x215E2E8
    float get_downloadProgress();
    // UnityEngine.Networking.UnityWebRequest/UnityWebRequestError InternalSetRequestHeader(System.String name, System.String value)
    // Offset: 0x215E390
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError InternalSetRequestHeader(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void SetRequestHeader(System.String name, System.String value)
    // Offset: 0x215E3E8
    void SetRequestHeader(::Il2CppString* name, ::Il2CppString* value);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetUploadHandler(UnityEngine.Networking.UploadHandler uh)
    // Offset: 0x215E570
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetUploadHandler(UnityEngine::Networking::UploadHandler* uh);
    // public UnityEngine.Networking.UploadHandler get_uploadHandler()
    // Offset: 0x215D5F0
    UnityEngine::Networking::UploadHandler* get_uploadHandler();
    // public System.Void set_uploadHandler(UnityEngine.Networking.UploadHandler value)
    // Offset: 0x215D378
    void set_uploadHandler(UnityEngine::Networking::UploadHandler* value);
    // private UnityEngine.Networking.UnityWebRequest/UnityWebRequestError SetDownloadHandler(UnityEngine.Networking.DownloadHandler dh)
    // Offset: 0x215E5C0
    UnityEngine::Networking::UnityWebRequest::UnityWebRequestError SetDownloadHandler(UnityEngine::Networking::DownloadHandler* dh);
    // public UnityEngine.Networking.DownloadHandler get_downloadHandler()
    // Offset: 0x215D5E8
    UnityEngine::Networking::DownloadHandler* get_downloadHandler();
    // public System.Void set_downloadHandler(UnityEngine.Networking.DownloadHandler value)
    // Offset: 0x215D250
    void set_downloadHandler(UnityEngine::Networking::DownloadHandler* value);
    // public UnityEngine.Networking.CertificateHandler get_certificateHandler()
    // Offset: 0x215D678
    UnityEngine::Networking::CertificateHandler* get_certificateHandler();
    // static public UnityEngine.Networking.UnityWebRequest Get(System.String uri)
    // Offset: 0x215E610
    static UnityEngine::Networking::UnityWebRequest* Get(::Il2CppString* uri);
    // static public System.String EscapeURL(System.String s)
    // Offset: 0x215E6A4
    static ::Il2CppString* EscapeURL(::Il2CppString* s);
    // static public System.String EscapeURL(System.String s, System.Text.Encoding e)
    // Offset: 0x215E6D0
    static ::Il2CppString* EscapeURL(::Il2CppString* s, System::Text::Encoding* e);
    // protected override System.Void Finalize()
    // Offset: 0x215D4A0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize_NEW()
    void Finalize();
  }; // UnityEngine.Networking.UnityWebRequest
  #pragma pack(pop)
  static check_size<sizeof(UnityWebRequest), 58 + sizeof(bool)> __UnityEngine_Networking_UnityWebRequestSizeCheck;
  static_assert(sizeof(UnityWebRequest) == 0x3B);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequest*, "UnityEngine.Networking", "UnityWebRequest");
