// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: OVRPlugin/TextureRectMatrixf
#include "GlobalNamespace/OVRPlugin_TextureRectMatrixf.hpp"
// Including type: OVRPlugin/LayerDesc
#include "GlobalNamespace/OVRPlugin_LayerDesc.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: OVRManager/XRDevice
#include "GlobalNamespace/OVRManager.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPose
  struct OVRPose;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVROverlay
  class OVROverlay : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVROverlay::OverlayShape
    struct OverlayShape;
    // Nested type: GlobalNamespace::OVROverlay::OverlayType
    struct OverlayType;
    // Nested type: GlobalNamespace::OVROverlay::ExternalSurfaceObjectCreated
    class ExternalSurfaceObjectCreated;
    // Nested type: GlobalNamespace::OVROverlay::LayerTexture
    struct LayerTexture;
    // Autogenerated type: OVROverlay/OverlayShape
    struct OverlayShape : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OVROverlay/OverlayShape Quad
      static constexpr const int Quad = 0;
      // Get static field: static public OVROverlay/OverlayShape Quad
      static GlobalNamespace::OVROverlay::OverlayShape _get_Quad();
      // Set static field: static public OVROverlay/OverlayShape Quad
      static void _set_Quad(GlobalNamespace::OVROverlay::OverlayShape value);
      // static field const value: static public OVROverlay/OverlayShape Cylinder
      static constexpr const int Cylinder = 1;
      // Get static field: static public OVROverlay/OverlayShape Cylinder
      static GlobalNamespace::OVROverlay::OverlayShape _get_Cylinder();
      // Set static field: static public OVROverlay/OverlayShape Cylinder
      static void _set_Cylinder(GlobalNamespace::OVROverlay::OverlayShape value);
      // static field const value: static public OVROverlay/OverlayShape Cubemap
      static constexpr const int Cubemap = 2;
      // Get static field: static public OVROverlay/OverlayShape Cubemap
      static GlobalNamespace::OVROverlay::OverlayShape _get_Cubemap();
      // Set static field: static public OVROverlay/OverlayShape Cubemap
      static void _set_Cubemap(GlobalNamespace::OVROverlay::OverlayShape value);
      // static field const value: static public OVROverlay/OverlayShape OffcenterCubemap
      static constexpr const int OffcenterCubemap = 4;
      // Get static field: static public OVROverlay/OverlayShape OffcenterCubemap
      static GlobalNamespace::OVROverlay::OverlayShape _get_OffcenterCubemap();
      // Set static field: static public OVROverlay/OverlayShape OffcenterCubemap
      static void _set_OffcenterCubemap(GlobalNamespace::OVROverlay::OverlayShape value);
      // static field const value: static public OVROverlay/OverlayShape Equirect
      static constexpr const int Equirect = 5;
      // Get static field: static public OVROverlay/OverlayShape Equirect
      static GlobalNamespace::OVROverlay::OverlayShape _get_Equirect();
      // Set static field: static public OVROverlay/OverlayShape Equirect
      static void _set_Equirect(GlobalNamespace::OVROverlay::OverlayShape value);
      // Creating value type constructor for type: OverlayShape
      OverlayShape(int value_ = {}) : value{value_} {}
    }; // OVROverlay/OverlayShape
    // Autogenerated type: OVROverlay/OverlayType
    struct OverlayType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public OVROverlay/OverlayType None
      static constexpr const int None = 0;
      // Get static field: static public OVROverlay/OverlayType None
      static GlobalNamespace::OVROverlay::OverlayType _get_None();
      // Set static field: static public OVROverlay/OverlayType None
      static void _set_None(GlobalNamespace::OVROverlay::OverlayType value);
      // static field const value: static public OVROverlay/OverlayType Underlay
      static constexpr const int Underlay = 1;
      // Get static field: static public OVROverlay/OverlayType Underlay
      static GlobalNamespace::OVROverlay::OverlayType _get_Underlay();
      // Set static field: static public OVROverlay/OverlayType Underlay
      static void _set_Underlay(GlobalNamespace::OVROverlay::OverlayType value);
      // static field const value: static public OVROverlay/OverlayType Overlay
      static constexpr const int Overlay = 2;
      // Get static field: static public OVROverlay/OverlayType Overlay
      static GlobalNamespace::OVROverlay::OverlayType _get_Overlay();
      // Set static field: static public OVROverlay/OverlayType Overlay
      static void _set_Overlay(GlobalNamespace::OVROverlay::OverlayType value);
      // Creating value type constructor for type: OverlayType
      OverlayType(int value_ = {}) : value{value_} {}
    }; // OVROverlay/OverlayType
    // public OVROverlay/OverlayType currentOverlayType
    // Offset: 0x18
    GlobalNamespace::OVROverlay::OverlayType currentOverlayType;
    // public System.Boolean isDynamic
    // Offset: 0x1C
    bool isDynamic;
    // public System.Boolean isProtectedContent
    // Offset: 0x1D
    bool isProtectedContent;
    // public UnityEngine.Rect srcRectLeft
    // Offset: 0x20
    UnityEngine::Rect srcRectLeft;
    // public UnityEngine.Rect srcRectRight
    // Offset: 0x30
    UnityEngine::Rect srcRectRight;
    // public UnityEngine.Rect destRectLeft
    // Offset: 0x40
    UnityEngine::Rect destRectLeft;
    // public UnityEngine.Rect destRectRight
    // Offset: 0x50
    UnityEngine::Rect destRectRight;
    // private OVRPlugin/TextureRectMatrixf textureRectMatrix
    // Offset: 0x60
    GlobalNamespace::OVRPlugin::TextureRectMatrixf textureRectMatrix;
    // public System.Boolean overrideTextureRectMatrix
    // Offset: 0xA0
    bool overrideTextureRectMatrix;
    // public System.Boolean overridePerLayerColorScaleAndOffset
    // Offset: 0xA1
    bool overridePerLayerColorScaleAndOffset;
    // public UnityEngine.Vector4 colorScale
    // Offset: 0xA4
    UnityEngine::Vector4 colorScale;
    // public UnityEngine.Vector4 colorOffset
    // Offset: 0xB4
    UnityEngine::Vector4 colorOffset;
    // public System.Boolean useExpensiveSuperSample
    // Offset: 0xC4
    bool useExpensiveSuperSample;
    // public System.Boolean hidden
    // Offset: 0xC5
    bool hidden;
    // public System.Boolean isExternalSurface
    // Offset: 0xC6
    bool isExternalSurface;
    // public System.Int32 externalSurfaceWidth
    // Offset: 0xC8
    int externalSurfaceWidth;
    // public System.Int32 externalSurfaceHeight
    // Offset: 0xCC
    int externalSurfaceHeight;
    // public System.Int32 compositionDepth
    // Offset: 0xD0
    int compositionDepth;
    // public System.Boolean noDepthBufferTesting
    // Offset: 0xD4
    bool noDepthBufferTesting;
    // public OVROverlay/OverlayShape currentOverlayShape
    // Offset: 0xD8
    GlobalNamespace::OVROverlay::OverlayShape currentOverlayShape;
    // private OVROverlay/OverlayShape prevOverlayShape
    // Offset: 0xDC
    GlobalNamespace::OVROverlay::OverlayShape prevOverlayShape;
    // public UnityEngine.Texture[] textures
    // Offset: 0xE0
    ::Array<UnityEngine::Texture*>* textures;
    // protected System.IntPtr[] texturePtrs
    // Offset: 0xE8
    ::Array<System::IntPtr>* texturePtrs;
    // public System.IntPtr externalSurfaceObject
    // Offset: 0xF0
    System::IntPtr externalSurfaceObject;
    // public OVROverlay/ExternalSurfaceObjectCreated externalSurfaceObjectCreated
    // Offset: 0xF8
    GlobalNamespace::OVROverlay::ExternalSurfaceObjectCreated* externalSurfaceObjectCreated;
    // protected System.Boolean isOverridePending
    // Offset: 0x100
    bool isOverridePending;
    // static field const value: static System.Int32 maxInstances
    static constexpr const int maxInstances = 15;
    // Get static field: static System.Int32 maxInstances
    static int _get_maxInstances();
    // Set static field: static System.Int32 maxInstances
    static void _set_maxInstances(int value);
    // Get static field: static public OVROverlay[] instances
    static ::Array<GlobalNamespace::OVROverlay*>* _get_instances();
    // Set static field: static public OVROverlay[] instances
    static void _set_instances(::Array<GlobalNamespace::OVROverlay*>* value);
    // Get static field: static private UnityEngine.Material tex2DMaterial
    static UnityEngine::Material* _get_tex2DMaterial();
    // Set static field: static private UnityEngine.Material tex2DMaterial
    static void _set_tex2DMaterial(UnityEngine::Material* value);
    // Get static field: static private UnityEngine.Material cubeMaterial
    static UnityEngine::Material* _get_cubeMaterial();
    // Set static field: static private UnityEngine.Material cubeMaterial
    static void _set_cubeMaterial(UnityEngine::Material* value);
    // private OVROverlay/LayerTexture[] layerTextures
    // Offset: 0x108
    ::Array<GlobalNamespace::OVROverlay::LayerTexture>* layerTextures;
    // private OVRPlugin/LayerDesc layerDesc
    // Offset: 0x110
    GlobalNamespace::OVRPlugin::LayerDesc layerDesc;
    // private System.Int32 stageCount
    // Offset: 0x150
    int stageCount;
    // private System.Int32 layerIndex
    // Offset: 0x154
    int layerIndex;
    // private System.Int32 layerId
    // Offset: 0x158
    int layerId;
    // private System.Runtime.InteropServices.GCHandle layerIdHandle
    // Offset: 0x15C
    System::Runtime::InteropServices::GCHandle layerIdHandle;
    // private System.IntPtr layerIdPtr
    // Offset: 0x160
    System::IntPtr layerIdPtr;
    // private System.Int32 frameIndex
    // Offset: 0x168
    int frameIndex;
    // private System.Int32 prevFrameIndex
    // Offset: 0x16C
    int prevFrameIndex;
    // private UnityEngine.Renderer rend
    // Offset: 0x170
    UnityEngine::Renderer* rend;
    // private System.UInt64 OpenVROverlayHandle
    // Offset: 0x178
    uint64_t OpenVROverlayHandle;
    // private UnityEngine.Vector4 OpenVRUVOffsetAndScale
    // Offset: 0x180
    UnityEngine::Vector4 OpenVRUVOffsetAndScale;
    // private UnityEngine.Vector2 OpenVRMouseScale
    // Offset: 0x190
    UnityEngine::Vector2 OpenVRMouseScale;
    // private OVRManager/XRDevice constructedOverlayXRDevice
    // Offset: 0x198
    GlobalNamespace::OVRManager::XRDevice constructedOverlayXRDevice;
    // private System.Boolean xrDeviceConstructed
    // Offset: 0x19C
    bool xrDeviceConstructed;
    // public System.Void OverrideOverlayTextureInfo(UnityEngine.Texture srcTexture, System.IntPtr nativePtr, UnityEngine.XR.XRNode node)
    // Offset: 0xEDC104
    void OverrideOverlayTextureInfo(UnityEngine::Texture* srcTexture, System::IntPtr nativePtr, UnityEngine::XR::XRNode node);
    // private OVRPlugin/LayerLayout get_layout()
    // Offset: 0xEDC1D4
    GlobalNamespace::OVRPlugin::LayerLayout get_layout();
    // private System.Int32 get_texturesPerStage()
    // Offset: 0xEDC270
    int get_texturesPerStage();
    // private System.Boolean CreateLayer(System.Int32 mipLevels, System.Int32 sampleCount, OVRPlugin/EyeTextureFormat etFormat, System.Int32 flags, OVRPlugin/Sizei size, OVRPlugin/OverlayShape shape)
    // Offset: 0xEDC290
    bool CreateLayer(int mipLevels, int sampleCount, GlobalNamespace::OVRPlugin::EyeTextureFormat etFormat, int flags, GlobalNamespace::OVRPlugin::Sizei size, GlobalNamespace::OVRPlugin::OverlayShape shape);
    // private System.Boolean CreateLayerTextures(System.Boolean useMipmaps, OVRPlugin/Sizei size, System.Boolean isHdr)
    // Offset: 0xEDCC20
    bool CreateLayerTextures(bool useMipmaps, GlobalNamespace::OVRPlugin::Sizei size, bool isHdr);
    // private System.Void DestroyLayerTextures()
    // Offset: 0xEDD5D4
    void DestroyLayerTextures();
    // private System.Void DestroyLayer()
    // Offset: 0xEDD73C
    void DestroyLayer();
    // public System.Void SetSrcDestRects(UnityEngine.Rect srcLeft, UnityEngine.Rect srcRight, UnityEngine.Rect destLeft, UnityEngine.Rect destRight)
    // Offset: 0xEDE174
    void SetSrcDestRects(UnityEngine::Rect srcLeft, UnityEngine::Rect srcRight, UnityEngine::Rect destLeft, UnityEngine::Rect destRight);
    // public System.Void UpdateTextureRectMatrix()
    // Offset: 0xEDE190
    void UpdateTextureRectMatrix();
    // public System.Void SetPerLayerColorScaleAndOffset(UnityEngine.Vector4 scale, UnityEngine.Vector4 offset)
    // Offset: 0xEDE428
    void SetPerLayerColorScaleAndOffset(UnityEngine::Vector4 scale, UnityEngine::Vector4 offset);
    // private System.Boolean LatchLayerTextures()
    // Offset: 0xEDE43C
    bool LatchLayerTextures();
    // private OVRPlugin/LayerDesc GetCurrentLayerDesc()
    // Offset: 0xEDE888
    GlobalNamespace::OVRPlugin::LayerDesc GetCurrentLayerDesc();
    // private System.Boolean PopulateLayer(System.Int32 mipLevels, System.Boolean isHdr, OVRPlugin/Sizei size, System.Int32 sampleCount, System.Int32 stage)
    // Offset: 0xEDED54
    bool PopulateLayer(int mipLevels, bool isHdr, GlobalNamespace::OVRPlugin::Sizei size, int sampleCount, int stage);
    // private System.Boolean SubmitLayer(System.Boolean overlay, System.Boolean headLocked, System.Boolean noDepthBufferTesting, OVRPose pose, UnityEngine.Vector3 scale, System.Int32 frameIndex)
    // Offset: 0xEDF1F4
    bool SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, GlobalNamespace::OVRPose pose, UnityEngine::Vector3 scale, int frameIndex);
    // private System.Void Awake()
    // Offset: 0xEDF488
    void Awake();
    // static public System.String get_OpenVROverlayKey()
    // Offset: 0xEDF7E4
    static ::CsString* get_OpenVROverlayKey();
    // private System.Void OnEnable()
    // Offset: 0xEDF85C
    void OnEnable();
    // private System.Void InitOVROverlay()
    // Offset: 0xEDF8DC
    void InitOVROverlay();
    // private System.Void OnDisable()
    // Offset: 0xEDFA88
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0xEDFBF4
    void OnDestroy();
    // private System.Boolean ComputeSubmit(OVRPose pose, UnityEngine.Vector3 scale, System.Boolean overlay, System.Boolean headLocked)
    // Offset: 0xEDFC18
    bool ComputeSubmit(GlobalNamespace::OVRPose& pose, UnityEngine::Vector3& scale, bool& overlay, bool& headLocked);
    // private System.Void OpenVROverlayUpdate(UnityEngine.Vector3 scale, OVRPose pose)
    // Offset: 0xEE0064
    void OpenVROverlayUpdate(UnityEngine::Vector3 scale, GlobalNamespace::OVRPose pose);
    // private System.Void LateUpdate()
    // Offset: 0xEE03A8
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xEE08A4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVROverlay* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xEE0A58
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVROverlay
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay*, "", "OVROverlay");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay::OverlayShape, "", "OVROverlay/OverlayShape");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay::OverlayType, "", "OVROverlay/OverlayType");
#pragma pack(pop)
