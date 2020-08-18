// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
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
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass22_0
  class FromBinder::$$c__DisplayClass22_0 : public ::Il2CppObject {
    public:
    // public System.Object subIdentifier
    // Offset: 0x10
    ::Il2CppObject* subIdentifier;
    // public Zenject.InjectSources source
    // Offset: 0x18
    Zenject::InjectSources source;
    // public System.Boolean matchAll
    // Offset: 0x1C
    bool matchAll;
    // Zenject.IProvider <FromResolveInternal>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0xE91E3C
    Zenject::IProvider* $FromResolveInternal$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0xE8EB8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass22_0* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass22_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass22_0*, "Zenject", "FromBinder/<>c__DisplayClass22_0");
#pragma pack(pop)
