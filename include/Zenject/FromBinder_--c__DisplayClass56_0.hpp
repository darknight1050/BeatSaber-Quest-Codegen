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
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass56_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CEFF90
  class FromBinder::$$c__DisplayClass56_0 : public ::Il2CppObject {
    public:
    // public System.String resourcePath
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* resourcePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
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
    // Creating value type constructor for type: $$c__DisplayClass56_0
    $$c__DisplayClass56_0(::Il2CppString* resourcePath_ = {}, Zenject::FromBinder* $$4__this_ = {}, bool createNew_ = {}) noexcept : resourcePath{resourcePath_}, $$4__this{$$4__this_}, createNew{createNew_} {}
    // Zenject.IProvider <FromScriptableObjectResourceInternal>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x14747DC
    Zenject::IProvider* $FromScriptableObjectResourceInternal$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x1472D9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass56_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass56_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass56_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass56_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass56_0), 32 + sizeof(bool)> __Zenject_FromBinder_$$c__DisplayClass56_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass56_0) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass56_0*, "Zenject", "FromBinder/<>c__DisplayClass56_0");
