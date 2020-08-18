// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
// Including type: TMPro.TMP_Text
#include "TMPro/TMP_Text.hpp"
// Including type: TMPro.MaskingTypes
#include "TMPro/MaskingTypes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector4 because it is already included!
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_SubMesh
  class TMP_SubMesh;
  // Forward declaring type: TextContainer
  class TextContainer;
  // Forward declaring type: TMP_TextInfo
  class TMP_TextInfo;
  // Forward declaring type: TMP_VertexDataUpdateFlags
  struct TMP_VertexDataUpdateFlags;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TextMeshPro
  class TextMeshPro : public UnityEngine::UI::ILayoutElement, public TMPro::TMP_Text {
    public:
    // private System.Boolean m_hasFontAssetChanged
    // Offset: 0xB30
    bool m_hasFontAssetChanged;
    // private System.Single m_previousLossyScaleY
    // Offset: 0xB34
    float m_previousLossyScaleY;
    // private UnityEngine.Renderer m_renderer
    // Offset: 0xB38
    UnityEngine::Renderer* m_renderer;
    // private UnityEngine.MeshFilter m_meshFilter
    // Offset: 0xB40
    UnityEngine::MeshFilter* m_meshFilter;
    // private System.Boolean m_isFirstAllocation
    // Offset: 0xB48
    bool m_isFirstAllocation;
    // private System.Int32 m_max_characters
    // Offset: 0xB4C
    int m_max_characters;
    // private System.Int32 m_max_numberOfLines
    // Offset: 0xB50
    int m_max_numberOfLines;
    // protected TMPro.TMP_SubMesh[] m_subTextObjects
    // Offset: 0xB58
    ::Array<TMPro::TMP_SubMesh*>* m_subTextObjects;
    // private System.Boolean m_isMaskingEnabled
    // Offset: 0xB60
    bool m_isMaskingEnabled;
    // private System.Boolean isMaskUpdateRequired
    // Offset: 0xB61
    bool isMaskUpdateRequired;
    // private TMPro.MaskingTypes m_maskType
    // Offset: 0xB64
    TMPro::MaskingTypes m_maskType;
    // private UnityEngine.Matrix4x4 m_EnvMapMatrix
    // Offset: 0xB68
    UnityEngine::Matrix4x4 m_EnvMapMatrix;
    // private UnityEngine.Vector3[] m_RectTransformCorners
    // Offset: 0xBA8
    ::Array<UnityEngine::Vector3>* m_RectTransformCorners;
    // private System.Boolean m_isRegisteredForEvents
    // Offset: 0xBB0
    bool m_isRegisteredForEvents;
    // private System.Int32 loopCountA
    // Offset: 0xBB4
    int loopCountA;
    // private System.Boolean m_currentAutoSizeMode
    // Offset: 0xBB8
    bool m_currentAutoSizeMode;
    // private System.Void UpdateEnvMapMatrix()
    // Offset: 0xD27D8C
    void UpdateEnvMapMatrix();
    // private System.Void SetMask(TMPro.MaskingTypes maskType)
    // Offset: 0xD28080
    void SetMask(TMPro::MaskingTypes maskType);
    // private System.Void SetMaskCoordinates(UnityEngine.Vector4 coords)
    // Offset: 0xD28204
    void SetMaskCoordinates(UnityEngine::Vector4 coords);
    // private System.Void SetMaskCoordinates(UnityEngine.Vector4 coords, System.Single softX, System.Single softY)
    // Offset: 0xD282B4
    void SetMaskCoordinates(UnityEngine::Vector4 coords, float softX, float softY);
    // private System.Void EnableMasking()
    // Offset: 0xD283BC
    void EnableMasking();
    // private System.Void DisableMasking()
    // Offset: 0xD28568
    void DisableMasking();
    // private System.Void UpdateMask()
    // Offset: 0xD284D8
    void UpdateMask();
    // private System.Void CreateMaterialInstance()
    // Offset: 0xD28680
    void CreateMaterialInstance();
    // private System.Void SetPerspectiveCorrection()
    // Offset: 0xD297F4
    void SetPerspectiveCorrection();
    // private System.Void OnPreRenderObject()
    // Offset: 0xD2BCC4
    void OnPreRenderObject();
    // private System.Void SetMeshFilters(System.Boolean state)
    // Offset: 0xD34040
    void SetMeshFilters(bool state);
    // private System.Void UpdateSDFScale(System.Single scaleDelta)
    // Offset: 0xD2BACC
    void UpdateSDFScale(float scaleDelta);
    // public System.Int32 get_sortingLayerID()
    // Offset: 0xD34C08
    int get_sortingLayerID();
    // public System.Void set_sortingLayerID(System.Int32 value)
    // Offset: 0xD34C24
    void set_sortingLayerID(int value);
    // public System.Int32 get_sortingOrder()
    // Offset: 0xD34C40
    int get_sortingOrder();
    // public System.Void set_sortingOrder(System.Int32 value)
    // Offset: 0xD34C5C
    void set_sortingOrder(int value);
    // public TMPro.TextContainer get_textContainer()
    // Offset: 0xD34CE0
    TMPro::TextContainer* get_textContainer();
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0xD34CE8
    UnityEngine::Renderer* get_renderer();
    // public UnityEngine.MeshFilter get_meshFilter()
    // Offset: 0xD27668
    UnityEngine::MeshFilter* get_meshFilter();
    // public TMPro.MaskingTypes get_maskType()
    // Offset: 0xD34E78
    TMPro::MaskingTypes get_maskType();
    // public System.Void set_maskType(TMPro.MaskingTypes value)
    // Offset: 0xD34E80
    void set_maskType(TMPro::MaskingTypes value);
    // public System.Void SetMask(TMPro.MaskingTypes type, UnityEngine.Vector4 maskCoords)
    // Offset: 0xD34E88
    void SetMask(TMPro::MaskingTypes type, UnityEngine::Vector4 maskCoords);
    // public System.Void SetMask(TMPro.MaskingTypes type, UnityEngine.Vector4 maskCoords, System.Single softnessX, System.Single softnessY)
    // Offset: 0xD34EDC
    void SetMask(TMPro::MaskingTypes type, UnityEngine::Vector4 maskCoords, float softnessX, float softnessY);
    // public System.Void UpdateFontAsset()
    // Offset: 0xD35908
    void UpdateFontAsset();
    // protected override System.Void Awake()
    // Offset: 0xD26FF8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Awake()
    void Awake();
    // protected override System.Void OnEnable()
    // Offset: 0xD2759C
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0xD27714
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnDisable()
    void OnDisable();
    // protected override System.Void OnDestroy()
    // Offset: 0xD2777C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDestroy()
    void OnDestroy();
    // protected override System.Void LoadFontAsset()
    // Offset: 0xD27834
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::LoadFontAsset()
    void LoadFontAsset();
    // protected override UnityEngine.Material GetMaterial(UnityEngine.Material mat)
    // Offset: 0xD28750
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material TMP_Text::GetMaterial(UnityEngine.Material mat)
    UnityEngine::Material* GetMaterial(UnityEngine::Material* mat);
    // protected override UnityEngine.Material[] GetMaterials(UnityEngine.Material[] mats)
    // Offset: 0xD28884
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material[] TMP_Text::GetMaterials(UnityEngine.Material[] mats)
    ::Array<UnityEngine::Material*>* GetMaterials(::Array<UnityEngine::Material*>* mats);
    // protected override System.Void SetSharedMaterial(UnityEngine.Material mat)
    // Offset: 0xD28A60
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetSharedMaterial(UnityEngine.Material mat)
    void SetSharedMaterial(UnityEngine::Material* mat);
    // protected override UnityEngine.Material[] GetSharedMaterials()
    // Offset: 0xD28AAC
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Material[] TMP_Text::GetSharedMaterials()
    ::Array<UnityEngine::Material*>* GetSharedMaterials();
    // protected override System.Void SetSharedMaterials(UnityEngine.Material[] materials)
    // Offset: 0xD28C64
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetSharedMaterials(UnityEngine.Material[] materials)
    void SetSharedMaterials(::Array<UnityEngine::Material*>* materials);
    // protected override System.Void SetOutlineThickness(System.Single thickness)
    // Offset: 0xD29034
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetOutlineThickness(System.Single thickness)
    void SetOutlineThickness(float thickness);
    // protected override System.Void SetFaceColor(UnityEngine.Color32 color)
    // Offset: 0xD291B8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetFaceColor(UnityEngine.Color32 color)
    void SetFaceColor(UnityEngine::Color32 color);
    // protected override System.Void SetOutlineColor(UnityEngine.Color32 color)
    // Offset: 0xD292D4
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetOutlineColor(UnityEngine.Color32 color)
    void SetOutlineColor(UnityEngine::Color32 color);
    // protected override System.Void SetShaderDepth()
    // Offset: 0xD293F0
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetShaderDepth()
    void SetShaderDepth();
    // protected override System.Void SetCulling()
    // Offset: 0xD29514
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetCulling()
    void SetCulling();
    // protected override System.Single GetPaddingForMaterial(UnityEngine.Material mat)
    // Offset: 0xD298A0
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Single TMP_Text::GetPaddingForMaterial(UnityEngine.Material mat)
    float GetPaddingForMaterial(UnityEngine::Material* mat);
    // protected override System.Single GetPaddingForMaterial()
    // Offset: 0xD2997C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Single TMP_Text::GetPaddingForMaterial()
    float GetPaddingForMaterial();
    // protected override System.Int32 SetArraySizes(TMPro.TMP_Text/UnicodeChar[] chars)
    // Offset: 0xD29AB8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Int32 TMP_Text::SetArraySizes(TMPro.TMP_Text/UnicodeChar[] chars)
    int SetArraySizes(::Array<TMPro::TMP_Text::UnicodeChar>* chars);
    // public override System.Void ComputeMarginSize()
    // Offset: 0xD2B820
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ComputeMarginSize()
    void ComputeMarginSize();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0xD2B94C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0xD2B968
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0xD2B9A4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // override System.Void InternalUpdate()
    // Offset: 0xD2B9F4
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::InternalUpdate()
    void InternalUpdate();
    // protected override System.Void GenerateTextMesh()
    // Offset: 0xD2BE54
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::GenerateTextMesh()
    void GenerateTextMesh();
    // protected override UnityEngine.Vector3[] GetTextContainerLocalCorners()
    // Offset: 0xD33F8C
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Vector3[] TMP_Text::GetTextContainerLocalCorners()
    ::Array<UnityEngine::Vector3>* GetTextContainerLocalCorners();
    // protected override System.Void SetActiveSubMeshes(System.Boolean state)
    // Offset: 0xD3422C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::SetActiveSubMeshes(System.Boolean state)
    void SetActiveSubMeshes(bool state);
    // protected override System.Void ClearSubMeshObjects()
    // Offset: 0xD3434C
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ClearSubMeshObjects()
    void ClearSubMeshObjects();
    // protected override UnityEngine.Bounds GetCompoundBounds()
    // Offset: 0xD344D8
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Bounds TMP_Text::GetCompoundBounds()
    UnityEngine::Bounds GetCompoundBounds();
    // protected override System.Void AdjustLineOffset(System.Int32 startIndex, System.Int32 endIndex, System.Single offset)
    // Offset: 0xD347F0
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::AdjustLineOffset(System.Int32 startIndex, System.Int32 endIndex, System.Single offset)
    void AdjustLineOffset(int startIndex, int endIndex, float offset);
    // public override System.Boolean get_autoSizeTextContainer()
    // Offset: 0xD34C78
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Boolean TMP_Text::get_autoSizeTextContainer()
    bool get_autoSizeTextContainer();
    // public override System.Void set_autoSizeTextContainer(System.Boolean value)
    // Offset: 0xD34C80
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::set_autoSizeTextContainer(System.Boolean value)
    void set_autoSizeTextContainer(bool value);
    // public UnityEngine.Transform get_transform()
    // Offset: 0xD274F0
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Transform TMP_Text::get_transform()
    // Base method: UnityEngine.Transform Graphic::UnityEngine.UI.ICanvasElement.get_transform()
    // Base method: UnityEngine.Transform Component::get_transform()
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* get_transform();
    // Creating proxy method: UnityEngine_UI_ICanvasElement_get_transform
    // Maps to method: get_transform
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
    // Creating proxy method: UnityEngine_UI_ICanvasElement_get_transform
    // Maps to method: get_transform
    // Skipping redundant proxy method: UnityEngine_UI_ICanvasElement_get_transform
    // Creating proxy method: UnityEngine_UI_ICanvasElement_get_transform
    // Maps to method: get_transform
    // Skipping redundant proxy method: UnityEngine_UI_ICanvasElement_get_transform
    // public override UnityEngine.Mesh get_mesh()
    // Offset: 0xD34D94
    // Implemented from: TMPro.TMP_Text
    // Base method: UnityEngine.Mesh TMP_Text::get_mesh()
    UnityEngine::Mesh* get_mesh();
    // public override System.Void SetVerticesDirty()
    // Offset: 0xD34F48
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetVerticesDirty()
    void SetVerticesDirty();
    // public override System.Void SetLayoutDirty()
    // Offset: 0xD34FE8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetLayoutDirty()
    void SetLayoutDirty();
    // public override System.Void SetMaterialDirty()
    // Offset: 0xD35090
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetMaterialDirty()
    void SetMaterialDirty();
    // public override System.Void SetAllDirty()
    // Offset: 0xD350A0
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetAllDirty()
    void SetAllDirty();
    // public override System.Void Rebuild(UnityEngine.UI.CanvasUpdate update)
    // Offset: 0xD350F8
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::Rebuild(UnityEngine.UI.CanvasUpdate update)
    void Rebuild(UnityEngine::UI::CanvasUpdate update);
    // protected override System.Void UpdateMaterial()
    // Offset: 0xD351F4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::UpdateMaterial()
    void UpdateMaterial();
    // public override System.Void UpdateMeshPadding()
    // Offset: 0xD35320
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateMeshPadding()
    void UpdateMeshPadding();
    // public override System.Void ForceMeshUpdate()
    // Offset: 0xD35438
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ForceMeshUpdate()
    void ForceMeshUpdate();
    // public override System.Void ForceMeshUpdate(System.Boolean ignoreInactive)
    // Offset: 0xD35444
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ForceMeshUpdate(System.Boolean ignoreInactive)
    void ForceMeshUpdate(bool ignoreInactive);
    // public override TMPro.TMP_TextInfo GetTextInfo(System.String text)
    // Offset: 0xD35454
    // Implemented from: TMPro.TMP_Text
    // Base method: TMPro.TMP_TextInfo TMP_Text::GetTextInfo(System.String text)
    TMPro::TMP_TextInfo* GetTextInfo(::Il2CppString* text);
    // public override System.Void ClearMesh(System.Boolean updateMesh)
    // Offset: 0xD354CC
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::ClearMesh(System.Boolean updateMesh)
    void ClearMesh(bool updateMesh);
    // public override System.Void UpdateGeometry(UnityEngine.Mesh mesh, System.Int32 index)
    // Offset: 0xD355A8
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateGeometry(UnityEngine.Mesh mesh, System.Int32 index)
    void UpdateGeometry(UnityEngine::Mesh* mesh, int index);
    // public override System.Void UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags flags)
    // Offset: 0xD355C4
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateVertexData(TMPro.TMP_VertexDataUpdateFlags flags)
    void UpdateVertexData(TMPro::TMP_VertexDataUpdateFlags flags);
    // public override System.Void UpdateVertexData()
    // Offset: 0xD35768
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::UpdateVertexData()
    void UpdateVertexData();
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0xD35918
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputHorizontal()
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0xD35A48
    // Implemented from: UnityEngine.UI.ILayoutElement
    // Base method: System.Void ILayoutElement::CalculateLayoutInputVertical()
    void CalculateLayoutInputVertical();
    // public System.Void .ctor()
    // Offset: 0xD35B54
    // Implemented from: TMPro.TMP_Text
    // Base method: System.Void TMP_Text::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TextMeshPro* New_ctor();
  }; // TMPro.TextMeshPro
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextMeshPro*, "TMPro", "TextMeshPro");
#pragma pack(pop)
