// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.IRsa
  class IRsa {
    public:
    // Creating value type constructor for type: IRsa
    IRsa() noexcept {}
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xFFFFFFFF
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetInputBlockSize()
    // Offset: 0xFFFFFFFF
    int GetInputBlockSize();
    // public System.Int32 GetOutputBlockSize()
    // Offset: 0xFFFFFFFF
    int GetOutputBlockSize();
    // public Org.BouncyCastle.Math.BigInteger ConvertInput(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* ConvertInput(::Array<uint8_t>* buf, int off, int len);
    // public Org.BouncyCastle.Math.BigInteger ProcessBlock(Org.BouncyCastle.Math.BigInteger input)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* ProcessBlock(Org::BouncyCastle::Math::BigInteger* input);
    // public System.Byte[] ConvertOutput(Org.BouncyCastle.Math.BigInteger result)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* ConvertOutput(Org::BouncyCastle::Math::BigInteger* result);
  }; // Org.BouncyCastle.Crypto.IRsa
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IRsa*, "Org.BouncyCastle.Crypto", "IRsa");
