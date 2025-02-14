// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
  class ECMultiplier {
    public:
    // Creating value type constructor for type: ECMultiplier
    ECMultiplier() noexcept {}
    // public Org.BouncyCastle.Math.EC.ECPoint Multiply(Org.BouncyCastle.Math.EC.ECPoint p, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPoint* Multiply(Org::BouncyCastle::Math::EC::ECPoint* p, Org::BouncyCastle::Math::BigInteger* k);
  }; // Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier*, "Org.BouncyCastle.Math.EC.Multiplier", "ECMultiplier");
