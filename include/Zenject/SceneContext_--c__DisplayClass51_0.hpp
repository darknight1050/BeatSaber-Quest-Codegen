// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContext/<>c__DisplayClass51_0
  // [CompilerGeneratedAttribute] Offset: DDE4A8
  class SceneContext::$$c__DisplayClass51_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.IEnumerable`1<Zenject.DiContainer> parents
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>* parents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass51_0
    $$c__DisplayClass51_0(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>* parents_ = {}) noexcept : parents{parents_} {}
    // Creating conversion operator: operator System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>*
    constexpr operator System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>*() const noexcept {
      return parents;
    }
    // System.Boolean <Install>b__0(Zenject.DiContainer x)
    // Offset: 0x16CED98
    bool $Install$b__0(Zenject::DiContainer* x);
    // public System.Void .ctor()
    // Offset: 0x16CE0A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContext::$$c__DisplayClass51_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SceneContext::$$c__DisplayClass51_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContext::$$c__DisplayClass51_0*, creationType>()));
    }
  }; // Zenject.SceneContext/<>c__DisplayClass51_0
  #pragma pack(pop)
  static check_size<sizeof(SceneContext::$$c__DisplayClass51_0), 16 + sizeof(System::Collections::Generic::IEnumerable_1<Zenject::DiContainer*>*)> __Zenject_SceneContext_$$c__DisplayClass51_0SizeCheck;
  static_assert(sizeof(SceneContext::$$c__DisplayClass51_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContext::$$c__DisplayClass51_0*, "Zenject", "SceneContext/<>c__DisplayClass51_0");
