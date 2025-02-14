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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacterMaterialSwitcher
  class BTSCharacterMaterialSwitcher;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BTSCharacter
  // [RequireComponent] Offset: E10B90
  // [RequireComponent] Offset: E10B90
  class BTSCharacter : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _characterName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* characterName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [SpaceAttribute] Offset: 0xE12C7C
    // private UnityEngine.Animator _animator
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animator* animator;
    // Field size check
    static_assert(sizeof(UnityEngine::Animator*) == 0x8);
    // private BTSCharacterMaterialSwitcher _btsCharacterMaterialSwitcher
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BTSCharacterMaterialSwitcher* btsCharacterMaterialSwitcher;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BTSCharacterMaterialSwitcher*) == 0x8);
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: BTSCharacter
    BTSCharacter(::Il2CppString* characterName_ = {}, UnityEngine::Animator* animator_ = {}, GlobalNamespace::BTSCharacterMaterialSwitcher* btsCharacterMaterialSwitcher_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, UnityEngine::Transform* headTransform_ = {}) noexcept : characterName{characterName_}, animator{animator_}, btsCharacterMaterialSwitcher{btsCharacterMaterialSwitcher_}, materialPropertyBlockController{materialPropertyBlockController_}, headTransform{headTransform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_characterName()
    // Offset: 0x1134AD0
    ::Il2CppString* get_characterName();
    // public MaterialPropertyBlockController get_materialPropertyBlockController()
    // Offset: 0x1134AD8
    GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();
    // public UnityEngine.Animator get_animator()
    // Offset: 0x1134AE0
    UnityEngine::Animator* get_animator();
    // public UnityEngine.Transform get_headTransform()
    // Offset: 0x1134AE8
    UnityEngine::Transform* get_headTransform();
    // public System.Void SetAlternativeAnimationAndMaterial(UnityEngine.AnimationClip animation, System.Boolean alternativeMaterialOn)
    // Offset: 0x1134AF0
    void SetAlternativeAnimationAndMaterial(UnityEngine::AnimationClip* animation, bool alternativeMaterialOn);
    // public System.Void .ctor()
    // Offset: 0x1134EBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BTSCharacter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BTSCharacter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BTSCharacter*, creationType>()));
    }
  }; // BTSCharacter
  #pragma pack(pop)
  static check_size<sizeof(BTSCharacter), 56 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_BTSCharacterSizeCheck;
  static_assert(sizeof(BTSCharacter) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacter*, "", "BTSCharacter");
