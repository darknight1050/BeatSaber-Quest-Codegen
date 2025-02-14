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
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat224
  class Nat224 : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Nat224
    Nat224() noexcept {}
    // static public System.UInt32 Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x13215C8
    static uint Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddBothTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1321770
    static uint AddBothTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Copy(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1321950
    static void Copy(::Array<uint>* x, ::Array<uint>* z);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x1321A38
    static void Copy(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0x1321BA8
    static ::Array<uint>* Create();
    // static public System.UInt32[] CreateExt()
    // Offset: 0x1321BF4
    static ::Array<uint>* CreateExt();
    // static public System.Boolean Eq(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1321C40
    static bool Eq(::Array<uint>* x, ::Array<uint>* y);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1321CB0
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.UInt32 GetBit(System.UInt32[] x, System.Int32 bit)
    // Offset: 0x1321DB4
    static uint GetBit(::Array<uint>* x, int bit);
    // static public System.Boolean Gte(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1321E2C
    static bool Gte(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean IsOne(System.UInt32[] x)
    // Offset: 0x1321EA8
    static bool IsOne(::Array<uint>* x);
    // static public System.Boolean IsZero(System.UInt32[] x)
    // Offset: 0x1321F14
    static bool IsZero(::Array<uint>* x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x1321F74
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt32 MulAddTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0x1322194
    static uint MulAddTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt64 Mul33Add(System.UInt32 w, System.UInt32[] x, System.Int32 xOff, System.UInt32[] y, System.Int32 yOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x1322334
    static uint64_t Mul33Add(uint w, ::Array<uint>* x, int xOff, ::Array<uint>* y, int yOff, ::Array<uint>* z, int zOff);
    // static public System.UInt32 Mul33DWordAdd(System.UInt32 x, System.UInt64 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x13225B8
    static uint Mul33DWordAdd(uint x, uint64_t y, ::Array<uint>* z, int zOff);
    // static public System.UInt32 Mul33WordAdd(System.UInt32 x, System.UInt32 y, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0x1322698
    static uint Mul33WordAdd(uint x, uint y, ::Array<uint>* z, int zOff);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0x132274C
    static void Square(::Array<uint>* x, ::Array<uint>* zz);
    // static public System.Int32 Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0x1322AA0
    static int Sub(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Int32 SubFrom(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0x1322C48
    static int SubFrom(::Array<uint>* x, ::Array<uint>* z);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger(System.UInt32[] x)
    // Offset: 0x1322D9C
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger(::Array<uint>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat224
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat224*, "Org.BouncyCastle.Math.Raw", "Nat224");
