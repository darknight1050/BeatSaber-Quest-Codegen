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
  // Autogenerated type: Zenject.Installer`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TDerived>
  class Installer_6 : public Zenject::InstallerBase {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TDerived>> || std::is_convertible_v<TDerived, Zenject::Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>));
    public:
    // static public System.Void Install(Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0xFFFFFFFF
    static void Install(Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>::get(), "Install", container, p1, p2, p3, p4, p5)));
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>* New_ctor() {
      return (Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Installer_6<TParam1, TParam2, TParam3, TParam4, TParam5, TDerived>*>::get())));
    }
  }; // Zenject.Installer`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Installer_6, "Zenject", "Installer`6");
#pragma pack(pop)
