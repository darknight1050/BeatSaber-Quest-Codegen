// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Forward declaring type: ZTauElement
  class ZTauElement;
  // Forward declaring type: SimpleBigDecimal
  class SimpleBigDecimal;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractF2mCurve
  class AbstractF2mCurve;
  // Forward declaring type: AbstractF2mPoint
  class AbstractF2mPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Abc
namespace Org::BouncyCastle::Math::EC::Abc {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Abc.Tnaf
  class Tnaf : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Tnaf
    Tnaf() noexcept {}
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusOne
    static Org::BouncyCastle::Math::BigInteger* _get_MinusOne();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusOne
    static void _set_MinusOne(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusTwo
    static Org::BouncyCastle::Math::BigInteger* _get_MinusTwo();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusTwo
    static void _set_MinusTwo(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusThree
    static Org::BouncyCastle::Math::BigInteger* _get_MinusThree();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger MinusThree
    static void _set_MinusThree(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger Four
    static Org::BouncyCastle::Math::BigInteger* _get_Four();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger Four
    static void _set_Four(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.EC.Abc.ZTauElement[] Alpha0
    static ::Array<Org::BouncyCastle::Math::EC::Abc::ZTauElement*>* _get_Alpha0();
    // Set static field: static public readonly Org.BouncyCastle.Math.EC.Abc.ZTauElement[] Alpha0
    static void _set_Alpha0(::Array<Org::BouncyCastle::Math::EC::Abc::ZTauElement*>* value);
    // Get static field: static public readonly System.SByte[][] Alpha0Tnaf
    static ::Array<::Array<int8_t>*>* _get_Alpha0Tnaf();
    // Set static field: static public readonly System.SByte[][] Alpha0Tnaf
    static void _set_Alpha0Tnaf(::Array<::Array<int8_t>*>* value);
    // Get static field: static public readonly Org.BouncyCastle.Math.EC.Abc.ZTauElement[] Alpha1
    static ::Array<Org::BouncyCastle::Math::EC::Abc::ZTauElement*>* _get_Alpha1();
    // Set static field: static public readonly Org.BouncyCastle.Math.EC.Abc.ZTauElement[] Alpha1
    static void _set_Alpha1(::Array<Org::BouncyCastle::Math::EC::Abc::ZTauElement*>* value);
    // Get static field: static public readonly System.SByte[][] Alpha1Tnaf
    static ::Array<::Array<int8_t>*>* _get_Alpha1Tnaf();
    // Set static field: static public readonly System.SByte[][] Alpha1Tnaf
    static void _set_Alpha1Tnaf(::Array<::Array<int8_t>*>* value);
    // static public Org.BouncyCastle.Math.BigInteger Norm(System.SByte mu, Org.BouncyCastle.Math.EC.Abc.ZTauElement lambda)
    // Offset: 0x1CF0220
    static Org::BouncyCastle::Math::BigInteger* Norm(int8_t mu, Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda);
    // static public Org.BouncyCastle.Math.EC.Abc.ZTauElement Round(Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal lambda0, Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal lambda1, System.SByte mu)
    // Offset: 0x1CF035C
    static Org::BouncyCastle::Math::EC::Abc::ZTauElement* Round(Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda0, Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* lambda1, int8_t mu);
    // static public Org.BouncyCastle.Math.EC.Abc.SimpleBigDecimal ApproximateDivisionByN(Org.BouncyCastle.Math.BigInteger k, Org.BouncyCastle.Math.BigInteger s, Org.BouncyCastle.Math.BigInteger vm, System.SByte a, System.Int32 m, System.Int32 c)
    // Offset: 0x1CF0760
    static Org::BouncyCastle::Math::EC::Abc::SimpleBigDecimal* ApproximateDivisionByN(Org::BouncyCastle::Math::BigInteger* k, Org::BouncyCastle::Math::BigInteger* s, Org::BouncyCastle::Math::BigInteger* vm, int8_t a, int m, int c);
    // static public System.SByte GetMu(System.Int32 curveA)
    // Offset: 0x1CF08E0
    static int8_t GetMu(int curveA);
    // static public Org.BouncyCastle.Math.BigInteger[] GetLucas(System.SByte mu, System.Int32 k, System.Boolean doV)
    // Offset: 0x1CF08F0
    static ::Array<Org::BouncyCastle::Math::BigInteger*>* GetLucas(int8_t mu, int k, bool doV);
    // static public Org.BouncyCastle.Math.BigInteger GetTw(System.SByte mu, System.Int32 w)
    // Offset: 0x1CF0AF4
    static Org::BouncyCastle::Math::BigInteger* GetTw(int8_t mu, int w);
    // static public Org.BouncyCastle.Math.BigInteger[] GetSi(Org.BouncyCastle.Math.EC.AbstractF2mCurve curve)
    // Offset: 0x1CF0C94
    static ::Array<Org::BouncyCastle::Math::BigInteger*>* GetSi(Org::BouncyCastle::Math::EC::AbstractF2mCurve* curve);
    // static protected System.Int32 GetShiftsForCofactor(Org.BouncyCastle.Math.BigInteger h)
    // Offset: 0x1CF0F9C
    static int GetShiftsForCofactor(Org::BouncyCastle::Math::BigInteger* h);
    // static public Org.BouncyCastle.Math.EC.Abc.ZTauElement PartModReduction(Org.BouncyCastle.Math.BigInteger k, System.Int32 m, System.SByte a, Org.BouncyCastle.Math.BigInteger[] s, System.SByte mu, System.SByte c)
    // Offset: 0x1CF1058
    static Org::BouncyCastle::Math::EC::Abc::ZTauElement* PartModReduction(Org::BouncyCastle::Math::BigInteger* k, int m, int8_t a, ::Array<Org::BouncyCastle::Math::BigInteger*>* s, int8_t mu, int8_t c);
    // static public Org.BouncyCastle.Math.EC.AbstractF2mPoint MultiplyFromTnaf(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, System.SByte[] u)
    // Offset: 0x1CF12F0
    static Org::BouncyCastle::Math::EC::AbstractF2mPoint* MultiplyFromTnaf(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, ::Array<int8_t>* u);
    // static public System.SByte[] TauAdicWNaf(System.SByte mu, Org.BouncyCastle.Math.EC.Abc.ZTauElement lambda, System.SByte width, Org.BouncyCastle.Math.BigInteger pow2w, Org.BouncyCastle.Math.BigInteger tw, Org.BouncyCastle.Math.EC.Abc.ZTauElement[] alpha)
    // Offset: 0x1CF150C
    static ::Array<int8_t>* TauAdicWNaf(int8_t mu, Org::BouncyCastle::Math::EC::Abc::ZTauElement* lambda, int8_t width, Org::BouncyCastle::Math::BigInteger* pow2w, Org::BouncyCastle::Math::BigInteger* tw, ::Array<Org::BouncyCastle::Math::EC::Abc::ZTauElement*>* alpha);
    // static public Org.BouncyCastle.Math.EC.AbstractF2mPoint[] GetPreComp(Org.BouncyCastle.Math.EC.AbstractF2mPoint p, System.SByte a)
    // Offset: 0x1CF18CC
    static ::Array<Org::BouncyCastle::Math::EC::AbstractF2mPoint*>* GetPreComp(Org::BouncyCastle::Math::EC::AbstractF2mPoint* p, int8_t a);
    // static private System.Void .cctor()
    // Offset: 0x1CF1AA8
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Abc.Tnaf
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Abc::Tnaf*, "Org.BouncyCastle.Math.EC.Abc", "Tnaf");
