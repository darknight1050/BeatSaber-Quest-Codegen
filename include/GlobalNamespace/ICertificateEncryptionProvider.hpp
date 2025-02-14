// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ICertificateEncryptionProvider
  class ICertificateEncryptionProvider/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: ICertificateEncryptionProvider
    ICertificateEncryptionProvider() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Byte[] SignData(System.Byte[] data, System.Int32 offset, System.Int32 length)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* SignData(::Array<uint8_t>* data, int offset, int length);
  }; // ICertificateEncryptionProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICertificateEncryptionProvider*, "", "ICertificateEncryptionProvider");
