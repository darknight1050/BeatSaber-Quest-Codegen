// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionInfoTypeInfoConverter
#include "Zenject/Internal/ReflectionInfoTypeInfoConverter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x18
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass0_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D94048
  class ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Reflection.MethodInfo methodInfo
    // Size: 0x8
    // Offset: 0x10
    System::Reflection::MethodInfo* methodInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(System::Reflection::MethodInfo* methodInfo_ = {}) noexcept : methodInfo{methodInfo_} {}
    // Creating conversion operator: operator System::Reflection::MethodInfo*
    constexpr operator System::Reflection::MethodInfo*() const noexcept {
      return methodInfo;
    }
    // System.Void <ConvertMethod>b__0(System.Object obj, System.Object[] args)
    // Offset: 0x12A3458
    void $ConvertMethod$b__0(::Il2CppObject* obj, ::Array<::Il2CppObject*>* args);
    // public System.Void .ctor()
    // Offset: 0x12A28D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/<>c__DisplayClass0_0
  static check_size<sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0), 16 + sizeof(System::Reflection::MethodInfo*)> __Zenject_Internal_ReflectionInfoTypeInfoConverter_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass0_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass0_0");
#pragma pack(pop)
