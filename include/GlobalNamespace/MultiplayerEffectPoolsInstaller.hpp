// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: NoteDebris
  class NoteDebris;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerEffectPoolsInstaller
  // [] Offset: FFFFFFFF
  class MultiplayerEffectPoolsInstaller : public Zenject::MonoInstaller {
    public:
    // private BoolSO _noteDebrisHDConditionVariable
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BoolSO* noteDebrisHDConditionVariable;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // private NoteDebris _noteDebrisHDPrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::NoteDebris* noteDebrisHDPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebris*) == 0x8);
    // private NoteDebris _noteDebrisLWPrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::NoteDebris* noteDebrisLWPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebris*) == 0x8);
    // Creating value type constructor for type: MultiplayerEffectPoolsInstaller
    MultiplayerEffectPoolsInstaller(GlobalNamespace::BoolSO* noteDebrisHDConditionVariable_ = {}, GlobalNamespace::NoteDebris* noteDebrisHDPrefab_ = {}, GlobalNamespace::NoteDebris* noteDebrisLWPrefab_ = {}) noexcept : noteDebrisHDConditionVariable{noteDebrisHDConditionVariable_}, noteDebrisHDPrefab{noteDebrisHDPrefab_}, noteDebrisLWPrefab{noteDebrisLWPrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x10475E0
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings_NEW()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1047690
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerEffectPoolsInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerEffectPoolsInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerEffectPoolsInstaller*, creationType>()));
    }
  }; // MultiplayerEffectPoolsInstaller
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerEffectPoolsInstaller), 48 + sizeof(GlobalNamespace::NoteDebris*)> __GlobalNamespace_MultiplayerEffectPoolsInstallerSizeCheck;
  static_assert(sizeof(MultiplayerEffectPoolsInstaller) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerEffectPoolsInstaller*, "", "MultiplayerEffectPoolsInstaller");
