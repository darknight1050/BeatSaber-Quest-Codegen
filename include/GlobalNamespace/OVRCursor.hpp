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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: OVRCursor
  // [] Offset: FFFFFFFF
  class OVRCursor : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: OVRCursor
    OVRCursor() noexcept {}
    // public System.Void SetCursorRay(UnityEngine.Transform ray)
    // Offset: 0xFFFFFFFF
    void SetCursorRay(UnityEngine::Transform* ray);
    // public System.Void SetCursorStartDest(UnityEngine.Vector3 start, UnityEngine.Vector3 dest, UnityEngine.Vector3 normal)
    // Offset: 0xFFFFFFFF
    void SetCursorStartDest(UnityEngine::Vector3 start, UnityEngine::Vector3 dest, UnityEngine::Vector3 normal);
    // protected System.Void .ctor()
    // Offset: 0x106E5AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCursor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRCursor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCursor*, creationType>()));
    }
  }; // OVRCursor
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRCursor*, "", "OVRCursor");
#pragma pack(pop)
