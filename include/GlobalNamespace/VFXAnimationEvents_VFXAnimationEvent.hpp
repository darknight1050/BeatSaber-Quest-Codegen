// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VFXAnimationEvents
#include "GlobalNamespace/VFXAnimationEvents.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: VFXAnimationEvents/VFXAnimationEvent
  // [] Offset: FFFFFFFF
  class VFXAnimationEvents::VFXAnimationEvent : public ::Il2CppObject {
    public:
    // private System.String _name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::ParticleSystem*>* particleSystems;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem*>*) == 0x8);
    // Creating value type constructor for type: VFXAnimationEvent
    VFXAnimationEvent(::Il2CppString* name_ = {}, ::Array<UnityEngine::ParticleSystem*>* particleSystems_ = {}) noexcept : name{name_}, particleSystems{particleSystems_} {}
    // public System.String get_name()
    // Offset: 0x19D0020
    ::Il2CppString* get_name();
    // public UnityEngine.ParticleSystem[] get_particleSystems()
    // Offset: 0x19D0028
    ::Array<UnityEngine::ParticleSystem*>* get_particleSystems();
    // public System.Void .ctor()
    // Offset: 0x19D0030
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VFXAnimationEvents::VFXAnimationEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VFXAnimationEvents::VFXAnimationEvent*, creationType>()));
    }
  }; // VFXAnimationEvents/VFXAnimationEvent
  static check_size<sizeof(VFXAnimationEvents::VFXAnimationEvent), 24 + sizeof(::Array<UnityEngine::ParticleSystem*>*)> __GlobalNamespace_VFXAnimationEvents_VFXAnimationEventSizeCheck;
  static_assert(sizeof(VFXAnimationEvents::VFXAnimationEvent) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VFXAnimationEvents::VFXAnimationEvent*, "", "VFXAnimationEvents/VFXAnimationEvent");
#pragma pack(pop)
