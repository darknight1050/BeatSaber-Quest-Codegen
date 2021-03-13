// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InstallerBase
  // [] Offset: FFFFFFFF
  class InstallerBase : public ::Il2CppObject/*, public Zenject::IInstaller*/ {
    public:
    // [InjectAttribute] Offset: 0xCF1030
    // private Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: InstallerBase
    InstallerBase(Zenject::DiContainer* container_ = {}) noexcept : container{container_} {}
    // Creating interface conversion operator: operator Zenject::IInstaller
    operator Zenject::IInstaller() noexcept {
      return *reinterpret_cast<Zenject::IInstaller*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x147B254
    Zenject::DiContainer* get_Container();
    // public System.Boolean get_IsEnabled()
    // Offset: 0x147B25C
    bool get_IsEnabled_NEW();
    // public System.Void InstallBindings()
    // Offset: 0xFFFFFFFF
    void InstallBindings_NEW();
    // protected System.Void .ctor()
    // Offset: 0x147B24C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstallerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InstallerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstallerBase*, creationType>()));
    }
  }; // Zenject.InstallerBase
  #pragma pack(pop)
  static check_size<sizeof(InstallerBase), 16 + sizeof(Zenject::DiContainer*)> __Zenject_InstallerBaseSizeCheck;
  static_assert(sizeof(InstallerBase) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstallerBase*, "Zenject", "InstallerBase");
