// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.SubContainerBinder
#include "Zenject/SubContainerBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerBinder/<>c__DisplayClass11_0
  class SubContainerBinder::$$c__DisplayClass11_0 : public ::CsObject {
    public:
    // public Zenject.SubContainerCreatorBindInfo subContainerBindInfo
    // Offset: 0x10
    Zenject::SubContainerCreatorBindInfo* subContainerBindInfo;
    // public System.Action`1<Zenject.DiContainer> installerMethod
    // Offset: 0x18
    System::Action_1<Zenject::DiContainer*>* installerMethod;
    // Zenject.ISubContainerCreator <ByMethod>b__0(Zenject.DiContainer container)
    // Offset: 0xFB89C8
    Zenject::ISubContainerCreator* $ByMethod$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xFB7A5C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SubContainerBinder::$$c__DisplayClass11_0* New_ctor();
  }; // Zenject.SubContainerBinder/<>c__DisplayClass11_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass11_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass11_0");
#pragma pack(pop)
