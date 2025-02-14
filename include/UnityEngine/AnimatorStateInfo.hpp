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
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AnimatorStateInfo
  // [NativeHeaderAttribute] Offset: DA8CB8
  // [RequiredByNativeCodeAttribute] Offset: DA8CB8
  struct AnimatorStateInfo/*, public System::ValueType*/ {
    public:
    // private System.Int32 m_Name
    // Size: 0x4
    // Offset: 0x0
    int m_Name;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Path
    // Size: 0x4
    // Offset: 0x4
    int m_Path;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_FullPath
    // Size: 0x4
    // Offset: 0x8
    int m_FullPath;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_NormalizedTime
    // Size: 0x4
    // Offset: 0xC
    float m_NormalizedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Length
    // Size: 0x4
    // Offset: 0x10
    float m_Length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_Speed
    // Size: 0x4
    // Offset: 0x14
    float m_Speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_SpeedMultiplier
    // Size: 0x4
    // Offset: 0x18
    float m_SpeedMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_Tag
    // Size: 0x4
    // Offset: 0x1C
    int m_Tag;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_Loop
    // Size: 0x4
    // Offset: 0x20
    int m_Loop;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AnimatorStateInfo
    constexpr AnimatorStateInfo(int m_Name_ = {}, int m_Path_ = {}, int m_FullPath_ = {}, float m_NormalizedTime_ = {}, float m_Length_ = {}, float m_Speed_ = {}, float m_SpeedMultiplier_ = {}, int m_Tag_ = {}, int m_Loop_ = {}) noexcept : m_Name{m_Name_}, m_Path{m_Path_}, m_FullPath{m_FullPath_}, m_NormalizedTime{m_NormalizedTime_}, m_Length{m_Length_}, m_Speed{m_Speed_}, m_SpeedMultiplier{m_SpeedMultiplier_}, m_Tag{m_Tag_}, m_Loop{m_Loop_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Single get_normalizedTime()
    // Offset: 0xF20ACC
    float get_normalizedTime();
  }; // UnityEngine.AnimatorStateInfo
  #pragma pack(pop)
  static check_size<sizeof(AnimatorStateInfo), 32 + sizeof(int)> __UnityEngine_AnimatorStateInfoSizeCheck;
  static_assert(sizeof(AnimatorStateInfo) == 0x24);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorStateInfo, "UnityEngine", "AnimatorStateInfo");
