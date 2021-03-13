// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Utilities
namespace Org::BouncyCastle::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.Arrays
  // [] Offset: FFFFFFFF
  class Arrays : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Arrays
    Arrays() noexcept {}
    // Get static field: static public readonly System.Byte[] EmptyBytes
    static ::Array<uint8_t>* _get_EmptyBytes();
    // Set static field: static public readonly System.Byte[] EmptyBytes
    static void _set_EmptyBytes(::Array<uint8_t>* value);
    // Get static field: static public readonly System.Int32[] EmptyInts
    static ::Array<int>* _get_EmptyInts();
    // Set static field: static public readonly System.Int32[] EmptyInts
    static void _set_EmptyInts(::Array<int>* value);
    // static public System.Boolean AreEqual(System.Byte[] a, System.Byte[] b)
    // Offset: 0x125DDF4
    static bool AreEqual(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static public System.Boolean ConstantTimeAreEqual(System.Byte[] a, System.Byte[] b)
    // Offset: 0x126D9EC
    static bool ConstantTimeAreEqual(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static public System.Boolean ConstantTimeAreEqual(System.Int32 len, System.Byte[] a, System.Int32 aOff, System.Byte[] b, System.Int32 bOff)
    // Offset: 0x126DB10
    static bool ConstantTimeAreEqual(int len, ::Array<uint8_t>* a, int aOff, ::Array<uint8_t>* b, int bOff);
    // static public System.Boolean AreEqual(System.Int32[] a, System.Int32[] b)
    // Offset: 0x126DD04
    static bool AreEqual(::Array<int>* a, ::Array<int>* b);
    // static public System.Boolean AreEqual(System.UInt32[] a, System.UInt32[] b)
    // Offset: 0x126DE18
    static bool AreEqual(::Array<uint>* a, ::Array<uint>* b);
    // static private System.Boolean HaveSameContents(System.Byte[] a, System.Byte[] b)
    // Offset: 0x126D974
    static bool HaveSameContents(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static private System.Boolean HaveSameContents(System.Int32[] a, System.Int32[] b)
    // Offset: 0x126DDA0
    static bool HaveSameContents(::Array<int>* a, ::Array<int>* b);
    // static private System.Boolean HaveSameContents(System.UInt32[] a, System.UInt32[] b)
    // Offset: 0x126DEB4
    static bool HaveSameContents(::Array<uint>* a, ::Array<uint>* b);
    // static public System.Int32 GetHashCode(System.Byte[] data)
    // Offset: 0x126DF2C
    static int GetHashCode(::Array<uint8_t>* data);
    // static public System.Int32 GetHashCode(System.Int32[] data)
    // Offset: 0x126DF8C
    static int GetHashCode(::Array<int>* data);
    // static public System.Int32 GetHashCode(System.UInt32[] data, System.Int32 off, System.Int32 len)
    // Offset: 0x126DFEC
    static int GetHashCode(::Array<uint>* data, int off, int len);
    // static public System.Int32 GetHashCode(System.UInt64[] data, System.Int32 off, System.Int32 len)
    // Offset: 0x126E048
    static int GetHashCode(::Array<uint64_t>* data, int off, int len);
    // static public System.Byte[] Clone(System.Byte[] data)
    // Offset: 0x126E0AC
    static ::Array<uint8_t>* Clone(::Array<uint8_t>* data);
    // static public System.Int32[] Clone(System.Int32[] data)
    // Offset: 0x126E12C
    static ::Array<int>* Clone(::Array<int>* data);
    // static public System.UInt32[] Clone(System.UInt32[] data)
    // Offset: 0x126E1AC
    static ::Array<uint>* Clone(::Array<uint>* data);
    // static public System.Int64[] Clone(System.Int64[] data)
    // Offset: 0x126E22C
    static ::Array<int64_t>* Clone(::Array<int64_t>* data);
    // static public System.UInt64[] Clone(System.UInt64[] data)
    // Offset: 0x126E2AC
    static ::Array<uint64_t>* Clone(::Array<uint64_t>* data);
    // static public System.Boolean Contains(System.Byte[] a, System.Byte n)
    // Offset: 0x126E32C
    static bool Contains(::Array<uint8_t>* a, uint8_t n);
    // static public System.Void Fill(System.Byte[] buf, System.Byte b)
    // Offset: 0x126E390
    static void Fill(::Array<uint8_t>* buf, uint8_t b);
    // static public System.Void Fill(System.Byte[] buf, System.Int32 from, System.Int32 to, System.Byte b)
    // Offset: 0x126E3F8
    static void Fill(::Array<uint8_t>* buf, int from, int to, uint8_t b);
    // static public System.Byte[] CopyOfRange(System.Byte[] data, System.Int32 from, System.Int32 to)
    // Offset: 0x126E454
    static ::Array<uint8_t>* CopyOfRange(::Array<uint8_t>* data, int from, int to);
    // static private System.Int32 GetLength(System.Int32 from, System.Int32 to)
    // Offset: 0x126E54C
    static int GetLength(int from, int to);
    // static public System.Byte[] Prepend(System.Byte[] a, System.Byte b)
    // Offset: 0x126E624
    static ::Array<uint8_t>* Prepend(::Array<uint8_t>* a, uint8_t b);
    // static public System.Byte[] Reverse(System.Byte[] a)
    // Offset: 0x125FA24
    static ::Array<uint8_t>* Reverse(::Array<uint8_t>* a);
    // static public System.Boolean IsNullOrContainsNull(System.Object[] array)
    // Offset: 0x126E6F0
    static bool IsNullOrContainsNull(::Array<::Il2CppObject*>* array);
    // static private System.Void .cctor()
    // Offset: 0x126E72C
    static void _cctor();
  }; // Org.BouncyCastle.Utilities.Arrays
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Arrays*, "Org.BouncyCastle.Utilities", "Arrays");
