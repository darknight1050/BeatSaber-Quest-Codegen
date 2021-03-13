// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinderBase/<>c__DisplayClass23_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CEFE40
  class FactoryFromBinderBase::$$c__DisplayClass23_0 : public ::Il2CppObject {
    public:
    // public Zenject.FactoryFromBinderBase <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::FactoryFromBinderBase* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FactoryFromBinderBase*) == 0x8);
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass23_0
    $$c__DisplayClass23_0(Zenject::FactoryFromBinderBase* $$4__this_ = {}, UnityEngine::GameObject* gameObject_ = {}) noexcept : $$4__this{$$4__this_}, gameObject{gameObject_} {}
    // Zenject.IProvider <FromComponentOn>b__0(Zenject.DiContainer container)
    // Offset: 0x146FEF4
    Zenject::IProvider* $FromComponentOn$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x146F22C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderBase::$$c__DisplayClass23_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::$$c__DisplayClass23_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderBase::$$c__DisplayClass23_0*, creationType>()));
    }
  }; // Zenject.FactoryFromBinderBase/<>c__DisplayClass23_0
  #pragma pack(pop)
  static check_size<sizeof(FactoryFromBinderBase::$$c__DisplayClass23_0), 24 + sizeof(UnityEngine::GameObject*)> __Zenject_FactoryFromBinderBase_$$c__DisplayClass23_0SizeCheck;
  static_assert(sizeof(FactoryFromBinderBase::$$c__DisplayClass23_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$$c__DisplayClass23_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass23_0");
