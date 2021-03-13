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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterSpawnAnimationController
  class BTSCharacterSpawnAnimationController;
  // Forward declaring type: BTSCharacterSpawnEventEffect
  class BTSCharacterSpawnEventEffect;
  // Forward declaring type: IGamePause
  class IGamePause;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Coroutine
  class Coroutine;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacterSpawnController
  // [] Offset: FFFFFFFF
  class BTSCharacterSpawnController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSCharacterSpawnController::$TimelineStoppedDelayed$d__19
    class $TimelineStoppedDelayed$d__19;
    // private BTSCharacterSpawnAnimationController _characterSpawnAnimationController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BTSCharacterSpawnAnimationController* characterSpawnAnimationController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterSpawnAnimationController*) == 0x8);
    // [SpaceAttribute] Offset: 0xD1D014
    // private BTSCharacterSpawnEventEffect _btsCharacterSpawnEventEffect
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::BTSCharacterSpawnEventEffect* btsCharacterSpawnEventEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterSpawnEventEffect*) == 0x8);
    // [InjectAttribute] Offset: 0xD1D04C
    // private readonly IGamePause _gamePause
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IGamePause* gamePause;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGamePause*) == 0x8);
    // [InjectAttribute] Offset: 0xD1D05C
    // private readonly ILevelEndActions _levelEndActions
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ILevelEndActions* levelEndActions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // private System.Boolean _characterSpawned
    // Size: 0x1
    // Offset: 0x38
    bool characterSpawned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: characterSpawned and: playableDirectorTimeBeforePause
    char __padding4[0x7] = {};
    // private System.Double _playableDirectorTimeBeforePause
    // Size: 0x8
    // Offset: 0x40
    double playableDirectorTimeBeforePause;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single _animatorNormalizedTimeBeforePause
    // Size: 0x4
    // Offset: 0x48
    float animatorNormalizedTimeBeforePause;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: animatorNormalizedTimeBeforePause and: despawnCharacterCoroutine
    char __padding6[0x4] = {};
    // private UnityEngine.Coroutine _despawnCharacterCoroutine
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::Coroutine* despawnCharacterCoroutine;
    // Field size check
    static_assert(sizeof(UnityEngine::Coroutine*) == 0x8);
    // Creating value type constructor for type: BTSCharacterSpawnController
    BTSCharacterSpawnController(GlobalNamespace::BTSCharacterSpawnAnimationController* characterSpawnAnimationController_ = {}, GlobalNamespace::BTSCharacterSpawnEventEffect* btsCharacterSpawnEventEffect_ = {}, GlobalNamespace::IGamePause* gamePause_ = {}, GlobalNamespace::ILevelEndActions* levelEndActions_ = {}, bool characterSpawned_ = {}, double playableDirectorTimeBeforePause_ = {}, float animatorNormalizedTimeBeforePause_ = {}, UnityEngine::Coroutine* despawnCharacterCoroutine_ = {}) noexcept : characterSpawnAnimationController{characterSpawnAnimationController_}, btsCharacterSpawnEventEffect{btsCharacterSpawnEventEffect_}, gamePause{gamePause_}, levelEndActions{levelEndActions_}, characterSpawned{characterSpawned_}, playableDirectorTimeBeforePause{playableDirectorTimeBeforePause_}, animatorNormalizedTimeBeforePause{animatorNormalizedTimeBeforePause_}, despawnCharacterCoroutine{despawnCharacterCoroutine_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isCharacterVisible()
    // Offset: 0x1007C18
    bool get_isCharacterVisible();
    // public System.Boolean get_isSpawned()
    // Offset: 0x1007C30
    bool get_isSpawned();
    // protected System.Void Start()
    // Offset: 0x1007C38
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1007FD4
    void OnDestroy();
    // private System.Void HandleStartCharacterAnimation(BTSCharacter btsCharacter)
    // Offset: 0x10083E4
    void HandleStartCharacterAnimation(GlobalNamespace::BTSCharacter* btsCharacter);
    // private System.Void HandleGamePauseDidPause()
    // Offset: 0x100852C
    void HandleGamePauseDidPause();
    // private System.Void HandleGamePauseWillResume()
    // Offset: 0x1008578
    void HandleGamePauseWillResume();
    // private System.Void HandleGamePauseDidResume()
    // Offset: 0x10085CC
    void HandleGamePauseDidResume();
    // private System.Void HandleLevelEndActionsLevelFailed()
    // Offset: 0x10085F0
    void HandleLevelEndActionsLevelFailed();
    // private System.Collections.IEnumerator TimelineStoppedDelayed()
    // Offset: 0x10084BC
    System::Collections::IEnumerator* TimelineStoppedDelayed();
    // public System.Void .ctor()
    // Offset: 0x1008640
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterSpawnController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterSpawnController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterSpawnController*, creationType>()));
    }
  }; // BTSCharacterSpawnController
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacterSpawnController), 80 + sizeof(UnityEngine::Coroutine*)> __GlobalNamespace_BTSCharacterSpawnControllerSizeCheck;
  static_assert(sizeof(BTSCharacterSpawnController) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterSpawnController*, "", "BTSCharacterSpawnController");
