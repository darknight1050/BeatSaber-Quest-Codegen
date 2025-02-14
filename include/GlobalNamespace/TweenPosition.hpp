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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: TweenPosition
  class TweenPosition : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::TweenPosition::$AnimateToNewPosCoroutine$d__11
    class $AnimateToNewPosCoroutine$d__11;
    // public System.Boolean _unscaledTime
    // Size: 0x1
    // Offset: 0x18
    bool unscaledTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean _localPosition
    // Size: 0x1
    // Offset: 0x19
    bool localPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: localPosition and: duration
    char __padding1[0x2] = {};
    // public System.Single _duration
    // Size: 0x4
    // Offset: 0x1C
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.AnimationCurve _animationCurve
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::AnimationCurve* animationCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Vector3 _targetPos
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Vector3 targetPos;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: TweenPosition
    TweenPosition(bool unscaledTime_ = {}, bool localPosition_ = {}, float duration_ = {}, UnityEngine::AnimationCurve* animationCurve_ = {}, UnityEngine::Transform* transform_ = {}, UnityEngine::Vector3 targetPos_ = {}) noexcept : unscaledTime{unscaledTime_}, localPosition{localPosition_}, duration{duration_}, animationCurve{animationCurve_}, transform{transform_}, targetPos{targetPos_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_TargetPos(UnityEngine.Vector3 value)
    // Offset: 0x2353048
    void set_TargetPos(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_TargetPos()
    // Offset: 0x23531D8
    UnityEngine::Vector3 get_TargetPos();
    // protected System.Void Awake()
    // Offset: 0x23531E4
    void Awake();
    // private System.Void AnimateToNewPos(UnityEngine.Vector3 pos)
    // Offset: 0x2353128
    void AnimateToNewPos(UnityEngine::Vector3 pos);
    // private System.Collections.IEnumerator AnimateToNewPosCoroutine(UnityEngine.Vector3 pos)
    // Offset: 0x235320C
    System::Collections::IEnumerator* AnimateToNewPosCoroutine(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0x23532A8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TweenPosition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TweenPosition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TweenPosition*, creationType>()));
    }
  }; // TweenPosition
  #pragma pack(pop)
  static check_size<sizeof(TweenPosition), 48 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_TweenPositionSizeCheck;
  static_assert(sizeof(TweenPosition) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TweenPosition*, "", "TweenPosition");
