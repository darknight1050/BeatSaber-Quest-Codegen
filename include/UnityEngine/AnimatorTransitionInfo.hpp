// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimatorTransitionInfo
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CBD1C0
  // [NativeHeaderAttribute] Offset: CBD1C0
  struct AnimatorTransitionInfo/*, public System::ValueType*/ {
    public:
    // [NativeNameAttribute] Offset: 0xCBE258
    // private System.Int32 m_FullPath
    // Size: 0x4
    // Offset: 0x0
    int m_FullPath;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xCBE290
    // private System.Int32 m_UserName
    // Size: 0x4
    // Offset: 0x4
    int m_UserName;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xCBE2C8
    // private System.Int32 m_Name
    // Size: 0x4
    // Offset: 0x8
    int m_Name;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [NativeNameAttribute] Offset: 0xCBE300
    // private System.Boolean m_HasFixedDuration
    // Size: 0x1
    // Offset: 0xC
    bool m_HasFixedDuration;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_HasFixedDuration and: m_Duration
    char __padding3[0x3] = {};
    // [NativeNameAttribute] Offset: 0xCBE338
    // private System.Single m_Duration
    // Size: 0x4
    // Offset: 0x10
    float m_Duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCBE370
    // private System.Single m_NormalizedTime
    // Size: 0x4
    // Offset: 0x14
    float m_NormalizedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [NativeNameAttribute] Offset: 0xCBE3A8
    // private System.Boolean m_AnyState
    // Size: 0x1
    // Offset: 0x18
    bool m_AnyState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_AnyState and: m_TransitionType
    char __padding6[0x3] = {};
    // [NativeNameAttribute] Offset: 0xCBE3E0
    // private System.Int32 m_TransitionType
    // Size: 0x4
    // Offset: 0x1C
    int m_TransitionType;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AnimatorTransitionInfo
    constexpr AnimatorTransitionInfo(int m_FullPath_ = {}, int m_UserName_ = {}, int m_Name_ = {}, bool m_HasFixedDuration_ = {}, float m_Duration_ = {}, float m_NormalizedTime_ = {}, bool m_AnyState_ = {}, int m_TransitionType_ = {}) noexcept : m_FullPath{m_FullPath_}, m_UserName{m_UserName_}, m_Name{m_Name_}, m_HasFixedDuration{m_HasFixedDuration_}, m_Duration{m_Duration_}, m_NormalizedTime{m_NormalizedTime_}, m_AnyState{m_AnyState_}, m_TransitionType{m_TransitionType_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.AnimatorTransitionInfo
  #pragma pack(pop)
  static check_size<sizeof(AnimatorTransitionInfo), 28 + sizeof(int)> __UnityEngine_AnimatorTransitionInfoSizeCheck;
  static_assert(sizeof(AnimatorTransitionInfo) == 0x20);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorTransitionInfo, "UnityEngine", "AnimatorTransitionInfo");
