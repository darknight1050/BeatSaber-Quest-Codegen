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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: SteamVR_CameraFlip
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: D88A00
  class SteamVR_CameraFlip : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: SteamVR_CameraFlip
    SteamVR_CameraFlip() noexcept {}
    // private System.Void Awake()
    // Offset: 0x1103404
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x11034A0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_CameraFlip* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_CameraFlip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_CameraFlip*, creationType>()));
    }
  }; // SteamVR_CameraFlip
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_CameraFlip*, "", "SteamVR_CameraFlip");
#pragma pack(pop)
