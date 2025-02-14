// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: StencilOp
  struct StencilOp;
  // Forward declaring type: CompareFunction
  struct CompareFunction;
  // Forward declaring type: ColorWriteMask
  struct ColorWriteMask;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.StencilMaterial
  class StencilMaterial : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::UI::StencilMaterial::MatEntry
    class MatEntry;
    // Creating value type constructor for type: StencilMaterial
    StencilMaterial() noexcept {}
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry> m_List
    static System::Collections::Generic::List_1<UnityEngine::UI::StencilMaterial::MatEntry*>* _get_m_List();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.UI.StencilMaterial/MatEntry> m_List
    static void _set_m_List(System::Collections::Generic::List_1<UnityEngine::UI::StencilMaterial::MatEntry*>* value);
    // static public UnityEngine.Material Add(UnityEngine.Material baseMat, System.Int32 stencilID)
    // Offset: 0x2382FA4
    static UnityEngine::Material* Add(UnityEngine::Material* baseMat, int stencilID);
    // static public UnityEngine.Material Add(UnityEngine.Material baseMat, System.Int32 stencilID, UnityEngine.Rendering.StencilOp operation, UnityEngine.Rendering.CompareFunction compareFunction, UnityEngine.Rendering.ColorWriteMask colorWriteMask)
    // Offset: 0x2382FAC
    static UnityEngine::Material* Add(UnityEngine::Material* baseMat, int stencilID, UnityEngine::Rendering::StencilOp operation, UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine::Rendering::ColorWriteMask colorWriteMask);
    // static public UnityEngine.Material Add(UnityEngine.Material baseMat, System.Int32 stencilID, UnityEngine.Rendering.StencilOp operation, UnityEngine.Rendering.CompareFunction compareFunction, UnityEngine.Rendering.ColorWriteMask colorWriteMask, System.Int32 readMask, System.Int32 writeMask)
    // Offset: 0x2383048
    static UnityEngine::Material* Add(UnityEngine::Material* baseMat, int stencilID, UnityEngine::Rendering::StencilOp operation, UnityEngine::Rendering::CompareFunction compareFunction, UnityEngine::Rendering::ColorWriteMask colorWriteMask, int readMask, int writeMask);
    // static public System.Void Remove(UnityEngine.Material customMat)
    // Offset: 0x238387C
    static void Remove(UnityEngine::Material* customMat);
    // static public System.Void ClearAll()
    // Offset: 0x2383A34
    static void ClearAll();
    // static private System.Void .cctor()
    // Offset: 0x2383B4C
    static void _cctor();
  }; // UnityEngine.UI.StencilMaterial
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::StencilMaterial*, "UnityEngine.UI", "StencilMaterial");
