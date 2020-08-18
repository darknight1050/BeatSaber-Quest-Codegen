// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.Marshal
  class Marshal : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 SystemMaxDBCSCharSize
    static int _get_SystemMaxDBCSCharSize();
    // Set static field: static public readonly System.Int32 SystemMaxDBCSCharSize
    static void _set_SystemMaxDBCSCharSize(int value);
    // Get static field: static public readonly System.Int32 SystemDefaultCharSize
    static int _get_SystemDefaultCharSize();
    // Set static field: static public readonly System.Int32 SystemDefaultCharSize
    static void _set_SystemDefaultCharSize(int value);
    // static public System.IntPtr AllocCoTaskMem(System.Int32 cb)
    // Offset: 0xFAD448
    static System::IntPtr AllocCoTaskMem(int cb);
    // static public System.IntPtr AllocHGlobal(System.IntPtr cb)
    // Offset: 0xFAD44C
    static System::IntPtr AllocHGlobal(System::IntPtr cb);
    // static public System.IntPtr AllocHGlobal(System.Int32 cb)
    // Offset: 0xFAD450
    static System::IntPtr AllocHGlobal(int cb);
    // static System.Void copy_to_unmanaged(System.Array source, System.Int32 startIndex, System.IntPtr destination, System.Int32 length)
    // Offset: 0xFAD4C8
    static void copy_to_unmanaged(System::Array* source, int startIndex, System::IntPtr destination, int length);
    // static System.Void copy_from_unmanaged(System.IntPtr source, System.Int32 startIndex, System.Array destination, System.Int32 length)
    // Offset: 0xFAD4CC
    static void copy_from_unmanaged(System::IntPtr source, int startIndex, System::Array* destination, int length);
    // static public System.Void Copy(System.Byte[] source, System.Int32 startIndex, System.IntPtr destination, System.Int32 length)
    // Offset: 0xFAD4D0
    static void Copy(::Array<uint8_t>* source, int startIndex, System::IntPtr destination, int length);
    // static public System.Void Copy(System.IntPtr source, System.Byte[] destination, System.Int32 startIndex, System.Int32 length)
    // Offset: 0xFAD55C
    static void Copy(System::IntPtr source, ::Array<uint8_t>* destination, int startIndex, int length);
    // static public System.Void Copy(System.IntPtr source, System.Char[] destination, System.Int32 startIndex, System.Int32 length)
    // Offset: 0xFAD5E8
    static void Copy(System::IntPtr source, ::Array<::Il2CppChar>* destination, int startIndex, int length);
    // static public System.Void Copy(System.IntPtr source, System.Int16[] destination, System.Int32 startIndex, System.Int32 length)
    // Offset: 0xFAD674
    static void Copy(System::IntPtr source, ::Array<int16_t>* destination, int startIndex, int length);
    // static public System.Void Copy(System.IntPtr source, System.Single[] destination, System.Int32 startIndex, System.Int32 length)
    // Offset: 0xFAD700
    static void Copy(System::IntPtr source, ::Array<float>* destination, int startIndex, int length);
    // static public System.Void FreeBSTR(System.IntPtr ptr)
    // Offset: 0xFAD78C
    static void FreeBSTR(System::IntPtr ptr);
    // static public System.Void FreeCoTaskMem(System.IntPtr ptr)
    // Offset: 0xFAD790
    static void FreeCoTaskMem(System::IntPtr ptr);
    // static public System.Void FreeHGlobal(System.IntPtr hglobal)
    // Offset: 0xFAD794
    static void FreeHGlobal(System::IntPtr hglobal);
    // static public System.Int32 GetHRForException(System.Exception e)
    // Offset: 0xFAD798
    static int GetHRForException(System::Exception* e);
    // static public System.Int32 GetLastWin32Error()
    // Offset: 0xFAD7A4
    static int GetLastWin32Error();
    // static public System.String PtrToStringAnsi(System.IntPtr ptr)
    // Offset: 0xFAD7A8
    static ::Il2CppString* PtrToStringAnsi(System::IntPtr ptr);
    // static public System.String PtrToStringUni(System.IntPtr ptr)
    // Offset: 0xFAD7AC
    static ::Il2CppString* PtrToStringUni(System::IntPtr ptr);
    // static public System.Void PtrToStructure(System.IntPtr ptr, System.Object structure)
    // Offset: 0xFAD7B0
    static void PtrToStructure(System::IntPtr ptr, ::Il2CppObject* structure);
    // static public System.Object PtrToStructure(System.IntPtr ptr, System.Type structureType)
    // Offset: 0xFAD7B4
    static ::Il2CppObject* PtrToStructure(System::IntPtr ptr, System::Type* structureType);
    // static public System.Void PtrToStructure(System.IntPtr ptr, T structure)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void PtrToStructure(System::IntPtr ptr, T structure) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("System.Runtime.InteropServices", "Marshal", "PtrToStructure", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ptr, structure));
    }
    // static public System.Byte ReadByte(System.IntPtr ptr, System.Int32 ofs)
    // Offset: 0xFAD7B8
    static uint8_t ReadByte(System::IntPtr ptr, int ofs);
    // static private System.Int32 ReleaseInternal(System.IntPtr pUnk)
    // Offset: 0xFAD7E0
    static int ReleaseInternal(System::IntPtr pUnk);
    // static public System.Int32 Release(System.IntPtr pUnk)
    // Offset: 0xFAD7E4
    static int Release(System::IntPtr pUnk);
    // static public System.Int32 SizeOf(System.Object structure)
    // Offset: 0xFAD8A4
    static int SizeOf(::Il2CppObject* structure);
    // static public System.Int32 SizeOf(System.Type t)
    // Offset: 0xFAD924
    static int SizeOf(System::Type* t);
    // static public System.Int32 SizeOf(T structure)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int SizeOf(T structure) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<int>("System.Runtime.InteropServices", "Marshal", "SizeOf", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, structure)));
    }
    // static public System.Void StructureToPtr(System.Object structure, System.IntPtr ptr, System.Boolean fDeleteOld)
    // Offset: 0xFAD928
    static void StructureToPtr(::Il2CppObject* structure, System::IntPtr ptr, bool fDeleteOld);
    // static public System.Void StructureToPtr(T structure, System.IntPtr ptr, System.Boolean fDeleteOld)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void StructureToPtr(T structure, System::IntPtr ptr, bool fDeleteOld) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("System.Runtime.InteropServices", "Marshal", "StructureToPtr", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, structure, ptr, fDeleteOld));
    }
    // static public System.IntPtr UnsafeAddrOfPinnedArrayElement(System.Array arr, System.Int32 index)
    // Offset: 0xFAD930
    static System::IntPtr UnsafeAddrOfPinnedArrayElement(System::Array* arr, int index);
    // static public System.IntPtr UnsafeAddrOfPinnedArrayElement(T[] arr, System.Int32 index)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::IntPtr UnsafeAddrOfPinnedArrayElement(::Array<T>* arr, int index) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::IntPtr>("System.Runtime.InteropServices", "Marshal", "UnsafeAddrOfPinnedArrayElement", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, arr, index)));
    }
    // static private System.IntPtr GetFunctionPointerForDelegateInternal(System.Delegate d)
    // Offset: 0xFAD934
    static System::IntPtr GetFunctionPointerForDelegateInternal(System::Delegate* d);
    // static public System.IntPtr GetFunctionPointerForDelegate(TDelegate d)
    // Offset: 0xFFFFFFFF
    template<class TDelegate>
    static System::IntPtr GetFunctionPointerForDelegate(TDelegate d) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::IntPtr>("System.Runtime.InteropServices", "Marshal", "GetFunctionPointerForDelegate", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDelegate>::get()}, d)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFAD938
    static void _cctor();
  }; // System.Runtime.InteropServices.Marshal
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::Marshal*, "System.Runtime.InteropServices", "Marshal");
#pragma pack(pop)
