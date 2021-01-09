// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameNoteController
  class GameNoteController;
  // Forward declaring type: BombNoteController
  class BombNoteController;
  // Forward declaring type: ObstacleController
  class ObstacleController;
  // Forward declaring type: NoteLineConnectionController
  class NoteLineConnectionController;
  // Forward declaring type: BeatLine
  class BeatLine;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: BeatmapObjectsInstaller
  // [] Offset: FFFFFFFF
  class BeatmapObjectsInstaller : public Zenject::MonoInstaller {
    public:
    // private GameNoteController _normalBasicNotePrefab
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::GameNoteController* normalBasicNotePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameNoteController*) == 0x8);
    // private BombNoteController _bombNotePrefab
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BombNoteController* bombNotePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BombNoteController*) == 0x8);
    // private ObstacleController _obstaclePrefab
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ObstacleController* obstaclePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ObstacleController*) == 0x8);
    // private NoteLineConnectionController _noteLineConnectionControllerPrefab
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteLineConnectionController*) == 0x8);
    // private BeatLine _beatLinePrefab
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::BeatLine* beatLinePrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatLine*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectsInstaller
    BeatmapObjectsInstaller(GlobalNamespace::GameNoteController* normalBasicNotePrefab_ = {}, GlobalNamespace::BombNoteController* bombNotePrefab_ = {}, GlobalNamespace::ObstacleController* obstaclePrefab_ = {}, GlobalNamespace::NoteLineConnectionController* noteLineConnectionControllerPrefab_ = {}, GlobalNamespace::BeatLine* beatLinePrefab_ = {}) noexcept : normalBasicNotePrefab{normalBasicNotePrefab_}, bombNotePrefab{bombNotePrefab_}, obstaclePrefab{obstaclePrefab_}, noteLineConnectionControllerPrefab{noteLineConnectionControllerPrefab_}, beatLinePrefab{beatLinePrefab_} {}
    // public override System.Void InstallBindings()
    // Offset: 0x1A2CE64
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x1A2CFE4
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectsInstaller* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectsInstaller::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectsInstaller*, creationType>()));
    }
  }; // BeatmapObjectsInstaller
  static check_size<sizeof(BeatmapObjectsInstaller), 64 + sizeof(GlobalNamespace::BeatLine*)> __GlobalNamespace_BeatmapObjectsInstallerSizeCheck;
  static_assert(sizeof(BeatmapObjectsInstaller) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectsInstaller*, "", "BeatmapObjectsInstaller");
#pragma pack(pop)
