// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: Allocator
  struct Allocator;
}
// Completed forward declares
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.UnsafeUtility
  // [NativeHeaderAttribute] Offset: D8DBEC
  // [StaticAccessorAttribute] Offset: D8DBEC
  class UnsafeUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: UnsafeUtility
    UnsafeUtility() noexcept {}
    // static public System.Boolean IsBlittable()
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsBlittable() {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsBlittable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "IsBlittable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public System.Void Free(System.Void* memory, Unity.Collections.Allocator allocator)
    // Offset: 0x1B6C0A0
    static void Free(void* memory, Unity::Collections::Allocator allocator);
    // static public System.Boolean IsBlittable(System.Type type)
    // Offset: 0x1B6C0F0
    static bool IsBlittable(System::Type* type);
    // static private System.Boolean IsBlittableValueType(System.Type t)
    // Offset: 0x1B6C130
    static bool IsBlittableValueType(System::Type* t);
    // static private System.String GetReasonForTypeNonBlittableImpl(System.Type t, System.String name)
    // Offset: 0x1B6C194
    static ::Il2CppString* GetReasonForTypeNonBlittableImpl(System::Type* t, ::Il2CppString* name);
    // static System.Boolean IsArrayBlittable(System.Array arr)
    // Offset: 0x1B6C348
    static bool IsArrayBlittable(System::Array* arr);
    // static System.Boolean IsGenericListBlittable()
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsGenericListBlittable() {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::IsGenericListBlittable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "IsGenericListBlittable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static System.String GetReasonForArrayNonBlittable(System.Array arr)
    // Offset: 0x1B6C37C
    static ::Il2CppString* GetReasonForArrayNonBlittable(System::Array* arr);
    // static System.String GetReasonForGenericListNonBlittable()
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Il2CppString* GetReasonForGenericListNonBlittable() {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::GetReasonForGenericListNonBlittable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "GetReasonForGenericListNonBlittable", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public T ReadArrayElement(System.Void* source, System.Int32 index)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T ReadArrayElement(void* source, int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::ReadArrayElement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "ReadArrayElement", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source), ::il2cpp_utils::ExtractType(index)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, source, index);
    }
    // static public System.Void WriteArrayElement(System.Void* destination, System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void WriteArrayElement(void* destination, int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::WriteArrayElement");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "WriteArrayElement", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(destination), ::il2cpp_utils::ExtractType(index), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, destination, index, value);
    }
    // static public System.Int32 SizeOf()
    // Offset: 0xFFFFFFFF
    template<class T>
    static int SizeOf() {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::UnsafeUtility::SizeOf");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "UnsafeUtility", "SizeOf", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<int, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
  }; // Unity.Collections.LowLevel.Unsafe.UnsafeUtility
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::UnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "UnsafeUtility");
