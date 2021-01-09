// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstallerBase
#include "Zenject/MonoInstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  // Autogenerated type: Zenject.MonoInstaller
  // [] Offset: FFFFFFFF
  class MonoInstaller : public Zenject::MonoInstallerBase {
    public:
    // Creating value type constructor for type: MonoInstaller
    MonoInstaller() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13485A4
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoInstaller*, creationType>()));
    }
  }; // Zenject.MonoInstaller
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoInstaller*, "Zenject", "MonoInstaller");
#pragma pack(pop)
