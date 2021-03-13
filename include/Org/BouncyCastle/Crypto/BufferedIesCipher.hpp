// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.BufferedCipherBase
#include "Org/BouncyCastle/Crypto/BufferedCipherBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Forward declaring type: IesEngine
  class IesEngine;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: MemoryStream
  class MemoryStream;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.BufferedIesCipher
  // [] Offset: FFFFFFFF
  class BufferedIesCipher : public Org::BouncyCastle::Crypto::BufferedCipherBase {
    public:
    // private readonly Org.BouncyCastle.Crypto.Engines.IesEngine engine
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Engines::IesEngine* engine;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Engines::IesEngine*) == 0x8);
    // private System.Boolean forEncryption
    // Size: 0x1
    // Offset: 0x18
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: forEncryption and: buffer
    char __padding1[0x7] = {};
    // private System.IO.MemoryStream buffer
    // Size: 0x8
    // Offset: 0x20
    System::IO::MemoryStream* buffer;
    // Field size check
    static_assert(sizeof(System::IO::MemoryStream*) == 0x8);
    // Creating value type constructor for type: BufferedIesCipher
    BufferedIesCipher(Org::BouncyCastle::Crypto::Engines::IesEngine* engine_ = {}, bool forEncryption_ = {}, System::IO::MemoryStream* buffer_ = {}) noexcept : engine{engine_}, forEncryption{forEncryption_}, buffer{buffer_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Engines.IesEngine engine)
    // Offset: 0x1AEA864
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BufferedIesCipher* New_ctor(Org::BouncyCastle::Crypto::Engines::IesEngine* engine) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::BufferedIesCipher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BufferedIesCipher*, creationType>(engine)));
    }
    // public override System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1AEA940
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Init_NEW(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public override System.Int32 GetBlockSize()
    // Offset: 0x1AEA9C8
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetBlockSize_NEW()
    int GetBlockSize();
    // public override System.Int32 GetOutputSize(System.Int32 inputLen)
    // Offset: 0x1AEA9D0
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetOutputSize_NEW(System.Int32 inputLen)
    int GetOutputSize(int inputLen);
    // public override System.Int32 GetUpdateOutputSize(System.Int32 inputLen)
    // Offset: 0x1AEAA90
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Int32 BufferedCipherBase::GetUpdateOutputSize_NEW(System.Int32 inputLen)
    int GetUpdateOutputSize(int inputLen);
    // public override System.Byte[] ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1AEAA98
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::ProcessBytes_NEW(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::Array<uint8_t>* ProcessBytes(::Array<uint8_t>* input, int inOff, int length);
    // public override System.Byte[] DoFinal()
    // Offset: 0x1AEABDC
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal_NEW()
    ::Array<uint8_t>* DoFinal();
    // public override System.Byte[] DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x1AEAC4C
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Byte[] BufferedCipherBase::DoFinal_NEW(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    ::Array<uint8_t>* DoFinal(::Array<uint8_t>* input, int inOff, int length);
    // public override System.Void Reset()
    // Offset: 0x1AEAC80
    // Implemented from: Org.BouncyCastle.Crypto.BufferedCipherBase
    // Base method: System.Void BufferedCipherBase::Reset_NEW()
    void Reset();
  }; // Org.BouncyCastle.Crypto.BufferedIesCipher
  #pragma pack(pop)
  static check_size<sizeof(BufferedIesCipher), 32 + sizeof(System::IO::MemoryStream*)> __Org_BouncyCastle_Crypto_BufferedIesCipherSizeCheck;
  static_assert(sizeof(BufferedIesCipher) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedIesCipher*, "Org.BouncyCastle.Crypto", "BufferedIesCipher");
