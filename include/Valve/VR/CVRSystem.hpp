// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
  // Forward declaring type: EVREye
  struct EVREye;
  // Forward declaring type: DistortionCoordinates_t
  struct DistortionCoordinates_t;
  // Skipping declaration: HmdMatrix34_t because it is already included!
  // Forward declaring type: ETextureType
  struct ETextureType;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
  // Forward declaring type: EDeviceActivityLevel
  struct EDeviceActivityLevel;
  // Forward declaring type: ETrackedControllerRole
  struct ETrackedControllerRole;
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
  // Forward declaring type: ETrackedPropertyError
  struct ETrackedPropertyError;
  // Forward declaring type: VREvent_t
  struct VREvent_t;
  // Forward declaring type: EVREventType
  struct EVREventType;
  // Forward declaring type: HiddenAreaMesh_t
  struct HiddenAreaMesh_t;
  // Forward declaring type: EHiddenAreaMeshType
  struct EHiddenAreaMeshType;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: EVRButtonId
  struct EVRButtonId;
  // Forward declaring type: EVRControllerAxisType
  struct EVRControllerAxisType;
  // Forward declaring type: EVRFirmwareError
  struct EVRFirmwareError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x188
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRSystem
  // [] Offset: FFFFFFFF
  class CVRSystem : public ::Il2CppObject {
    public:
    // Nested type: Valve::VR::CVRSystem::_PollNextEventPacked
    class _PollNextEventPacked;
    // Nested type: Valve::VR::CVRSystem::PollNextEventUnion
    struct PollNextEventUnion;
    // Nested type: Valve::VR::CVRSystem::_GetControllerStatePacked
    class _GetControllerStatePacked;
    // Nested type: Valve::VR::CVRSystem::GetControllerStateUnion
    struct GetControllerStateUnion;
    // Nested type: Valve::VR::CVRSystem::_GetControllerStateWithPosePacked
    class _GetControllerStateWithPosePacked;
    // Nested type: Valve::VR::CVRSystem::GetControllerStateWithPoseUnion
    struct GetControllerStateWithPoseUnion;
    // private Valve.VR.IVRSystem FnTable
    // Size: 0x178
    // Offset: 0x10
    Valve::VR::IVRSystem FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRSystem) == 0x178);
    // Creating value type constructor for type: CVRSystem
    CVRSystem(Valve::VR::IVRSystem FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRSystem
    constexpr operator Valve::VR::IVRSystem() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x1506760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSystem* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSystem*, creationType>(pInterface)));
    }
    // public System.Void GetRecommendedRenderTargetSize(ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x1506868
    void GetRecommendedRenderTargetSize(uint& pnWidth, uint& pnHeight);
    // public Valve.VR.HmdMatrix44_t GetProjectionMatrix(Valve.VR.EVREye eEye, System.Single fNearZ, System.Single fFarZ)
    // Offset: 0x150688C
    Valve::VR::HmdMatrix44_t GetProjectionMatrix(Valve::VR::EVREye eEye, float fNearZ, float fFarZ);
    // public System.Void GetProjectionRaw(Valve.VR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom)
    // Offset: 0x15068A8
    void GetProjectionRaw(Valve::VR::EVREye eEye, float& pfLeft, float& pfRight, float& pfTop, float& pfBottom);
    // public System.Boolean ComputeDistortion(Valve.VR.EVREye eEye, System.Single fU, System.Single fV, ref Valve.VR.DistortionCoordinates_t pDistortionCoordinates)
    // Offset: 0x15068D4
    bool ComputeDistortion(Valve::VR::EVREye eEye, float fU, float fV, Valve::VR::DistortionCoordinates_t& pDistortionCoordinates);
    // public Valve.VR.HmdMatrix34_t GetEyeToHeadTransform(Valve.VR.EVREye eEye)
    // Offset: 0x15068F0
    Valve::VR::HmdMatrix34_t GetEyeToHeadTransform(Valve::VR::EVREye eEye);
    // public System.Boolean GetTimeSinceLastVsync(ref System.Single pfSecondsSinceLastVsync, ref System.UInt64 pulFrameCounter)
    // Offset: 0x150690C
    bool GetTimeSinceLastVsync(float& pfSecondsSinceLastVsync, uint64_t& pulFrameCounter);
    // public System.Int32 GetD3D9AdapterIndex()
    // Offset: 0x1506930
    int GetD3D9AdapterIndex();
    // public System.Void GetDXGIOutputInfo(ref System.Int32 pnAdapterIndex)
    // Offset: 0x150694C
    void GetDXGIOutputInfo(int& pnAdapterIndex);
    // public System.Void GetOutputDevice(ref System.UInt64 pnDevice, Valve.VR.ETextureType textureType, System.IntPtr pInstance)
    // Offset: 0x150696C
    void GetOutputDevice(uint64_t& pnDevice, Valve::VR::ETextureType textureType, System::IntPtr pInstance);
    // public System.Boolean IsDisplayOnDesktop()
    // Offset: 0x150698C
    bool IsDisplayOnDesktop();
    // public System.Boolean SetDisplayVisibility(System.Boolean bIsVisibleOnDesktop)
    // Offset: 0x15069A8
    bool SetDisplayVisibility(bool bIsVisibleOnDesktop);
    // public System.Void GetDeviceToAbsoluteTrackingPose(Valve.VR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsToPhotonsFromNow, Valve.VR.TrackedDevicePose_t[] pTrackedDevicePoseArray)
    // Offset: 0x15069C8
    void GetDeviceToAbsoluteTrackingPose(Valve::VR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, ::Array<Valve::VR::TrackedDevicePose_t>* pTrackedDevicePoseArray);
    // public System.Void ResetSeatedZeroPose()
    // Offset: 0x15069F0
    void ResetSeatedZeroPose();
    // public Valve.VR.HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose()
    // Offset: 0x1506A0C
    Valve::VR::HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose();
    // public Valve.VR.HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose()
    // Offset: 0x1506A28
    Valve::VR::HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose();
    // public System.UInt32 GetSortedTrackedDeviceIndicesOfClass(Valve.VR.ETrackedDeviceClass eTrackedDeviceClass, System.UInt32[] punTrackedDeviceIndexArray, System.UInt32 unRelativeToTrackedDeviceIndex)
    // Offset: 0x1506A44
    uint GetSortedTrackedDeviceIndicesOfClass(Valve::VR::ETrackedDeviceClass eTrackedDeviceClass, ::Array<uint>* punTrackedDeviceIndexArray, uint unRelativeToTrackedDeviceIndex);
    // public Valve.VR.EDeviceActivityLevel GetTrackedDeviceActivityLevel(System.UInt32 unDeviceId)
    // Offset: 0x1506A70
    Valve::VR::EDeviceActivityLevel GetTrackedDeviceActivityLevel(uint unDeviceId);
    // public System.Void ApplyTransform(ref Valve.VR.TrackedDevicePose_t pOutputPose, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose, ref Valve.VR.HmdMatrix34_t pTransform)
    // Offset: 0x1506A8C
    void ApplyTransform(Valve::VR::TrackedDevicePose_t& pOutputPose, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose, Valve::VR::HmdMatrix34_t& pTransform);
    // public System.UInt32 GetTrackedDeviceIndexForControllerRole(Valve.VR.ETrackedControllerRole unDeviceType)
    // Offset: 0x1506AA8
    uint GetTrackedDeviceIndexForControllerRole(Valve::VR::ETrackedControllerRole unDeviceType);
    // public Valve.VR.ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(System.UInt32 unDeviceIndex)
    // Offset: 0x1506AC4
    Valve::VR::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(uint unDeviceIndex);
    // public Valve.VR.ETrackedDeviceClass GetTrackedDeviceClass(System.UInt32 unDeviceIndex)
    // Offset: 0x1506AE0
    Valve::VR::ETrackedDeviceClass GetTrackedDeviceClass(uint unDeviceIndex);
    // public System.Boolean IsTrackedDeviceConnected(System.UInt32 unDeviceIndex)
    // Offset: 0x1506AFC
    bool IsTrackedDeviceConnected(uint unDeviceIndex);
    // public System.Boolean GetBoolTrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1506B18
    bool GetBoolTrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.Single GetFloatTrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1506B34
    float GetFloatTrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.Int32 GetInt32TrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1506B50
    int GetInt32TrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.UInt64 GetUint64TrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1506B6C
    uint64_t GetUint64TrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public Valve.VR.HmdMatrix34_t GetMatrix34TrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1506B88
    Valve::VR::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, Valve::VR::ETrackedPropertyError& pError);
    // public System.UInt32 GetArrayTrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, System.UInt32 propType, System.IntPtr pBuffer, System.UInt32 unBufferSize, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1506BA4
    uint GetArrayTrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, uint propType, System::IntPtr pBuffer, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError);
    // public System.UInt32 GetStringTrackedDeviceProperty(System.UInt32 unDeviceIndex, Valve.VR.ETrackedDeviceProperty prop, System.Text.StringBuilder pchValue, System.UInt32 unBufferSize, ref Valve.VR.ETrackedPropertyError pError)
    // Offset: 0x1506BC0
    uint GetStringTrackedDeviceProperty(uint unDeviceIndex, Valve::VR::ETrackedDeviceProperty prop, System::Text::StringBuilder* pchValue, uint unBufferSize, Valve::VR::ETrackedPropertyError& pError);
    // public System.String GetPropErrorNameFromEnum(Valve.VR.ETrackedPropertyError error)
    // Offset: 0x1506BDC
    ::Il2CppString* GetPropErrorNameFromEnum(Valve::VR::ETrackedPropertyError error);
    // public System.Boolean PollNextEvent(ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x1506C70
    bool PollNextEvent(Valve::VR::VREvent_t& pEvent, uint uncbVREvent);
    // public System.Boolean PollNextEventWithPose(Valve.VR.ETrackingUniverseOrigin eOrigin, ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1507058
    bool PollNextEventWithPose(Valve::VR::ETrackingUniverseOrigin eOrigin, Valve::VR::VREvent_t& pEvent, uint uncbVREvent, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.String GetEventTypeNameFromEnum(Valve.VR.EVREventType eType)
    // Offset: 0x1507074
    ::Il2CppString* GetEventTypeNameFromEnum(Valve::VR::EVREventType eType);
    // public Valve.VR.HiddenAreaMesh_t GetHiddenAreaMesh(Valve.VR.EVREye eEye, Valve.VR.EHiddenAreaMeshType type)
    // Offset: 0x1507108
    Valve::VR::HiddenAreaMesh_t GetHiddenAreaMesh(Valve::VR::EVREye eEye, Valve::VR::EHiddenAreaMeshType type);
    // public System.Boolean GetControllerState(System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize)
    // Offset: 0x1507124
    bool GetControllerState(uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize);
    // public System.Boolean GetControllerStateWithPose(Valve.VR.ETrackingUniverseOrigin eOrigin, System.UInt32 unControllerDeviceIndex, ref Valve.VR.VRControllerState_t pControllerState, System.UInt32 unControllerStateSize, ref Valve.VR.TrackedDevicePose_t pTrackedDevicePose)
    // Offset: 0x1507558
    bool GetControllerStateWithPose(Valve::VR::ETrackingUniverseOrigin eOrigin, uint unControllerDeviceIndex, Valve::VR::VRControllerState_t& pControllerState, uint unControllerStateSize, Valve::VR::TrackedDevicePose_t& pTrackedDevicePose);
    // public System.Void TriggerHapticPulse(System.UInt32 unControllerDeviceIndex, System.UInt32 unAxisId, System.Char usDurationMicroSec)
    // Offset: 0x1507A04
    void TriggerHapticPulse(uint unControllerDeviceIndex, uint unAxisId, ::Il2CppChar usDurationMicroSec);
    // public System.String GetButtonIdNameFromEnum(Valve.VR.EVRButtonId eButtonId)
    // Offset: 0x1507A20
    ::Il2CppString* GetButtonIdNameFromEnum(Valve::VR::EVRButtonId eButtonId);
    // public System.String GetControllerAxisTypeNameFromEnum(Valve.VR.EVRControllerAxisType eAxisType)
    // Offset: 0x1507AB4
    ::Il2CppString* GetControllerAxisTypeNameFromEnum(Valve::VR::EVRControllerAxisType eAxisType);
    // public System.Boolean IsInputAvailable()
    // Offset: 0x1507B48
    bool IsInputAvailable();
    // public System.Boolean IsSteamVRDrawingControllers()
    // Offset: 0x1507B64
    bool IsSteamVRDrawingControllers();
    // public System.Boolean ShouldApplicationPause()
    // Offset: 0x1507B80
    bool ShouldApplicationPause();
    // public System.Boolean ShouldApplicationReduceRenderingWork()
    // Offset: 0x1507B9C
    bool ShouldApplicationReduceRenderingWork();
    // public System.UInt32 DriverDebugRequest(System.UInt32 unDeviceIndex, System.String pchRequest, System.Text.StringBuilder pchResponseBuffer, System.UInt32 unResponseBufferSize)
    // Offset: 0x1507BB8
    uint DriverDebugRequest(uint unDeviceIndex, ::Il2CppString* pchRequest, System::Text::StringBuilder* pchResponseBuffer, uint unResponseBufferSize);
    // public Valve.VR.EVRFirmwareError PerformFirmwareUpdate(System.UInt32 unDeviceIndex)
    // Offset: 0x1507BD4
    Valve::VR::EVRFirmwareError PerformFirmwareUpdate(uint unDeviceIndex);
    // public System.Void AcknowledgeQuit_Exiting()
    // Offset: 0x1507BF0
    void AcknowledgeQuit_Exiting();
    // public System.Void AcknowledgeQuit_UserPrompt()
    // Offset: 0x1507C0C
    void AcknowledgeQuit_UserPrompt();
  }; // Valve.VR.CVRSystem
  #pragma pack(pop)
  static check_size<sizeof(CVRSystem), 16 + sizeof(Valve::VR::IVRSystem)> __Valve_VR_CVRSystemSizeCheck;
  static_assert(sizeof(CVRSystem) == 0x188);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRSystem*, "Valve.VR", "CVRSystem");
