// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: MaskableGraphic
  class MaskableGraphic;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_MaterialManager
  class TMP_MaterialManager : public ::Il2CppObject {
    public:
    // Nested type: TMPro::TMP_MaterialManager::FallbackMaterial
    class FallbackMaterial;
    // Nested type: TMPro::TMP_MaterialManager::MaskingMaterial
    class MaskingMaterial;
    // Nested type: TMPro::TMP_MaterialManager::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: TMPro::TMP_MaterialManager::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: TMPro::TMP_MaterialManager::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: TMPro::TMP_MaterialManager::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Creating value type constructor for type: TMP_MaterialManager
    TMP_MaterialManager() noexcept {}
    // Get static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/MaskingMaterial> m_materialList
    static System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::MaskingMaterial*>* _get_m_materialList();
    // Set static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/MaskingMaterial> m_materialList
    static void _set_m_materialList(System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::MaskingMaterial*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial> m_fallbackMaterials
    static System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_MaterialManager::FallbackMaterial*>* _get_m_fallbackMaterials();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int64,TMPro.TMP_MaterialManager/FallbackMaterial> m_fallbackMaterials
    static void _set_m_fallbackMaterials(System::Collections::Generic::Dictionary_2<int64_t, TMPro::TMP_MaterialManager::FallbackMaterial*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Int64> m_fallbackMaterialLookup
    static System::Collections::Generic::Dictionary_2<int, int64_t>* _get_m_fallbackMaterialLookup();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.Int64> m_fallbackMaterialLookup
    static void _set_m_fallbackMaterialLookup(System::Collections::Generic::Dictionary_2<int, int64_t>* value);
    // Get static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/FallbackMaterial> m_fallbackCleanupList
    static System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::FallbackMaterial*>* _get_m_fallbackCleanupList();
    // Set static field: static private System.Collections.Generic.List`1<TMPro.TMP_MaterialManager/FallbackMaterial> m_fallbackCleanupList
    static void _set_m_fallbackCleanupList(System::Collections::Generic::List_1<TMPro::TMP_MaterialManager::FallbackMaterial*>* value);
    // Get static field: static private System.Boolean isFallbackListDirty
    static bool _get_isFallbackListDirty();
    // Set static field: static private System.Boolean isFallbackListDirty
    static void _set_isFallbackListDirty(bool value);
    // static private System.Void .cctor()
    // Offset: 0x1150EB8
    static void _cctor();
    // static private System.Void OnPreRender(UnityEngine.Camera cam)
    // Offset: 0x115106C
    static void OnPreRender(UnityEngine::Camera* cam);
    // static private System.Void OnPreRenderCanvas()
    // Offset: 0x115130C
    static void OnPreRenderCanvas();
    // static public UnityEngine.Material GetStencilMaterial(UnityEngine.Material baseMaterial, System.Int32 stencilID)
    // Offset: 0x115139C
    static UnityEngine::Material* GetStencilMaterial(UnityEngine::Material* baseMaterial, int stencilID);
    // static public System.Void ReleaseStencilMaterial(UnityEngine.Material stencilMaterial)
    // Offset: 0x115173C
    static void ReleaseStencilMaterial(UnityEngine::Material* stencilMaterial);
    // static public UnityEngine.Material GetBaseMaterial(UnityEngine.Material stencilMaterial)
    // Offset: 0x11519A0
    static UnityEngine::Material* GetBaseMaterial(UnityEngine::Material* stencilMaterial);
    // static public UnityEngine.Material SetStencil(UnityEngine.Material material, System.Int32 stencilID)
    // Offset: 0x1151AF8
    static UnityEngine::Material* SetStencil(UnityEngine::Material* material, int stencilID);
    // static public System.Void AddMaskingMaterial(UnityEngine.Material baseMaterial, UnityEngine.Material stencilMaterial, System.Int32 stencilID)
    // Offset: 0x1151BE4
    static void AddMaskingMaterial(UnityEngine::Material* baseMaterial, UnityEngine::Material* stencilMaterial, int stencilID);
    // static public System.Void RemoveStencilMaterial(UnityEngine.Material stencilMaterial)
    // Offset: 0x1151E0C
    static void RemoveStencilMaterial(UnityEngine::Material* stencilMaterial);
    // static public System.Void ReleaseBaseMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x1151F54
    static void ReleaseBaseMaterial(UnityEngine::Material* baseMaterial);
    // static public System.Void ClearMaterials()
    // Offset: 0x11525D8
    static void ClearMaterials();
    // static public System.Int32 GetStencilID(UnityEngine.GameObject obj)
    // Offset: 0x1152780
    static int GetStencilID(UnityEngine::GameObject* obj);
    // static public UnityEngine.Material GetMaterialForRendering(UnityEngine.UI.MaskableGraphic graphic, UnityEngine.Material baseMaterial)
    // Offset: 0x1152BE4
    static UnityEngine::Material* GetMaterialForRendering(UnityEngine::UI::MaskableGraphic* graphic, UnityEngine::Material* baseMaterial);
    // static private UnityEngine.Transform FindRootSortOverrideCanvas(UnityEngine.Transform start)
    // Offset: 0x1152A68
    static UnityEngine::Transform* FindRootSortOverrideCanvas(UnityEngine::Transform* start);
    // static public UnityEngine.Material GetFallbackMaterial(UnityEngine.Material sourceMaterial, UnityEngine.Material targetMaterial)
    // Offset: 0x1152DB4
    static UnityEngine::Material* GetFallbackMaterial(UnityEngine::Material* sourceMaterial, UnityEngine::Material* targetMaterial);
    // static public System.Void AddFallbackMaterialReference(UnityEngine.Material targetMaterial)
    // Offset: 0x115317C
    static void AddFallbackMaterialReference(UnityEngine::Material* targetMaterial);
    // static public System.Void RemoveFallbackMaterialReference(UnityEngine.Material targetMaterial)
    // Offset: 0x11532BC
    static void RemoveFallbackMaterialReference(UnityEngine::Material* targetMaterial);
    // static public System.Void CleanupFallbackMaterials()
    // Offset: 0x11510FC
    static void CleanupFallbackMaterials();
    // static public System.Void ReleaseFallbackMaterial(UnityEngine.Material fallackMaterial)
    // Offset: 0x1153440
    static void ReleaseFallbackMaterial(UnityEngine::Material* fallackMaterial);
    // static public System.Void CopyMaterialPresetProperties(UnityEngine.Material source, UnityEngine.Material destination)
    // Offset: 0x11535EC
    static void CopyMaterialPresetProperties(UnityEngine::Material* source, UnityEngine::Material* destination);
  }; // TMPro.TMP_MaterialManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_MaterialManager*, "TMPro", "TMP_MaterialManager");
