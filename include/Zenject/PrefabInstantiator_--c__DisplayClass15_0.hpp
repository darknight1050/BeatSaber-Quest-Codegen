// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PrefabInstantiator
#include "Zenject/PrefabInstantiator.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabInstantiator/<>c__DisplayClass15_0
  // [CompilerGeneratedAttribute] Offset: DDE538
  class PrefabInstantiator::$$c__DisplayClass15_0 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabInstantiator <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::PrefabInstantiator* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::PrefabInstantiator*) == 0x8);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // public UnityEngine.GameObject gameObject
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* gameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public Zenject.InjectContext context
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectContext* context;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // public System.Boolean shouldMakeActive
    // Size: 0x1
    // Offset: 0x30
    bool shouldMakeActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass15_0
    $$c__DisplayClass15_0(Zenject::PrefabInstantiator* $$4__this_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args_ = {}, UnityEngine::GameObject* gameObject_ = {}, Zenject::InjectContext* context_ = {}, bool shouldMakeActive_ = {}) noexcept : $$4__this{$$4__this_}, args{args_}, gameObject{gameObject_}, context{context_}, shouldMakeActive{shouldMakeActive_} {}
    // System.Void <Instantiate>b__0()
    // Offset: 0x16C8C58
    void $Instantiate$b__0();
    // public System.Void .ctor()
    // Offset: 0x16C8C50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabInstantiator::$$c__DisplayClass15_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabInstantiator::$$c__DisplayClass15_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabInstantiator::$$c__DisplayClass15_0*, creationType>()));
    }
  }; // Zenject.PrefabInstantiator/<>c__DisplayClass15_0
  #pragma pack(pop)
  static check_size<sizeof(PrefabInstantiator::$$c__DisplayClass15_0), 48 + sizeof(bool)> __Zenject_PrefabInstantiator_$$c__DisplayClass15_0SizeCheck;
  static_assert(sizeof(PrefabInstantiator::$$c__DisplayClass15_0) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabInstantiator::$$c__DisplayClass15_0*, "Zenject", "PrefabInstantiator/<>c__DisplayClass15_0");
