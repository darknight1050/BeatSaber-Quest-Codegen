// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConditionCopyNonLazyBinder
#include "Zenject/ConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass2_0
  // [CompilerGeneratedAttribute] Offset: DDD6C8
  class ConditionCopyNonLazyBinder::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public System.Object instance
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(::Il2CppObject* instance_ = {}) noexcept : instance{instance_} {}
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return instance;
    }
    // System.Boolean <WhenInjectedIntoInstance>b__0(Zenject.InjectContext r)
    // Offset: 0x1371EC0
    bool $WhenInjectedIntoInstance$b__0(Zenject::InjectContext* r);
    // public System.Void .ctor()
    // Offset: 0x1371E04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionCopyNonLazyBinder::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionCopyNonLazyBinder::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(ConditionCopyNonLazyBinder::$$c__DisplayClass2_0), 16 + sizeof(::Il2CppObject*)> __Zenject_ConditionCopyNonLazyBinder_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(ConditionCopyNonLazyBinder::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass2_0*, "Zenject", "ConditionCopyNonLazyBinder/<>c__DisplayClass2_0");
