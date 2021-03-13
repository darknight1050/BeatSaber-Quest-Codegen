// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.OpenVR
#include "OVR/OpenVR/OpenVR.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRSystem
  class CVRSystem;
  // Forward declaring type: CVRChaperone
  class CVRChaperone;
  // Forward declaring type: CVRChaperoneSetup
  class CVRChaperoneSetup;
  // Forward declaring type: CVRCompositor
  class CVRCompositor;
  // Forward declaring type: CVROverlay
  class CVROverlay;
  // Forward declaring type: CVRRenderModels
  class CVRRenderModels;
  // Forward declaring type: CVRExtendedDisplay
  class CVRExtendedDisplay;
  // Forward declaring type: CVRSettings
  class CVRSettings;
  // Forward declaring type: CVRApplications
  class CVRApplications;
  // Forward declaring type: CVRScreenshots
  class CVRScreenshots;
  // Forward declaring type: CVRTrackedCamera
  class CVRTrackedCamera;
  // Forward declaring type: CVRInput
  class CVRInput;
  // Forward declaring type: CVRSpatialAnchors
  class CVRSpatialAnchors;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.OpenVR/COpenVRContext
  // [] Offset: FFFFFFFF
  class OpenVR::COpenVRContext : public ::Il2CppObject {
    public:
    // private OVR.OpenVR.CVRSystem m_pVRSystem
    // Size: 0x8
    // Offset: 0x10
    OVR::OpenVR::CVRSystem* m_pVRSystem;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRSystem*) == 0x8);
    // private OVR.OpenVR.CVRChaperone m_pVRChaperone
    // Size: 0x8
    // Offset: 0x18
    OVR::OpenVR::CVRChaperone* m_pVRChaperone;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRChaperone*) == 0x8);
    // private OVR.OpenVR.CVRChaperoneSetup m_pVRChaperoneSetup
    // Size: 0x8
    // Offset: 0x20
    OVR::OpenVR::CVRChaperoneSetup* m_pVRChaperoneSetup;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRChaperoneSetup*) == 0x8);
    // private OVR.OpenVR.CVRCompositor m_pVRCompositor
    // Size: 0x8
    // Offset: 0x28
    OVR::OpenVR::CVRCompositor* m_pVRCompositor;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRCompositor*) == 0x8);
    // private OVR.OpenVR.CVROverlay m_pVROverlay
    // Size: 0x8
    // Offset: 0x30
    OVR::OpenVR::CVROverlay* m_pVROverlay;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVROverlay*) == 0x8);
    // private OVR.OpenVR.CVRRenderModels m_pVRRenderModels
    // Size: 0x8
    // Offset: 0x38
    OVR::OpenVR::CVRRenderModels* m_pVRRenderModels;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRRenderModels*) == 0x8);
    // private OVR.OpenVR.CVRExtendedDisplay m_pVRExtendedDisplay
    // Size: 0x8
    // Offset: 0x40
    OVR::OpenVR::CVRExtendedDisplay* m_pVRExtendedDisplay;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRExtendedDisplay*) == 0x8);
    // private OVR.OpenVR.CVRSettings m_pVRSettings
    // Size: 0x8
    // Offset: 0x48
    OVR::OpenVR::CVRSettings* m_pVRSettings;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRSettings*) == 0x8);
    // private OVR.OpenVR.CVRApplications m_pVRApplications
    // Size: 0x8
    // Offset: 0x50
    OVR::OpenVR::CVRApplications* m_pVRApplications;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRApplications*) == 0x8);
    // private OVR.OpenVR.CVRScreenshots m_pVRScreenshots
    // Size: 0x8
    // Offset: 0x58
    OVR::OpenVR::CVRScreenshots* m_pVRScreenshots;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRScreenshots*) == 0x8);
    // private OVR.OpenVR.CVRTrackedCamera m_pVRTrackedCamera
    // Size: 0x8
    // Offset: 0x60
    OVR::OpenVR::CVRTrackedCamera* m_pVRTrackedCamera;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRTrackedCamera*) == 0x8);
    // private OVR.OpenVR.CVRInput m_pVRInput
    // Size: 0x8
    // Offset: 0x68
    OVR::OpenVR::CVRInput* m_pVRInput;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRInput*) == 0x8);
    // private OVR.OpenVR.CVRSpatialAnchors m_pVRSpatialAnchors
    // Size: 0x8
    // Offset: 0x70
    OVR::OpenVR::CVRSpatialAnchors* m_pVRSpatialAnchors;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::CVRSpatialAnchors*) == 0x8);
    // Creating value type constructor for type: COpenVRContext
    COpenVRContext(OVR::OpenVR::CVRSystem* m_pVRSystem_ = {}, OVR::OpenVR::CVRChaperone* m_pVRChaperone_ = {}, OVR::OpenVR::CVRChaperoneSetup* m_pVRChaperoneSetup_ = {}, OVR::OpenVR::CVRCompositor* m_pVRCompositor_ = {}, OVR::OpenVR::CVROverlay* m_pVROverlay_ = {}, OVR::OpenVR::CVRRenderModels* m_pVRRenderModels_ = {}, OVR::OpenVR::CVRExtendedDisplay* m_pVRExtendedDisplay_ = {}, OVR::OpenVR::CVRSettings* m_pVRSettings_ = {}, OVR::OpenVR::CVRApplications* m_pVRApplications_ = {}, OVR::OpenVR::CVRScreenshots* m_pVRScreenshots_ = {}, OVR::OpenVR::CVRTrackedCamera* m_pVRTrackedCamera_ = {}, OVR::OpenVR::CVRInput* m_pVRInput_ = {}, OVR::OpenVR::CVRSpatialAnchors* m_pVRSpatialAnchors_ = {}) noexcept : m_pVRSystem{m_pVRSystem_}, m_pVRChaperone{m_pVRChaperone_}, m_pVRChaperoneSetup{m_pVRChaperoneSetup_}, m_pVRCompositor{m_pVRCompositor_}, m_pVROverlay{m_pVROverlay_}, m_pVRRenderModels{m_pVRRenderModels_}, m_pVRExtendedDisplay{m_pVRExtendedDisplay_}, m_pVRSettings{m_pVRSettings_}, m_pVRApplications{m_pVRApplications_}, m_pVRScreenshots{m_pVRScreenshots_}, m_pVRTrackedCamera{m_pVRTrackedCamera_}, m_pVRInput{m_pVRInput_}, m_pVRSpatialAnchors{m_pVRSpatialAnchors_} {}
    // public System.Void Clear()
    // Offset: 0x113319C
    void Clear();
    // private System.Void CheckClear()
    // Offset: 0x1133224
    void CheckClear();
    // public OVR.OpenVR.CVRSystem VRSystem()
    // Offset: 0x1132094
    OVR::OpenVR::CVRSystem* VRSystem();
    // public OVR.OpenVR.CVRChaperone VRChaperone()
    // Offset: 0x11321BC
    OVR::OpenVR::CVRChaperone* VRChaperone();
    // public OVR.OpenVR.CVRChaperoneSetup VRChaperoneSetup()
    // Offset: 0x11322E4
    OVR::OpenVR::CVRChaperoneSetup* VRChaperoneSetup();
    // public OVR.OpenVR.CVRCompositor VRCompositor()
    // Offset: 0x113240C
    OVR::OpenVR::CVRCompositor* VRCompositor();
    // public OVR.OpenVR.CVROverlay VROverlay()
    // Offset: 0x1132534
    OVR::OpenVR::CVROverlay* VROverlay();
    // public OVR.OpenVR.CVRRenderModels VRRenderModels()
    // Offset: 0x113265C
    OVR::OpenVR::CVRRenderModels* VRRenderModels();
    // public OVR.OpenVR.CVRExtendedDisplay VRExtendedDisplay()
    // Offset: 0x1132784
    OVR::OpenVR::CVRExtendedDisplay* VRExtendedDisplay();
    // public OVR.OpenVR.CVRSettings VRSettings()
    // Offset: 0x11328AC
    OVR::OpenVR::CVRSettings* VRSettings();
    // public OVR.OpenVR.CVRApplications VRApplications()
    // Offset: 0x11329D4
    OVR::OpenVR::CVRApplications* VRApplications();
    // public OVR.OpenVR.CVRScreenshots VRScreenshots()
    // Offset: 0x1132AFC
    OVR::OpenVR::CVRScreenshots* VRScreenshots();
    // public OVR.OpenVR.CVRTrackedCamera VRTrackedCamera()
    // Offset: 0x1132C24
    OVR::OpenVR::CVRTrackedCamera* VRTrackedCamera();
    // public OVR.OpenVR.CVRInput VRInput()
    // Offset: 0x1132D4C
    OVR::OpenVR::CVRInput* VRInput();
    // public OVR.OpenVR.CVRSpatialAnchors VRSpatialAnchors()
    // Offset: 0x1132E74
    OVR::OpenVR::CVRSpatialAnchors* VRSpatialAnchors();
    // public System.Void .ctor()
    // Offset: 0x1131FFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpenVR::COpenVRContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::OpenVR::COpenVRContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpenVR::COpenVRContext*, creationType>()));
    }
  }; // OVR.OpenVR.OpenVR/COpenVRContext
  #pragma pack(pop)
  static check_size<sizeof(OpenVR::COpenVRContext), 112 + sizeof(OVR::OpenVR::CVRSpatialAnchors*)> __OVR_OpenVR_OpenVR_COpenVRContextSizeCheck;
  static_assert(sizeof(OpenVR::COpenVRContext) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::OpenVR::COpenVRContext*, "OVR.OpenVR", "OpenVR/COpenVRContext");
