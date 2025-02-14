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
  // Forward declaring type: VRController
  class VRController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerVRControllersManager
  class PlayerVRControllersManager : public UnityEngine::MonoBehaviour {
    public:
    // private VRController _leftHandVRController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::VRController* leftHandVRController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // private VRController _rightHandVRController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::VRController* rightHandVRController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRController*) == 0x8);
    // Creating value type constructor for type: PlayerVRControllersManager
    PlayerVRControllersManager(GlobalNamespace::VRController* leftHandVRController_ = {}, GlobalNamespace::VRController* rightHandVRController_ = {}) noexcept : leftHandVRController{leftHandVRController_}, rightHandVRController{rightHandVRController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void DisableAllVRControllers()
    // Offset: 0x10A1D68
    void DisableAllVRControllers();
    // public System.Void .ctor()
    // Offset: 0x10A1DAC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerVRControllersManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerVRControllersManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerVRControllersManager*, creationType>()));
    }
  }; // PlayerVRControllersManager
  #pragma pack(pop)
  static check_size<sizeof(PlayerVRControllersManager), 32 + sizeof(GlobalNamespace::VRController*)> __GlobalNamespace_PlayerVRControllersManagerSizeCheck;
  static_assert(sizeof(PlayerVRControllersManager) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerVRControllersManager*, "", "PlayerVRControllersManager");
