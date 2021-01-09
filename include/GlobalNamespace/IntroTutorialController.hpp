// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: IntroTutorialRing
  class IntroTutorialRing;
  // Forward declaring type: IGamePause
  class IGamePause;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x63
  // Autogenerated type: IntroTutorialController
  // [] Offset: FFFFFFFF
  class IntroTutorialController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::IntroTutorialController::$ShowFinishAnimationCoroutine$d__21
    class $ShowFinishAnimationCoroutine$d__21;
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogSO*) == 0x8);
    // private IntroTutorialRing _redRing
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IntroTutorialRing* redRing;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntroTutorialRing*) == 0x8);
    // private IntroTutorialRing _blueRing
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IntroTutorialRing* blueRing;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IntroTutorialRing*) == 0x8);
    // private UnityEngine.GameObject _redRingWrapper
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* redRingWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _blueRingWrapper
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::GameObject* blueRingWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.CanvasGroup _textCanvasGroup
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::CanvasGroup* textCanvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private UnityEngine.ParticleSystem _shockWavePS
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::ParticleSystem* shockWavePS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // [InjectAttribute] Offset: 0xDCB39C
    // private IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGamePause*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDCB3AC
    // private System.Action introTutorialDidFinishEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action* introTutorialDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _showingFinishAnimation
    // Size: 0x1
    // Offset: 0x60
    bool showingFinishAnimation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _redRingWrapperActive
    // Size: 0x1
    // Offset: 0x61
    bool redRingWrapperActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _blueRingWrapperActive
    // Size: 0x1
    // Offset: 0x62
    bool blueRingWrapperActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: IntroTutorialController
    IntroTutorialController(GlobalNamespace::BloomFogSO* bloomFog_ = {}, GlobalNamespace::IntroTutorialRing* redRing_ = {}, GlobalNamespace::IntroTutorialRing* blueRing_ = {}, UnityEngine::GameObject* redRingWrapper_ = {}, UnityEngine::GameObject* blueRingWrapper_ = {}, UnityEngine::CanvasGroup* textCanvasGroup_ = {}, UnityEngine::ParticleSystem* shockWavePS_ = {}, GlobalNamespace::IGamePause* gamePause_ = {}, System::Action* introTutorialDidFinishEvent_ = {}, bool showingFinishAnimation_ = {}, bool redRingWrapperActive_ = {}, bool blueRingWrapperActive_ = {}) noexcept : bloomFog{bloomFog_}, redRing{redRing_}, blueRing{blueRing_}, redRingWrapper{redRingWrapper_}, blueRingWrapper{blueRingWrapper_}, textCanvasGroup{textCanvasGroup_}, shockWavePS{shockWavePS_}, gamePause{gamePause_}, introTutorialDidFinishEvent{introTutorialDidFinishEvent_}, showingFinishAnimation{showingFinishAnimation_}, redRingWrapperActive{redRingWrapperActive_}, blueRingWrapperActive{blueRingWrapperActive_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_introTutorialDidFinishEvent(System.Action value)
    // Offset: 0xF1B944
    void add_introTutorialDidFinishEvent(System::Action* value);
    // public System.Void remove_introTutorialDidFinishEvent(System.Action value)
    // Offset: 0xF1B9E8
    void remove_introTutorialDidFinishEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0xF1BA8C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF1BC10
    void OnDestroy();
    // protected System.Void Update()
    // Offset: 0xF1BDB0
    void Update();
    // private System.Void CleanUp()
    // Offset: 0xF1BC14
    void CleanUp();
    // private System.Void HandleGameDidPause()
    // Offset: 0xF1BF00
    void HandleGameDidPause();
    // private System.Void HandlegameDidResume()
    // Offset: 0xF1BF7C
    void HandlegameDidResume();
    // private System.Void ShowFinishAnimation()
    // Offset: 0xF1BE74
    void ShowFinishAnimation();
    // private System.Collections.IEnumerator ShowFinishAnimationCoroutine()
    // Offset: 0xF1BFC0
    System::Collections::IEnumerator* ShowFinishAnimationCoroutine();
    // private System.Void SetFinishAnimationParams(System.Single progress)
    // Offset: 0xF1C068
    void SetFinishAnimationParams(float progress);
    // public System.Void .ctor()
    // Offset: 0xF1C110
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IntroTutorialController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IntroTutorialController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IntroTutorialController*, creationType>()));
    }
  }; // IntroTutorialController
  static check_size<sizeof(IntroTutorialController), 98 + sizeof(bool)> __GlobalNamespace_IntroTutorialControllerSizeCheck;
  static_assert(sizeof(IntroTutorialController) == 0x63);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IntroTutorialController*, "", "IntroTutorialController");
#pragma pack(pop)
