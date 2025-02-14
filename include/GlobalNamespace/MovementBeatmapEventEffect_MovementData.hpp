// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MovementBeatmapEventEffect
#include "GlobalNamespace/MovementBeatmapEventEffect.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MovementBeatmapEventEffect/MovementData
  class MovementBeatmapEventEffect::MovementData : public ::Il2CppObject {
    public:
    // private UnityEngine.Vector3 _localPositionOffset
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 localPositionOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // Creating value type constructor for type: MovementData
    MovementData(UnityEngine::Vector3 localPositionOffset_ = {}) noexcept : localPositionOffset{localPositionOffset_} {}
    // Creating conversion operator: operator UnityEngine::Vector3
    constexpr operator UnityEngine::Vector3() const noexcept {
      return localPositionOffset;
    }
    // public UnityEngine.Vector3 get_localPositionOffset()
    // Offset: 0x113F3FC
    UnityEngine::Vector3 get_localPositionOffset();
    // public System.Void .ctor()
    // Offset: 0x113F408
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovementBeatmapEventEffect::MovementData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MovementBeatmapEventEffect::MovementData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovementBeatmapEventEffect::MovementData*, creationType>()));
    }
  }; // MovementBeatmapEventEffect/MovementData
  #pragma pack(pop)
  static check_size<sizeof(MovementBeatmapEventEffect::MovementData), 16 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_MovementBeatmapEventEffect_MovementDataSizeCheck;
  static_assert(sizeof(MovementBeatmapEventEffect::MovementData) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MovementBeatmapEventEffect::MovementData*, "", "MovementBeatmapEventEffect/MovementData");
