// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x18
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass6_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D94128
  class ReflectionTypeAnalyzer::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_0
    $$c__DisplayClass6_0(System::Type* type_ = {}) noexcept : type{type_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return type;
    }
    // Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo <GetFieldInfos>b__1(System.Reflection.FieldInfo x)
    // Offset: 0x12A542C
    Zenject::Internal::ReflectionTypeInfo::InjectFieldInfo* $GetFieldInfos$b__1(System::Reflection::FieldInfo* x);
    // public System.Void .ctor()
    // Offset: 0x12A43E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass6_0
  static check_size<sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass6_0), 16 + sizeof(System::Type*)> __Zenject_Internal_ReflectionTypeAnalyzer_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass6_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_0");
#pragma pack(pop)
