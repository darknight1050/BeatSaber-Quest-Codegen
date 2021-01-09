// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
#include "Org/BouncyCastle/Crypto/Digests/Gost3411_2012Digest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0x54
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest
  // [] Offset: FFFFFFFF
  class Gost3411_2012_512Digest : public Org::BouncyCastle::Crypto::Digests::Gost3411_2012Digest {
    public:
    // Creating value type constructor for type: Gost3411_2012_512Digest
    Gost3411_2012_512Digest() noexcept {}
    // Get static field: static private readonly System.Byte[] IV
    static ::Array<uint8_t>* _get_IV();
    // Set static field: static private readonly System.Byte[] IV
    static void _set_IV(::Array<uint8_t>* value);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest other)
    // Offset: 0x175FEAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411_2012_512Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411_2012_512Digest*, creationType>(other)));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x175FDCC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.String Gost3411_2012Digest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Void .ctor()
    // Offset: 0x175FE14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3411_2012_512Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3411_2012_512Digest*, creationType>()));
    }
    // public override System.Int32 GetDigestSize()
    // Offset: 0x175FF5C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.Int32 Gost3411_2012Digest::GetDigestSize()
    int GetDigestSize();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x175FF64
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: Org.BouncyCastle.Utilities.IMemoable Gost3411_2012Digest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // static private System.Void .cctor()
    // Offset: 0x175FFC4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.Gost3411_2012Digest
    // Base method: System.Void Gost3411_2012Digest::.cctor()
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Digests.Gost3411_2012_512Digest
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411_2012_512Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411_2012_512Digest");
#pragma pack(pop)
