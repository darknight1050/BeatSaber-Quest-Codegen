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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinderBase/<>c__DisplayClass28_0
  // [CompilerGeneratedAttribute] Offset: DDDE68
  class FactoryFromBinderBase::$$c__DisplayClass28_0 : public ::Il2CppObject {
    public:
    // public Zenject.FactoryFromBinderBase <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::FactoryFromBinderBase* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FactoryFromBinderBase*) == 0x8);
    // public Zenject.GameObjectCreationParameters gameObjectInfo
    // Size: 0x8
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // public UnityEngine.Object prefab
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Object* prefab;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass28_0
    $$c__DisplayClass28_0(Zenject::FactoryFromBinderBase* $$4__this_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}, UnityEngine::Object* prefab_ = {}) noexcept : $$4__this{$$4__this_}, gameObjectInfo{gameObjectInfo_}, prefab{prefab_} {}
    // Zenject.IProvider <FromNewComponentOnNewPrefab>b__0(Zenject.DiContainer container)
    // Offset: 0x161E748
    Zenject::IProvider* $FromNewComponentOnNewPrefab$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x161DB64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderBase::$$c__DisplayClass28_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::$$c__DisplayClass28_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderBase::$$c__DisplayClass28_0*, creationType>()));
    }
  }; // Zenject.FactoryFromBinderBase/<>c__DisplayClass28_0
  #pragma pack(pop)
  static check_size<sizeof(FactoryFromBinderBase::$$c__DisplayClass28_0), 32 + sizeof(UnityEngine::Object*)> __Zenject_FactoryFromBinderBase_$$c__DisplayClass28_0SizeCheck;
  static_assert(sizeof(FactoryFromBinderBase::$$c__DisplayClass28_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$$c__DisplayClass28_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass28_0");
