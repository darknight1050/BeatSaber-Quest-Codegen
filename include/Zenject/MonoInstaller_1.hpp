// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
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
  // Autogenerated type: Zenject.MonoInstaller`1
  template<typename TDerived>
  class MonoInstaller_1 : public Zenject::MonoInstaller {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TDerived>> || std::is_convertible_v<TDerived, Zenject::MonoInstaller_1<TDerived>*>));
    public:
    // static public TDerived InstallFromResource(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(Zenject::DiContainer* container) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", container));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(::CsString* resourcePath, Zenject::DiContainer* container) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", resourcePath, container));
    }
    // static public TDerived InstallFromResource(Zenject.DiContainer container, System.Object[] extraArgs)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(Zenject::DiContainer* container, ::Array<::CsObject*>* extraArgs) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", container, extraArgs));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, System.Object[] extraArgs)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(::CsString* resourcePath, Zenject::DiContainer* container, ::Array<::CsObject*>* extraArgs) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get(), "InstallFromResource", resourcePath, container, extraArgs));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoInstaller_1<TDerived>* New_ctor() {
      return (MonoInstaller_1<TDerived>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_1<TDerived>*>::get()));
    }
  }; // Zenject.MonoInstaller`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_1, "Zenject", "MonoInstaller`1");
#pragma pack(pop)
