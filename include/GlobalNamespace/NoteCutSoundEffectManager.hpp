// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: INoteCutSoundEffectDidFinishEvent
#include "GlobalNamespace/INoteCutSoundEffectDidFinishEvent.hpp"
// Including type: NoteCutSoundEffect
#include "GlobalNamespace/NoteCutSoundEffect.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AudioManagerSO
  class AudioManagerSO;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: AudioTimeSyncController
  class AudioTimeSyncController;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
  // Forward declaring type: MemoryPoolContainer`1<T>
  template<typename T>
  class MemoryPoolContainer_1;
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: NoteCutInfo
  struct NoteCutInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: NoteCutSoundEffectManager
  class NoteCutSoundEffectManager : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::INoteCutSoundEffectDidFinishEvent*/ {
    public:
    // Nested type: GlobalNamespace::NoteCutSoundEffectManager::InitData
    class InitData;
    // private AudioManagerSO _audioManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AudioManagerSO* audioManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioManagerSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xE14FBC
    // private System.Single _audioSamplesBeatAlignOffset
    // Size: 0x4
    // Offset: 0x20
    float audioSamplesBeatAlignOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: audioSamplesBeatAlignOffset and: longCutEffectsAudioClips
    char __padding1[0x4] = {};
    // private UnityEngine.AudioClip[] _longCutEffectsAudioClips
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::AudioClip*>* longCutEffectsAudioClips;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // private UnityEngine.AudioClip[] _shortCutEffectsAudioClips
    // Size: 0x8
    // Offset: 0x30
    ::Array<UnityEngine::AudioClip*>* shortCutEffectsAudioClips;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::AudioClip*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xE15014
    // private UnityEngine.AudioClip _testAudioClip
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AudioClip* testAudioClip;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioClip*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0xE1504C
    // private readonly NoteCutSoundEffectManager/InitData _initData
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::NoteCutSoundEffectManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutSoundEffectManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xE1505C
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1506C
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // [InjectAttribute] Offset: 0xE1507C
    // private readonly NoteCutSoundEffect/Pool _noteCutSoundEffectPool
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::NoteCutSoundEffect::Pool* noteCutSoundEffectPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutSoundEffect::Pool*) == 0x8);
    // [InjectAttribute] Offset: 0xE1508C
    // private readonly AudioTimeSyncController _audioTimeSyncController
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioTimeSyncController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1509C
    // private System.Boolean <handleWrongSaberTypeAsGood>k__BackingField
    // Size: 0x1
    // Offset: 0x68
    bool handleWrongSaberTypeAsGood;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: handleWrongSaberTypeAsGood and: randomLongCutSoundPicker
    char __padding10[0x7] = {};
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomLongCutSoundPicker
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomLongCutSoundPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*) == 0x8);
    // private RandomObjectPicker`1<UnityEngine.AudioClip> _randomShortCutSoundPicker
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomShortCutSoundPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>*) == 0x8);
    // private System.Single _prevNoteATime
    // Size: 0x4
    // Offset: 0x80
    float prevNoteATime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevNoteBTime
    // Size: 0x4
    // Offset: 0x84
    float prevNoteBTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private NoteCutSoundEffect _prevNoteASoundEffect
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::NoteCutSoundEffect* prevNoteASoundEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutSoundEffect*) == 0x8);
    // private NoteCutSoundEffect _prevNoteBSoundEffect
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::NoteCutSoundEffect* prevNoteBSoundEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteCutSoundEffect*) == 0x8);
    // private System.Single _beatAlignOffset
    // Size: 0x4
    // Offset: 0x98
    float beatAlignOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _useTestAudioClips
    // Size: 0x1
    // Offset: 0x9C
    bool useTestAudioClips;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useTestAudioClips and: noteCutSoundEffectPoolContainer
    char __padding18[0x3] = {};
    // private MemoryPoolContainer`1<NoteCutSoundEffect> _noteCutSoundEffectPoolContainer
    // Size: 0x8
    // Offset: 0xA0
    GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect*>* noteCutSoundEffectPoolContainer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect*>*) == 0x8);
    // Creating value type constructor for type: NoteCutSoundEffectManager
    NoteCutSoundEffectManager(GlobalNamespace::AudioManagerSO* audioManager_ = {}, float audioSamplesBeatAlignOffset_ = {}, ::Array<UnityEngine::AudioClip*>* longCutEffectsAudioClips_ = {}, ::Array<UnityEngine::AudioClip*>* shortCutEffectsAudioClips_ = {}, UnityEngine::AudioClip* testAudioClip_ = {}, GlobalNamespace::NoteCutSoundEffectManager::InitData* initData_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, GlobalNamespace::NoteCutSoundEffect::Pool* noteCutSoundEffectPool_ = {}, GlobalNamespace::AudioTimeSyncController* audioTimeSyncController_ = {}, bool handleWrongSaberTypeAsGood_ = {}, GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomLongCutSoundPicker_ = {}, GlobalNamespace::RandomObjectPicker_1<UnityEngine::AudioClip*>* randomShortCutSoundPicker_ = {}, float prevNoteATime_ = {}, float prevNoteBTime_ = {}, GlobalNamespace::NoteCutSoundEffect* prevNoteASoundEffect_ = {}, GlobalNamespace::NoteCutSoundEffect* prevNoteBSoundEffect_ = {}, float beatAlignOffset_ = {}, bool useTestAudioClips_ = {}, GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect*>* noteCutSoundEffectPoolContainer_ = {}) noexcept : audioManager{audioManager_}, audioSamplesBeatAlignOffset{audioSamplesBeatAlignOffset_}, longCutEffectsAudioClips{longCutEffectsAudioClips_}, shortCutEffectsAudioClips{shortCutEffectsAudioClips_}, testAudioClip{testAudioClip_}, initData{initData_}, beatmapObjectManager{beatmapObjectManager_}, saberManager{saberManager_}, noteCutSoundEffectPool{noteCutSoundEffectPool_}, audioTimeSyncController{audioTimeSyncController_}, handleWrongSaberTypeAsGood{handleWrongSaberTypeAsGood_}, randomLongCutSoundPicker{randomLongCutSoundPicker_}, randomShortCutSoundPicker{randomShortCutSoundPicker_}, prevNoteATime{prevNoteATime_}, prevNoteBTime{prevNoteBTime_}, prevNoteASoundEffect{prevNoteASoundEffect_}, prevNoteBSoundEffect{prevNoteBSoundEffect_}, beatAlignOffset{beatAlignOffset_}, useTestAudioClips{useTestAudioClips_}, noteCutSoundEffectPoolContainer{noteCutSoundEffectPoolContainer_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INoteCutSoundEffectDidFinishEvent
    operator GlobalNamespace::INoteCutSoundEffectDidFinishEvent() noexcept {
      return *reinterpret_cast<GlobalNamespace::INoteCutSoundEffectDidFinishEvent*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxNumberOfEffects
    static constexpr const int kMaxNumberOfEffects = 64;
    // Get static field: static private System.Int32 kMaxNumberOfEffects
    static int _get_kMaxNumberOfEffects();
    // Set static field: static private System.Int32 kMaxNumberOfEffects
    static void _set_kMaxNumberOfEffects(int value);
    // static field const value: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static constexpr const float kTwoNotesAtTheSameTimeVolumeMul = 0.9;
    // Get static field: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static float _get_kTwoNotesAtTheSameTimeVolumeMul();
    // Set static field: static private System.Single kTwoNotesAtTheSameTimeVolumeMul
    static void _set_kTwoNotesAtTheSameTimeVolumeMul(float value);
    // static field const value: static private System.Single kDenseNotesVolumeMul
    static constexpr const float kDenseNotesVolumeMul = 0.9;
    // Get static field: static private System.Single kDenseNotesVolumeMul
    static float _get_kDenseNotesVolumeMul();
    // Set static field: static private System.Single kDenseNotesVolumeMul
    static void _set_kDenseNotesVolumeMul(float value);
    // public System.Boolean get_handleWrongSaberTypeAsGood()
    // Offset: 0x11BAC18
    bool get_handleWrongSaberTypeAsGood();
    // public System.Void set_handleWrongSaberTypeAsGood(System.Boolean value)
    // Offset: 0x11BAC20
    void set_handleWrongSaberTypeAsGood(bool value);
    // protected System.Void Start()
    // Offset: 0x11BAC2C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x11BAE30
    void OnDestroy();
    // private System.Void HandleNoteWasSpawned(NoteController noteController)
    // Offset: 0x11BAF18
    void HandleNoteWasSpawned(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteWasCut(NoteController noteController, in NoteCutInfo noteCutInfo)
    // Offset: 0x11BB3F4
    void HandleNoteWasCut(GlobalNamespace::NoteController* noteController, GlobalNamespace::NoteCutInfo& noteCutInfo);
    // public System.Void HandleNoteCutSoundEffectDidFinish(NoteCutSoundEffect noteCutSoundEffect)
    // Offset: 0x11BB51C
    void HandleNoteCutSoundEffectDidFinish(GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect);
    // public System.Void .ctor()
    // Offset: 0x11BB600
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutSoundEffectManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutSoundEffectManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutSoundEffectManager*, creationType>()));
    }
  }; // NoteCutSoundEffectManager
  #pragma pack(pop)
  static check_size<sizeof(NoteCutSoundEffectManager), 160 + sizeof(GlobalNamespace::MemoryPoolContainer_1<GlobalNamespace::NoteCutSoundEffect*>*)> __GlobalNamespace_NoteCutSoundEffectManagerSizeCheck;
  static_assert(sizeof(NoteCutSoundEffectManager) == 0xA8);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffectManager*, "", "NoteCutSoundEffectManager");
