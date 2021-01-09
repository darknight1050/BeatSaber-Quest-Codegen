// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Timeline.IgnoreOnPlayableTrackAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D8D248
  class IgnoreOnPlayableTrackAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: IgnoreOnPlayableTrackAttribute
    IgnoreOnPlayableTrackAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x141CEE4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IgnoreOnPlayableTrackAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IgnoreOnPlayableTrackAttribute*, creationType>()));
    }
  }; // UnityEngine.Timeline.IgnoreOnPlayableTrackAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IgnoreOnPlayableTrackAttribute*, "UnityEngine.Timeline", "IgnoreOnPlayableTrackAttribute");
#pragma pack(pop)
