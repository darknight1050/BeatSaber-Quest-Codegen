// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.Marker
#include "UnityEngine/Timeline/Marker.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: JumpDestinationMarker
  // [DisplayNameAttribute] Offset: DE317C
  class JumpDestinationMarker : public UnityEngine::Timeline::Marker {
    public:
    // Creating value type constructor for type: JumpDestinationMarker
    JumpDestinationMarker() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x122F560
    // Implemented from: UnityEngine.Timeline.Marker
    // Base method: System.Void Marker::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JumpDestinationMarker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::JumpDestinationMarker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JumpDestinationMarker*, creationType>()));
    }
  }; // JumpDestinationMarker
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::JumpDestinationMarker*, "", "JumpDestinationMarker");
