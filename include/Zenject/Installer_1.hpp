// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Zenject.InstallerBase
#include "Zenject/InstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Installer`1
  template<typename TDerived>
  class Installer_1 : public Zenject::InstallerBase {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TDerived>> || std::is_convertible_v<TDerived, Zenject::Installer_1<TDerived>*>));
    public:
    // static public System.Void Install(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    static void Install(Zenject::DiContainer* container) {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Installer_1<TDerived>*>::get(), "Install", container));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static Installer_1<TDerived>* New_ctor() {
      return (Installer_1<TDerived>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Installer_1<TDerived>*>::get()));
    }
  }; // Zenject.Installer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Installer_1, "Zenject", "Installer`1");
#pragma pack(pop)
