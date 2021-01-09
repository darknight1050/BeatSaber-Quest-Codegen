// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatLine
#include "GlobalNamespace/BeatLine.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: NoteController
  class NoteController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  // Autogenerated type: BeatLineManager
  // [] Offset: FFFFFFFF
  class BeatLineManager : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _linesYPosition
    // Size: 0x4
    // Offset: 0x18
    float linesYPosition;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: linesYPosition and: beatmapObjectManager
    char __padding0[0x4] = {};
    // [InjectAttribute] Offset: 0xDC53AC
    // private BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC53BC
    // private BeatLine/Pool _beatLinePool
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatLine::Pool* beatLinePool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatLine::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0xDC53CC
    // private AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.Vector4,BeatLine> _activeBeatLines
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<UnityEngine::Vector4, GlobalNamespace::BeatLine*>* activeBeatLines;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::Vector4, GlobalNamespace::BeatLine*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector4> _removeBeatLineKeyList
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<UnityEngine::Vector4>* removeBeatLineKeyList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<UnityEngine::Vector4>*) == 0x8);
    // private System.Boolean _isMidRotationValid
    // Size: 0x1
    // Offset: 0x48
    bool isMidRotationValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isMidRotationValid and: midRotation
    char __padding6[0x3] = {};
    // private System.Single _midRotation
    // Size: 0x4
    // Offset: 0x4C
    float midRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rotationRange
    // Size: 0x4
    // Offset: 0x50
    float rotationRange;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BeatLineManager
    BeatLineManager(float linesYPosition_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::BeatLine::Pool* beatLinePool_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::Vector4, GlobalNamespace::BeatLine*>* activeBeatLines_ = {}, System::Collections::Generic::List_1<UnityEngine::Vector4>* removeBeatLineKeyList_ = {}, bool isMidRotationValid_ = {}, float midRotation_ = {}, float rotationRange_ = {}) noexcept : linesYPosition{linesYPosition_}, beatmapObjectManager{beatmapObjectManager_}, beatLinePool{beatLinePool_}, audioTimeSyncController{audioTimeSyncController_}, activeBeatLines{activeBeatLines_}, removeBeatLineKeyList{removeBeatLineKeyList_}, isMidRotationValid{isMidRotationValid_}, midRotation{midRotation_}, rotationRange{rotationRange_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isMidRotationValid()
    // Offset: 0x1A785C8
    bool get_isMidRotationValid();
    // public System.Single get_midRotation()
    // Offset: 0x1A785D0
    float get_midRotation();
    // public System.Single get_rotationRange()
    // Offset: 0x1A785D8
    float get_rotationRange();
    // protected System.Void Start()
    // Offset: 0x1A785E0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A78674
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0x1A78708
    void Update();
    // private System.Void HandleNoteWasSpawned(NoteController noteController)
    // Offset: 0x1A78ABC
    void HandleNoteWasSpawned(GlobalNamespace::NoteController* noteController);
    // public System.Void .ctor()
    // Offset: 0x1A78CB8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatLineManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatLineManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatLineManager*, creationType>()));
    }
  }; // BeatLineManager
  static check_size<sizeof(BeatLineManager), 80 + sizeof(float)> __GlobalNamespace_BeatLineManagerSizeCheck;
  static_assert(sizeof(BeatLineManager) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatLineManager*, "", "BeatLineManager");
#pragma pack(pop)
