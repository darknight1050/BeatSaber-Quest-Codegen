// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.IXof
  // [] Offset: FFFFFFFF
  class IXof/*, public Org::BouncyCastle::Crypto::IDigest*/ {
    public:
    // Creating value type constructor for type: IXof
    IXof() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff, System.Int32 outLen)
    // Offset: 0xFFFFFFFF
    int DoFinal_NEW(::Array<uint8_t>* output, int outOff, int outLen);
  }; // Org.BouncyCastle.Crypto.IXof
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IXof*, "Org.BouncyCastle.Crypto", "IXof");
