// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IXof
  class IXof;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Rfc8032
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.Rfc8032.Ed448
  // [] Offset: FFFFFFFF
  class Ed448 : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Rfc8032::Ed448::Algorithm
    struct Algorithm;
    // Nested type: Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt
    class PointExt;
    // Nested type: Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp
    class PointPrecomp;
    // Creating value type constructor for type: Ed448
    Ed448() noexcept {}
    // Get static field: static public readonly System.Int32 PrehashSize
    static int _get_PrehashSize();
    // Set static field: static public readonly System.Int32 PrehashSize
    static void _set_PrehashSize(int value);
    // Get static field: static public readonly System.Int32 PublicKeySize
    static int _get_PublicKeySize();
    // Set static field: static public readonly System.Int32 PublicKeySize
    static void _set_PublicKeySize(int value);
    // Get static field: static public readonly System.Int32 SecretKeySize
    static int _get_SecretKeySize();
    // Set static field: static public readonly System.Int32 SecretKeySize
    static void _set_SecretKeySize(int value);
    // Get static field: static public readonly System.Int32 SignatureSize
    static int _get_SignatureSize();
    // Set static field: static public readonly System.Int32 SignatureSize
    static void _set_SignatureSize(int value);
    // Get static field: static private readonly System.Byte[] Dom4Prefix
    static ::Array<uint8_t>* _get_Dom4Prefix();
    // Set static field: static private readonly System.Byte[] Dom4Prefix
    static void _set_Dom4Prefix(::Array<uint8_t>* value);
    // Get static field: static private readonly System.UInt32[] P
    static ::Array<uint>* _get_P();
    // Set static field: static private readonly System.UInt32[] P
    static void _set_P(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] L
    static ::Array<uint>* _get_L();
    // Set static field: static private readonly System.UInt32[] L
    static void _set_L(::Array<uint>* value);
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger N
    static Org::BouncyCastle::Math::BigInteger* _get_N();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger N
    static void _set_N(Org::BouncyCastle::Math::BigInteger* value);
    // Get static field: static private readonly System.UInt32[] B_x
    static ::Array<uint>* _get_B_x();
    // Set static field: static private readonly System.UInt32[] B_x
    static void _set_B_x(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] B_y
    static ::Array<uint>* _get_B_y();
    // Set static field: static private readonly System.UInt32[] B_y
    static void _set_B_y(::Array<uint>* value);
    // Get static field: static private readonly System.Object precompLock
    static ::Il2CppObject* _get_precompLock();
    // Set static field: static private readonly System.Object precompLock
    static void _set_precompLock(::Il2CppObject* value);
    // Get static field: static private Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt[] precompBaseTable
    static ::Array<Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt*>* _get_precompBaseTable();
    // Set static field: static private Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt[] precompBaseTable
    static void _set_precompBaseTable(::Array<Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt*>* value);
    // Get static field: static private System.UInt32[] precompBase
    static ::Array<uint>* _get_precompBase();
    // Set static field: static private System.UInt32[] precompBase
    static void _set_precompBase(::Array<uint>* value);
    // static private System.Byte[] CalculateS(System.Byte[] r, System.Byte[] k, System.Byte[] s)
    // Offset: 0x1B3A030
    static ::Array<uint8_t>* CalculateS(::Array<uint8_t>* r, ::Array<uint8_t>* k, ::Array<uint8_t>* s);
    // static private System.Boolean CheckContextVar(System.Byte[] ctx)
    // Offset: 0x1B3AB6C
    static bool CheckContextVar(::Array<uint8_t>* ctx);
    // static private System.Int32 CheckPoint(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0x1B3AB80
    static int CheckPoint(::Array<uint>* x, ::Array<uint>* y);
    // static public Org.BouncyCastle.Crypto.IXof CreatePrehash()
    // Offset: 0x1B3AC44
    static Org::BouncyCastle::Crypto::IXof* CreatePrehash();
    // static private Org.BouncyCastle.Crypto.IXof CreateXof()
    // Offset: 0x1B3ACA0
    static Org::BouncyCastle::Crypto::IXof* CreateXof();
    // static private System.UInt32 Decode16(System.Byte[] bs, System.Int32 off)
    // Offset: 0x1B3AD00
    static uint Decode16(::Array<uint8_t>* bs, int off);
    // static private System.UInt32 Decode24(System.Byte[] bs, System.Int32 off)
    // Offset: 0x1B3AD4C
    static uint Decode24(::Array<uint8_t>* bs, int off);
    // static private System.UInt32 Decode32(System.Byte[] bs, System.Int32 off)
    // Offset: 0x1B3ADAC
    static uint Decode32(::Array<uint8_t>* bs, int off);
    // static private System.Void Decode32(System.Byte[] bs, System.Int32 bsOff, System.UInt32[] n, System.Int32 nOff, System.Int32 nLen)
    // Offset: 0x1B3AE20
    static void Decode32(::Array<uint8_t>* bs, int bsOff, ::Array<uint>* n, int nOff, int nLen);
    // static private System.Void DecodeScalar(System.Byte[] k, System.Int32 kOff, System.UInt32[] n)
    // Offset: 0x1B3A1E0
    static void DecodeScalar(::Array<uint8_t>* k, int kOff, ::Array<uint>* n);
    // static private System.Void Dom4(Org.BouncyCastle.Crypto.IXof d, System.Byte x, System.Byte[] y)
    // Offset: 0x1B3AF18
    static void Dom4(Org::BouncyCastle::Crypto::IXof* d, uint8_t x, ::Array<uint8_t>* y);
    // static private System.Void Encode24(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1B3B16C
    static void Encode24(uint n, ::Array<uint8_t>* bs, int off);
    // static private System.Void Encode32(System.UInt32 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1B3A264
    static void Encode32(uint n, ::Array<uint8_t>* bs, int off);
    // static private System.Void Encode56(System.UInt64 n, System.Byte[] bs, System.Int32 off)
    // Offset: 0x1B3B1DC
    static void Encode56(uint64_t n, ::Array<uint8_t>* bs, int off);
    // static private System.Int32 EncodePoint(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt p, System.Byte[] r, System.Int32 rOff)
    // Offset: 0x1B3B268
    static int EncodePoint(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* p, ::Array<uint8_t>* r, int rOff);
    // static public System.Void GeneratePublicKey(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff)
    // Offset: 0x1B3B3B4
    static void GeneratePublicKey(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff);
    // static private System.Void ImplSign(Org.BouncyCastle.Crypto.IXof d, System.Byte[] h, System.Byte[] s, System.Byte[] pk, System.Int32 pkOff, System.Byte[] ctx, System.Byte phflag, System.Byte[] m, System.Int32 mOff, System.Int32 mLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1B3B6DC
    static void ImplSign(Org::BouncyCastle::Crypto::IXof* d, ::Array<uint8_t>* h, ::Array<uint8_t>* s, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* ctx, uint8_t phflag, ::Array<uint8_t>* m, int mOff, int mLen, ::Array<uint8_t>* sig, int sigOff);
    // static private System.Void ImplSign(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff, System.Byte[] ctx, System.Byte phflag, System.Byte[] m, System.Int32 mOff, System.Int32 mLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1B3BB7C
    static void ImplSign(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* ctx, uint8_t phflag, ::Array<uint8_t>* m, int mOff, int mLen, ::Array<uint8_t>* sig, int sigOff);
    // static private System.Void PointAddVar(System.Boolean negate, Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt p, Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt r)
    // Offset: 0x1B3BE28
    static void PointAddVar(bool negate, Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* p, Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* r);
    // static private System.Void PointAddPrecomp(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp p, Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt r)
    // Offset: 0x1B3C01C
    static void PointAddPrecomp(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp* p, Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* r);
    // static private Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt PointCopy(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt p)
    // Offset: 0x1B3C1B8
    static Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* PointCopy(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* p);
    // static private System.Void PointDouble(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt r)
    // Offset: 0x1B3C298
    static void PointDouble(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* r);
    // static private System.Void PointExtendXY(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt p)
    // Offset: 0x1B3C3CC
    static void PointExtendXY(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* p);
    // static private System.Void PointLookup(System.Int32 block, System.Int32 index, Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointPrecomp p)
    // Offset: 0x1B3C3E4
    static void PointLookup(int block, int index, Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointPrecomp* p);
    // static private Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt[] PointPrecompVar(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt p, System.Int32 count)
    // Offset: 0x1B3C4CC
    static ::Array<Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt*>* PointPrecompVar(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* p, int count);
    // static private System.Void PointSetNeutral(Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt p)
    // Offset: 0x1B3C65C
    static void PointSetNeutral(Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* p);
    // static public System.Void Precompute()
    // Offset: 0x1B3C694
    static void Precompute();
    // static private System.Void PruneScalar(System.Byte[] n, System.Int32 nOff, System.Byte[] r)
    // Offset: 0x1B3B590
    static void PruneScalar(::Array<uint8_t>* n, int nOff, ::Array<uint8_t>* r);
    // static private System.Byte[] ReduceScalar(System.Byte[] n)
    // Offset: 0x1B3A2F0
    static ::Array<uint8_t>* ReduceScalar(::Array<uint8_t>* n);
    // static private System.Void ScalarMultBase(System.Byte[] k, Org.BouncyCastle.Math.EC.Rfc8032.Ed448/PointExt r)
    // Offset: 0x1B3CC68
    static void ScalarMultBase(::Array<uint8_t>* k, Org::BouncyCastle::Math::EC::Rfc8032::Ed448::PointExt* r);
    // static private System.Void ScalarMultBaseEncoded(System.Byte[] k, System.Byte[] r, System.Int32 rOff)
    // Offset: 0x1B3B604
    static void ScalarMultBaseEncoded(::Array<uint8_t>* k, ::Array<uint8_t>* r, int rOff);
    // static public System.Void Sign(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff, System.Byte[] ctx, System.Byte[] m, System.Int32 mOff, System.Int32 mLen, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1B3CEBC
    static void Sign(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* ctx, ::Array<uint8_t>* m, int mOff, int mLen, ::Array<uint8_t>* sig, int sigOff);
    // static public System.Void SignPrehash(System.Byte[] sk, System.Int32 skOff, System.Byte[] pk, System.Int32 pkOff, System.Byte[] ctx, System.Byte[] ph, System.Int32 phOff, System.Byte[] sig, System.Int32 sigOff)
    // Offset: 0x1B3CF98
    static void SignPrehash(::Array<uint8_t>* sk, int skOff, ::Array<uint8_t>* pk, int pkOff, ::Array<uint8_t>* ctx, ::Array<uint8_t>* ph, int phOff, ::Array<uint8_t>* sig, int sigOff);
    // static private System.Void .cctor()
    // Offset: 0x1B3D07C
    static void _cctor();
  }; // Org.BouncyCastle.Math.EC.Rfc8032.Ed448
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Rfc8032::Ed448*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448");
