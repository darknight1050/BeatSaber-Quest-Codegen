// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.HttpContent
#include "System/Net/Http/HttpContent.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: TransportContext
  class TransportContext;
}
// Completed forward declares
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.StreamContent
  class StreamContent : public System::Net::Http::HttpContent {
    public:
    // private readonly System.IO.Stream content
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* content;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private readonly System.Int32 bufferSize
    // Size: 0x4
    // Offset: 0x30
    int bufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufferSize and: cancellationToken
    char __padding1[0x4] = {};
    // private readonly System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x38
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private readonly System.Int64 startPosition
    // Size: 0x8
    // Offset: 0x40
    int64_t startPosition;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean contentCopied
    // Size: 0x1
    // Offset: 0x48
    bool contentCopied;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: StreamContent
    StreamContent(System::IO::Stream* content_ = {}, int bufferSize_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, int64_t startPosition_ = {}, bool contentCopied_ = {}) noexcept : content{content_}, bufferSize{bufferSize_}, cancellationToken{cancellationToken_}, startPosition{startPosition_}, contentCopied{contentCopied_} {}
    // public System.Void .ctor(System.IO.Stream content)
    // Offset: 0x158811C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamContent* New_ctor(System::IO::Stream* content) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::StreamContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamContent*, creationType>(content)));
    }
    // public System.Void .ctor(System.IO.Stream content, System.Int32 bufferSize)
    // Offset: 0x1588124
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamContent* New_ctor(System::IO::Stream* content, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::StreamContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamContent*, creationType>(content, bufferSize)));
    }
    // System.Void .ctor(System.IO.Stream content, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x15851D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamContent* New_ctor(System::IO::Stream* content, System::Threading::CancellationToken cancellationToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::StreamContent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamContent*, creationType>(content, cancellationToken)));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1588224
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Void HttpContent::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected internal override System.Threading.Tasks.Task SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    // Offset: 0x1588280
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Threading.Tasks.Task HttpContent::SerializeToStreamAsync(System.IO.Stream stream, System.Net.TransportContext context)
    System::Threading::Tasks::Task* SerializeToStreamAsync(System::IO::Stream* stream, System::Net::TransportContext* context);
    // protected internal override System.Boolean TryComputeLength(out System.Int64 length)
    // Offset: 0x1588380
    // Implemented from: System.Net.Http.HttpContent
    // Base method: System.Boolean HttpContent::TryComputeLength(out System.Int64 length)
    bool TryComputeLength(int64_t& length);
  }; // System.Net.Http.StreamContent
  #pragma pack(pop)
  static check_size<sizeof(StreamContent), 72 + sizeof(bool)> __System_Net_Http_StreamContentSizeCheck;
  static_assert(sizeof(StreamContent) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::StreamContent*, "System.Net.Http", "StreamContent");
