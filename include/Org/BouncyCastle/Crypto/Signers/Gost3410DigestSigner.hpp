// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IDsa
  class IDsa;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x29
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner
  // [] Offset: FFFFFFFF
  class Gost3410DigestSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDsa dsaSigner
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDsa* dsaSigner;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDsa*) == 0x8);
    // private readonly System.Int32 size
    // Size: 0x4
    // Offset: 0x20
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 halfSize
    // Size: 0x4
    // Offset: 0x24
    int halfSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean forSigning
    // Size: 0x1
    // Offset: 0x28
    bool forSigning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Gost3410DigestSigner
    Gost3410DigestSigner(Org::BouncyCastle::Crypto::IDigest* digest_ = {}, Org::BouncyCastle::Crypto::IDsa* dsaSigner_ = {}, int size_ = {}, int halfSize_ = {}, bool forSigning_ = {}) noexcept : digest{digest_}, dsaSigner{dsaSigner_}, size{size_}, halfSize{halfSize_}, forSigning{forSigning_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDsa signer, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x104F678
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410DigestSigner* New_ctor(Org::BouncyCastle::Crypto::IDsa* signer, Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410DigestSigner*, creationType>(signer, digest)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x104F770
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x104F978
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Byte[] GenerateSignature()
    // Offset: 0x104FA54
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Byte[] ISigner::GenerateSignature()
    ::Array<uint8_t>* GenerateSignature();
    // public System.Void Reset()
    // Offset: 0x104FE18
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Signers.Gost3410DigestSigner
  static check_size<sizeof(Gost3410DigestSigner), 40 + sizeof(bool)> __Org_BouncyCastle_Crypto_Signers_Gost3410DigestSignerSizeCheck;
  static_assert(sizeof(Gost3410DigestSigner) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Gost3410DigestSigner*, "Org.BouncyCastle.Crypto.Signers", "Gost3410DigestSigner");
#pragma pack(pop)
