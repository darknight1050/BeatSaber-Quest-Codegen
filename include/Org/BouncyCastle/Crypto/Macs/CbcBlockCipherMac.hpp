// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Forward declaring type: IBlockCipherPadding
  class IBlockCipherPadding;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x34
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
  // [] Offset: FFFFFFFF
  class CbcBlockCipherMac : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* buf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x18
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: cipher
    char __padding1[0x4] = {};
    // private Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IBlockCipher*) == 0x8);
    // private Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*) == 0x8);
    // private System.Int32 macSize
    // Size: 0x4
    // Offset: 0x30
    int macSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CbcBlockCipherMac
    CbcBlockCipherMac(::Array<uint8_t>* buf_ = {}, int bufOff_ = {}, Org::BouncyCastle::Crypto::IBlockCipher* cipher_ = {}, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding_ = {}, int macSize_ = {}) noexcept : buf{buf_}, bufOff{bufOff_}, cipher{cipher_}, padding{padding_}, macSize{macSize_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x149C1D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CbcBlockCipherMac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CbcBlockCipherMac*, creationType>(cipher)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits)
    // Offset: 0x149C45C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CbcBlockCipherMac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CbcBlockCipherMac*, creationType>(cipher, macSizeInBits)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits, Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding)
    // Offset: 0x149C2BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CbcBlockCipherMac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CbcBlockCipherMac*, creationType>(cipher, macSizeInBits, padding)));
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x149C464
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x149C604
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::GetMacSize()
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x149C60C
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x149C738
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x149C9DC
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x149C534
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.CbcBlockCipherMac
  static check_size<sizeof(CbcBlockCipherMac), 48 + sizeof(int)> __Org_BouncyCastle_Crypto_Macs_CbcBlockCipherMacSizeCheck;
  static_assert(sizeof(CbcBlockCipherMac) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::CbcBlockCipherMac*, "Org.BouncyCastle.Crypto.Macs", "CbcBlockCipherMac");
#pragma pack(pop)
