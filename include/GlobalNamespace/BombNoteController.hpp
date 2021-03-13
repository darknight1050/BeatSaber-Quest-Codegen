// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteController
#include "GlobalNamespace/NoteController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CuttableBySaber
  class CuttableBySaber;
  // Forward declaring type: NoteData
  class NoteData;
  // Forward declaring type: Saber
  class Saber;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: BombNoteController
  // [] Offset: FFFFFFFF
  class BombNoteController : public GlobalNamespace::NoteController {
    public:
    // Nested type: GlobalNamespace::BombNoteController::Pool
    class Pool;
    // private CuttableBySaber _cuttableBySaber
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::CuttableBySaber* cuttableBySaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::CuttableBySaber*) == 0x8);
    // private UnityEngine.GameObject _wrapperGO
    // Size: 0x8
    // Offset: 0x80
    UnityEngine::GameObject* wrapperGO;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Boolean _hidden
    // Size: 0x1
    // Offset: 0x88
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: BombNoteController
    BombNoteController(GlobalNamespace::CuttableBySaber* cuttableBySaber_ = {}, UnityEngine::GameObject* wrapperGO_ = {}, bool hidden_ = {}) noexcept : cuttableBySaber{cuttableBySaber_}, wrapperGO{wrapperGO_}, hidden{hidden_} {}
    // public System.Void Init(NoteData noteData, System.Single worldRotation, UnityEngine.Vector3 moveStartPos, UnityEngine.Vector3 moveEndPos, UnityEngine.Vector3 jumpEndPos, System.Single moveDuration, System.Single jumpDuration, System.Single jumpGravity)
    // Offset: 0xF06108
    void Init(GlobalNamespace::NoteData* noteData, float worldRotation, UnityEngine::Vector3 moveStartPos, UnityEngine::Vector3 moveEndPos, UnityEngine::Vector3 jumpEndPos, float moveDuration, float jumpDuration, float jumpGravity);
    // private System.Void HandleDidPassHalfJump()
    // Offset: 0xF063D4
    void HandleDidPassHalfJump();
    // private System.Void HandleWasCutBySaber(Saber saber, UnityEngine.Vector3 cutPoint, UnityEngine.Quaternion orientation, UnityEngine.Vector3 cutDirVec)
    // Offset: 0xF063F8
    void HandleWasCutBySaber(GlobalNamespace::Saber* saber, UnityEngine::Vector3 cutPoint, UnityEngine::Quaternion orientation, UnityEngine::Vector3 cutDirVec);
    // public override System.Void set_hide(System.Boolean value)
    // Offset: 0xF060AC
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_hide_NEW(System.Boolean value)
    void set_hide(bool value);
    // public override System.Boolean get_hide()
    // Offset: 0xF060F0
    // Implemented from: NoteController
    // Base method: System.Boolean NoteController::get_hide_NEW()
    bool get_hide();
    // public override System.Void set_pause(System.Boolean value)
    // Offset: 0xF060F8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::set_pause_NEW(System.Boolean value)
    void set_pause(bool value);
    // protected override System.Void Awake()
    // Offset: 0xF061D8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::Awake_NEW()
    void Awake();
    // protected override System.Void OnDestroy()
    // Offset: 0xF062B4
    // Implemented from: NoteController
    // Base method: System.Void NoteController::OnDestroy_NEW()
    void OnDestroy();
    // protected override System.Void NoteDidPassMissedMarker()
    // Offset: 0xF06394
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidPassMissedMarker_NEW()
    void NoteDidPassMissedMarker();
    // protected override System.Void NoteDidStartDissolving()
    // Offset: 0xF065B4
    // Implemented from: NoteController
    // Base method: System.Void NoteController::NoteDidStartDissolving_NEW()
    void NoteDidStartDissolving();
    // public System.Void .ctor()
    // Offset: 0xF065D8
    // Implemented from: NoteController
    // Base method: System.Void NoteController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BombNoteController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BombNoteController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BombNoteController*, creationType>()));
    }
  }; // BombNoteController
  #pragma pack(pop)
  static check_size<sizeof(BombNoteController), 136 + sizeof(bool)> __GlobalNamespace_BombNoteControllerSizeCheck;
  static_assert(sizeof(BombNoteController) == 0x89);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BombNoteController*, "", "BombNoteController");
