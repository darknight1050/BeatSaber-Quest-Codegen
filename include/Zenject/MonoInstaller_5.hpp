// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstallerBase
#include "Zenject/MonoInstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MonoInstaller`5
  // [] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TDerived>
  class MonoInstaller_5 : public Zenject::MonoInstallerBase {
    public:
    // Creating value type constructor for type: MonoInstaller_5
    MonoInstaller_5() noexcept {}
    // static public TDerived InstallFromResource(Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_5::InstallFromResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>*>::get(), "InstallFromResource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container, p1, p2, p3, p4))));
      return ::il2cpp_utils::RunMethodThrow<TDerived, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, container, p1, p2, p3, p4);
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_5::InstallFromResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>*>::get(), "InstallFromResource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(resourcePath, container, p1, p2, p3, p4))));
      return ::il2cpp_utils::RunMethodThrow<TDerived, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, resourcePath, container, p1, p2, p3, p4);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>*, creationType>()));
    }
  }; // Zenject.MonoInstaller`5
  // Could not write size check! Type: Zenject.MonoInstaller`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_5, "Zenject", "MonoInstaller`5");
