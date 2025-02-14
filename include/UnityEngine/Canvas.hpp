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
  // Forward declaring type: RenderMode
  struct RenderMode;
  // Forward declaring type: AdditionalCanvasShaderChannels
  struct AdditionalCanvasShaderChannels;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Canvas
  // [RequireComponent] Offset: DB4E84
  // [NativeClassAttribute] Offset: DB4E84
  // [NativeHeaderAttribute] Offset: DB4E84
  // [NativeHeaderAttribute] Offset: DB4E84
  class Canvas : public UnityEngine::Behaviour {
    public:
    // Nested type: UnityEngine::Canvas::WillRenderCanvases
    class WillRenderCanvases;
    // Creating value type constructor for type: Canvas
    Canvas() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xDB4FF4
    // [DebuggerBrowsableAttribute] Offset: 0xDB4FF4
    // Get static field: static private UnityEngine.Canvas/WillRenderCanvases willRenderCanvases
    static UnityEngine::Canvas::WillRenderCanvases* _get_willRenderCanvases();
    // Set static field: static private UnityEngine.Canvas/WillRenderCanvases willRenderCanvases
    static void _set_willRenderCanvases(UnityEngine::Canvas::WillRenderCanvases* value);
    // static public System.Void add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases value)
    // Offset: 0x23C7738
    static void add_willRenderCanvases(UnityEngine::Canvas::WillRenderCanvases* value);
    // static public System.Void remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases value)
    // Offset: 0x23C77EC
    static void remove_willRenderCanvases(UnityEngine::Canvas::WillRenderCanvases* value);
    // public UnityEngine.RenderMode get_renderMode()
    // Offset: 0x23C78A0
    UnityEngine::RenderMode get_renderMode();
    // public System.Void set_renderMode(UnityEngine.RenderMode value)
    // Offset: 0x23C78E0
    void set_renderMode(UnityEngine::RenderMode value);
    // public System.Boolean get_isRootCanvas()
    // Offset: 0x23C7930
    bool get_isRootCanvas();
    // public System.Single get_scaleFactor()
    // Offset: 0x23C7970
    float get_scaleFactor();
    // public System.Void set_scaleFactor(System.Single value)
    // Offset: 0x23C79B0
    void set_scaleFactor(float value);
    // public System.Single get_referencePixelsPerUnit()
    // Offset: 0x23C7A00
    float get_referencePixelsPerUnit();
    // public System.Void set_referencePixelsPerUnit(System.Single value)
    // Offset: 0x23C7A40
    void set_referencePixelsPerUnit(float value);
    // public System.Boolean get_pixelPerfect()
    // Offset: 0x23C7A90
    bool get_pixelPerfect();
    // public System.Void set_pixelPerfect(System.Boolean value)
    // Offset: 0x23C7AD0
    void set_pixelPerfect(bool value);
    // public System.Int32 get_renderOrder()
    // Offset: 0x23C7B20
    int get_renderOrder();
    // public System.Boolean get_overrideSorting()
    // Offset: 0x23C7B60
    bool get_overrideSorting();
    // public System.Void set_overrideSorting(System.Boolean value)
    // Offset: 0x23C7BA0
    void set_overrideSorting(bool value);
    // public System.Int32 get_sortingOrder()
    // Offset: 0x23C7BF0
    int get_sortingOrder();
    // public System.Void set_sortingOrder(System.Int32 value)
    // Offset: 0x23C7C30
    void set_sortingOrder(int value);
    // public System.Int32 get_targetDisplay()
    // Offset: 0x23C7C80
    int get_targetDisplay();
    // public System.Int32 get_sortingLayerID()
    // Offset: 0x23C7CC0
    int get_sortingLayerID();
    // public System.Void set_sortingLayerID(System.Int32 value)
    // Offset: 0x23C7D00
    void set_sortingLayerID(int value);
    // public UnityEngine.AdditionalCanvasShaderChannels get_additionalShaderChannels()
    // Offset: 0x23C7D50
    UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels();
    // public System.Void set_additionalShaderChannels(UnityEngine.AdditionalCanvasShaderChannels value)
    // Offset: 0x23C7D90
    void set_additionalShaderChannels(UnityEngine::AdditionalCanvasShaderChannels value);
    // public UnityEngine.Canvas get_rootCanvas()
    // Offset: 0x23C7DE0
    UnityEngine::Canvas* get_rootCanvas();
    // public UnityEngine.Camera get_worldCamera()
    // Offset: 0x23C7E20
    UnityEngine::Camera* get_worldCamera();
    // public System.Void set_worldCamera(UnityEngine.Camera value)
    // Offset: 0x23C7E60
    void set_worldCamera(UnityEngine::Camera* value);
    // static public UnityEngine.Material GetDefaultCanvasMaterial()
    // Offset: 0x23C7EB0
    static UnityEngine::Material* GetDefaultCanvasMaterial();
    // static public UnityEngine.Material GetETC1SupportedCanvasMaterial()
    // Offset: 0x23C7EE4
    static UnityEngine::Material* GetETC1SupportedCanvasMaterial();
    // static public System.Void ForceUpdateCanvases()
    // Offset: 0x23C7F18
    static void ForceUpdateCanvases();
    // static private System.Void SendWillRenderCanvases()
    // Offset: 0x23C7F1C
    static void SendWillRenderCanvases();
    // public System.Void .ctor()
    // Offset: 0x23C8188
    // Implemented from: UnityEngine.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Canvas* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Canvas::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Canvas*, creationType>()));
    }
  }; // UnityEngine.Canvas
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Canvas*, "UnityEngine", "Canvas");
