// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding
#include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Paddings.TbcPadding
  class TbcPadding : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*/ {
    public:
    // Creating value type constructor for type: TbcPadding
    TbcPadding() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding
    operator Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding*>(this);
    }
    // public System.Void Init(Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x123A044
    void Init(Org::BouncyCastle::Security::SecureRandom* random);
    // public System.Int32 AddPadding(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x123A048
    int AddPadding(::Array<uint8_t>* input, int inOff);
    // public System.Int32 PadCount(System.Byte[] input)
    // Offset: 0x123A0E8
    int PadCount(::Array<uint8_t>* input);
    // public System.Void .ctor()
    // Offset: 0x123A150
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TbcPadding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Paddings::TbcPadding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TbcPadding*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Paddings.TbcPadding
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Paddings::TbcPadding*, "Org.BouncyCastle.Crypto.Paddings", "TbcPadding");
