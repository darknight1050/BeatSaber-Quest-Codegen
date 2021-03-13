// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass53_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CEFF80
  class FromBinder::$$c__DisplayClass53_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.ScriptableObject resource
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ScriptableObject* resource;
    // Field size check
    static_assert(sizeof(UnityEngine::ScriptableObject*) == 0x8);
    // public Zenject.FromBinder <>4__this
    // Size: 0x8
    // Offset: 0x18
    Zenject::FromBinder* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::FromBinder*) == 0x8);
    // public System.Boolean createNew
    // Size: 0x1
    // Offset: 0x20
    bool createNew;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass53_0
    $$c__DisplayClass53_0(UnityEngine::ScriptableObject* resource_ = {}, Zenject::FromBinder* $$4__this_ = {}, bool createNew_ = {}) noexcept : resource{resource_}, $$4__this{$$4__this_}, createNew{createNew_} {}
    // Zenject.IProvider <FromScriptableObjectInternal>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x1474714
    Zenject::IProvider* $FromScriptableObjectInternal$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x1472C48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass53_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass53_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass53_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass53_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass53_0), 32 + sizeof(bool)> __Zenject_FromBinder_$$c__DisplayClass53_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass53_0) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass53_0*, "Zenject", "FromBinder/<>c__DisplayClass53_0");
