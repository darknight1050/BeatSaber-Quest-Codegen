// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
// Including type: UnityEngine.UI.IClippable
#include "UnityEngine/UI/IClippable.hpp"
// Including type: UnityEngine.UI.IMaskable
#include "UnityEngine/UI/IMaskable.hpp"
// Including type: UnityEngine.UI.IMaterialModifier
#include "UnityEngine/UI/IMaterialModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: RectMask2D
  class RectMask2D;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Rect
  struct Rect;
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.MaskableGraphic
  // [] Offset: FFFFFFFF
  class MaskableGraphic : public UnityEngine::UI::Graphic/*, public UnityEngine::UI::IClippable, public UnityEngine::UI::IMaskable, public UnityEngine::UI::IMaterialModifier*/ {
    public:
    // Nested type: UnityEngine::UI::MaskableGraphic::CullStateChangedEvent
    class CullStateChangedEvent;
    // protected System.Boolean m_ShouldRecalculateStencil
    // Size: 0x1
    // Offset: 0x89
    bool m_ShouldRecalculateStencil;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShouldRecalculateStencil and: m_MaskMaterial
    char __padding0[0x6] = {};
    // protected UnityEngine.Material m_MaskMaterial
    // Size: 0x8
    // Offset: 0x90
    UnityEngine::Material* m_MaskMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.UI.RectMask2D m_ParentMask
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::RectMask2D* m_ParentMask;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::RectMask2D*) == 0x8);
    // private System.Boolean m_Maskable
    // Size: 0x1
    // Offset: 0xA0
    bool m_Maskable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_IsMaskingGraphic
    // Size: 0x1
    // Offset: 0xA1
    bool m_IsMaskingGraphic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [EditorBrowsableAttribute] Offset: 0xCDA1D0
    // [ObsoleteAttribute] Offset: 0xCDA1D0
    // protected System.Boolean m_IncludeForMasking
    // Size: 0x1
    // Offset: 0xA2
    bool m_IncludeForMasking;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IncludeForMasking and: m_OnCullStateChanged
    char __padding5[0x5] = {};
    // private UnityEngine.UI.MaskableGraphic/CullStateChangedEvent m_OnCullStateChanged
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* m_OnCullStateChanged;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::MaskableGraphic::CullStateChangedEvent*) == 0x8);
    // [EditorBrowsableAttribute] Offset: 0xCDA234
    // [ObsoleteAttribute] Offset: 0xCDA234
    // protected System.Boolean m_ShouldRecalculate
    // Size: 0x1
    // Offset: 0xB0
    bool m_ShouldRecalculate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShouldRecalculate and: m_StencilValue
    char __padding7[0x3] = {};
    // protected System.Int32 m_StencilValue
    // Size: 0x4
    // Offset: 0xB4
    int m_StencilValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly UnityEngine.Vector3[] m_Corners
    // Size: 0x8
    // Offset: 0xB8
    ::Array<UnityEngine::Vector3>* m_Corners;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: MaskableGraphic
    MaskableGraphic(bool m_ShouldRecalculateStencil_ = {}, UnityEngine::Material* m_MaskMaterial_ = {}, UnityEngine::UI::RectMask2D* m_ParentMask_ = {}, bool m_Maskable_ = {}, bool m_IsMaskingGraphic_ = {}, bool m_IncludeForMasking_ = {}, UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* m_OnCullStateChanged_ = {}, bool m_ShouldRecalculate_ = {}, int m_StencilValue_ = {}, ::Array<UnityEngine::Vector3>* m_Corners_ = {}) noexcept : m_ShouldRecalculateStencil{m_ShouldRecalculateStencil_}, m_MaskMaterial{m_MaskMaterial_}, m_ParentMask{m_ParentMask_}, m_Maskable{m_Maskable_}, m_IsMaskingGraphic{m_IsMaskingGraphic_}, m_IncludeForMasking{m_IncludeForMasking_}, m_OnCullStateChanged{m_OnCullStateChanged_}, m_ShouldRecalculate{m_ShouldRecalculate_}, m_StencilValue{m_StencilValue_}, m_Corners{m_Corners_} {}
    // Creating interface conversion operator: operator UnityEngine::UI::IClippable
    operator UnityEngine::UI::IClippable() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IClippable*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::IMaskable
    operator UnityEngine::UI::IMaskable() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IMaskable*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::IMaterialModifier
    operator UnityEngine::UI::IMaterialModifier() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IMaterialModifier*>(this);
    }
    // public UnityEngine.UI.MaskableGraphic/CullStateChangedEvent get_onCullStateChanged()
    // Offset: 0x1833C60
    UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* get_onCullStateChanged();
    // public System.Void set_onCullStateChanged(UnityEngine.UI.MaskableGraphic/CullStateChangedEvent value)
    // Offset: 0x1833C68
    void set_onCullStateChanged(UnityEngine::UI::MaskableGraphic::CullStateChangedEvent* value);
    // public System.Boolean get_maskable()
    // Offset: 0x1833C70
    bool get_maskable();
    // public System.Void set_maskable(System.Boolean value)
    // Offset: 0x1833C78
    void set_maskable(bool value);
    // public System.Boolean get_isMaskingGraphic()
    // Offset: 0x1833CB0
    bool get_isMaskingGraphic();
    // public System.Void set_isMaskingGraphic(System.Boolean value)
    // Offset: 0x18325FC
    void set_isMaskingGraphic(bool value);
    // public UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x1833CB8
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
    // public System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x1833DD0
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // private System.Void UpdateCull(System.Boolean cull)
    // Offset: 0x1834180
    void UpdateCull(bool cull);
    // public System.Void SetClipRect(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0x1834264
    void SetClipRect_NEW(UnityEngine::Rect clipRect, bool validRect);
    // public System.Void SetClipSoftness(UnityEngine.Vector2 clipSoftness)
    // Offset: 0x18342E0
    void SetClipSoftness_NEW(UnityEngine::Vector2 clipSoftness);
    // public System.Void ParentMaskStateChanged()
    // Offset: 0x1834604
    void ParentMaskStateChanged_NEW();
    // private UnityEngine.Rect get_rootCanvasRect()
    // Offset: 0x1833E30
    UnityEngine::Rect get_rootCanvasRect();
    // private System.Void UpdateClipParent()
    // Offset: 0x183437C
    void UpdateClipParent();
    // public System.Void RecalculateClipping()
    // Offset: 0x18348F8
    void RecalculateClipping();
    // public System.Void RecalculateMasking()
    // Offset: 0x18348FC
    void RecalculateMasking();
    // private UnityEngine.GameObject UnityEngine.UI.IClippable.get_gameObject()
    // Offset: 0x1834A8C
    UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject_NEW();
    // protected override System.Void OnEnable()
    // Offset: 0x183431C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x18344E8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDisable()
    void OnDisable();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0x18345A4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnCanvasHierarchyChanged()
    // Offset: 0x1834608
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnCanvasHierarchyChanged()
    void OnCanvasHierarchyChanged();
    // protected System.Void .ctor()
    // Offset: 0x1834988
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaskableGraphic* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::MaskableGraphic::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaskableGraphic*, creationType>()));
    }
  }; // UnityEngine.UI.MaskableGraphic
  #pragma pack(pop)
  static check_size<sizeof(MaskableGraphic), 184 + sizeof(::Array<UnityEngine::Vector3>*)> __UnityEngine_UI_MaskableGraphicSizeCheck;
  static_assert(sizeof(MaskableGraphic) == 0xC0);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::MaskableGraphic*, "UnityEngine.UI", "MaskableGraphic");
