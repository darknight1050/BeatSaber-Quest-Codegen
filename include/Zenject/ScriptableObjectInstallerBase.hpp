// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Zenject.IInstaller
#include "Zenject/IInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ScriptableObjectInstallerBase
  // [] Offset: FFFFFFFF
  class ScriptableObjectInstallerBase : public UnityEngine::ScriptableObject/*, public Zenject::IInstaller*/ {
    public:
    // [InjectAttribute] Offset: 0xCF1050
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: ScriptableObjectInstallerBase
    ScriptableObjectInstallerBase(Zenject::DiContainer* container_ = {}) noexcept : container{container_} {}
    // Creating interface conversion operator: operator Zenject::IInstaller
    operator Zenject::IInstaller() noexcept {
      return *reinterpret_cast<Zenject::IInstaller*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x1515E4C
    Zenject::DiContainer* get_Container();
    // private System.Boolean Zenject.IInstaller.get_IsEnabled()
    // Offset: 0x1515E54
    bool Zenject_IInstaller_get_IsEnabled_NEW();
    // public System.Void InstallBindings()
    // Offset: 0x1515E5C
    void InstallBindings_NEW();
    // public System.Void .ctor()
    // Offset: 0x1515E44
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ScriptableObjectInstallerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ScriptableObjectInstallerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ScriptableObjectInstallerBase*, creationType>()));
    }
  }; // Zenject.ScriptableObjectInstallerBase
  #pragma pack(pop)
  static check_size<sizeof(ScriptableObjectInstallerBase), 24 + sizeof(Zenject::DiContainer*)> __Zenject_ScriptableObjectInstallerBaseSizeCheck;
  static_assert(sizeof(ScriptableObjectInstallerBase) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScriptableObjectInstallerBase*, "Zenject", "ScriptableObjectInstallerBase");
