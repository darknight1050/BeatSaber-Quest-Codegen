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
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  // Autogenerated type: MultiplayerLocalInactivePlayerIntroAnimator
  // [] Offset: FFFFFFFF
  class MultiplayerLocalInactivePlayerIntroAnimator : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSO _activeLightsColor
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSO* activeLightsColor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSO*) == 0x8);
    // [SpaceAttribute] Offset: 0xDC95C0
    // private LightsAnimator[] _lightsAnimators
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::LightsAnimator*>*) == 0x8);
    // Creating value type constructor for type: MultiplayerLocalInactivePlayerIntroAnimator
    MultiplayerLocalInactivePlayerIntroAnimator(GlobalNamespace::ColorSO* activeLightsColor_ = {}, ::Array<GlobalNamespace::LightsAnimator*>* lightsAnimators_ = {}) noexcept : activeLightsColor{activeLightsColor_}, lightsAnimators{lightsAnimators_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Animate(System.Single animationDurationMultiplier, System.Int32 order)
    // Offset: 0xF726E8
    void Animate(float animationDurationMultiplier, int order);
    // public System.Void .ctor()
    // Offset: 0xF72788
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalInactivePlayerIntroAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalInactivePlayerIntroAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalInactivePlayerIntroAnimator*, creationType>()));
    }
  }; // MultiplayerLocalInactivePlayerIntroAnimator
  static check_size<sizeof(MultiplayerLocalInactivePlayerIntroAnimator), 32 + sizeof(::Array<GlobalNamespace::LightsAnimator*>*)> __GlobalNamespace_MultiplayerLocalInactivePlayerIntroAnimatorSizeCheck;
  static_assert(sizeof(MultiplayerLocalInactivePlayerIntroAnimator) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalInactivePlayerIntroAnimator*, "", "MultiplayerLocalInactivePlayerIntroAnimator");
#pragma pack(pop)
