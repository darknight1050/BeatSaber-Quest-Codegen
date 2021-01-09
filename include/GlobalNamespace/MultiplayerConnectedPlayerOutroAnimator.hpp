// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IMultiplayerConnectedPlayerOutroAnimator
#include "GlobalNamespace/IMultiplayerConnectedPlayerOutroAnimator.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: AvatarVisualController
  class AvatarVisualController;
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
  // Forward declaring type: MultiplayerBigAvatarAnimator
  class MultiplayerBigAvatarAnimator;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  // Autogenerated type: MultiplayerConnectedPlayerOutroAnimator
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerOutroAnimator : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator*/ {
    public:
    // private ColorSO _offLightsColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* offLightsColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC8DA0
    // private AvatarVisualController _avatarVisualsController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AvatarVisualController* avatarVisualsController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarVisualController*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC8DD8
    // private LightsAnimator[] _lightsAnimators
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LightsAnimator*>*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC8E10
    // private MultiplayerBigAvatarAnimator _avatarAnimator
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MultiplayerBigAvatarAnimator* avatarAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBigAvatarAnimator*) == 0x8);
    // [InjectAttribute] Offset: 0xDC8E48
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x38
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Color> _avatarColorTween
    // Size: 0x8
    // Offset: 0x40
    Tweening::Tween_1<UnityEngine::Color>* avatarColorTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Color>*) == 0x8);
    // Creating value type constructor for type: MultiplayerConnectedPlayerOutroAnimator
    MultiplayerConnectedPlayerOutroAnimator(GlobalNamespace::ColorSO* offLightsColor_ = {}, GlobalNamespace::AvatarVisualController* avatarVisualsController_ = {}, ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators_ = {}, GlobalNamespace::MultiplayerBigAvatarAnimator* avatarAnimator_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<UnityEngine::Color>* avatarColorTween_ = {}) noexcept : offLightsColor{offLightsColor_}, avatarVisualsController{avatarVisualsController_}, lightsAnimators{lightsAnimators_}, avatarAnimator{avatarAnimator_}, tweeningManager{tweeningManager_}, avatarColorTween{avatarColorTween_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator
    operator GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerConnectedPlayerOutroAnimator*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0xFACDC4
    void OnDestroy();
    // private System.Void <Animate>b__7_0(UnityEngine.Color color)
    // Offset: 0xFAD040
    void $Animate$b__7_0(UnityEngine::Color color);
    // public System.Void Animate(System.Single duration)
    // Offset: 0xFACE5C
    // Implemented from: IMultiplayerConnectedPlayerOutroAnimator
    // Base method: System.Void IMultiplayerConnectedPlayerOutroAnimator::Animate(System.Single duration)
    void Animate(float duration);
    // public System.Void .ctor()
    // Offset: 0xFAD038
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerOutroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerOutroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerOutroAnimator*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerOutroAnimator
  static check_size<sizeof(MultiplayerConnectedPlayerOutroAnimator), 64 + sizeof(Tweening::Tween_1<UnityEngine::Color>*)> __GlobalNamespace_MultiplayerConnectedPlayerOutroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerOutroAnimator) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerOutroAnimator*, "", "MultiplayerConnectedPlayerOutroAnimator");
#pragma pack(pop)
