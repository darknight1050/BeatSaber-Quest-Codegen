// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: SteamVR_RenderModel
#include "GlobalNamespace/SteamVR_RenderModel.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_RenderModel/RenderModelInterfaceHolder
  class SteamVR_RenderModel::RenderModelInterfaceHolder : public ::CsObject, public System::IDisposable {
    public:
    // private System.Boolean needsShutdown
    // Offset: 0x10
    bool needsShutdown;
    // private System.Boolean failedLoadInterface
    // Offset: 0x11
    bool failedLoadInterface;
    // private Valve.VR.CVRRenderModels _instance
    // Offset: 0x18
    Valve::VR::CVRRenderModels* instance;
    // public Valve.VR.CVRRenderModels get_instance()
    // Offset: 0xD7959C
    Valve::VR::CVRRenderModels* get_instance();
    // public System.Void Dispose()
    // Offset: 0xD7BD40
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0xD78ED8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SteamVR_RenderModel::RenderModelInterfaceHolder* New_ctor();
  }; // SteamVR_RenderModel/RenderModelInterfaceHolder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_RenderModel::RenderModelInterfaceHolder*, "", "SteamVR_RenderModel/RenderModelInterfaceHolder");
#pragma pack(pop)
