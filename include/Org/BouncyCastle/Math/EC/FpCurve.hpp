// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpCurve
#include "Org/BouncyCastle/Math/EC/AbstractFpCurve.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: FpPoint
  class FpPoint;
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECCurve because it is already included!
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.FpCurve
  // [] Offset: FFFFFFFF
  class FpCurve : public Org::BouncyCastle::Math::EC::AbstractFpCurve {
    public:
    // protected readonly Org.BouncyCastle.Math.BigInteger m_q
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Math::BigInteger* m_q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.BigInteger m_r
    // Size: 0x8
    // Offset: 0x58
    Org::BouncyCastle::Math::BigInteger* m_r;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // protected readonly Org.BouncyCastle.Math.EC.FpPoint m_infinity
    // Size: 0x8
    // Offset: 0x60
    Org::BouncyCastle::Math::EC::FpPoint* m_infinity;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::FpPoint*) == 0x8);
    // Creating value type constructor for type: FpCurve
    FpCurve(Org::BouncyCastle::Math::BigInteger* m_q_ = {}, Org::BouncyCastle::Math::BigInteger* m_r_ = {}, Org::BouncyCastle::Math::EC::FpPoint* m_infinity_ = {}) noexcept : m_q{m_q_}, m_r{m_r_}, m_infinity{m_infinity_} {}
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a, Org.BouncyCastle.Math.BigInteger b, Org.BouncyCastle.Math.BigInteger order, Org.BouncyCastle.Math.BigInteger cofactor)
    // Offset: 0x1F79FD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FpCurve* New_ctor(Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* a, Org::BouncyCastle::Math::BigInteger* b, Org::BouncyCastle::Math::BigInteger* order, Org::BouncyCastle::Math::BigInteger* cofactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::FpCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FpCurve*, creationType>(q, a, b, order, cofactor)));
    }
    // protected System.Void .ctor(Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger r, Org.BouncyCastle.Math.EC.ECFieldElement a, Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.BigInteger order, Org.BouncyCastle.Math.BigInteger cofactor)
    // Offset: 0x1F7A2E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FpCurve* New_ctor(Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* r, Org::BouncyCastle::Math::EC::ECFieldElement* a, Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::BigInteger* order, Org::BouncyCastle::Math::BigInteger* cofactor) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::FpCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FpCurve*, creationType>(q, r, a, b, order, cofactor)));
    }
    // protected override Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0x1F7A3A8
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECCurve ECCurve::CloneCurve_NEW()
    Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // public override System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x1F7A440
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Boolean ECCurve::SupportsCoordinateSystem_NEW(System.Int32 coord)
    bool SupportsCoordinateSystem(int coord);
    // public override Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0x1F7A460
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::get_Infinity_NEW()
    Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x1F7A468
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Int32 ECCurve::get_FieldSize_NEW()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1F7A484
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::FromBigInteger_NEW(Org.BouncyCastle.Math.BigInteger x)
    Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1F7A5D4
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint_NEW(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1F7A65C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint_NEW(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
    // public override Org.BouncyCastle.Math.EC.ECPoint ImportPoint(Org.BouncyCastle.Math.EC.ECPoint p)
    // Offset: 0x1F7A6FC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::ImportPoint_NEW(Org.BouncyCastle.Math.EC.ECPoint p)
    Org::BouncyCastle::Math::EC::ECPoint* ImportPoint(Org::BouncyCastle::Math::EC::ECPoint* p);
  }; // Org.BouncyCastle.Math.EC.FpCurve
  #pragma pack(pop)
  static check_size<sizeof(FpCurve), 96 + sizeof(Org::BouncyCastle::Math::EC::FpPoint*)> __Org_BouncyCastle_Math_EC_FpCurveSizeCheck;
  static_assert(sizeof(FpCurve) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::FpCurve*, "Org.BouncyCastle.Math.EC", "FpCurve");
