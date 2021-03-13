// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerBitString
#include "Org/BouncyCastle/Asn1/DerBitString.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerBitString
  // [] Offset: FFFFFFFF
  class BerBitString : public Org::BouncyCastle::Asn1::DerBitString {
    public:
    // Creating value type constructor for type: BerBitString
    BerBitString() noexcept {}
    // public System.Void .ctor(System.Byte[] data, System.Int32 padBits)
    // Offset: 0x1545780
    // Implemented from: Org.BouncyCastle.Asn1.DerBitString
    // Base method: System.Void DerBitString::.ctor(System.Byte[] data, System.Int32 padBits)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerBitString* New_ctor(::Array<uint8_t>* data, int padBits) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerBitString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerBitString*, creationType>(data, padBits)));
    }
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1545944
    // Implemented from: Org.BouncyCastle.Asn1.DerBitString
    // Base method: System.Void DerBitString::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
  }; // Org.BouncyCastle.Asn1.BerBitString
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerBitString*, "Org.BouncyCastle.Asn1", "BerBitString");
