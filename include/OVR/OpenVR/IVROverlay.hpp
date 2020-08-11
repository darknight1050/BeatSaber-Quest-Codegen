// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.IVROverlay
  struct IVROverlay : public System::ValueType {
    public:
    // Nested type: OVR::OpenVR::IVROverlay::_FindOverlay
    class _FindOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_CreateOverlay
    class _CreateOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_DestroyOverlay
    class _DestroyOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_SetHighQualityOverlay
    class _SetHighQualityOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_GetHighQualityOverlay
    class _GetHighQualityOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayKey
    class _GetOverlayKey;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayName
    class _GetOverlayName;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayName
    class _SetOverlayName;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayImageData
    class _GetOverlayImageData;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayErrorNameFromEnum
    class _GetOverlayErrorNameFromEnum;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayRenderingPid
    class _SetOverlayRenderingPid;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayRenderingPid
    class _GetOverlayRenderingPid;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayFlag
    class _SetOverlayFlag;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayFlag
    class _GetOverlayFlag;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayColor
    class _SetOverlayColor;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayColor
    class _GetOverlayColor;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayAlpha
    class _SetOverlayAlpha;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayAlpha
    class _GetOverlayAlpha;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayTexelAspect
    class _SetOverlayTexelAspect;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTexelAspect
    class _GetOverlayTexelAspect;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlaySortOrder
    class _SetOverlaySortOrder;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlaySortOrder
    class _GetOverlaySortOrder;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayWidthInMeters
    class _SetOverlayWidthInMeters;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayWidthInMeters
    class _GetOverlayWidthInMeters;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters
    class _SetOverlayAutoCurveDistanceRangeInMeters;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters
    class _GetOverlayAutoCurveDistanceRangeInMeters;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace
    class _SetOverlayTextureColorSpace;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace
    class _GetOverlayTextureColorSpace;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds
    class _SetOverlayTextureBounds;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTextureBounds
    class _GetOverlayTextureBounds;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayRenderModel
    class _GetOverlayRenderModel;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayRenderModel
    class _SetOverlayRenderModel;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTransformType
    class _GetOverlayTransformType;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute
    class _SetOverlayTransformAbsolute;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute
    class _GetOverlayTransformAbsolute;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative
    class _SetOverlayTransformTrackedDeviceRelative;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative
    class _GetOverlayTransformTrackedDeviceRelative;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayTransformTrackedDeviceComponent
    class _SetOverlayTransformTrackedDeviceComponent;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent
    class _GetOverlayTransformTrackedDeviceComponent;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTransformOverlayRelative
    class _GetOverlayTransformOverlayRelative;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayTransformOverlayRelative
    class _SetOverlayTransformOverlayRelative;
    // Nested type: OVR::OpenVR::IVROverlay::_ShowOverlay
    class _ShowOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_HideOverlay
    class _HideOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_IsOverlayVisible
    class _IsOverlayVisible;
    // Nested type: OVR::OpenVR::IVROverlay::_GetTransformForOverlayCoordinates
    class _GetTransformForOverlayCoordinates;
    // Nested type: OVR::OpenVR::IVROverlay::_PollNextOverlayEvent
    class _PollNextOverlayEvent;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayInputMethod
    class _GetOverlayInputMethod;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayInputMethod
    class _SetOverlayInputMethod;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayMouseScale
    class _GetOverlayMouseScale;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayMouseScale
    class _SetOverlayMouseScale;
    // Nested type: OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection
    class _ComputeOverlayIntersection;
    // Nested type: OVR::OpenVR::IVROverlay::_IsHoverTargetOverlay
    class _IsHoverTargetOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_GetGamepadFocusOverlay
    class _GetGamepadFocusOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_SetGamepadFocusOverlay
    class _SetGamepadFocusOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayNeighbor
    class _SetOverlayNeighbor;
    // Nested type: OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor
    class _MoveGamepadFocusToNeighbor;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform
    class _SetOverlayDualAnalogTransform;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform
    class _GetOverlayDualAnalogTransform;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayTexture
    class _SetOverlayTexture;
    // Nested type: OVR::OpenVR::IVROverlay::_ClearOverlayTexture
    class _ClearOverlayTexture;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayRaw
    class _SetOverlayRaw;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayFromFile
    class _SetOverlayFromFile;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTexture
    class _GetOverlayTexture;
    // Nested type: OVR::OpenVR::IVROverlay::_ReleaseNativeOverlayHandle
    class _ReleaseNativeOverlayHandle;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayTextureSize
    class _GetOverlayTextureSize;
    // Nested type: OVR::OpenVR::IVROverlay::_CreateDashboardOverlay
    class _CreateDashboardOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_IsDashboardVisible
    class _IsDashboardVisible;
    // Nested type: OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay
    class _IsActiveDashboardOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_SetDashboardOverlaySceneProcess
    class _SetDashboardOverlaySceneProcess;
    // Nested type: OVR::OpenVR::IVROverlay::_GetDashboardOverlaySceneProcess
    class _GetDashboardOverlaySceneProcess;
    // Nested type: OVR::OpenVR::IVROverlay::_ShowDashboard
    class _ShowDashboard;
    // Nested type: OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice
    class _GetPrimaryDashboardDevice;
    // Nested type: OVR::OpenVR::IVROverlay::_ShowKeyboard
    class _ShowKeyboard;
    // Nested type: OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay
    class _ShowKeyboardForOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_GetKeyboardText
    class _GetKeyboardText;
    // Nested type: OVR::OpenVR::IVROverlay::_HideKeyboard
    class _HideKeyboard;
    // Nested type: OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute
    class _SetKeyboardTransformAbsolute;
    // Nested type: OVR::OpenVR::IVROverlay::_SetKeyboardPositionForOverlay
    class _SetKeyboardPositionForOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask
    class _SetOverlayIntersectionMask;
    // Nested type: OVR::OpenVR::IVROverlay::_GetOverlayFlags
    class _GetOverlayFlags;
    // Nested type: OVR::OpenVR::IVROverlay::_ShowMessageOverlay
    class _ShowMessageOverlay;
    // Nested type: OVR::OpenVR::IVROverlay::_CloseMessageOverlay
    class _CloseMessageOverlay;
    // OVR.OpenVR.IVROverlay/_FindOverlay FindOverlay
    // Offset: 0x0
    OVR::OpenVR::IVROverlay::_FindOverlay* FindOverlay;
    // OVR.OpenVR.IVROverlay/_CreateOverlay CreateOverlay
    // Offset: 0x8
    OVR::OpenVR::IVROverlay::_CreateOverlay* CreateOverlay;
    // OVR.OpenVR.IVROverlay/_DestroyOverlay DestroyOverlay
    // Offset: 0x10
    OVR::OpenVR::IVROverlay::_DestroyOverlay* DestroyOverlay;
    // OVR.OpenVR.IVROverlay/_SetHighQualityOverlay SetHighQualityOverlay
    // Offset: 0x18
    OVR::OpenVR::IVROverlay::_SetHighQualityOverlay* SetHighQualityOverlay;
    // OVR.OpenVR.IVROverlay/_GetHighQualityOverlay GetHighQualityOverlay
    // Offset: 0x20
    OVR::OpenVR::IVROverlay::_GetHighQualityOverlay* GetHighQualityOverlay;
    // OVR.OpenVR.IVROverlay/_GetOverlayKey GetOverlayKey
    // Offset: 0x28
    OVR::OpenVR::IVROverlay::_GetOverlayKey* GetOverlayKey;
    // OVR.OpenVR.IVROverlay/_GetOverlayName GetOverlayName
    // Offset: 0x30
    OVR::OpenVR::IVROverlay::_GetOverlayName* GetOverlayName;
    // OVR.OpenVR.IVROverlay/_SetOverlayName SetOverlayName
    // Offset: 0x38
    OVR::OpenVR::IVROverlay::_SetOverlayName* SetOverlayName;
    // OVR.OpenVR.IVROverlay/_GetOverlayImageData GetOverlayImageData
    // Offset: 0x40
    OVR::OpenVR::IVROverlay::_GetOverlayImageData* GetOverlayImageData;
    // OVR.OpenVR.IVROverlay/_GetOverlayErrorNameFromEnum GetOverlayErrorNameFromEnum
    // Offset: 0x48
    OVR::OpenVR::IVROverlay::_GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum;
    // OVR.OpenVR.IVROverlay/_SetOverlayRenderingPid SetOverlayRenderingPid
    // Offset: 0x50
    OVR::OpenVR::IVROverlay::_SetOverlayRenderingPid* SetOverlayRenderingPid;
    // OVR.OpenVR.IVROverlay/_GetOverlayRenderingPid GetOverlayRenderingPid
    // Offset: 0x58
    OVR::OpenVR::IVROverlay::_GetOverlayRenderingPid* GetOverlayRenderingPid;
    // OVR.OpenVR.IVROverlay/_SetOverlayFlag SetOverlayFlag
    // Offset: 0x60
    OVR::OpenVR::IVROverlay::_SetOverlayFlag* SetOverlayFlag;
    // OVR.OpenVR.IVROverlay/_GetOverlayFlag GetOverlayFlag
    // Offset: 0x68
    OVR::OpenVR::IVROverlay::_GetOverlayFlag* GetOverlayFlag;
    // OVR.OpenVR.IVROverlay/_SetOverlayColor SetOverlayColor
    // Offset: 0x70
    OVR::OpenVR::IVROverlay::_SetOverlayColor* SetOverlayColor;
    // OVR.OpenVR.IVROverlay/_GetOverlayColor GetOverlayColor
    // Offset: 0x78
    OVR::OpenVR::IVROverlay::_GetOverlayColor* GetOverlayColor;
    // OVR.OpenVR.IVROverlay/_SetOverlayAlpha SetOverlayAlpha
    // Offset: 0x80
    OVR::OpenVR::IVROverlay::_SetOverlayAlpha* SetOverlayAlpha;
    // OVR.OpenVR.IVROverlay/_GetOverlayAlpha GetOverlayAlpha
    // Offset: 0x88
    OVR::OpenVR::IVROverlay::_GetOverlayAlpha* GetOverlayAlpha;
    // OVR.OpenVR.IVROverlay/_SetOverlayTexelAspect SetOverlayTexelAspect
    // Offset: 0x90
    OVR::OpenVR::IVROverlay::_SetOverlayTexelAspect* SetOverlayTexelAspect;
    // OVR.OpenVR.IVROverlay/_GetOverlayTexelAspect GetOverlayTexelAspect
    // Offset: 0x98
    OVR::OpenVR::IVROverlay::_GetOverlayTexelAspect* GetOverlayTexelAspect;
    // OVR.OpenVR.IVROverlay/_SetOverlaySortOrder SetOverlaySortOrder
    // Offset: 0xA0
    OVR::OpenVR::IVROverlay::_SetOverlaySortOrder* SetOverlaySortOrder;
    // OVR.OpenVR.IVROverlay/_GetOverlaySortOrder GetOverlaySortOrder
    // Offset: 0xA8
    OVR::OpenVR::IVROverlay::_GetOverlaySortOrder* GetOverlaySortOrder;
    // OVR.OpenVR.IVROverlay/_SetOverlayWidthInMeters SetOverlayWidthInMeters
    // Offset: 0xB0
    OVR::OpenVR::IVROverlay::_SetOverlayWidthInMeters* SetOverlayWidthInMeters;
    // OVR.OpenVR.IVROverlay/_GetOverlayWidthInMeters GetOverlayWidthInMeters
    // Offset: 0xB8
    OVR::OpenVR::IVROverlay::_GetOverlayWidthInMeters* GetOverlayWidthInMeters;
    // OVR.OpenVR.IVROverlay/_SetOverlayAutoCurveDistanceRangeInMeters SetOverlayAutoCurveDistanceRangeInMeters
    // Offset: 0xC0
    OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters;
    // OVR.OpenVR.IVROverlay/_GetOverlayAutoCurveDistanceRangeInMeters GetOverlayAutoCurveDistanceRangeInMeters
    // Offset: 0xC8
    OVR::OpenVR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters;
    // OVR.OpenVR.IVROverlay/_SetOverlayTextureColorSpace SetOverlayTextureColorSpace
    // Offset: 0xD0
    OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace* SetOverlayTextureColorSpace;
    // OVR.OpenVR.IVROverlay/_GetOverlayTextureColorSpace GetOverlayTextureColorSpace
    // Offset: 0xD8
    OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace* GetOverlayTextureColorSpace;
    // OVR.OpenVR.IVROverlay/_SetOverlayTextureBounds SetOverlayTextureBounds
    // Offset: 0xE0
    OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds* SetOverlayTextureBounds;
    // OVR.OpenVR.IVROverlay/_GetOverlayTextureBounds GetOverlayTextureBounds
    // Offset: 0xE8
    OVR::OpenVR::IVROverlay::_GetOverlayTextureBounds* GetOverlayTextureBounds;
    // OVR.OpenVR.IVROverlay/_GetOverlayRenderModel GetOverlayRenderModel
    // Offset: 0xF0
    OVR::OpenVR::IVROverlay::_GetOverlayRenderModel* GetOverlayRenderModel;
    // OVR.OpenVR.IVROverlay/_SetOverlayRenderModel SetOverlayRenderModel
    // Offset: 0xF8
    OVR::OpenVR::IVROverlay::_SetOverlayRenderModel* SetOverlayRenderModel;
    // OVR.OpenVR.IVROverlay/_GetOverlayTransformType GetOverlayTransformType
    // Offset: 0x100
    OVR::OpenVR::IVROverlay::_GetOverlayTransformType* GetOverlayTransformType;
    // OVR.OpenVR.IVROverlay/_SetOverlayTransformAbsolute SetOverlayTransformAbsolute
    // Offset: 0x108
    OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute* SetOverlayTransformAbsolute;
    // OVR.OpenVR.IVROverlay/_GetOverlayTransformAbsolute GetOverlayTransformAbsolute
    // Offset: 0x110
    OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute* GetOverlayTransformAbsolute;
    // OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceRelative SetOverlayTransformTrackedDeviceRelative
    // Offset: 0x118
    OVR::OpenVR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative;
    // OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceRelative GetOverlayTransformTrackedDeviceRelative
    // Offset: 0x120
    OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative;
    // OVR.OpenVR.IVROverlay/_SetOverlayTransformTrackedDeviceComponent SetOverlayTransformTrackedDeviceComponent
    // Offset: 0x128
    OVR::OpenVR::IVROverlay::_SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent;
    // OVR.OpenVR.IVROverlay/_GetOverlayTransformTrackedDeviceComponent GetOverlayTransformTrackedDeviceComponent
    // Offset: 0x130
    OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent;
    // OVR.OpenVR.IVROverlay/_GetOverlayTransformOverlayRelative GetOverlayTransformOverlayRelative
    // Offset: 0x138
    OVR::OpenVR::IVROverlay::_GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative;
    // OVR.OpenVR.IVROverlay/_SetOverlayTransformOverlayRelative SetOverlayTransformOverlayRelative
    // Offset: 0x140
    OVR::OpenVR::IVROverlay::_SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative;
    // OVR.OpenVR.IVROverlay/_ShowOverlay ShowOverlay
    // Offset: 0x148
    OVR::OpenVR::IVROverlay::_ShowOverlay* ShowOverlay;
    // OVR.OpenVR.IVROverlay/_HideOverlay HideOverlay
    // Offset: 0x150
    OVR::OpenVR::IVROverlay::_HideOverlay* HideOverlay;
    // OVR.OpenVR.IVROverlay/_IsOverlayVisible IsOverlayVisible
    // Offset: 0x158
    OVR::OpenVR::IVROverlay::_IsOverlayVisible* IsOverlayVisible;
    // OVR.OpenVR.IVROverlay/_GetTransformForOverlayCoordinates GetTransformForOverlayCoordinates
    // Offset: 0x160
    OVR::OpenVR::IVROverlay::_GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates;
    // OVR.OpenVR.IVROverlay/_PollNextOverlayEvent PollNextOverlayEvent
    // Offset: 0x168
    OVR::OpenVR::IVROverlay::_PollNextOverlayEvent* PollNextOverlayEvent;
    // OVR.OpenVR.IVROverlay/_GetOverlayInputMethod GetOverlayInputMethod
    // Offset: 0x170
    OVR::OpenVR::IVROverlay::_GetOverlayInputMethod* GetOverlayInputMethod;
    // OVR.OpenVR.IVROverlay/_SetOverlayInputMethod SetOverlayInputMethod
    // Offset: 0x178
    OVR::OpenVR::IVROverlay::_SetOverlayInputMethod* SetOverlayInputMethod;
    // OVR.OpenVR.IVROverlay/_GetOverlayMouseScale GetOverlayMouseScale
    // Offset: 0x180
    OVR::OpenVR::IVROverlay::_GetOverlayMouseScale* GetOverlayMouseScale;
    // OVR.OpenVR.IVROverlay/_SetOverlayMouseScale SetOverlayMouseScale
    // Offset: 0x188
    OVR::OpenVR::IVROverlay::_SetOverlayMouseScale* SetOverlayMouseScale;
    // OVR.OpenVR.IVROverlay/_ComputeOverlayIntersection ComputeOverlayIntersection
    // Offset: 0x190
    OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection* ComputeOverlayIntersection;
    // OVR.OpenVR.IVROverlay/_IsHoverTargetOverlay IsHoverTargetOverlay
    // Offset: 0x198
    OVR::OpenVR::IVROverlay::_IsHoverTargetOverlay* IsHoverTargetOverlay;
    // OVR.OpenVR.IVROverlay/_GetGamepadFocusOverlay GetGamepadFocusOverlay
    // Offset: 0x1A0
    OVR::OpenVR::IVROverlay::_GetGamepadFocusOverlay* GetGamepadFocusOverlay;
    // OVR.OpenVR.IVROverlay/_SetGamepadFocusOverlay SetGamepadFocusOverlay
    // Offset: 0x1A8
    OVR::OpenVR::IVROverlay::_SetGamepadFocusOverlay* SetGamepadFocusOverlay;
    // OVR.OpenVR.IVROverlay/_SetOverlayNeighbor SetOverlayNeighbor
    // Offset: 0x1B0
    OVR::OpenVR::IVROverlay::_SetOverlayNeighbor* SetOverlayNeighbor;
    // OVR.OpenVR.IVROverlay/_MoveGamepadFocusToNeighbor MoveGamepadFocusToNeighbor
    // Offset: 0x1B8
    OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor;
    // OVR.OpenVR.IVROverlay/_SetOverlayDualAnalogTransform SetOverlayDualAnalogTransform
    // Offset: 0x1C0
    OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform;
    // OVR.OpenVR.IVROverlay/_GetOverlayDualAnalogTransform GetOverlayDualAnalogTransform
    // Offset: 0x1C8
    OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform;
    // OVR.OpenVR.IVROverlay/_SetOverlayTexture SetOverlayTexture
    // Offset: 0x1D0
    OVR::OpenVR::IVROverlay::_SetOverlayTexture* SetOverlayTexture;
    // OVR.OpenVR.IVROverlay/_ClearOverlayTexture ClearOverlayTexture
    // Offset: 0x1D8
    OVR::OpenVR::IVROverlay::_ClearOverlayTexture* ClearOverlayTexture;
    // OVR.OpenVR.IVROverlay/_SetOverlayRaw SetOverlayRaw
    // Offset: 0x1E0
    OVR::OpenVR::IVROverlay::_SetOverlayRaw* SetOverlayRaw;
    // OVR.OpenVR.IVROverlay/_SetOverlayFromFile SetOverlayFromFile
    // Offset: 0x1E8
    OVR::OpenVR::IVROverlay::_SetOverlayFromFile* SetOverlayFromFile;
    // OVR.OpenVR.IVROverlay/_GetOverlayTexture GetOverlayTexture
    // Offset: 0x1F0
    OVR::OpenVR::IVROverlay::_GetOverlayTexture* GetOverlayTexture;
    // OVR.OpenVR.IVROverlay/_ReleaseNativeOverlayHandle ReleaseNativeOverlayHandle
    // Offset: 0x1F8
    OVR::OpenVR::IVROverlay::_ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle;
    // OVR.OpenVR.IVROverlay/_GetOverlayTextureSize GetOverlayTextureSize
    // Offset: 0x200
    OVR::OpenVR::IVROverlay::_GetOverlayTextureSize* GetOverlayTextureSize;
    // OVR.OpenVR.IVROverlay/_CreateDashboardOverlay CreateDashboardOverlay
    // Offset: 0x208
    OVR::OpenVR::IVROverlay::_CreateDashboardOverlay* CreateDashboardOverlay;
    // OVR.OpenVR.IVROverlay/_IsDashboardVisible IsDashboardVisible
    // Offset: 0x210
    OVR::OpenVR::IVROverlay::_IsDashboardVisible* IsDashboardVisible;
    // OVR.OpenVR.IVROverlay/_IsActiveDashboardOverlay IsActiveDashboardOverlay
    // Offset: 0x218
    OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay* IsActiveDashboardOverlay;
    // OVR.OpenVR.IVROverlay/_SetDashboardOverlaySceneProcess SetDashboardOverlaySceneProcess
    // Offset: 0x220
    OVR::OpenVR::IVROverlay::_SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess;
    // OVR.OpenVR.IVROverlay/_GetDashboardOverlaySceneProcess GetDashboardOverlaySceneProcess
    // Offset: 0x228
    OVR::OpenVR::IVROverlay::_GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess;
    // OVR.OpenVR.IVROverlay/_ShowDashboard ShowDashboard
    // Offset: 0x230
    OVR::OpenVR::IVROverlay::_ShowDashboard* ShowDashboard;
    // OVR.OpenVR.IVROverlay/_GetPrimaryDashboardDevice GetPrimaryDashboardDevice
    // Offset: 0x238
    OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice* GetPrimaryDashboardDevice;
    // OVR.OpenVR.IVROverlay/_ShowKeyboard ShowKeyboard
    // Offset: 0x240
    OVR::OpenVR::IVROverlay::_ShowKeyboard* ShowKeyboard;
    // OVR.OpenVR.IVROverlay/_ShowKeyboardForOverlay ShowKeyboardForOverlay
    // Offset: 0x248
    OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay* ShowKeyboardForOverlay;
    // OVR.OpenVR.IVROverlay/_GetKeyboardText GetKeyboardText
    // Offset: 0x250
    OVR::OpenVR::IVROverlay::_GetKeyboardText* GetKeyboardText;
    // OVR.OpenVR.IVROverlay/_HideKeyboard HideKeyboard
    // Offset: 0x258
    OVR::OpenVR::IVROverlay::_HideKeyboard* HideKeyboard;
    // OVR.OpenVR.IVROverlay/_SetKeyboardTransformAbsolute SetKeyboardTransformAbsolute
    // Offset: 0x260
    OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute;
    // OVR.OpenVR.IVROverlay/_SetKeyboardPositionForOverlay SetKeyboardPositionForOverlay
    // Offset: 0x268
    OVR::OpenVR::IVROverlay::_SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay;
    // OVR.OpenVR.IVROverlay/_SetOverlayIntersectionMask SetOverlayIntersectionMask
    // Offset: 0x270
    OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask* SetOverlayIntersectionMask;
    // OVR.OpenVR.IVROverlay/_GetOverlayFlags GetOverlayFlags
    // Offset: 0x278
    OVR::OpenVR::IVROverlay::_GetOverlayFlags* GetOverlayFlags;
    // OVR.OpenVR.IVROverlay/_ShowMessageOverlay ShowMessageOverlay
    // Offset: 0x280
    OVR::OpenVR::IVROverlay::_ShowMessageOverlay* ShowMessageOverlay;
    // OVR.OpenVR.IVROverlay/_CloseMessageOverlay CloseMessageOverlay
    // Offset: 0x288
    OVR::OpenVR::IVROverlay::_CloseMessageOverlay* CloseMessageOverlay;
    // Creating value type constructor for type: IVROverlay
    IVROverlay(OVR::OpenVR::IVROverlay::_FindOverlay* FindOverlay_ = {}, OVR::OpenVR::IVROverlay::_CreateOverlay* CreateOverlay_ = {}, OVR::OpenVR::IVROverlay::_DestroyOverlay* DestroyOverlay_ = {}, OVR::OpenVR::IVROverlay::_SetHighQualityOverlay* SetHighQualityOverlay_ = {}, OVR::OpenVR::IVROverlay::_GetHighQualityOverlay* GetHighQualityOverlay_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayKey* GetOverlayKey_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayName* GetOverlayName_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayName* SetOverlayName_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayImageData* GetOverlayImageData_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayRenderingPid* SetOverlayRenderingPid_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayRenderingPid* GetOverlayRenderingPid_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayFlag* SetOverlayFlag_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayFlag* GetOverlayFlag_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayColor* SetOverlayColor_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayColor* GetOverlayColor_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayAlpha* SetOverlayAlpha_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayAlpha* GetOverlayAlpha_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayTexelAspect* SetOverlayTexelAspect_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTexelAspect* GetOverlayTexelAspect_ = {}, OVR::OpenVR::IVROverlay::_SetOverlaySortOrder* SetOverlaySortOrder_ = {}, OVR::OpenVR::IVROverlay::_GetOverlaySortOrder* GetOverlaySortOrder_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayWidthInMeters* SetOverlayWidthInMeters_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayWidthInMeters* GetOverlayWidthInMeters_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayTextureColorSpace* SetOverlayTextureColorSpace_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace* GetOverlayTextureColorSpace_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayTextureBounds* SetOverlayTextureBounds_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTextureBounds* GetOverlayTextureBounds_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayRenderModel* GetOverlayRenderModel_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayRenderModel* SetOverlayRenderModel_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTransformType* GetOverlayTransformType_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayTransformAbsolute* SetOverlayTransformAbsolute_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTransformAbsolute* GetOverlayTransformAbsolute_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative_ = {}, OVR::OpenVR::IVROverlay::_ShowOverlay* ShowOverlay_ = {}, OVR::OpenVR::IVROverlay::_HideOverlay* HideOverlay_ = {}, OVR::OpenVR::IVROverlay::_IsOverlayVisible* IsOverlayVisible_ = {}, OVR::OpenVR::IVROverlay::_GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates_ = {}, OVR::OpenVR::IVROverlay::_PollNextOverlayEvent* PollNextOverlayEvent_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayInputMethod* GetOverlayInputMethod_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayInputMethod* SetOverlayInputMethod_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayMouseScale* GetOverlayMouseScale_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayMouseScale* SetOverlayMouseScale_ = {}, OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection* ComputeOverlayIntersection_ = {}, OVR::OpenVR::IVROverlay::_IsHoverTargetOverlay* IsHoverTargetOverlay_ = {}, OVR::OpenVR::IVROverlay::_GetGamepadFocusOverlay* GetGamepadFocusOverlay_ = {}, OVR::OpenVR::IVROverlay::_SetGamepadFocusOverlay* SetGamepadFocusOverlay_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayNeighbor* SetOverlayNeighbor_ = {}, OVR::OpenVR::IVROverlay::_MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayTexture* SetOverlayTexture_ = {}, OVR::OpenVR::IVROverlay::_ClearOverlayTexture* ClearOverlayTexture_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayRaw* SetOverlayRaw_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayFromFile* SetOverlayFromFile_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTexture* GetOverlayTexture_ = {}, OVR::OpenVR::IVROverlay::_ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayTextureSize* GetOverlayTextureSize_ = {}, OVR::OpenVR::IVROverlay::_CreateDashboardOverlay* CreateDashboardOverlay_ = {}, OVR::OpenVR::IVROverlay::_IsDashboardVisible* IsDashboardVisible_ = {}, OVR::OpenVR::IVROverlay::_IsActiveDashboardOverlay* IsActiveDashboardOverlay_ = {}, OVR::OpenVR::IVROverlay::_SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess_ = {}, OVR::OpenVR::IVROverlay::_GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess_ = {}, OVR::OpenVR::IVROverlay::_ShowDashboard* ShowDashboard_ = {}, OVR::OpenVR::IVROverlay::_GetPrimaryDashboardDevice* GetPrimaryDashboardDevice_ = {}, OVR::OpenVR::IVROverlay::_ShowKeyboard* ShowKeyboard_ = {}, OVR::OpenVR::IVROverlay::_ShowKeyboardForOverlay* ShowKeyboardForOverlay_ = {}, OVR::OpenVR::IVROverlay::_GetKeyboardText* GetKeyboardText_ = {}, OVR::OpenVR::IVROverlay::_HideKeyboard* HideKeyboard_ = {}, OVR::OpenVR::IVROverlay::_SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute_ = {}, OVR::OpenVR::IVROverlay::_SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay_ = {}, OVR::OpenVR::IVROverlay::_SetOverlayIntersectionMask* SetOverlayIntersectionMask_ = {}, OVR::OpenVR::IVROverlay::_GetOverlayFlags* GetOverlayFlags_ = {}, OVR::OpenVR::IVROverlay::_ShowMessageOverlay* ShowMessageOverlay_ = {}, OVR::OpenVR::IVROverlay::_CloseMessageOverlay* CloseMessageOverlay_ = {}) : FindOverlay{FindOverlay_}, CreateOverlay{CreateOverlay_}, DestroyOverlay{DestroyOverlay_}, SetHighQualityOverlay{SetHighQualityOverlay_}, GetHighQualityOverlay{GetHighQualityOverlay_}, GetOverlayKey{GetOverlayKey_}, GetOverlayName{GetOverlayName_}, SetOverlayName{SetOverlayName_}, GetOverlayImageData{GetOverlayImageData_}, GetOverlayErrorNameFromEnum{GetOverlayErrorNameFromEnum_}, SetOverlayRenderingPid{SetOverlayRenderingPid_}, GetOverlayRenderingPid{GetOverlayRenderingPid_}, SetOverlayFlag{SetOverlayFlag_}, GetOverlayFlag{GetOverlayFlag_}, SetOverlayColor{SetOverlayColor_}, GetOverlayColor{GetOverlayColor_}, SetOverlayAlpha{SetOverlayAlpha_}, GetOverlayAlpha{GetOverlayAlpha_}, SetOverlayTexelAspect{SetOverlayTexelAspect_}, GetOverlayTexelAspect{GetOverlayTexelAspect_}, SetOverlaySortOrder{SetOverlaySortOrder_}, GetOverlaySortOrder{GetOverlaySortOrder_}, SetOverlayWidthInMeters{SetOverlayWidthInMeters_}, GetOverlayWidthInMeters{GetOverlayWidthInMeters_}, SetOverlayAutoCurveDistanceRangeInMeters{SetOverlayAutoCurveDistanceRangeInMeters_}, GetOverlayAutoCurveDistanceRangeInMeters{GetOverlayAutoCurveDistanceRangeInMeters_}, SetOverlayTextureColorSpace{SetOverlayTextureColorSpace_}, GetOverlayTextureColorSpace{GetOverlayTextureColorSpace_}, SetOverlayTextureBounds{SetOverlayTextureBounds_}, GetOverlayTextureBounds{GetOverlayTextureBounds_}, GetOverlayRenderModel{GetOverlayRenderModel_}, SetOverlayRenderModel{SetOverlayRenderModel_}, GetOverlayTransformType{GetOverlayTransformType_}, SetOverlayTransformAbsolute{SetOverlayTransformAbsolute_}, GetOverlayTransformAbsolute{GetOverlayTransformAbsolute_}, SetOverlayTransformTrackedDeviceRelative{SetOverlayTransformTrackedDeviceRelative_}, GetOverlayTransformTrackedDeviceRelative{GetOverlayTransformTrackedDeviceRelative_}, SetOverlayTransformTrackedDeviceComponent{SetOverlayTransformTrackedDeviceComponent_}, GetOverlayTransformTrackedDeviceComponent{GetOverlayTransformTrackedDeviceComponent_}, GetOverlayTransformOverlayRelative{GetOverlayTransformOverlayRelative_}, SetOverlayTransformOverlayRelative{SetOverlayTransformOverlayRelative_}, ShowOverlay{ShowOverlay_}, HideOverlay{HideOverlay_}, IsOverlayVisible{IsOverlayVisible_}, GetTransformForOverlayCoordinates{GetTransformForOverlayCoordinates_}, PollNextOverlayEvent{PollNextOverlayEvent_}, GetOverlayInputMethod{GetOverlayInputMethod_}, SetOverlayInputMethod{SetOverlayInputMethod_}, GetOverlayMouseScale{GetOverlayMouseScale_}, SetOverlayMouseScale{SetOverlayMouseScale_}, ComputeOverlayIntersection{ComputeOverlayIntersection_}, IsHoverTargetOverlay{IsHoverTargetOverlay_}, GetGamepadFocusOverlay{GetGamepadFocusOverlay_}, SetGamepadFocusOverlay{SetGamepadFocusOverlay_}, SetOverlayNeighbor{SetOverlayNeighbor_}, MoveGamepadFocusToNeighbor{MoveGamepadFocusToNeighbor_}, SetOverlayDualAnalogTransform{SetOverlayDualAnalogTransform_}, GetOverlayDualAnalogTransform{GetOverlayDualAnalogTransform_}, SetOverlayTexture{SetOverlayTexture_}, ClearOverlayTexture{ClearOverlayTexture_}, SetOverlayRaw{SetOverlayRaw_}, SetOverlayFromFile{SetOverlayFromFile_}, GetOverlayTexture{GetOverlayTexture_}, ReleaseNativeOverlayHandle{ReleaseNativeOverlayHandle_}, GetOverlayTextureSize{GetOverlayTextureSize_}, CreateDashboardOverlay{CreateDashboardOverlay_}, IsDashboardVisible{IsDashboardVisible_}, IsActiveDashboardOverlay{IsActiveDashboardOverlay_}, SetDashboardOverlaySceneProcess{SetDashboardOverlaySceneProcess_}, GetDashboardOverlaySceneProcess{GetDashboardOverlaySceneProcess_}, ShowDashboard{ShowDashboard_}, GetPrimaryDashboardDevice{GetPrimaryDashboardDevice_}, ShowKeyboard{ShowKeyboard_}, ShowKeyboardForOverlay{ShowKeyboardForOverlay_}, GetKeyboardText{GetKeyboardText_}, HideKeyboard{HideKeyboard_}, SetKeyboardTransformAbsolute{SetKeyboardTransformAbsolute_}, SetKeyboardPositionForOverlay{SetKeyboardPositionForOverlay_}, SetOverlayIntersectionMask{SetOverlayIntersectionMask_}, GetOverlayFlags{GetOverlayFlags_}, ShowMessageOverlay{ShowMessageOverlay_}, CloseMessageOverlay{CloseMessageOverlay_} {}
  }; // OVR.OpenVR.IVROverlay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay, "OVR.OpenVR", "IVROverlay");
#pragma pack(pop)
