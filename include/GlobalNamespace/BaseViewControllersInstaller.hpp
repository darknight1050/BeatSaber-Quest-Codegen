// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScriptableObjectInstaller
#include "Zenject/ScriptableObjectInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SimpleDialogPromptViewController
  class SimpleDialogPromptViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BaseViewControllersInstaller
  class BaseViewControllersInstaller : public Zenject::ScriptableObjectInstaller {
    public:
    // private SimpleDialogPromptViewController _simpleDialogPromptViewControllerPrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleDialogPromptViewController*) == 0x8);
    // Creating value type constructor for type: BaseViewControllersInstaller
    BaseViewControllersInstaller(GlobalNamespace::SimpleDialogPromptViewController* simpleDialogPromptViewControllerPrefab_ = {}) noexcept : simpleDialogPromptViewControllerPrefab{simpleDialogPromptViewControllerPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x119F618
    // Implemented from: Zenject.ScriptableObjectInstallerBase
    // Base method: System.Void ScriptableObjectInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x119F68C
    // Implemented from: Zenject.ScriptableObjectInstaller
    // Base method: System.Void ScriptableObjectInstaller::.ctor()
    // Base method: System.Void ScriptableObjectInstallerBase::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseViewControllersInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseViewControllersInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseViewControllersInstaller*, creationType>()));
    }
  }; // BaseViewControllersInstaller
  #pragma pack(pop)
  static check_size<sizeof(BaseViewControllersInstaller), 32 + sizeof(GlobalNamespace::SimpleDialogPromptViewController*)> __GlobalNamespace_BaseViewControllersInstallerSizeCheck;
  static_assert(sizeof(BaseViewControllersInstaller) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseViewControllersInstaller*, "", "BaseViewControllersInstaller");
