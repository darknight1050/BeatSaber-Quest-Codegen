// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayAudioOnGameEventController
#include "GlobalNamespace/PlayAudioOnGameEventController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
  // Forward declaring type: LocalizedAudioClipSO
  class LocalizedAudioClipSO;
  // Forward declaring type: AudioClipQueue
  class AudioClipQueue;
  // Forward declaring type: RandomObjectPicker`1<T>
  template<typename T>
  class RandomObjectPicker_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PlayAudioOnGameEventController/EventAudioBinding
  class PlayAudioOnGameEventController::EventAudioBinding : public ::Il2CppObject {
    public:
    // [HeaderAttribute] Offset: 0xE29B30
    // private Signal _signal
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::Signal* signal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Signal*) == 0x8);
    // private System.Single _delay
    // Size: 0x4
    // Offset: 0x18
    float delay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: delay and: localizedAudioClips
    char __padding1[0x4] = {};
    // private LocalizedAudioClipSO[] _localizedAudioClips
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::LocalizedAudioClipSO*>* localizedAudioClips;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LocalizedAudioClipSO*>*) == 0x8);
    // private AudioClipQueue _audioClipQueue
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AudioClipQueue* audioClipQueue;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioClipQueue*) == 0x8);
    // private RandomObjectPicker`1<LocalizedAudioClipSO> _randomObjectPicker
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>* randomObjectPicker;
    // Field size check
    static_assert(sizeof(GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>*) == 0x8);
    // Creating value type constructor for type: EventAudioBinding
    EventAudioBinding(GlobalNamespace::Signal* signal_ = {}, float delay_ = {}, ::Array<GlobalNamespace::LocalizedAudioClipSO*>* localizedAudioClips_ = {}, GlobalNamespace::AudioClipQueue* audioClipQueue_ = {}, GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>* randomObjectPicker_ = {}) noexcept : signal{signal_}, delay{delay_}, localizedAudioClips{localizedAudioClips_}, audioClipQueue{audioClipQueue_}, randomObjectPicker{randomObjectPicker_} {}
    // public System.Void Init(AudioClipQueue audioClipQueue)
    // Offset: 0x100E674
    void Init(GlobalNamespace::AudioClipQueue* audioClipQueue);
    // public System.Void Deinit()
    // Offset: 0x100E7A8
    void Deinit();
    // private System.Void HandleGameEvent()
    // Offset: 0x100E83C
    void HandleGameEvent();
    // public System.Void .ctor()
    // Offset: 0x100E910
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayAudioOnGameEventController::EventAudioBinding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayAudioOnGameEventController::EventAudioBinding*, creationType>()));
    }
  }; // PlayAudioOnGameEventController/EventAudioBinding
  #pragma pack(pop)
  static check_size<sizeof(PlayAudioOnGameEventController::EventAudioBinding), 48 + sizeof(GlobalNamespace::RandomObjectPicker_1<GlobalNamespace::LocalizedAudioClipSO*>*)> __GlobalNamespace_PlayAudioOnGameEventController_EventAudioBindingSizeCheck;
  static_assert(sizeof(PlayAudioOnGameEventController::EventAudioBinding) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayAudioOnGameEventController::EventAudioBinding*, "", "PlayAudioOnGameEventController/EventAudioBinding");
