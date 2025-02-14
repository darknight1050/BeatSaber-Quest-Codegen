// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebResponse
#include "System/Net/WebResponse.hpp"
// Including type: System.Net.ICloseEx
#include "System/Net/ICloseEx.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
  // Forward declaring type: FileWebRequest
  class FileWebRequest;
  // Forward declaring type: CloseExState
  struct CloseExState;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FileWebResponse
  class FileWebResponse : public System::Net::WebResponse/*, public System::Net::ICloseEx*/ {
    public:
    // private System.Boolean m_closed
    // Size: 0x1
    // Offset: 0x18
    bool m_closed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_closed and: m_contentLength
    char __padding0[0x7] = {};
    // private System.Int64 m_contentLength
    // Size: 0x8
    // Offset: 0x20
    int64_t m_contentLength;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IO.FileAccess m_fileAccess
    // Size: 0x4
    // Offset: 0x28
    System::IO::FileAccess m_fileAccess;
    // Field size check
    static_assert(sizeof(System::IO::FileAccess) == 0x4);
    // Padding between fields: m_fileAccess and: m_headers
    char __padding2[0x4] = {};
    // private System.Net.WebHeaderCollection m_headers
    // Size: 0x8
    // Offset: 0x30
    System::Net::WebHeaderCollection* m_headers;
    // Field size check
    static_assert(sizeof(System::Net::WebHeaderCollection*) == 0x8);
    // private System.IO.Stream m_stream
    // Size: 0x8
    // Offset: 0x38
    System::IO::Stream* m_stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Uri m_uri
    // Size: 0x8
    // Offset: 0x40
    System::Uri* m_uri;
    // Field size check
    static_assert(sizeof(System::Uri*) == 0x8);
    // Creating value type constructor for type: FileWebResponse
    FileWebResponse(bool m_closed_ = {}, int64_t m_contentLength_ = {}, System::IO::FileAccess m_fileAccess_ = {}, System::Net::WebHeaderCollection* m_headers_ = {}, System::IO::Stream* m_stream_ = {}, System::Uri* m_uri_ = {}) noexcept : m_closed{m_closed_}, m_contentLength{m_contentLength_}, m_fileAccess{m_fileAccess_}, m_headers{m_headers_}, m_stream{m_stream_}, m_uri{m_uri_} {}
    // Creating interface conversion operator: operator System::Net::ICloseEx
    operator System::Net::ICloseEx() noexcept {
      return *reinterpret_cast<System::Net::ICloseEx*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // System.Void .ctor(System.Net.FileWebRequest request, System.Uri uri, System.IO.FileAccess access, System.Boolean asyncHint)
    // Offset: 0x16A546C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebResponse* New_ctor(System::Net::FileWebRequest* request, System::Uri* uri, System::IO::FileAccess access, bool asyncHint) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FileWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebResponse*, creationType>(request, uri, access, asyncHint)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16A5F34
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // private System.Void CheckDisposed()
    // Offset: 0x16A60D0
    void CheckDisposed();
    // private System.Void System.Net.ICloseEx.CloseEx(System.Net.CloseExState closeState)
    // Offset: 0x16A6248
    void System_Net_ICloseEx_CloseEx(System::Net::CloseExState closeState);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16A5D80
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileWebResponse* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FileWebResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileWebResponse*, creationType>(serializationInfo, streamingContext)));
    }
    // protected override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x16A5F40
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Net.WebHeaderCollection get_Headers()
    // Offset: 0x16A60AC
    // Implemented from: System.Net.WebResponse
    // Base method: System.Net.WebHeaderCollection WebResponse::get_Headers()
    System::Net::WebHeaderCollection* get_Headers();
    // public override System.Uri get_ResponseUri()
    // Offset: 0x16A617C
    // Implemented from: System.Net.WebResponse
    // Base method: System.Uri WebResponse::get_ResponseUri()
    System::Uri* get_ResponseUri();
    // public override System.Void Close()
    // Offset: 0x16A61A0
    // Implemented from: System.Net.WebResponse
    // Base method: System.Void WebResponse::Close()
    void Close();
    // public override System.IO.Stream GetResponseStream()
    // Offset: 0x16A63C0
    // Implemented from: System.Net.WebResponse
    // Base method: System.IO.Stream WebResponse::GetResponseStream()
    System::IO::Stream* GetResponseStream();
  }; // System.Net.FileWebResponse
  #pragma pack(pop)
  static check_size<sizeof(FileWebResponse), 64 + sizeof(System::Uri*)> __System_Net_FileWebResponseSizeCheck;
  static_assert(sizeof(FileWebResponse) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FileWebResponse*, "System.Net", "FileWebResponse");
