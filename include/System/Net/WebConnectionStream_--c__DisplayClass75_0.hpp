// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebConnectionStream
#include "System/Net/WebConnectionStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: SimpleAsyncResult
  class SimpleAsyncResult;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionStream/<>c__DisplayClass75_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CA0974
  class WebConnectionStream::$$c__DisplayClass75_0 : public ::Il2CppObject {
    public:
    // public System.Net.WebConnectionStream <>4__this
    // Size: 0x8
    // Offset: 0x10
    System::Net::WebConnectionStream* $$4__this;
    // Field size check
    static_assert(sizeof(System::Net::WebConnectionStream*) == 0x8);
    // public System.Boolean setInternalLength
    // Size: 0x1
    // Offset: 0x18
    bool setInternalLength;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass75_0
    $$c__DisplayClass75_0(System::Net::WebConnectionStream* $$4__this_ = {}, bool setInternalLength_ = {}) noexcept : $$4__this{$$4__this_}, setInternalLength{setInternalLength_} {}
    // System.Boolean <SetHeadersAsync>b__0(System.Net.SimpleAsyncResult r)
    // Offset: 0x140ED50
    bool $SetHeadersAsync$b__0(System::Net::SimpleAsyncResult* r);
    // public System.Void .ctor()
    // Offset: 0x140E294
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionStream::$$c__DisplayClass75_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionStream::$$c__DisplayClass75_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionStream::$$c__DisplayClass75_0*, creationType>()));
    }
  }; // System.Net.WebConnectionStream/<>c__DisplayClass75_0
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionStream::$$c__DisplayClass75_0), 24 + sizeof(bool)> __System_Net_WebConnectionStream_$$c__DisplayClass75_0SizeCheck;
  static_assert(sizeof(WebConnectionStream::$$c__DisplayClass75_0) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionStream::$$c__DisplayClass75_0*, "System.Net", "WebConnectionStream/<>c__DisplayClass75_0");
