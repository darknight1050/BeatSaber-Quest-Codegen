// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.HttpTransferUpdate
  class HttpTransferUpdate : public ::CsObject {
    public:
    // public readonly System.UInt64 ID
    // Offset: 0x10
    uint64_t ID;
    // public readonly System.Byte[] Payload
    // Offset: 0x18
    ::Array<uint8_t>* Payload;
    // public readonly System.Boolean IsCompleted
    // Offset: 0x20
    bool IsCompleted;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xE8C9FC
    static HttpTransferUpdate* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.HttpTransferUpdate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::HttpTransferUpdate*, "Oculus.Platform.Models", "HttpTransferUpdate");
#pragma pack(pop)
