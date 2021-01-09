// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass32_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D937A8
  class FromBinder::$$c__DisplayClass32_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter
    // Size: 0x8
    // Offset: 0x10
    System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter;
    // Field size check
    static_assert(sizeof(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass32_0
    $$c__DisplayClass32_0(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter_ = {}) noexcept : gameObjectGetter{gameObjectGetter_} {}
    // Creating conversion operator: operator System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*
    constexpr operator System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*() const noexcept {
      return gameObjectGetter;
    }
    // Zenject.IProvider <FromComponentOn>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x129B00C
    Zenject::IProvider* $FromComponentOn$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x1298188
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass32_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass32_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass32_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass32_0
  static check_size<sizeof(FromBinder::$$c__DisplayClass32_0), 16 + sizeof(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>*)> __Zenject_FromBinder_$$c__DisplayClass32_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass32_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass32_0*, "Zenject", "FromBinder/<>c__DisplayClass32_0");
#pragma pack(pop)
