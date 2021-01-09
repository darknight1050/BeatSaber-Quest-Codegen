// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Tweening.Tween`1
#include "Tweening/Tween_1.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: Tweening
namespace Tweening {
  // WARNING Size may be invalid!
  // Autogenerated type: Tweening.Vector2Tween
  // [] Offset: FFFFFFFF
  class Vector2Tween : public Tweening::Tween_1<UnityEngine::Vector2> {
    public:
    // Creating value type constructor for type: Vector2Tween
    Vector2Tween() noexcept {}
    // public System.Void .ctor(UnityEngine.Vector2 fromValue, UnityEngine.Vector2 toValue, System.Action`1<UnityEngine.Vector2> onUpdate, System.Single duration, Tweening.EaseType easeType, System.Single delay)
    // Offset: 0xFF505C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Tween* New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2>* onUpdate, float duration, Tweening::EaseType easeType, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector2Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Tween*, creationType>(fromValue, toValue, onUpdate, duration, easeType, delay)));
    }
    // public System.Void .ctor(UnityEngine.Vector2 fromValue, UnityEngine.Vector2 toValue, System.Action`1<UnityEngine.Vector2> onUpdate, System.Single duration, UnityEngine.AnimationCurve animationCurve, System.Single delay)
    // Offset: 0xFF510C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2Tween* New_ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2>* onUpdate, float duration, UnityEngine::AnimationCurve* animationCurve, float delay) {
      static auto ___internal__logger = ::Logger::get().WithContext("Tweening::Vector2Tween::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2Tween*, creationType>(fromValue, toValue, onUpdate, duration, animationCurve, delay)));
    }
    // public UnityEngine.Vector2 GetValue(System.Single t)
    // Offset: 0xFF51BC
    UnityEngine::Vector2 GetValue(float t);
  }; // Tweening.Vector2Tween
}
DEFINE_IL2CPP_ARG_TYPE(Tweening::Vector2Tween*, "Tweening", "Vector2Tween");
