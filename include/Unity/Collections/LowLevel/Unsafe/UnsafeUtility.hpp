// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: Allocator
  struct Allocator;
}
// Completed forward declares
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
  class UnsafeUtility : public ::Il2CppObject {
    public:
    // static public System.Void Free(System.Void* memory, Unity.Collections.Allocator allocator)
    // Offset: 0x125C9A8
    static void Free(void* memory, Unity::Collections::Allocator allocator);
    // static public T ReadArrayElement(System.Void* source, System.Int32 index)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T ReadArrayElement(void* source, int index) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<T>("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "ReadArrayElement", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, source, index)));
    }
    // static public System.Void WriteArrayElement(System.Void* destination, System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void WriteArrayElement(void* destination, int index, T value) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "WriteArrayElement", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, destination, index, value));
    }
  }; // Unity.Collections.LowLevel.Unsafe.UnsafeUtility
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
#pragma pack(pop)
