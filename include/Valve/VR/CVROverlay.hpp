// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: VROverlayFlags
  struct VROverlayFlags;
  // Forward declaring type: EColorSpace
  struct EColorSpace;
  // Forward declaring type: VRTextureBounds_t
  struct VRTextureBounds_t;
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
  // Forward declaring type: VROverlayTransformType
  struct VROverlayTransformType;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
  // Forward declaring type: HmdVector2_t
  struct HmdVector2_t;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: VROverlayInputMethod
  struct VROverlayInputMethod;
  // Forward declaring type: VROverlayIntersectionParams_t
  struct VROverlayIntersectionParams_t;
  // Forward declaring type: VROverlayIntersectionResults_t
  struct VROverlayIntersectionResults_t;
  // Forward declaring type: EOverlayDirection
  struct EOverlayDirection;
  // Forward declaring type: EDualAnalogWhich
  struct EDualAnalogWhich;
  // Forward declaring type: Texture_t
  struct Texture_t;
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: HmdRect2_t
  struct HmdRect2_t;
  // Forward declaring type: VROverlayIntersectionMaskPrimitive_t
  struct VROverlayIntersectionMaskPrimitive_t;
  // Forward declaring type: VRMessageOverlayResponse
  struct VRMessageOverlayResponse;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x2A0
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVROverlay
  class CVROverlay : public ::Il2CppObject {
    public:
    // Nested type: Valve::VR::CVROverlay::_PollNextOverlayEventPacked
    class _PollNextOverlayEventPacked;
    // Nested type: Valve::VR::CVROverlay::PollNextOverlayEventUnion
    struct PollNextOverlayEventUnion;
    // private Valve.VR.IVROverlay FnTable
    // Size: 0x290
    // Offset: 0x10
    Valve::VR::IVROverlay FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVROverlay) == 0x290);
    // Creating value type constructor for type: CVROverlay
    CVROverlay(Valve::VR::IVROverlay FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVROverlay
    constexpr operator Valve::VR::IVROverlay() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x16BD4F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVROverlay* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVROverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVROverlay*, creationType>(pInterface)));
    }
    // public Valve.VR.EVROverlayError FindOverlay(System.String pchOverlayKey, ref System.UInt64 pOverlayHandle)
    // Offset: 0x16BD5FC
    Valve::VR::EVROverlayError FindOverlay(::Il2CppString* pchOverlayKey, uint64_t& pOverlayHandle);
    // public Valve.VR.EVROverlayError CreateOverlay(System.String pchOverlayKey, System.String pchOverlayName, ref System.UInt64 pOverlayHandle)
    // Offset: 0x16BD61C
    Valve::VR::EVROverlayError CreateOverlay(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayName, uint64_t& pOverlayHandle);
    // public Valve.VR.EVROverlayError DestroyOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BD63C
    Valve::VR::EVROverlayError DestroyOverlay(uint64_t ulOverlayHandle);
    // public Valve.VR.EVROverlayError SetHighQualityOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BD658
    Valve::VR::EVROverlayError SetHighQualityOverlay(uint64_t ulOverlayHandle);
    // public System.UInt64 GetHighQualityOverlay()
    // Offset: 0x16BD674
    uint64_t GetHighQualityOverlay();
    // public System.UInt32 GetOverlayKey(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.EVROverlayError pError)
    // Offset: 0x16BD690
    uint GetOverlayKey(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::EVROverlayError& pError);
    // public System.UInt32 GetOverlayName(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.EVROverlayError pError)
    // Offset: 0x16BD6AC
    uint GetOverlayName(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::EVROverlayError& pError);
    // public Valve.VR.EVROverlayError SetOverlayName(System.UInt64 ulOverlayHandle, System.String pchName)
    // Offset: 0x16BD6C8
    Valve::VR::EVROverlayError SetOverlayName(uint64_t ulOverlayHandle, ::Il2CppString* pchName);
    // public Valve.VR.EVROverlayError GetOverlayImageData(System.UInt64 ulOverlayHandle, System.IntPtr pvBuffer, System.UInt32 unBufferSize, ref System.UInt32 punWidth, ref System.UInt32 punHeight)
    // Offset: 0x16BD6E4
    Valve::VR::EVROverlayError GetOverlayImageData(uint64_t ulOverlayHandle, System::IntPtr pvBuffer, uint unBufferSize, uint& punWidth, uint& punHeight);
    // public System.String GetOverlayErrorNameFromEnum(Valve.VR.EVROverlayError error)
    // Offset: 0x16BD708
    ::Il2CppString* GetOverlayErrorNameFromEnum(Valve::VR::EVROverlayError error);
    // public Valve.VR.EVROverlayError SetOverlayRenderingPid(System.UInt64 ulOverlayHandle, System.UInt32 unPID)
    // Offset: 0x16BD79C
    Valve::VR::EVROverlayError SetOverlayRenderingPid(uint64_t ulOverlayHandle, uint unPID);
    // public System.UInt32 GetOverlayRenderingPid(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BD7B8
    uint GetOverlayRenderingPid(uint64_t ulOverlayHandle);
    // public Valve.VR.EVROverlayError SetOverlayFlag(System.UInt64 ulOverlayHandle, Valve.VR.VROverlayFlags eOverlayFlag, System.Boolean bEnabled)
    // Offset: 0x16BD7D4
    Valve::VR::EVROverlayError SetOverlayFlag(uint64_t ulOverlayHandle, Valve::VR::VROverlayFlags eOverlayFlag, bool bEnabled);
    // public Valve.VR.EVROverlayError GetOverlayFlag(System.UInt64 ulOverlayHandle, Valve.VR.VROverlayFlags eOverlayFlag, ref System.Boolean pbEnabled)
    // Offset: 0x16BD7F4
    Valve::VR::EVROverlayError GetOverlayFlag(uint64_t ulOverlayHandle, Valve::VR::VROverlayFlags eOverlayFlag, bool& pbEnabled);
    // public Valve.VR.EVROverlayError SetOverlayColor(System.UInt64 ulOverlayHandle, System.Single fRed, System.Single fGreen, System.Single fBlue)
    // Offset: 0x16BD814
    Valve::VR::EVROverlayError SetOverlayColor(uint64_t ulOverlayHandle, float fRed, float fGreen, float fBlue);
    // public Valve.VR.EVROverlayError GetOverlayColor(System.UInt64 ulOverlayHandle, ref System.Single pfRed, ref System.Single pfGreen, ref System.Single pfBlue)
    // Offset: 0x16BD830
    Valve::VR::EVROverlayError GetOverlayColor(uint64_t ulOverlayHandle, float& pfRed, float& pfGreen, float& pfBlue);
    // public Valve.VR.EVROverlayError SetOverlayAlpha(System.UInt64 ulOverlayHandle, System.Single fAlpha)
    // Offset: 0x16BD858
    Valve::VR::EVROverlayError SetOverlayAlpha(uint64_t ulOverlayHandle, float fAlpha);
    // public Valve.VR.EVROverlayError GetOverlayAlpha(System.UInt64 ulOverlayHandle, ref System.Single pfAlpha)
    // Offset: 0x16BD874
    Valve::VR::EVROverlayError GetOverlayAlpha(uint64_t ulOverlayHandle, float& pfAlpha);
    // public Valve.VR.EVROverlayError SetOverlayTexelAspect(System.UInt64 ulOverlayHandle, System.Single fTexelAspect)
    // Offset: 0x16BD894
    Valve::VR::EVROverlayError SetOverlayTexelAspect(uint64_t ulOverlayHandle, float fTexelAspect);
    // public Valve.VR.EVROverlayError GetOverlayTexelAspect(System.UInt64 ulOverlayHandle, ref System.Single pfTexelAspect)
    // Offset: 0x16BD8B0
    Valve::VR::EVROverlayError GetOverlayTexelAspect(uint64_t ulOverlayHandle, float& pfTexelAspect);
    // public Valve.VR.EVROverlayError SetOverlaySortOrder(System.UInt64 ulOverlayHandle, System.UInt32 unSortOrder)
    // Offset: 0x16BD8D0
    Valve::VR::EVROverlayError SetOverlaySortOrder(uint64_t ulOverlayHandle, uint unSortOrder);
    // public Valve.VR.EVROverlayError GetOverlaySortOrder(System.UInt64 ulOverlayHandle, ref System.UInt32 punSortOrder)
    // Offset: 0x16BD8EC
    Valve::VR::EVROverlayError GetOverlaySortOrder(uint64_t ulOverlayHandle, uint& punSortOrder);
    // public Valve.VR.EVROverlayError SetOverlayWidthInMeters(System.UInt64 ulOverlayHandle, System.Single fWidthInMeters)
    // Offset: 0x16BD90C
    Valve::VR::EVROverlayError SetOverlayWidthInMeters(uint64_t ulOverlayHandle, float fWidthInMeters);
    // public Valve.VR.EVROverlayError GetOverlayWidthInMeters(System.UInt64 ulOverlayHandle, ref System.Single pfWidthInMeters)
    // Offset: 0x16BD928
    Valve::VR::EVROverlayError GetOverlayWidthInMeters(uint64_t ulOverlayHandle, float& pfWidthInMeters);
    // public Valve.VR.EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(System.UInt64 ulOverlayHandle, System.Single fMinDistanceInMeters, System.Single fMaxDistanceInMeters)
    // Offset: 0x16BD948
    Valve::VR::EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters);
    // public Valve.VR.EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(System.UInt64 ulOverlayHandle, ref System.Single pfMinDistanceInMeters, ref System.Single pfMaxDistanceInMeters)
    // Offset: 0x16BD964
    Valve::VR::EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float& pfMinDistanceInMeters, float& pfMaxDistanceInMeters);
    // public Valve.VR.EVROverlayError SetOverlayTextureColorSpace(System.UInt64 ulOverlayHandle, Valve.VR.EColorSpace eTextureColorSpace)
    // Offset: 0x16BD988
    Valve::VR::EVROverlayError SetOverlayTextureColorSpace(uint64_t ulOverlayHandle, Valve::VR::EColorSpace eTextureColorSpace);
    // public Valve.VR.EVROverlayError GetOverlayTextureColorSpace(System.UInt64 ulOverlayHandle, ref Valve.VR.EColorSpace peTextureColorSpace)
    // Offset: 0x16BD9A4
    Valve::VR::EVROverlayError GetOverlayTextureColorSpace(uint64_t ulOverlayHandle, Valve::VR::EColorSpace& peTextureColorSpace);
    // public Valve.VR.EVROverlayError SetOverlayTextureBounds(System.UInt64 ulOverlayHandle, ref Valve.VR.VRTextureBounds_t pOverlayTextureBounds)
    // Offset: 0x16BD9C0
    Valve::VR::EVROverlayError SetOverlayTextureBounds(uint64_t ulOverlayHandle, Valve::VR::VRTextureBounds_t& pOverlayTextureBounds);
    // public Valve.VR.EVROverlayError GetOverlayTextureBounds(System.UInt64 ulOverlayHandle, ref Valve.VR.VRTextureBounds_t pOverlayTextureBounds)
    // Offset: 0x16BD9DC
    Valve::VR::EVROverlayError GetOverlayTextureBounds(uint64_t ulOverlayHandle, Valve::VR::VRTextureBounds_t& pOverlayTextureBounds);
    // public System.UInt32 GetOverlayRenderModel(System.UInt64 ulOverlayHandle, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.HmdColor_t pColor, ref Valve.VR.EVROverlayError pError)
    // Offset: 0x16BD9F8
    uint GetOverlayRenderModel(uint64_t ulOverlayHandle, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::HmdColor_t& pColor, Valve::VR::EVROverlayError& pError);
    // public Valve.VR.EVROverlayError SetOverlayRenderModel(System.UInt64 ulOverlayHandle, System.String pchRenderModel, ref Valve.VR.HmdColor_t pColor)
    // Offset: 0x16BDA14
    Valve::VR::EVROverlayError SetOverlayRenderModel(uint64_t ulOverlayHandle, ::Il2CppString* pchRenderModel, Valve::VR::HmdColor_t& pColor);
    // public Valve.VR.EVROverlayError GetOverlayTransformType(System.UInt64 ulOverlayHandle, ref Valve.VR.VROverlayTransformType peTransformType)
    // Offset: 0x16BDA30
    Valve::VR::EVROverlayError GetOverlayTransformType(uint64_t ulOverlayHandle, Valve::VR::VROverlayTransformType& peTransformType);
    // public Valve.VR.EVROverlayError SetOverlayTransformAbsolute(System.UInt64 ulOverlayHandle, Valve.VR.ETrackingUniverseOrigin eTrackingOrigin, ref Valve.VR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform)
    // Offset: 0x16BDA4C
    Valve::VR::EVROverlayError SetOverlayTransformAbsolute(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin eTrackingOrigin, Valve::VR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform);
    // public Valve.VR.EVROverlayError GetOverlayTransformAbsolute(System.UInt64 ulOverlayHandle, ref Valve.VR.ETrackingUniverseOrigin peTrackingOrigin, ref Valve.VR.HmdMatrix34_t pmatTrackingOriginToOverlayTransform)
    // Offset: 0x16BDA68
    Valve::VR::EVROverlayError GetOverlayTransformAbsolute(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin& peTrackingOrigin, Valve::VR::HmdMatrix34_t& pmatTrackingOriginToOverlayTransform);
    // public Valve.VR.EVROverlayError SetOverlayTransformTrackedDeviceRelative(System.UInt64 ulOverlayHandle, System.UInt32 unTrackedDevice, ref Valve.VR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform)
    // Offset: 0x16BDA84
    Valve::VR::EVROverlayError SetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint unTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform);
    // public Valve.VR.EVROverlayError GetOverlayTransformTrackedDeviceRelative(System.UInt64 ulOverlayHandle, ref System.UInt32 punTrackedDevice, ref Valve.VR.HmdMatrix34_t pmatTrackedDeviceToOverlayTransform)
    // Offset: 0x16BDAA0
    Valve::VR::EVROverlayError GetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint& punTrackedDevice, Valve::VR::HmdMatrix34_t& pmatTrackedDeviceToOverlayTransform);
    // public Valve.VR.EVROverlayError SetOverlayTransformTrackedDeviceComponent(System.UInt64 ulOverlayHandle, System.UInt32 unDeviceIndex, System.String pchComponentName)
    // Offset: 0x16BDAC0
    Valve::VR::EVROverlayError SetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint unDeviceIndex, ::Il2CppString* pchComponentName);
    // public Valve.VR.EVROverlayError GetOverlayTransformTrackedDeviceComponent(System.UInt64 ulOverlayHandle, ref System.UInt32 punDeviceIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameSize)
    // Offset: 0x16BDADC
    Valve::VR::EVROverlayError GetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint& punDeviceIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameSize);
    // public Valve.VR.EVROverlayError GetOverlayTransformOverlayRelative(System.UInt64 ulOverlayHandle, ref System.UInt64 ulOverlayHandleParent, ref Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform)
    // Offset: 0x16BDAFC
    Valve::VR::EVROverlayError GetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t& ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform);
    // public Valve.VR.EVROverlayError SetOverlayTransformOverlayRelative(System.UInt64 ulOverlayHandle, System.UInt64 ulOverlayHandleParent, ref Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform)
    // Offset: 0x16BDB1C
    Valve::VR::EVROverlayError SetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform);
    // public Valve.VR.EVROverlayError ShowOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BDB38
    Valve::VR::EVROverlayError ShowOverlay(uint64_t ulOverlayHandle);
    // public Valve.VR.EVROverlayError HideOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BDB54
    Valve::VR::EVROverlayError HideOverlay(uint64_t ulOverlayHandle);
    // public System.Boolean IsOverlayVisible(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BDB70
    bool IsOverlayVisible(uint64_t ulOverlayHandle);
    // public Valve.VR.EVROverlayError GetTransformForOverlayCoordinates(System.UInt64 ulOverlayHandle, Valve.VR.ETrackingUniverseOrigin eTrackingOrigin, Valve.VR.HmdVector2_t coordinatesInOverlay, ref Valve.VR.HmdMatrix34_t pmatTransform)
    // Offset: 0x16BDB8C
    Valve::VR::EVROverlayError GetTransformForOverlayCoordinates(uint64_t ulOverlayHandle, Valve::VR::ETrackingUniverseOrigin eTrackingOrigin, Valve::VR::HmdVector2_t coordinatesInOverlay, Valve::VR::HmdMatrix34_t& pmatTransform);
    // public System.Boolean PollNextOverlayEvent(System.UInt64 ulOverlayHandle, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x16BDBA8
    bool PollNextOverlayEvent(uint64_t ulOverlayHandle, Valve::VR::VREvent_t& pEvent, uint uncbVREvent);
    // public Valve.VR.EVROverlayError GetOverlayInputMethod(System.UInt64 ulOverlayHandle, ref Valve.VR.VROverlayInputMethod peInputMethod)
    // Offset: 0x16BDFC4
    Valve::VR::EVROverlayError GetOverlayInputMethod(uint64_t ulOverlayHandle, Valve::VR::VROverlayInputMethod& peInputMethod);
    // public Valve.VR.EVROverlayError SetOverlayInputMethod(System.UInt64 ulOverlayHandle, Valve.VR.VROverlayInputMethod eInputMethod)
    // Offset: 0x16BDFE0
    Valve::VR::EVROverlayError SetOverlayInputMethod(uint64_t ulOverlayHandle, Valve::VR::VROverlayInputMethod eInputMethod);
    // public Valve.VR.EVROverlayError GetOverlayMouseScale(System.UInt64 ulOverlayHandle, ref Valve.VR.HmdVector2_t pvecMouseScale)
    // Offset: 0x16BDFFC
    Valve::VR::EVROverlayError GetOverlayMouseScale(uint64_t ulOverlayHandle, Valve::VR::HmdVector2_t& pvecMouseScale);
    // public Valve.VR.EVROverlayError SetOverlayMouseScale(System.UInt64 ulOverlayHandle, ref Valve.VR.HmdVector2_t pvecMouseScale)
    // Offset: 0x16BE018
    Valve::VR::EVROverlayError SetOverlayMouseScale(uint64_t ulOverlayHandle, Valve::VR::HmdVector2_t& pvecMouseScale);
    // public System.Boolean ComputeOverlayIntersection(System.UInt64 ulOverlayHandle, ref Valve.VR.VROverlayIntersectionParams_t pParams, ref Valve.VR.VROverlayIntersectionResults_t pResults)
    // Offset: 0x16BE034
    bool ComputeOverlayIntersection(uint64_t ulOverlayHandle, Valve::VR::VROverlayIntersectionParams_t& pParams, Valve::VR::VROverlayIntersectionResults_t& pResults);
    // public System.Boolean IsHoverTargetOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BE050
    bool IsHoverTargetOverlay(uint64_t ulOverlayHandle);
    // public System.UInt64 GetGamepadFocusOverlay()
    // Offset: 0x16BE06C
    uint64_t GetGamepadFocusOverlay();
    // public Valve.VR.EVROverlayError SetGamepadFocusOverlay(System.UInt64 ulNewFocusOverlay)
    // Offset: 0x16BE088
    Valve::VR::EVROverlayError SetGamepadFocusOverlay(uint64_t ulNewFocusOverlay);
    // public Valve.VR.EVROverlayError SetOverlayNeighbor(Valve.VR.EOverlayDirection eDirection, System.UInt64 ulFrom, System.UInt64 ulTo)
    // Offset: 0x16BE0A4
    Valve::VR::EVROverlayError SetOverlayNeighbor(Valve::VR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);
    // public Valve.VR.EVROverlayError MoveGamepadFocusToNeighbor(Valve.VR.EOverlayDirection eDirection, System.UInt64 ulFrom)
    // Offset: 0x16BE0C0
    Valve::VR::EVROverlayError MoveGamepadFocusToNeighbor(Valve::VR::EOverlayDirection eDirection, uint64_t ulFrom);
    // public Valve.VR.EVROverlayError SetOverlayDualAnalogTransform(System.UInt64 ulOverlay, Valve.VR.EDualAnalogWhich eWhich, System.IntPtr vCenter, System.Single fRadius)
    // Offset: 0x16BE0DC
    Valve::VR::EVROverlayError SetOverlayDualAnalogTransform(uint64_t ulOverlay, Valve::VR::EDualAnalogWhich eWhich, System::IntPtr vCenter, float fRadius);
    // public Valve.VR.EVROverlayError GetOverlayDualAnalogTransform(System.UInt64 ulOverlay, Valve.VR.EDualAnalogWhich eWhich, ref Valve.VR.HmdVector2_t pvCenter, ref System.Single pfRadius)
    // Offset: 0x16BE0F8
    Valve::VR::EVROverlayError GetOverlayDualAnalogTransform(uint64_t ulOverlay, Valve::VR::EDualAnalogWhich eWhich, Valve::VR::HmdVector2_t& pvCenter, float& pfRadius);
    // public Valve.VR.EVROverlayError SetOverlayTexture(System.UInt64 ulOverlayHandle, ref Valve.VR.Texture_t pTexture)
    // Offset: 0x16BE118
    Valve::VR::EVROverlayError SetOverlayTexture(uint64_t ulOverlayHandle, Valve::VR::Texture_t& pTexture);
    // public Valve.VR.EVROverlayError ClearOverlayTexture(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BE134
    Valve::VR::EVROverlayError ClearOverlayTexture(uint64_t ulOverlayHandle);
    // public Valve.VR.EVROverlayError SetOverlayRaw(System.UInt64 ulOverlayHandle, System.IntPtr pvBuffer, System.UInt32 unWidth, System.UInt32 unHeight, System.UInt32 unDepth)
    // Offset: 0x16BE150
    Valve::VR::EVROverlayError SetOverlayRaw(uint64_t ulOverlayHandle, System::IntPtr pvBuffer, uint unWidth, uint unHeight, uint unDepth);
    // public Valve.VR.EVROverlayError SetOverlayFromFile(System.UInt64 ulOverlayHandle, System.String pchFilePath)
    // Offset: 0x16BE16C
    Valve::VR::EVROverlayError SetOverlayFromFile(uint64_t ulOverlayHandle, ::Il2CppString* pchFilePath);
    // public Valve.VR.EVROverlayError GetOverlayTexture(System.UInt64 ulOverlayHandle, ref System.IntPtr pNativeTextureHandle, System.IntPtr pNativeTextureRef, ref System.UInt32 pWidth, ref System.UInt32 pHeight, ref System.UInt32 pNativeFormat, ref Valve.VR.ETextureType pAPIType, ref Valve.VR.EColorSpace pColorSpace, ref Valve.VR.VRTextureBounds_t pTextureBounds)
    // Offset: 0x16BE188
    Valve::VR::EVROverlayError GetOverlayTexture(uint64_t ulOverlayHandle, System::IntPtr& pNativeTextureHandle, System::IntPtr pNativeTextureRef, uint& pWidth, uint& pHeight, uint& pNativeFormat, Valve::VR::ETextureType& pAPIType, Valve::VR::EColorSpace& pColorSpace, Valve::VR::VRTextureBounds_t& pTextureBounds);
    // public Valve.VR.EVROverlayError ReleaseNativeOverlayHandle(System.UInt64 ulOverlayHandle, System.IntPtr pNativeTextureHandle)
    // Offset: 0x16BE1BC
    Valve::VR::EVROverlayError ReleaseNativeOverlayHandle(uint64_t ulOverlayHandle, System::IntPtr pNativeTextureHandle);
    // public Valve.VR.EVROverlayError GetOverlayTextureSize(System.UInt64 ulOverlayHandle, ref System.UInt32 pWidth, ref System.UInt32 pHeight)
    // Offset: 0x16BE1D8
    Valve::VR::EVROverlayError GetOverlayTextureSize(uint64_t ulOverlayHandle, uint& pWidth, uint& pHeight);
    // public Valve.VR.EVROverlayError CreateDashboardOverlay(System.String pchOverlayKey, System.String pchOverlayFriendlyName, ref System.UInt64 pMainHandle, ref System.UInt64 pThumbnailHandle)
    // Offset: 0x16BE1FC
    Valve::VR::EVROverlayError CreateDashboardOverlay(::Il2CppString* pchOverlayKey, ::Il2CppString* pchOverlayFriendlyName, uint64_t& pMainHandle, uint64_t& pThumbnailHandle);
    // public System.Boolean IsDashboardVisible()
    // Offset: 0x16BE220
    bool IsDashboardVisible();
    // public System.Boolean IsActiveDashboardOverlay(System.UInt64 ulOverlayHandle)
    // Offset: 0x16BE23C
    bool IsActiveDashboardOverlay(uint64_t ulOverlayHandle);
    // public Valve.VR.EVROverlayError SetDashboardOverlaySceneProcess(System.UInt64 ulOverlayHandle, System.UInt32 unProcessId)
    // Offset: 0x16BE258
    Valve::VR::EVROverlayError SetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint unProcessId);
    // public Valve.VR.EVROverlayError GetDashboardOverlaySceneProcess(System.UInt64 ulOverlayHandle, ref System.UInt32 punProcessId)
    // Offset: 0x16BE274
    Valve::VR::EVROverlayError GetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint& punProcessId);
    // public System.Void ShowDashboard(System.String pchOverlayToShow)
    // Offset: 0x16BE294
    void ShowDashboard(::Il2CppString* pchOverlayToShow);
    // public System.UInt32 GetPrimaryDashboardDevice()
    // Offset: 0x16BE2B0
    uint GetPrimaryDashboardDevice();
    // public Valve.VR.EVROverlayError ShowKeyboard(System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue)
    // Offset: 0x16BE2CC
    Valve::VR::EVROverlayError ShowKeyboard(int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
    // public Valve.VR.EVROverlayError ShowKeyboardForOverlay(System.UInt64 ulOverlayHandle, System.Int32 eInputMode, System.Int32 eLineInputMode, System.String pchDescription, System.UInt32 unCharMax, System.String pchExistingText, System.Boolean bUseMinimalMode, System.UInt64 uUserValue)
    // Offset: 0x16BE2F0
    Valve::VR::EVROverlayError ShowKeyboardForOverlay(uint64_t ulOverlayHandle, int eInputMode, int eLineInputMode, ::Il2CppString* pchDescription, uint unCharMax, ::Il2CppString* pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);
    // public System.UInt32 GetKeyboardText(System.Text.StringBuilder pchText, System.UInt32 cchText)
    // Offset: 0x16BE318
    uint GetKeyboardText(System::Text::StringBuilder* pchText, uint cchText);
    // public System.Void HideKeyboard()
    // Offset: 0x16BE334
    void HideKeyboard();
    // public System.Void SetKeyboardTransformAbsolute(Valve.VR.ETrackingUniverseOrigin eTrackingOrigin, ref Valve.VR.HmdMatrix34_t pmatTrackingOriginToKeyboardTransform)
    // Offset: 0x16BE350
    void SetKeyboardTransformAbsolute(Valve::VR::ETrackingUniverseOrigin eTrackingOrigin, Valve::VR::HmdMatrix34_t& pmatTrackingOriginToKeyboardTransform);
    // public System.Void SetKeyboardPositionForOverlay(System.UInt64 ulOverlayHandle, Valve.VR.HmdRect2_t avoidRect)
    // Offset: 0x16BE36C
    void SetKeyboardPositionForOverlay(uint64_t ulOverlayHandle, Valve::VR::HmdRect2_t avoidRect);
    // public Valve.VR.EVROverlayError SetOverlayIntersectionMask(System.UInt64 ulOverlayHandle, ref Valve.VR.VROverlayIntersectionMaskPrimitive_t pMaskPrimitives, System.UInt32 unNumMaskPrimitives, System.UInt32 unPrimitiveSize)
    // Offset: 0x16BE388
    Valve::VR::EVROverlayError SetOverlayIntersectionMask(uint64_t ulOverlayHandle, Valve::VR::VROverlayIntersectionMaskPrimitive_t& pMaskPrimitives, uint unNumMaskPrimitives, uint unPrimitiveSize);
    // public Valve.VR.EVROverlayError GetOverlayFlags(System.UInt64 ulOverlayHandle, ref System.UInt32 pFlags)
    // Offset: 0x16BE3A4
    Valve::VR::EVROverlayError GetOverlayFlags(uint64_t ulOverlayHandle, uint& pFlags);
    // public Valve.VR.VRMessageOverlayResponse ShowMessageOverlay(System.String pchText, System.String pchCaption, System.String pchButton0Text, System.String pchButton1Text, System.String pchButton2Text, System.String pchButton3Text)
    // Offset: 0x16BE3C4
    Valve::VR::VRMessageOverlayResponse ShowMessageOverlay(::Il2CppString* pchText, ::Il2CppString* pchCaption, ::Il2CppString* pchButton0Text, ::Il2CppString* pchButton1Text, ::Il2CppString* pchButton2Text, ::Il2CppString* pchButton3Text);
    // public System.Void CloseMessageOverlay()
    // Offset: 0x16BE3E0
    void CloseMessageOverlay();
  }; // Valve.VR.CVROverlay
  #pragma pack(pop)
  static check_size<sizeof(CVROverlay), 16 + sizeof(Valve::VR::IVROverlay)> __Valve_VR_CVROverlaySizeCheck;
  static_assert(sizeof(CVROverlay) == 0x2A0);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVROverlay*, "Valve.VR", "CVROverlay");
