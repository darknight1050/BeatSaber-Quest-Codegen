// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.RuntimeElement
#include "UnityEngine/Timeline/RuntimeElement.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.InfiniteRuntimeClip
  class InfiniteRuntimeClip : public UnityEngine::Timeline::RuntimeElement {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private UnityEngine.Playables.Playable m_Playable
    // Size: 0xC
    // Offset: 0x18
    UnityEngine::Playables::Playable m_Playable;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::Playable) == 0xC);
    // Creating value type constructor for type: InfiniteRuntimeClip
    InfiniteRuntimeClip(UnityEngine::Playables::Playable m_Playable_ = {}) noexcept : m_Playable{m_Playable_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get static field: static private readonly System.Int64 kIntervalEnd
    static int64_t _get_kIntervalEnd();
    // Set static field: static private readonly System.Int64 kIntervalEnd
    static void _set_kIntervalEnd(int64_t value);
    // public System.Void .ctor(UnityEngine.Playables.Playable playable)
    // Offset: 0x17C19B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InfiniteRuntimeClip* New_ctor(UnityEngine::Playables::Playable playable) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::InfiniteRuntimeClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InfiniteRuntimeClip*, creationType>(playable)));
    }
    // static private System.Void .cctor()
    // Offset: 0x17C9E00
    static void _cctor();
    // public override System.Int64 get_intervalStart()
    // Offset: 0x17C9C40
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Int64 RuntimeElement::get_intervalStart()
    int64_t get_intervalStart();
    // public override System.Int64 get_intervalEnd()
    // Offset: 0x17C9C48
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Int64 RuntimeElement::get_intervalEnd()
    int64_t get_intervalEnd();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x17C9CB0
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x17C9D2C
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData);
    // public override System.Void DisableAt(System.Double localTime, System.Double rootDuration, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x17C9D8C
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::DisableAt(System.Double localTime, System.Double rootDuration, UnityEngine.Playables.FrameData frameData)
    void DisableAt(double localTime, double rootDuration, UnityEngine::Playables::FrameData frameData);
  }; // UnityEngine.Timeline.InfiniteRuntimeClip
  #pragma pack(pop)
  static check_size<sizeof(InfiniteRuntimeClip), 24 + sizeof(UnityEngine::Playables::Playable)> __UnityEngine_Timeline_InfiniteRuntimeClipSizeCheck;
  static_assert(sizeof(InfiniteRuntimeClip) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::InfiniteRuntimeClip*, "UnityEngine.Timeline", "InfiniteRuntimeClip");
