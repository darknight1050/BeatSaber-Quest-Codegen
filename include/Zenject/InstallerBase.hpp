// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IInstaller
#include "Zenject/IInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InstallerBase
  class InstallerBase : public ::CsObject, public Zenject::IInstaller {
    public:
    // private Zenject.DiContainer _container
    // Offset: 0x10
    Zenject::DiContainer* container;
    // protected Zenject.DiContainer get_Container()
    // Offset: 0xF27600
    Zenject::DiContainer* get_Container();
    // public System.Boolean get_IsEnabled()
    // Offset: 0xF27608
    // Implemented from: Zenject.IInstaller
    // Base method: System.Boolean IInstaller::get_IsEnabled()
    bool get_IsEnabled();
    // Creating proxy method: Zenject_IInstaller_get_IsEnabled
    // Maps to method: get_IsEnabled
    bool Zenject_IInstaller_get_IsEnabled();
    // public System.Void InstallBindings()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IInstaller
    // Base method: System.Void IInstaller::InstallBindings()
    void InstallBindings();
    // protected System.Void .ctor()
    // Offset: 0xF275F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InstallerBase* New_ctor();
  }; // Zenject.InstallerBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstallerBase*, "Zenject", "InstallerBase");
#pragma pack(pop)
