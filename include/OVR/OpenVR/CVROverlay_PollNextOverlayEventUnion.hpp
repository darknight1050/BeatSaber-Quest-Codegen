// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.CVROverlay
#include "OVR/OpenVR/CVROverlay.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // WARNING Size may be invalid!
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.CVROverlay/PollNextOverlayEventUnion
  // [] Offset: FFFFFFFF
  struct CVROverlay::PollNextOverlayEventUnion/*, public System::ValueType*/ {
    public:
    // public OVR.OpenVR.IVROverlay/_PollNextOverlayEvent pPollNextOverlayEvent
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::IVROverlay::_PollNextOverlayEvent*) == 0x8);
    // public OVR.OpenVR.CVROverlay/_PollNextOverlayEventPacked pPollNextOverlayEventPacked
    // Size: 0x8
    // Offset: 0x0
    OVR::OpenVR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVROverlay::_PollNextOverlayEventPacked*) == 0x8);
    // Creating value type constructor for type: PollNextOverlayEventUnion
    constexpr PollNextOverlayEventUnion(OVR::OpenVR::IVROverlay::_PollNextOverlayEvent* pPollNextOverlayEvent_ = {}, OVR::OpenVR::CVROverlay::_PollNextOverlayEventPacked* pPollNextOverlayEventPacked_ = {}) noexcept : pPollNextOverlayEvent{pPollNextOverlayEvent_}, pPollNextOverlayEventPacked{pPollNextOverlayEventPacked_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.CVROverlay/PollNextOverlayEventUnion
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::CVROverlay::PollNextOverlayEventUnion, "OVR.OpenVR", "CVROverlay/PollNextOverlayEventUnion");
