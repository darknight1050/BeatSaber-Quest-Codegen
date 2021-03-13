// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: IDsaKCalculator
  class IDsaKCalculator;
  // Forward declaring type: IDsaEncoding
  class IDsaEncoding;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
  // Forward declaring type: ECKeyParameters
  class ECKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.SM2Signer
  // [] Offset: FFFFFFFF
  class SM2Signer : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private readonly Org.BouncyCastle.Crypto.Signers.IDsaKCalculator kCalculator
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private readonly Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Signers::IDsaEncoding*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*) == 0x8);
    // private Org.BouncyCastle.Math.EC.ECPoint pubPoint
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Math::EC::ECPoint* pubPoint;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    // private Org.BouncyCastle.Crypto.Parameters.ECKeyParameters ecKey
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ecKey;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::ECKeyParameters*) == 0x8);
    // private System.Byte[] z
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* z;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: SM2Signer
    SM2Signer(Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator_ = {}, Org::BouncyCastle::Crypto::IDigest* digest_ = {}, Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding_ = {}, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams_ = {}, Org::BouncyCastle::Math::EC::ECPoint* pubPoint_ = {}, Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* ecKey_ = {}, ::Array<uint8_t>* z_ = {}) noexcept : kCalculator{kCalculator_}, digest{digest_}, encoding{encoding_}, ecParams{ecParams_}, pubPoint{pubPoint_}, ecKey{ecKey_}, z{z_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x116E160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SM2Signer* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::SM2Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SM2Signer*, creationType>(digest)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Signers.IDsaEncoding encoding, Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0x116E1E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SM2Signer* New_ctor(Org::BouncyCastle::Crypto::Signers::IDsaEncoding* encoding, Org::BouncyCastle::Crypto::IDigest* digest) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::SM2Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SM2Signer*, creationType>(encoding, digest)));
    }
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x116E260
    void Init_NEW(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] buf, System.Int32 off, System.Int32 len)
    // Offset: 0x116E984
    void BlockUpdate_NEW(::Array<uint8_t>* buf, int off, int len);
    // public System.Void Reset()
    // Offset: 0x116EA60
    void Reset_NEW();
    // public System.Byte[] GenerateSignature()
    // Offset: 0x116EBB8
    ::Array<uint8_t>* GenerateSignature_NEW();
    // private System.Byte[] GetZ(System.Byte[] userID)
    // Offset: 0x116E7FC
    ::Array<uint8_t>* GetZ(::Array<uint8_t>* userID);
    // private System.Void AddUserID(Org.BouncyCastle.Crypto.IDigest digest, System.Byte[] userID)
    // Offset: 0x116F09C
    void AddUserID(Org::BouncyCastle::Crypto::IDigest* digest, ::Array<uint8_t>* userID);
    // private System.Void AddFieldElement(Org.BouncyCastle.Crypto.IDigest digest, Org.BouncyCastle.Math.EC.ECFieldElement v)
    // Offset: 0x116F244
    void AddFieldElement(Org::BouncyCastle::Crypto::IDigest* digest, Org::BouncyCastle::Math::EC::ECFieldElement* v);
    // protected Org.BouncyCastle.Math.BigInteger CalculateE(Org.BouncyCastle.Math.BigInteger n, System.Byte[] message)
    // Offset: 0x116F330
    Org::BouncyCastle::Math::BigInteger* CalculateE_NEW(Org::BouncyCastle::Math::BigInteger* n, ::Array<uint8_t>* message);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateBasePointMultiplier()
    // Offset: 0x116F394
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier_NEW();
  }; // Org.BouncyCastle.Crypto.Signers.SM2Signer
  #pragma pack(pop)
  static check_size<sizeof(SM2Signer), 64 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Signers_SM2SignerSizeCheck;
  static_assert(sizeof(SM2Signer) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::SM2Signer*, "Org.BouncyCastle.Crypto.Signers", "SM2Signer");
