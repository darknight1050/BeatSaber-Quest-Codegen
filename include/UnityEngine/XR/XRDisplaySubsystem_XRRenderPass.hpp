// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.RenderTextureDescriptor
#include "UnityEngine/RenderTextureDescriptor.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem
#include "UnityEngine/XR/XRDisplaySubsystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.Rendering.RenderTargetIdentifier
#include "UnityEngine/Rendering/RenderTargetIdentifier.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x74
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CC99E4
  // [NativeHeaderAttribute] Offset: CC99E4
  // [NativeHeaderAttribute] Offset: CC99E4
  struct XRDisplaySubsystem::XRRenderPass/*, public System::ValueType*/ {
    public:
    // private System.IntPtr displaySubsystemInstance
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr displaySubsystemInstance;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Int32 renderPassIndex
    // Size: 0x4
    // Offset: 0x8
    int renderPassIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: renderPassIndex and: renderTarget
    char __padding1[0x4] = {};
    // public UnityEngine.Rendering.RenderTargetIdentifier renderTarget
    // Size: 0x24
    // Offset: 0x10
    UnityEngine::Rendering::RenderTargetIdentifier renderTarget;
    // Field size check
    static_assert(sizeof(UnityEngine::Rendering::RenderTargetIdentifier) == 0x24);
    // Padding between fields: renderTarget and: renderTargetDesc
    char __padding2[0x4] = {};
    // public UnityEngine.RenderTextureDescriptor renderTargetDesc
    // Size: 0x34
    // Offset: 0x38
    UnityEngine::RenderTextureDescriptor renderTargetDesc;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTextureDescriptor) == 0x34);
    // public System.Boolean shouldFillOutDepth
    // Size: 0x1
    // Offset: 0x6C
    bool shouldFillOutDepth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shouldFillOutDepth and: cullingPassIndex
    char __padding4[0x3] = {};
    // public System.Int32 cullingPassIndex
    // Size: 0x4
    // Offset: 0x70
    int cullingPassIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: XRRenderPass
    constexpr XRRenderPass(System::IntPtr displaySubsystemInstance_ = {}, int renderPassIndex_ = {}, UnityEngine::Rendering::RenderTargetIdentifier renderTarget_ = {}, UnityEngine::RenderTextureDescriptor renderTargetDesc_ = {}, bool shouldFillOutDepth_ = {}, int cullingPassIndex_ = {}) noexcept : displaySubsystemInstance{displaySubsystemInstance_}, renderPassIndex{renderPassIndex_}, renderTarget{renderTarget_}, renderTargetDesc{renderTargetDesc_}, shouldFillOutDepth{shouldFillOutDepth_}, cullingPassIndex{cullingPassIndex_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
  #pragma pack(pop)
  static check_size<sizeof(XRDisplaySubsystem::XRRenderPass), 112 + sizeof(int)> __UnityEngine_XR_XRDisplaySubsystem_XRRenderPassSizeCheck;
  static_assert(sizeof(XRDisplaySubsystem::XRRenderPass) == 0x74);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRDisplaySubsystem::XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
