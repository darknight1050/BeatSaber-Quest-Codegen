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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: DisableGCWhileEnabled
  class DisableGCWhileEnabled : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: DisableGCWhileEnabled
    DisableGCWhileEnabled() noexcept {}
    // protected System.Void OnEnable()
    // Offset: 0x1225D24
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1225D30
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x1225D3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableGCWhileEnabled* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DisableGCWhileEnabled::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableGCWhileEnabled*, creationType>()));
    }
  }; // DisableGCWhileEnabled
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DisableGCWhileEnabled*, "", "DisableGCWhileEnabled");
