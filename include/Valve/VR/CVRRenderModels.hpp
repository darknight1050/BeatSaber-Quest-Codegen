// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Valve.VR.IVRRenderModels
#include "Valve/VR/IVRRenderModels.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRRenderModelError
  struct EVRRenderModelError;
  // Forward declaring type: VRControllerState_t
  struct VRControllerState_t;
  // Forward declaring type: RenderModel_ControllerMode_State_t
  struct RenderModel_ControllerMode_State_t;
  // Forward declaring type: RenderModel_ComponentState_t
  struct RenderModel_ComponentState_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.CVRRenderModels
  class CVRRenderModels : public ::CsObject {
    public:
    // Nested type: Valve::VR::CVRRenderModels::_GetComponentStatePacked
    class _GetComponentStatePacked;
    // Nested type: Valve::VR::CVRRenderModels::GetComponentStateUnion
    struct GetComponentStateUnion;
    // private Valve.VR.IVRRenderModels FnTable
    // Offset: 0x10
    Valve::VR::IVRRenderModels FnTable;
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0xFCEF40
    static CVRRenderModels* New_ctor(System::IntPtr pInterface);
    // public Valve.VR.EVRRenderModelError LoadRenderModel_Async(System.String pchRenderModelName, System.IntPtr ppRenderModel)
    // Offset: 0xFCF054
    Valve::VR::EVRRenderModelError LoadRenderModel_Async(::CsString* pchRenderModelName, System::IntPtr& ppRenderModel);
    // public System.Void FreeRenderModel(System.IntPtr pRenderModel)
    // Offset: 0xFCF070
    void FreeRenderModel(System::IntPtr pRenderModel);
    // public Valve.VR.EVRRenderModelError LoadTexture_Async(System.Int32 textureId, System.IntPtr ppTexture)
    // Offset: 0xFCF08C
    Valve::VR::EVRRenderModelError LoadTexture_Async(int textureId, System::IntPtr& ppTexture);
    // public System.Void FreeTexture(System.IntPtr pTexture)
    // Offset: 0xFCF0A8
    void FreeTexture(System::IntPtr pTexture);
    // public Valve.VR.EVRRenderModelError LoadTextureD3D11_Async(System.Int32 textureId, System.IntPtr pD3D11Device, System.IntPtr ppD3D11Texture2D)
    // Offset: 0xFCF0C4
    Valve::VR::EVRRenderModelError LoadTextureD3D11_Async(int textureId, System::IntPtr pD3D11Device, System::IntPtr& ppD3D11Texture2D);
    // public Valve.VR.EVRRenderModelError LoadIntoTextureD3D11_Async(System.Int32 textureId, System.IntPtr pDstTexture)
    // Offset: 0xFCF0E0
    Valve::VR::EVRRenderModelError LoadIntoTextureD3D11_Async(int textureId, System::IntPtr pDstTexture);
    // public System.Void FreeTextureD3D11(System.IntPtr pD3D11Texture2D)
    // Offset: 0xFCF0FC
    void FreeTextureD3D11(System::IntPtr pD3D11Texture2D);
    // public System.UInt32 GetRenderModelName(System.UInt32 unRenderModelIndex, System.Text.StringBuilder pchRenderModelName, System.UInt32 unRenderModelNameLen)
    // Offset: 0xFCF118
    uint GetRenderModelName(uint unRenderModelIndex, System::Text::StringBuilder* pchRenderModelName, uint unRenderModelNameLen);
    // public System.UInt32 GetRenderModelCount()
    // Offset: 0xFCF134
    uint GetRenderModelCount();
    // public System.UInt32 GetComponentCount(System.String pchRenderModelName)
    // Offset: 0xFCF150
    uint GetComponentCount(::CsString* pchRenderModelName);
    // public System.UInt32 GetComponentName(System.String pchRenderModelName, System.UInt32 unComponentIndex, System.Text.StringBuilder pchComponentName, System.UInt32 unComponentNameLen)
    // Offset: 0xFCF16C
    uint GetComponentName(::CsString* pchRenderModelName, uint unComponentIndex, System::Text::StringBuilder* pchComponentName, uint unComponentNameLen);
    // public System.UInt64 GetComponentButtonMask(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0xFCF188
    uint64_t GetComponentButtonMask(::CsString* pchRenderModelName, ::CsString* pchComponentName);
    // public System.UInt32 GetComponentRenderModelName(System.String pchRenderModelName, System.String pchComponentName, System.Text.StringBuilder pchComponentRenderModelName, System.UInt32 unComponentRenderModelNameLen)
    // Offset: 0xFCF1A4
    uint GetComponentRenderModelName(::CsString* pchRenderModelName, ::CsString* pchComponentName, System::Text::StringBuilder* pchComponentRenderModelName, uint unComponentRenderModelNameLen);
    // public System.Boolean GetComponentState(System.String pchRenderModelName, System.String pchComponentName, Valve.VR.VRControllerState_t pControllerState, Valve.VR.RenderModel_ControllerMode_State_t pState, Valve.VR.RenderModel_ComponentState_t pComponentState)
    // Offset: 0xFCF1C0
    bool GetComponentState(::CsString* pchRenderModelName, ::CsString* pchComponentName, Valve::VR::VRControllerState_t& pControllerState, Valve::VR::RenderModel_ControllerMode_State_t& pState, Valve::VR::RenderModel_ComponentState_t& pComponentState);
    // public System.Boolean RenderModelHasComponent(System.String pchRenderModelName, System.String pchComponentName)
    // Offset: 0xFCF774
    bool RenderModelHasComponent(::CsString* pchRenderModelName, ::CsString* pchComponentName);
    // public System.UInt32 GetRenderModelThumbnailURL(System.String pchRenderModelName, System.Text.StringBuilder pchThumbnailURL, System.UInt32 unThumbnailURLLen, Valve.VR.EVRRenderModelError peError)
    // Offset: 0xFCF790
    uint GetRenderModelThumbnailURL(::CsString* pchRenderModelName, System::Text::StringBuilder* pchThumbnailURL, uint unThumbnailURLLen, Valve::VR::EVRRenderModelError& peError);
    // public System.UInt32 GetRenderModelOriginalPath(System.String pchRenderModelName, System.Text.StringBuilder pchOriginalPath, System.UInt32 unOriginalPathLen, Valve.VR.EVRRenderModelError peError)
    // Offset: 0xFCF7AC
    uint GetRenderModelOriginalPath(::CsString* pchRenderModelName, System::Text::StringBuilder* pchOriginalPath, uint unOriginalPathLen, Valve::VR::EVRRenderModelError& peError);
    // public System.String GetRenderModelErrorNameFromEnum(Valve.VR.EVRRenderModelError error)
    // Offset: 0xFCF7C8
    ::CsString* GetRenderModelErrorNameFromEnum(Valve::VR::EVRRenderModelError error);
  }; // Valve.VR.CVRRenderModels
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRRenderModels*, "Valve.VR", "CVRRenderModels");
#pragma pack(pop)
