// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Math.BigInteger
#include "Mono/Math/BigInteger.hpp"
// Completed includes
// Type namespace: Mono.Math
namespace Mono::Math {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Math.BigInteger/Kernel
  // [] Offset: FFFFFFFF
  class BigInteger::Kernel : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Kernel
    Kernel() noexcept {}
    // static public Mono.Math.BigInteger Subtract(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
    // Offset: 0x1B84BF8
    static Mono::Math::BigInteger* Subtract(Mono::Math::BigInteger* big, Mono::Math::BigInteger* small);
    // static public System.Void MinusEq(Mono.Math.BigInteger big, Mono.Math.BigInteger small)
    // Offset: 0x1B86E30
    static void MinusEq(Mono::Math::BigInteger* big, Mono::Math::BigInteger* small);
    // static public System.Void PlusEq(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1B86F50
    static void PlusEq(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public Mono.Math.BigInteger/Sign Compare(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1B84AA8
    static Mono::Math::BigInteger::Sign Compare(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public System.UInt32 SingleByteDivideInPlace(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1B864E8
    static uint SingleByteDivideInPlace(Mono::Math::BigInteger* n, uint d);
    // static public System.UInt32 DwordMod(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1B84DC0
    static uint DwordMod(Mono::Math::BigInteger* n, uint d);
    // static public Mono.Math.BigInteger[] DwordDivMod(Mono.Math.BigInteger n, System.UInt32 d)
    // Offset: 0x1B870D8
    static ::Array<Mono::Math::BigInteger*>* DwordDivMod(Mono::Math::BigInteger* n, uint d);
    // static public Mono.Math.BigInteger[] multiByteDivide(Mono.Math.BigInteger bi1, Mono.Math.BigInteger bi2)
    // Offset: 0x1B84E70
    static ::Array<Mono::Math::BigInteger*>* multiByteDivide(Mono::Math::BigInteger* bi1, Mono::Math::BigInteger* bi2);
    // static public Mono.Math.BigInteger LeftShift(Mono.Math.BigInteger bi, System.Int32 n)
    // Offset: 0x1B8563C
    static Mono::Math::BigInteger* LeftShift(Mono::Math::BigInteger* bi, int n);
    // static public Mono.Math.BigInteger RightShift(Mono.Math.BigInteger bi, System.Int32 n)
    // Offset: 0x1B85824
    static Mono::Math::BigInteger* RightShift(Mono::Math::BigInteger* bi, int n);
    // static public System.Void Multiply(System.UInt32[] x, System.UInt32 xOffset, System.UInt32 xLen, System.UInt32[] y, System.UInt32 yOffset, System.UInt32 yLen, System.UInt32[] d, System.UInt32 dOffset)
    // Offset: 0x1B8553C
    static void Multiply(::Array<uint>* x, uint xOffset, uint xLen, ::Array<uint>* y, uint yOffset, uint yLen, ::Array<uint>* d, uint dOffset);
    // static public System.Void MultiplyMod2p32pmod(System.UInt32[] x, System.Int32 xOffset, System.Int32 xLen, System.UInt32[] y, System.Int32 yOffest, System.Int32 yLen, System.UInt32[] d, System.Int32 dOffset, System.Int32 mod)
    // Offset: 0x1B87284
    static void MultiplyMod2p32pmod(::Array<uint>* x, int xOffset, int xLen, ::Array<uint>* y, int yOffest, int yLen, ::Array<uint>* d, int dOffset, int mod);
    // static public System.UInt32 modInverse(Mono.Math.BigInteger bi, System.UInt32 modulus)
    // Offset: 0x1B873B4
    static uint modInverse(Mono::Math::BigInteger* bi, uint modulus);
    // static public Mono.Math.BigInteger modInverse(Mono.Math.BigInteger bi, Mono.Math.BigInteger modulus)
    // Offset: 0x1B86744
    static Mono::Math::BigInteger* modInverse(Mono::Math::BigInteger* bi, Mono::Math::BigInteger* modulus);
  }; // Mono.Math.BigInteger/Kernel
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Math::BigInteger::Kernel*, "Mono.Math", "BigInteger/Kernel");
