// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPointMap
  class ECPointMap;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
  class ECEndomorphism {
    public:
    // Creating value type constructor for type: ECEndomorphism
    ECEndomorphism() noexcept {}
    // public Org.BouncyCastle.Math.EC.ECPointMap get_PointMap()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap();
    // public System.Boolean get_HasEfficientPointMap()
    // Offset: 0xFFFFFFFF
    bool get_HasEfficientPointMap();
  }; // Org.BouncyCastle.Math.EC.Endo.ECEndomorphism
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "ECEndomorphism");
