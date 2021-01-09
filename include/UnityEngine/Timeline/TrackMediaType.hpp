// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Timeline.TimelineAsset/MediaType
#include "UnityEngine/Timeline/TimelineAsset_MediaType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x14
  // Autogenerated type: UnityEngine.Timeline.TrackMediaType
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D8D150
  // [ObsoleteAttribute] Offset: D8D150
  class TrackMediaType : public System::Attribute {
    public:
    // public readonly UnityEngine.Timeline.TimelineAsset/MediaType m_MediaType
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::Timeline::TimelineAsset::MediaType m_MediaType;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineAsset::MediaType) == 0x4);
    // Creating value type constructor for type: TrackMediaType
    TrackMediaType(UnityEngine::Timeline::TimelineAsset::MediaType m_MediaType_ = {}) noexcept : m_MediaType{m_MediaType_} {}
    // Creating conversion operator: operator UnityEngine::Timeline::TimelineAsset::MediaType
    constexpr operator UnityEngine::Timeline::TimelineAsset::MediaType() const noexcept {
      return m_MediaType;
    }
    // public System.Void .ctor(UnityEngine.Timeline.TimelineAsset/MediaType mt)
    // Offset: 0x1972A54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackMediaType* New_ctor(UnityEngine::Timeline::TimelineAsset::MediaType mt) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TrackMediaType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackMediaType*, creationType>(mt)));
    }
  }; // UnityEngine.Timeline.TrackMediaType
  static check_size<sizeof(TrackMediaType), 16 + sizeof(UnityEngine::Timeline::TimelineAsset::MediaType)> __UnityEngine_Timeline_TrackMediaTypeSizeCheck;
  static_assert(sizeof(TrackMediaType) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackMediaType*, "UnityEngine.Timeline", "TrackMediaType");
#pragma pack(pop)
