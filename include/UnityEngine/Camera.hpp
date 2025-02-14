// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderingPath
  struct RenderingPath;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: CameraClearFlags
  struct CameraClearFlags;
  // Forward declaring type: DepthTextureMode
  struct DepthTextureMode;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Vector4
  struct Vector4;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: StereoTargetEyeMask
  struct StereoTargetEyeMask;
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Shader
  class Shader;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CameraEvent
  struct CameraEvent;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Camera
  // [NativeHeaderAttribute] Offset: D8E120
  // [UsedByNativeCodeAttribute] Offset: D8E120
  // [NativeHeaderAttribute] Offset: D8E120
  // [NativeHeaderAttribute] Offset: D8E120
  // [NativeHeaderAttribute] Offset: D8E120
  // [RequireComponent] Offset: D8E120
  // [NativeHeaderAttribute] Offset: D8E120
  // [NativeHeaderAttribute] Offset: D8E120
  // [NativeHeaderAttribute] Offset: D8E120
  class Camera : public UnityEngine::Behaviour {
    public:
    // Nested type: UnityEngine::Camera::StereoscopicEye
    struct StereoscopicEye;
    // Nested type: UnityEngine::Camera::MonoOrStereoscopicEye
    struct MonoOrStereoscopicEye;
    // Nested type: UnityEngine::Camera::CameraCallback
    class CameraCallback;
    // Creating value type constructor for type: Camera
    Camera() noexcept {}
    // Get static field: static public UnityEngine.Camera/CameraCallback onPreCull
    static UnityEngine::Camera::CameraCallback* _get_onPreCull();
    // Set static field: static public UnityEngine.Camera/CameraCallback onPreCull
    static void _set_onPreCull(UnityEngine::Camera::CameraCallback* value);
    // Get static field: static public UnityEngine.Camera/CameraCallback onPreRender
    static UnityEngine::Camera::CameraCallback* _get_onPreRender();
    // Set static field: static public UnityEngine.Camera/CameraCallback onPreRender
    static void _set_onPreRender(UnityEngine::Camera::CameraCallback* value);
    // Get static field: static public UnityEngine.Camera/CameraCallback onPostRender
    static UnityEngine::Camera::CameraCallback* _get_onPostRender();
    // Set static field: static public UnityEngine.Camera/CameraCallback onPostRender
    static void _set_onPostRender(UnityEngine::Camera::CameraCallback* value);
    // public System.Single get_nearClipPlane()
    // Offset: 0x1B72134
    float get_nearClipPlane();
    // public System.Void set_nearClipPlane(System.Single value)
    // Offset: 0x1B72174
    void set_nearClipPlane(float value);
    // public System.Single get_farClipPlane()
    // Offset: 0x1B721C4
    float get_farClipPlane();
    // public System.Void set_farClipPlane(System.Single value)
    // Offset: 0x1B72204
    void set_farClipPlane(float value);
    // public System.Single get_fieldOfView()
    // Offset: 0x1B72254
    float get_fieldOfView();
    // public System.Void set_fieldOfView(System.Single value)
    // Offset: 0x1B72294
    void set_fieldOfView(float value);
    // public System.Void set_renderingPath(UnityEngine.RenderingPath value)
    // Offset: 0x1B722E4
    void set_renderingPath(UnityEngine::RenderingPath value);
    // public System.Void set_allowHDR(System.Boolean value)
    // Offset: 0x1B72334
    void set_allowHDR(bool value);
    // public System.Void set_allowMSAA(System.Boolean value)
    // Offset: 0x1B72384
    void set_allowMSAA(bool value);
    // public System.Void set_forceIntoRenderTexture(System.Boolean value)
    // Offset: 0x1B723D4
    void set_forceIntoRenderTexture(bool value);
    // public System.Void set_orthographicSize(System.Single value)
    // Offset: 0x1B72424
    void set_orthographicSize(float value);
    // public System.Boolean get_orthographic()
    // Offset: 0x1B72474
    bool get_orthographic();
    // public System.Void set_orthographic(System.Boolean value)
    // Offset: 0x1B724B4
    void set_orthographic(bool value);
    // public System.Single get_depth()
    // Offset: 0x1B72504
    float get_depth();
    // public System.Void set_depth(System.Single value)
    // Offset: 0x1B72544
    void set_depth(float value);
    // public System.Single get_aspect()
    // Offset: 0x1B72594
    float get_aspect();
    // public System.Void set_aspect(System.Single value)
    // Offset: 0x1B725D4
    void set_aspect(float value);
    // public System.Int32 get_cullingMask()
    // Offset: 0x1B72624
    int get_cullingMask();
    // public System.Void set_cullingMask(System.Int32 value)
    // Offset: 0x1B72664
    void set_cullingMask(int value);
    // public System.Int32 get_eventMask()
    // Offset: 0x1B726B4
    int get_eventMask();
    // public System.Void set_useOcclusionCulling(System.Boolean value)
    // Offset: 0x1B726F4
    void set_useOcclusionCulling(bool value);
    // public UnityEngine.Color get_backgroundColor()
    // Offset: 0x1B72744
    UnityEngine::Color get_backgroundColor();
    // public System.Void set_backgroundColor(UnityEngine.Color value)
    // Offset: 0x1B727F0
    void set_backgroundColor(UnityEngine::Color value);
    // public UnityEngine.CameraClearFlags get_clearFlags()
    // Offset: 0x1B72898
    UnityEngine::CameraClearFlags get_clearFlags();
    // public System.Void set_clearFlags(UnityEngine.CameraClearFlags value)
    // Offset: 0x1B728D8
    void set_clearFlags(UnityEngine::CameraClearFlags value);
    // public UnityEngine.DepthTextureMode get_depthTextureMode()
    // Offset: 0x1B72928
    UnityEngine::DepthTextureMode get_depthTextureMode();
    // public System.Void set_depthTextureMode(UnityEngine.DepthTextureMode value)
    // Offset: 0x1B72968
    void set_depthTextureMode(UnityEngine::DepthTextureMode value);
    // public UnityEngine.Rect get_rect()
    // Offset: 0x1B729B8
    UnityEngine::Rect get_rect();
    // public System.Void set_rect(UnityEngine.Rect value)
    // Offset: 0x1B72A64
    void set_rect(UnityEngine::Rect value);
    // public UnityEngine.Rect get_pixelRect()
    // Offset: 0x1B72B0C
    UnityEngine::Rect get_pixelRect();
    // public System.Int32 get_pixelWidth()
    // Offset: 0x1B72BB8
    int get_pixelWidth();
    // public System.Int32 get_pixelHeight()
    // Offset: 0x1B72BF8
    int get_pixelHeight();
    // public UnityEngine.RenderTexture get_targetTexture()
    // Offset: 0x1B72C38
    UnityEngine::RenderTexture* get_targetTexture();
    // public System.Void set_targetTexture(UnityEngine.RenderTexture value)
    // Offset: 0x1B72C78
    void set_targetTexture(UnityEngine::RenderTexture* value);
    // public System.Int32 get_targetDisplay()
    // Offset: 0x1B72CC8
    int get_targetDisplay();
    // public System.Void set_targetDisplay(System.Int32 value)
    // Offset: 0x1B72D08
    void set_targetDisplay(int value);
    // public UnityEngine.Matrix4x4 get_worldToCameraMatrix()
    // Offset: 0x1B72D58
    UnityEngine::Matrix4x4 get_worldToCameraMatrix();
    // public System.Void set_worldToCameraMatrix(UnityEngine.Matrix4x4 value)
    // Offset: 0x1B72E20
    void set_worldToCameraMatrix(UnityEngine::Matrix4x4 value);
    // public UnityEngine.Matrix4x4 get_projectionMatrix()
    // Offset: 0x1B72EC0
    UnityEngine::Matrix4x4 get_projectionMatrix();
    // public System.Void set_projectionMatrix(UnityEngine.Matrix4x4 value)
    // Offset: 0x1B72F88
    void set_projectionMatrix(UnityEngine::Matrix4x4 value);
    // public System.Void ResetWorldToCameraMatrix()
    // Offset: 0x1B73028
    void ResetWorldToCameraMatrix();
    // public UnityEngine.Matrix4x4 CalculateObliqueMatrix(UnityEngine.Vector4 clipPlane)
    // Offset: 0x1B73068
    UnityEngine::Matrix4x4 CalculateObliqueMatrix(UnityEngine::Vector4 clipPlane);
    // public UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
    // Offset: 0x1B73144
    UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position, UnityEngine::Camera::MonoOrStereoscopicEye eye);
    // public UnityEngine.Vector3 ViewportToWorldPoint(UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye)
    // Offset: 0x1B73228
    UnityEngine::Vector3 ViewportToWorldPoint(UnityEngine::Vector3 position, UnityEngine::Camera::MonoOrStereoscopicEye eye);
    // public UnityEngine.Vector3 WorldToScreenPoint(UnityEngine.Vector3 position)
    // Offset: 0x1B7330C
    UnityEngine::Vector3 WorldToScreenPoint(UnityEngine::Vector3 position);
    // public UnityEngine.Vector3 ScreenToViewportPoint(UnityEngine.Vector3 position)
    // Offset: 0x1B73314
    UnityEngine::Vector3 ScreenToViewportPoint(UnityEngine::Vector3 position);
    // private UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
    // Offset: 0x1B733D8
    UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector2 pos, UnityEngine::Camera::MonoOrStereoscopicEye eye);
    // public UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye)
    // Offset: 0x1B734C4
    UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector3 pos, UnityEngine::Camera::MonoOrStereoscopicEye eye);
    // public UnityEngine.Ray ScreenPointToRay(UnityEngine.Vector3 pos)
    // Offset: 0x1B73594
    UnityEngine::Ray ScreenPointToRay(UnityEngine::Vector3 pos);
    // static public UnityEngine.Camera get_main()
    // Offset: 0x1B735D8
    static UnityEngine::Camera* get_main();
    // static public UnityEngine.Camera get_current()
    // Offset: 0x1B7360C
    static UnityEngine::Camera* get_current();
    // public System.Boolean get_stereoEnabled()
    // Offset: 0x1B73640
    bool get_stereoEnabled();
    // public UnityEngine.StereoTargetEyeMask get_stereoTargetEye()
    // Offset: 0x1B73680
    UnityEngine::StereoTargetEyeMask get_stereoTargetEye();
    // public System.Void set_stereoTargetEye(UnityEngine.StereoTargetEyeMask value)
    // Offset: 0x1B736C0
    void set_stereoTargetEye(UnityEngine::StereoTargetEyeMask value);
    // public UnityEngine.Matrix4x4 GetStereoProjectionMatrix(UnityEngine.Camera/StereoscopicEye eye)
    // Offset: 0x1B73710
    UnityEngine::Matrix4x4 GetStereoProjectionMatrix(UnityEngine::Camera::StereoscopicEye eye);
    // static private System.Int32 GetAllCamerasCount()
    // Offset: 0x1B737E8
    static int GetAllCamerasCount();
    // static private System.Int32 GetAllCamerasImpl(out UnityEngine.Camera[] cam)
    // Offset: 0x1B7381C
    static int GetAllCamerasImpl(::Array<UnityEngine::Camera*>*& cam);
    // static public System.Int32 get_allCamerasCount()
    // Offset: 0x1B7385C
    static int get_allCamerasCount();
    // static public System.Int32 GetAllCameras(UnityEngine.Camera[] cameras)
    // Offset: 0x1B73890
    static int GetAllCameras(::Array<UnityEngine::Camera*>* cameras);
    // private System.Boolean RenderToCubemapImpl(UnityEngine.Texture tex, System.Int32 faceMask)
    // Offset: 0x1B73984
    bool RenderToCubemapImpl(UnityEngine::Texture* tex, int faceMask);
    // public System.Boolean RenderToCubemap(UnityEngine.RenderTexture cubemap)
    // Offset: 0x1B739DC
    bool RenderToCubemap(UnityEngine::RenderTexture* cubemap);
    // public System.Void Render()
    // Offset: 0x1B73A30
    void Render();
    // public System.Void RenderWithShader(UnityEngine.Shader shader, System.String replacementTag)
    // Offset: 0x1B73A70
    void RenderWithShader(UnityEngine::Shader* shader, ::Il2CppString* replacementTag);
    // public System.Void CopyFrom(UnityEngine.Camera other)
    // Offset: 0x1B73AC8
    void CopyFrom(UnityEngine::Camera* other);
    // private System.Void AddCommandBufferImpl(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x1B73B18
    void AddCommandBufferImpl(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // private System.Void RemoveCommandBufferImpl(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x1B73B70
    void RemoveCommandBufferImpl(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // public System.Void AddCommandBuffer(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x1B73BC8
    void AddCommandBuffer(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // public System.Void RemoveCommandBuffer(UnityEngine.Rendering.CameraEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x1B73D18
    void RemoveCommandBuffer(UnityEngine::Rendering::CameraEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // static private System.Void FireOnPreCull(UnityEngine.Camera cam)
    // Offset: 0x1B73E68
    static void FireOnPreCull(UnityEngine::Camera* cam);
    // static private System.Void FireOnPreRender(UnityEngine.Camera cam)
    // Offset: 0x1B74264
    static void FireOnPreRender(UnityEngine::Camera* cam);
    // static private System.Void FireOnPostRender(UnityEngine.Camera cam)
    // Offset: 0x1B742CC
    static void FireOnPostRender(UnityEngine::Camera* cam);
    // private System.Void get_backgroundColor_Injected(out UnityEngine.Color ret)
    // Offset: 0x1B727A0
    void get_backgroundColor_Injected(UnityEngine::Color& ret);
    // private System.Void set_backgroundColor_Injected(ref UnityEngine.Color value)
    // Offset: 0x1B72848
    void set_backgroundColor_Injected(UnityEngine::Color& value);
    // private System.Void get_rect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1B72A14
    void get_rect_Injected(UnityEngine::Rect& ret);
    // private System.Void set_rect_Injected(ref UnityEngine.Rect value)
    // Offset: 0x1B72ABC
    void set_rect_Injected(UnityEngine::Rect& value);
    // private System.Void get_pixelRect_Injected(out UnityEngine.Rect ret)
    // Offset: 0x1B72B68
    void get_pixelRect_Injected(UnityEngine::Rect& ret);
    // private System.Void get_worldToCameraMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1B72DD0
    void get_worldToCameraMatrix_Injected(UnityEngine::Matrix4x4& ret);
    // private System.Void set_worldToCameraMatrix_Injected(ref UnityEngine.Matrix4x4 value)
    // Offset: 0x1B72E70
    void set_worldToCameraMatrix_Injected(UnityEngine::Matrix4x4& value);
    // private System.Void get_projectionMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1B72F38
    void get_projectionMatrix_Injected(UnityEngine::Matrix4x4& ret);
    // private System.Void set_projectionMatrix_Injected(ref UnityEngine.Matrix4x4 value)
    // Offset: 0x1B72FD8
    void set_projectionMatrix_Injected(UnityEngine::Matrix4x4& value);
    // private System.Void CalculateObliqueMatrix_Injected(ref UnityEngine.Vector4 clipPlane, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1B730EC
    void CalculateObliqueMatrix_Injected(UnityEngine::Vector4& clipPlane, UnityEngine::Matrix4x4& ret);
    // private System.Void WorldToScreenPoint_Injected(ref UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
    // Offset: 0x1B731C0
    void WorldToScreenPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Camera::MonoOrStereoscopicEye eye, UnityEngine::Vector3& ret);
    // private System.Void ViewportToWorldPoint_Injected(ref UnityEngine.Vector3 position, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Vector3 ret)
    // Offset: 0x1B732A4
    void ViewportToWorldPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Camera::MonoOrStereoscopicEye eye, UnityEngine::Vector3& ret);
    // private System.Void ScreenToViewportPoint_Injected(ref UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
    // Offset: 0x1B73380
    void ScreenToViewportPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
    // private System.Void ScreenPointToRay_Injected(ref UnityEngine.Vector2 pos, UnityEngine.Camera/MonoOrStereoscopicEye eye, out UnityEngine.Ray ret)
    // Offset: 0x1B7345C
    void ScreenPointToRay_Injected(UnityEngine::Vector2& pos, UnityEngine::Camera::MonoOrStereoscopicEye eye, UnityEngine::Ray& ret);
    // private System.Void GetStereoProjectionMatrix_Injected(UnityEngine.Camera/StereoscopicEye eye, out UnityEngine.Matrix4x4 ret)
    // Offset: 0x1B73790
    void GetStereoProjectionMatrix_Injected(UnityEngine::Camera::StereoscopicEye eye, UnityEngine::Matrix4x4& ret);
    // public System.Void .ctor()
    // Offset: 0x1B74334
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Camera* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Camera::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Camera*, creationType>()));
    }
  }; // UnityEngine.Camera
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Camera*, "UnityEngine", "Camera");
