// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x130
  // Autogenerated type: HMUI.ImageView
  // [] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: DA5F78
  // [ExecuteAlways] Offset: DA5F78
  class ImageView : public UnityEngine::UI::Image {
    public:
    // Nested type: HMUI::ImageView::GradientDirection
    struct GradientDirection;
    // Size: 0x4
    // Autogenerated type: HMUI.ImageView/GradientDirection
    // [] Offset: FFFFFFFF
    struct GradientDirection/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: GradientDirection
      constexpr GradientDirection(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public HMUI.ImageView/GradientDirection Horizontal
      static constexpr const int Horizontal = 0;
      // Get static field: static public HMUI.ImageView/GradientDirection Horizontal
      static HMUI::ImageView::GradientDirection _get_Horizontal();
      // Set static field: static public HMUI.ImageView/GradientDirection Horizontal
      static void _set_Horizontal(HMUI::ImageView::GradientDirection value);
      // static field const value: static public HMUI.ImageView/GradientDirection Vertical
      static constexpr const int Vertical = 1;
      // Get static field: static public HMUI.ImageView/GradientDirection Vertical
      static HMUI::ImageView::GradientDirection _get_Vertical();
      // Set static field: static public HMUI.ImageView/GradientDirection Vertical
      static void _set_Vertical(HMUI::ImageView::GradientDirection value);
    }; // HMUI.ImageView/GradientDirection
    static check_size<sizeof(ImageView::GradientDirection), 0 + sizeof(int)> __HMUI_ImageView_GradientDirectionSizeCheck;
    static_assert(sizeof(ImageView::GradientDirection) == 0x4);
    // private System.Single _skew
    // Size: 0x4
    // Offset: 0xF8
    float skew;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _gradient
    // Size: 0x1
    // Offset: 0xFC
    bool gradient;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: gradient and: color0
    char __padding1[0x3] = {};
    // private UnityEngine.Color _color0
    // Size: 0x10
    // Offset: 0x100
    UnityEngine::Color color0;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _color1
    // Size: 0x10
    // Offset: 0x110
    UnityEngine::Color color1;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private HMUI.ImageView/GradientDirection _gradientDirection
    // Size: 0x4
    // Offset: 0x120
    HMUI::ImageView::GradientDirection gradientDirection;
    // Field size check
    static_assert(sizeof(HMUI::ImageView::GradientDirection) == 0x4);
    // private System.Boolean _flipGradientColors
    // Size: 0x1
    // Offset: 0x124
    bool flipGradientColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: flipGradientColors and: curvedCanvasSettingsHelper
    char __padding5[0x3] = {};
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Size: 0x8
    // Offset: 0x128
    HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // Field size check
    static_assert(sizeof(HMUI::CurvedCanvasSettingsHelper*) == 0x8);
    // Creating value type constructor for type: ImageView
    ImageView(float skew_ = {}, bool gradient_ = {}, UnityEngine::Color color0_ = {}, UnityEngine::Color color1_ = {}, HMUI::ImageView::GradientDirection gradientDirection_ = {}, bool flipGradientColors_ = {}, HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper_ = {}) noexcept : skew{skew_}, gradient{gradient_}, color0{color0_}, color1{color1_}, gradientDirection{gradientDirection_}, flipGradientColors{flipGradientColors_}, curvedCanvasSettingsHelper{curvedCanvasSettingsHelper_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA7638
    // Get static field: static private readonly UnityEngine.Vector2 kVec2Zero
    static UnityEngine::Vector2 _get_kVec2Zero();
    // Set static field: static private readonly UnityEngine.Vector2 kVec2Zero
    static void _set_kVec2Zero(UnityEngine::Vector2 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA7648
    // Get static field: static private readonly UnityEngine.Vector3 kVec3Zero
    static UnityEngine::Vector3 _get_kVec3Zero();
    // Set static field: static private readonly UnityEngine.Vector3 kVec3Zero
    static void _set_kVec3Zero(UnityEngine::Vector3 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA7658
    // Get static field: static private readonly UnityEngine.Vector4 kVec4Zero
    static UnityEngine::Vector4 _get_kVec4Zero();
    // Set static field: static private readonly UnityEngine.Vector4 kVec4Zero
    static void _set_kVec4Zero(UnityEngine::Vector4 value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA7668
    // Get static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static ::Array<UnityEngine::Vector2>* _get_s_VertScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static void _set_s_VertScratch(::Array<UnityEngine::Vector2>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA7678
    // Get static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static ::Array<UnityEngine::Vector2>* _get_s_UVScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static void _set_s_UVScratch(::Array<UnityEngine::Vector2>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA7688
    // Get static field: static private readonly UnityEngine.Vector2[] s_UV1Scratch
    static ::Array<UnityEngine::Vector2>* _get_s_UV1Scratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UV1Scratch
    static void _set_s_UV1Scratch(::Array<UnityEngine::Vector2>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA7698
    // Get static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static ::Array<UnityEngine::Color>* _get_s_ColorScratch();
    // Set static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static void _set_s_ColorScratch(::Array<UnityEngine::Color>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA76A8
    // Get static field: static private readonly UnityEngine.Vector3[] s_Xy
    static ::Array<UnityEngine::Vector3>* _get_s_Xy();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Xy
    static void _set_s_Xy(::Array<UnityEngine::Vector3>* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA76B8
    // Get static field: static private readonly UnityEngine.Vector3[] s_Uv
    static ::Array<UnityEngine::Vector3>* _get_s_Uv();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Uv
    static void _set_s_Uv(::Array<UnityEngine::Vector3>* value);
    // public System.Boolean get_gradient()
    // Offset: 0x10B68C8
    bool get_gradient();
    // public System.Single get_skew()
    // Offset: 0x10B68D0
    float get_skew();
    // public System.Void set_color0(UnityEngine.Color value)
    // Offset: 0x10A7C10
    void set_color0(UnityEngine::Color value);
    // public System.Void set_color1(UnityEngine.Color value)
    // Offset: 0x10A7C30
    void set_color1(UnityEngine::Color value);
    // private System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect, System.Single curvedUIRadius)
    // Offset: 0x10B6AB4
    void GenerateSimpleSprite(UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect, float curvedUIRadius);
    // private System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper toFill, System.Single curvedUIRadius)
    // Offset: 0x10B7260
    void GenerateSlicedSprite(UnityEngine::UI::VertexHelper* toFill, float curvedUIRadius);
    // private System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill, System.Single curvedUIRadius)
    // Offset: 0x10B853C
    void GenerateTiledSprite(UnityEngine::UI::VertexHelper* toFill, float curvedUIRadius);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax, System.Single elementWidthScale, System.Single curvedUIRadius)
    // Offset: 0x10BB76C
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax, float elementWidthScale, float curvedUIRadius);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uv0Min, UnityEngine.Vector2 uv0Max, UnityEngine.Vector2 uv1Min, UnityEngine.Vector2 uv1Max, System.Single elementWidthScale, System.Single curvedUIRadius, System.Single skewFactor, System.Single skewOffset)
    // Offset: 0x10BB3C8
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float elementWidthScale, float curvedUIRadius, float skewFactor, float skewOffset);
    // static private System.Void AddQuadWithHorizontalGradient(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color0, UnityEngine.Color32 color1, UnityEngine.Vector2 uv0Min, UnityEngine.Vector2 uv0Max, UnityEngine.Vector2 uv1Min, UnityEngine.Vector2 uv1Max, System.Single elementWidthScale, System.Single curvedUIRadius, System.Single skewFactor, System.Single skewOffset)
    // Offset: 0x10BABC4
    static void AddQuadWithHorizontalGradient(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float elementWidthScale, float curvedUIRadius, float skewFactor, float skewOffset);
    // static private System.Void AddQuadWithVerticalGradient(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color0, UnityEngine.Color32 color1, UnityEngine.Vector2 uv0Min, UnityEngine.Vector2 uv0Max, UnityEngine.Vector2 uv1Min, UnityEngine.Vector2 uv1Max, System.Single elementWidthScale, System.Single curvedUIRadius, System.Single skewFactor, System.Single skewOffset)
    // Offset: 0x10BB01C
    static void AddQuadWithVerticalGradient(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, UnityEngine::Vector2 uv1Min, UnityEngine::Vector2 uv1Max, float elementWidthScale, float curvedUIRadius, float skewFactor, float skewOffset);
    // private System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect, System.Single curvedUIRadius)
    // Offset: 0x10B95A8
    void GenerateFilledSprite(UnityEngine::UI::VertexHelper* toFill, bool preserveAspect, float curvedUIRadius);
    // static private System.Int32 GetNumberOfElements(System.Single curvedUIRadius, System.Single width)
    // Offset: 0x10BAA08
    static int GetNumberOfElements(float curvedUIRadius, float width);
    // protected override System.Void OnEnable()
    // Offset: 0x10B68D8
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::OnEnable()
    void OnEnable();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x10B692C
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* toFill);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    // Offset: 0x10BBA90
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, ::Array<UnityEngine::Vector3>* quadPositions, UnityEngine::Color32 color, ::Array<UnityEngine::Vector3>* quadUVs);
    // static private UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    // Offset: 0x10BAAA8
    // Implemented from: UnityEngine.UI.Image
    // Base method: UnityEngine.Vector4 Image::GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    static UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect);
    // static private System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    // Offset: 0x10BBC18
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Boolean Image::RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    static bool RadialCut(::Array<UnityEngine::Vector3>* xy, ::Array<UnityEngine::Vector3>* uv, float fill, bool invert, int corner);
    // static private System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    // Offset: 0x10BBD84
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    static void RadialCut(::Array<UnityEngine::Vector3>* xy, float cos, float sin, bool invert, int corner);
    // private UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    // Offset: 0x10BA564
    // Implemented from: UnityEngine.UI.Image
    // Base method: UnityEngine.Vector4 Image::GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);
    // public System.Void .ctor()
    // Offset: 0x10BC2FC
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ImageView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageView*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x10BC390
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.cctor()
    // Base method: System.Void Graphic::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // HMUI.ImageView
  static check_size<sizeof(ImageView), 296 + sizeof(HMUI::CurvedCanvasSettingsHelper*)> __HMUI_ImageViewSizeCheck;
  static_assert(sizeof(ImageView) == 0x130);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ImageView*, "HMUI", "ImageView");
DEFINE_IL2CPP_ARG_TYPE(HMUI::ImageView::GradientDirection, "HMUI", "ImageView/GradientDirection");
#pragma pack(pop)
