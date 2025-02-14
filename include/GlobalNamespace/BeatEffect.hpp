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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: IBeatEffectDidFinishEvent
  class IBeatEffectDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeatEffect
  class BeatEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatEffect::Pool
    class Pool;
    // private UnityEngine.SpriteRenderer _spriteRenderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::SpriteRenderer* spriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.Transform _spriteTransform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* spriteTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private TubeBloomPrePassLight _tubeBloomPrePassLight
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // [SpaceAttribute] Offset: 0xE1A030
    // private UnityEngine.AnimationCurve _lightIntensityCurve
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* lightIntensityCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _spriteXScaleCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* spriteXScaleCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _spriteYScaleCurve
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::AnimationCurve* spriteYScaleCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.AnimationCurve _transparencyCurve
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* transparencyCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private readonly LazyCopyHashSet`1<IBeatEffectDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>*) == 0x8);
    // private System.Single _animationDuration
    // Size: 0x4
    // Offset: 0x58
    float animationDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _elapsedTime
    // Size: 0x4
    // Offset: 0x5C
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: BeatEffect
    BeatEffect(UnityEngine::SpriteRenderer* spriteRenderer_ = {}, UnityEngine::Transform* spriteTransform_ = {}, GlobalNamespace::TubeBloomPrePassLight* tubeBloomPrePassLight_ = {}, UnityEngine::AnimationCurve* lightIntensityCurve_ = {}, UnityEngine::AnimationCurve* spriteXScaleCurve_ = {}, UnityEngine::AnimationCurve* spriteYScaleCurve_ = {}, UnityEngine::AnimationCurve* transparencyCurve_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* didFinishEvent_ = {}, float animationDuration_ = {}, float elapsedTime_ = {}, UnityEngine::Color color_ = {}) noexcept : spriteRenderer{spriteRenderer_}, spriteTransform{spriteTransform_}, tubeBloomPrePassLight{tubeBloomPrePassLight_}, lightIntensityCurve{lightIntensityCurve_}, spriteXScaleCurve{spriteXScaleCurve_}, spriteYScaleCurve{spriteYScaleCurve_}, transparencyCurve{transparencyCurve_}, didFinishEvent{didFinishEvent_}, animationDuration{animationDuration_}, elapsedTime{elapsedTime_}, color{color_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public ILazyCopyHashSet`1<IBeatEffectDidFinishEvent> get_didFinishEvent()
    // Offset: 0x11A0E2C
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::IBeatEffectDidFinishEvent*>* get_didFinishEvent();
    // public System.Void Init(UnityEngine.Color color, System.Single animationDuration, UnityEngine.Quaternion rotation)
    // Offset: 0x11A0E34
    void Init(UnityEngine::Color color, float animationDuration, UnityEngine::Quaternion rotation);
    // public System.Void ManualUpdate(System.Single deltaTime)
    // Offset: 0x11A0F2C
    void ManualUpdate(float deltaTime);
    // public System.Void .ctor()
    // Offset: 0x11A1204
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatEffect*, creationType>()));
    }
  }; // BeatEffect
  #pragma pack(pop)
  static check_size<sizeof(BeatEffect), 96 + sizeof(UnityEngine::Color)> __GlobalNamespace_BeatEffectSizeCheck;
  static_assert(sizeof(BeatEffect) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatEffect*, "", "BeatEffect");
