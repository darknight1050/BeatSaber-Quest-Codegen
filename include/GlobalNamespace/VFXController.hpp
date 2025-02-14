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
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
  // Forward declaring type: Animation
  class Animation;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: VFXController
  class VFXController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VFXController::$MainCoroutine$d__9
    class $MainCoroutine$d__9;
    // [NullAllowed] Offset: 0xDE39FC
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::ParticleSystem*>* particleSystems;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem*>*) == 0x8);
    // [NullAllowed] Offset: 0xDE3A34
    // private UnityEngine.Animation _animation
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Animation* animation;
    // Field size check
    static_assert(sizeof(UnityEngine::Animation*) == 0x8);
    // private System.Boolean _deactivateAfterAnimationDuration
    // Size: 0x1
    // Offset: 0x28
    bool deactivateAfterAnimationDuration;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: VFXController
    VFXController(::Array<UnityEngine::ParticleSystem*>* particleSystems_ = {}, UnityEngine::Animation* animation_ = {}, bool deactivateAfterAnimationDuration_ = {}) noexcept : particleSystems{particleSystems_}, animation{animation_}, deactivateAfterAnimationDuration{deactivateAfterAnimationDuration_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Animation get_animation()
    // Offset: 0x2354040
    UnityEngine::Animation* get_animation();
    // public UnityEngine.ParticleSystem[] get_particleSystems()
    // Offset: 0x2354048
    ::Array<UnityEngine::ParticleSystem*>* get_particleSystems();
    // protected System.Void Awake()
    // Offset: 0x2354050
    void Awake();
    // public System.Void Play()
    // Offset: 0x2354078
    void Play();
    // private System.Collections.IEnumerator MainCoroutine(System.Boolean deactivateAfterDuration, System.Single duration)
    // Offset: 0x23541A8
    System::Collections::IEnumerator* MainCoroutine(bool deactivateAfterDuration, float duration);
    // public System.Void .ctor()
    // Offset: 0x2354268
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VFXController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXController*, creationType>()));
    }
  }; // VFXController
  #pragma pack(pop)
  static check_size<sizeof(VFXController), 40 + sizeof(bool)> __GlobalNamespace_VFXControllerSizeCheck;
  static_assert(sizeof(VFXController) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VFXController*, "", "VFXController");
