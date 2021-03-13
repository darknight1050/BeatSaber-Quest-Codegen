// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Field
namespace Org::BouncyCastle::Math::Field {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Field.IFiniteField
  // [] Offset: FFFFFFFF
  class IFiniteField {
    public:
    // Creating value type constructor for type: IFiniteField
    IFiniteField() noexcept {}
    // public Org.BouncyCastle.Math.BigInteger get_Characteristic()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Math::BigInteger* get_Characteristic_NEW();
    // public System.Int32 get_Dimension()
    // Offset: 0xFFFFFFFF
    int get_Dimension_NEW();
  }; // Org.BouncyCastle.Math.Field.IFiniteField
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Field::IFiniteField*, "Org.BouncyCastle.Math.Field", "IFiniteField");
