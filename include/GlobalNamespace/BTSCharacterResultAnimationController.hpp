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
  // Forward declaring type: MaterialPropertyBlockColorSetter
  class MaterialPropertyBlockColorSetter;
  // Forward declaring type: MaterialPropertyBlockFloatAnimator
  class MaterialPropertyBlockFloatAnimator;
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: BTSCharacterResultAnimationController
  // [] Offset: FFFFFFFF
  class BTSCharacterResultAnimationController : public UnityEngine::MonoBehaviour {
    public:
    // private MaterialPropertyBlockColorSetter _rimLightColorSetter
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MaterialPropertyBlockColorSetter* rimLightColorSetter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockColorSetter*) == 0x8);
    // private MaterialPropertyBlockFloatAnimator _rimLightIntensityAnimator
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightIntensityAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockFloatAnimator*) == 0x8);
    // private MaterialPropertyBlockFloatAnimator _rimLightEdgeStartAnimator
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightEdgeStartAnimator;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockFloatAnimator*) == 0x8);
    // [SpaceAttribute] Offset: 0xDBFFEC
    // private UnityEngine.GameObject _collidersGameObject
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* collidersGameObject;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // Creating value type constructor for type: BTSCharacterResultAnimationController
    BTSCharacterResultAnimationController(GlobalNamespace::MaterialPropertyBlockColorSetter* rimLightColorSetter_ = {}, GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightIntensityAnimator_ = {}, GlobalNamespace::MaterialPropertyBlockFloatAnimator* rimLightEdgeStartAnimator_ = {}, UnityEngine::GameObject* collidersGameObject_ = {}) noexcept : rimLightColorSetter{rimLightColorSetter_}, rimLightIntensityAnimator{rimLightIntensityAnimator_}, rimLightEdgeStartAnimator{rimLightEdgeStartAnimator_}, collidersGameObject{collidersGameObject_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetCharacter(BTSCharacter btsCharacter)
    // Offset: 0x1A4A190
    void SetCharacter(GlobalNamespace::BTSCharacter* btsCharacter);
    // public System.Void StopAnimation()
    // Offset: 0x1A4A204
    void StopAnimation();
    // public System.Void .ctor()
    // Offset: 0x1A4A224
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacterResultAnimationController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacterResultAnimationController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacterResultAnimationController*, creationType>()));
    }
  }; // BTSCharacterResultAnimationController
  static check_size<sizeof(BTSCharacterResultAnimationController), 48 + sizeof(UnityEngine::GameObject*)> __GlobalNamespace_BTSCharacterResultAnimationControllerSizeCheck;
  static_assert(sizeof(BTSCharacterResultAnimationController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterResultAnimationController*, "", "BTSCharacterResultAnimationController");
#pragma pack(pop)
