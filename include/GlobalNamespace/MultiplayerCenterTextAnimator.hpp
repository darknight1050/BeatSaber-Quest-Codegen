// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshPro
  class TextMeshPro;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
  // Forward declaring type: Tween`1<T>
  template<typename T>
  class Tween_1;
  // Forward declaring type: EaseType
  struct EaseType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerCenterTextAnimator
  class MultiplayerCenterTextAnimator : public UnityEngine::MonoBehaviour {
    public:
    // [SpaceAttribute] Offset: 0xE1DC88
    // private TMPro.TextMeshPro _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshPro* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshPro*) == 0x8);
    // private UnityEngine.Transform _scalingTarget
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* scalingTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [InjectAttribute] Offset: 0xE1DCD0
    // private readonly Tweening.TweeningManager _tweeningManager
    // Size: 0x8
    // Offset: 0x28
    Tweening::TweeningManager* tweeningManager;
    // Field size check
    static_assert(sizeof(Tweening::TweeningManager*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fadeInTween
    // Size: 0x8
    // Offset: 0x30
    Tweening::Tween_1<float>* fadeInTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fadeOutTween
    // Size: 0x8
    // Offset: 0x38
    Tweening::Tween_1<float>* fadeOutTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<System.Single> _fontSizeTween
    // Size: 0x8
    // Offset: 0x40
    Tweening::Tween_1<float>* fontSizeTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<float>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Color> _colorTween
    // Size: 0x8
    // Offset: 0x48
    Tweening::Tween_1<UnityEngine::Color>* colorTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Color>*) == 0x8);
    // private Tweening.Tween`1<UnityEngine.Vector3> _offsetTween
    // Size: 0x8
    // Offset: 0x50
    Tweening::Tween_1<UnityEngine::Vector3>* offsetTween;
    // Field size check
    static_assert(sizeof(Tweening::Tween_1<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: MultiplayerCenterTextAnimator
    MultiplayerCenterTextAnimator(TMPro::TextMeshPro* text_ = {}, UnityEngine::Transform* scalingTarget_ = {}, Tweening::TweeningManager* tweeningManager_ = {}, Tweening::Tween_1<float>* fadeInTween_ = {}, Tweening::Tween_1<float>* fadeOutTween_ = {}, Tweening::Tween_1<float>* fontSizeTween_ = {}, Tweening::Tween_1<UnityEngine::Color>* colorTween_ = {}, Tweening::Tween_1<UnityEngine::Vector3>* offsetTween_ = {}) noexcept : text{text_}, scalingTarget{scalingTarget_}, tweeningManager{tweeningManager_}, fadeInTween{fadeInTween_}, fadeOutTween{fadeOutTween_}, fontSizeTween{fontSizeTween_}, colorTween{colorTween_}, offsetTween{offsetTween_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1144190
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1144520
    void OnDestroy();
    // public System.Void AnimateTextColor(UnityEngine.Color color, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x11445B8
    void AnimateTextColor(UnityEngine::Color color, float duration, Tweening::EaseType easeType);
    // public System.Void AnimateFontSize(System.Single fontSize, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x1144668
    void AnimateFontSize(float fontSize, float duration, Tweening::EaseType easeType);
    // public System.Void AnimatePositionOffsetSize(UnityEngine.Vector3 offset, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x11446CC
    void AnimatePositionOffsetSize(UnityEngine::Vector3 offset, float duration, Tweening::EaseType easeType);
    // public System.Void AnimateEnabled(System.Boolean isEnabled, System.Single duration, Tweening.EaseType easeType)
    // Offset: 0x1144770
    void AnimateEnabled(bool isEnabled, float duration, Tweening::EaseType easeType);
    // public System.Void SetText(System.String text)
    // Offset: 0x11448EC
    void SetText(::Il2CppString* text);
    // private System.Void <Awake>b__8_0(System.Single val)
    // Offset: 0x1144910
    void $Awake$b__8_0(float val);
    // private System.Void <Awake>b__8_1(System.Single val)
    // Offset: 0x11449A4
    void $Awake$b__8_1(float val);
    // private System.Void <Awake>b__8_5()
    // Offset: 0x1144A38
    void $Awake$b__8_5();
    // private System.Void <Awake>b__8_2(System.Single val)
    // Offset: 0x1144A68
    void $Awake$b__8_2(float val);
    // private System.Void <Awake>b__8_3(UnityEngine.Color val)
    // Offset: 0x1144A84
    void $Awake$b__8_3(UnityEngine::Color val);
    // private System.Void <Awake>b__8_4(UnityEngine.Vector3 val)
    // Offset: 0x1144AA8
    void $Awake$b__8_4(UnityEngine::Vector3 val);
    // public System.Void .ctor()
    // Offset: 0x1144908
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerCenterTextAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerCenterTextAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerCenterTextAnimator*, creationType>()));
    }
  }; // MultiplayerCenterTextAnimator
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerCenterTextAnimator), 80 + sizeof(Tweening::Tween_1<UnityEngine::Vector3>*)> __GlobalNamespace_MultiplayerCenterTextAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerCenterTextAnimator) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerCenterTextAnimator*, "", "MultiplayerCenterTextAnimator");
