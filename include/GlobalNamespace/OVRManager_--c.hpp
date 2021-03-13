// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRManager
#include "GlobalNamespace/OVRManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CE03A8
  class OVRManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly OVRManager/<>c <>9
    static GlobalNamespace::OVRManager::$$c* _get_$$9();
    // Set static field: static public readonly OVRManager/<>c <>9
    static void _set_$$9(GlobalNamespace::OVRManager::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Camera> <>9__245_0
    static System::Comparison_1<UnityEngine::Camera*>* _get_$$9__245_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Camera> <>9__245_0
    static void _set_$$9__245_0(System::Comparison_1<UnityEngine::Camera*>* value);
    // static private System.Void .cctor()
    // Offset: 0x13A789C
    static void _cctor();
    // System.Int32 <FindMainCamera>b__245_0(UnityEngine.Camera c0, UnityEngine.Camera c1)
    // Offset: 0x13A7908
    int $FindMainCamera$b__245_0(UnityEngine::Camera* c0, UnityEngine::Camera* c1);
    // public System.Void .ctor()
    // Offset: 0x13A7900
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRManager::$$c*, creationType>()));
    }
  }; // OVRManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager::$$c*, "", "OVRManager/<>c");
