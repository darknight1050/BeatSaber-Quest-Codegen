// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InstallerBase
#include "Zenject/InstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Installer
  class Installer : public Zenject::InstallerBase {
    public:
    // Creating value type constructor for type: Installer
    Installer() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x1629738
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Installer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Installer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Installer*, creationType>()));
    }
  }; // Zenject.Installer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Installer*, "Zenject", "Installer");
