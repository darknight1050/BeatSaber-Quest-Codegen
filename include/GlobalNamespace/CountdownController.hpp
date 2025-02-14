// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CountdownElementController
  class CountdownElementController;
  // Forward declaring type: ITimeProvider
  class ITimeProvider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: CountdownController
  class CountdownController : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSource*) == 0x8);
    // private CountdownElementController[] _countdownElementControllers
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::CountdownElementController*>* countdownElementControllers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::CountdownElementController*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE23B60
    // private readonly ITimeProvider _timeProvider
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ITimeProvider* timeProvider;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ITimeProvider*) == 0x8);
    // private System.Single _countdownEndTime
    // Size: 0x4
    // Offset: 0x30
    float countdownEndTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _currentRemainingSecond
    // Size: 0x4
    // Offset: 0x34
    int currentRemainingSecond;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _gongSounded
    // Size: 0x1
    // Offset: 0x38
    bool gongSounded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _countdownRunning
    // Size: 0x1
    // Offset: 0x39
    bool countdownRunning;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: countdownRunning and: countdownElementControllerQueue
    char __padding6[0x6] = {};
    // private readonly System.Collections.Generic.Queue`1<CountdownElementController> _countdownElementControllerQueue
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>* countdownElementControllerQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>*) == 0x8);
    // Creating value type constructor for type: CountdownController
    CountdownController(UnityEngine::AudioSource* audioSource_ = {}, ::Array<GlobalNamespace::CountdownElementController*>* countdownElementControllers_ = {}, GlobalNamespace::ITimeProvider* timeProvider_ = {}, float countdownEndTime_ = {}, int currentRemainingSecond_ = {}, bool gongSounded_ = {}, bool countdownRunning_ = {}, System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>* countdownElementControllerQueue_ = {}) noexcept : audioSource{audioSource_}, countdownElementControllers{countdownElementControllers_}, timeProvider{timeProvider_}, countdownEndTime{countdownEndTime_}, currentRemainingSecond{currentRemainingSecond_}, gongSounded{gongSounded_}, countdownRunning{countdownRunning_}, countdownElementControllerQueue{countdownElementControllerQueue_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kGongTime
    static constexpr const float kGongTime = 5;
    // Get static field: static private System.Single kGongTime
    static float _get_kGongTime();
    // Set static field: static private System.Single kGongTime
    static void _set_kGongTime(float value);
    // protected System.Void Awake()
    // Offset: 0x10984B8
    void Awake();
    // protected System.Void Update()
    // Offset: 0x10984D0
    void Update();
    // public System.Void StartCountdown(System.Single countdownEndTime)
    // Offset: 0x108B724
    void StartCountdown(float countdownEndTime);
    // public System.Void UpdateCountdown(System.Single countdownEndTime)
    // Offset: 0x108B914
    void UpdateCountdown(float countdownEndTime);
    // public System.Void StopCountdown()
    // Offset: 0x108B824
    void StopCountdown();
    // public System.Void .ctor()
    // Offset: 0x10986F0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CountdownController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownController*, creationType>()));
    }
  }; // CountdownController
  #pragma pack(pop)
  static check_size<sizeof(CountdownController), 64 + sizeof(System::Collections::Generic::Queue_1<GlobalNamespace::CountdownElementController*>*)> __GlobalNamespace_CountdownControllerSizeCheck;
  static_assert(sizeof(CountdownController) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CountdownController*, "", "CountdownController");
