// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractFpFieldElement
#include "Org/BouncyCastle/Math/EC/AbstractFpFieldElement.hpp"
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
  // Skipping declaration: ECFieldElement because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.FpFieldElement
  class FpFieldElement : public Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger q
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Math::BigInteger* q;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger r
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* r;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Math.BigInteger x
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* x;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // Creating value type constructor for type: FpFieldElement
    FpFieldElement(Org::BouncyCastle::Math::BigInteger* q_ = {}, Org::BouncyCastle::Math::BigInteger* r_ = {}, Org::BouncyCastle::Math::BigInteger* x_ = {}) noexcept : q{q_}, r{r_}, x{x_} {}
    // static Org.BouncyCastle.Math.BigInteger CalculateResidue(Org.BouncyCastle.Math.BigInteger p)
    // Offset: 0x2139FB4
    static Org::BouncyCastle::Math::BigInteger* CalculateResidue(Org::BouncyCastle::Math::BigInteger* p);
    // System.Void .ctor(Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger r, Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x213A3EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FpFieldElement* New_ctor(Org::BouncyCastle::Math::BigInteger* q, Org::BouncyCastle::Math::BigInteger* r, Org::BouncyCastle::Math::BigInteger* x) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Math::EC::FpFieldElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FpFieldElement*, creationType>(q, r, x)));
    }
    // private Org.BouncyCastle.Math.EC.ECFieldElement CheckSqrt(Org.BouncyCastle.Math.EC.ECFieldElement z)
    // Offset: 0x213B8B4
    Org::BouncyCastle::Math::EC::ECFieldElement* CheckSqrt(Org::BouncyCastle::Math::EC::ECFieldElement* z);
    // private Org.BouncyCastle.Math.BigInteger[] LucasSequence(Org.BouncyCastle.Math.BigInteger P, Org.BouncyCastle.Math.BigInteger Q, Org.BouncyCastle.Math.BigInteger k)
    // Offset: 0x213B90C
    ::Array<Org::BouncyCastle::Math::BigInteger*>* LucasSequence(Org::BouncyCastle::Math::BigInteger* P, Org::BouncyCastle::Math::BigInteger* Q, Org::BouncyCastle::Math::BigInteger* k);
    // protected Org.BouncyCastle.Math.BigInteger ModAdd(Org.BouncyCastle.Math.BigInteger x1, Org.BouncyCastle.Math.BigInteger x2)
    // Offset: 0x213BE5C
    Org::BouncyCastle::Math::BigInteger* ModAdd(Org::BouncyCastle::Math::BigInteger* x1, Org::BouncyCastle::Math::BigInteger* x2);
    // protected Org.BouncyCastle.Math.BigInteger ModDouble(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x213BEC4
    Org::BouncyCastle::Math::BigInteger* ModDouble(Org::BouncyCastle::Math::BigInteger* x);
    // protected Org.BouncyCastle.Math.BigInteger ModHalfAbs(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x213BF30
    Org::BouncyCastle::Math::BigInteger* ModHalfAbs(Org::BouncyCastle::Math::BigInteger* x);
    // protected Org.BouncyCastle.Math.BigInteger ModInverse(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x213BF94
    Org::BouncyCastle::Math::BigInteger* ModInverse(Org::BouncyCastle::Math::BigInteger* x);
    // protected Org.BouncyCastle.Math.BigInteger ModMult(Org.BouncyCastle.Math.BigInteger x1, Org.BouncyCastle.Math.BigInteger x2)
    // Offset: 0x213C074
    Org::BouncyCastle::Math::BigInteger* ModMult(Org::BouncyCastle::Math::BigInteger* x1, Org::BouncyCastle::Math::BigInteger* x2);
    // protected Org.BouncyCastle.Math.BigInteger ModReduce(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x213C0BC
    Org::BouncyCastle::Math::BigInteger* ModReduce(Org::BouncyCastle::Math::BigInteger* x);
    // protected Org.BouncyCastle.Math.BigInteger ModSubtract(Org.BouncyCastle.Math.BigInteger x1, Org.BouncyCastle.Math.BigInteger x2)
    // Offset: 0x213C3EC
    Org::BouncyCastle::Math::BigInteger* ModSubtract(Org::BouncyCastle::Math::BigInteger* x1, Org::BouncyCastle::Math::BigInteger* x2);
    // public System.Boolean Equals(Org.BouncyCastle.Math.EC.FpFieldElement other)
    // Offset: 0x213C4FC
    bool Equals(Org::BouncyCastle::Math::EC::FpFieldElement* other);
    // public override Org.BouncyCastle.Math.BigInteger ToBigInteger()
    // Offset: 0x213A804
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.BigInteger ECFieldElement::ToBigInteger()
    Org::BouncyCastle::Math::BigInteger* ToBigInteger();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x213A80C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x213A828
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Add(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Add(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement AddOne()
    // Offset: 0x213A8E8
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::AddOne()
    Org::BouncyCastle::Math::EC::ECFieldElement* AddOne();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x213A9DC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Subtract(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x213AA9C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Multiply(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x213AB5C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyMinusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x213AC94
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::MultiplyPlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement b, Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* b, Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    // Offset: 0x213AE48
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Divide(Org.BouncyCastle.Math.EC.ECFieldElement b)
    Org::BouncyCastle::Math::EC::ECFieldElement* Divide(Org::BouncyCastle::Math::EC::ECFieldElement* b);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Negate()
    // Offset: 0x213AF20
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Negate()
    Org::BouncyCastle::Math::EC::ECFieldElement* Negate();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Square()
    // Offset: 0x213AFC4
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Square()
    Org::BouncyCastle::Math::EC::ECFieldElement* Square();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    // Offset: 0x213B05C
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::SquarePlusProduct(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y)
    Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Invert()
    // Offset: 0x213B1EC
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Invert()
    Org::BouncyCastle::Math::EC::ECFieldElement* Invert();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement Sqrt()
    // Offset: 0x213B280
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECFieldElement::Sqrt()
    Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x213C440
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Boolean ECFieldElement::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x213C558
    // Implemented from: Org.BouncyCastle.Math.EC.ECFieldElement
    // Base method: System.Int32 ECFieldElement::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Math.EC.FpFieldElement
  #pragma pack(pop)
  static check_size<sizeof(FpFieldElement), 32 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Math_EC_FpFieldElementSizeCheck;
  static_assert(sizeof(FpFieldElement) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::FpFieldElement*, "Org.BouncyCastle.Math.EC", "FpFieldElement");
