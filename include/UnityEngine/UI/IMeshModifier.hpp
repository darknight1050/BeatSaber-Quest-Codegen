// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.IMeshModifier
  class IMeshModifier {
    public:
    // public System.Void ModifyMesh(UnityEngine.Mesh mesh)
    // Offset: 0xFFFFFFFF
    void ModifyMesh(UnityEngine::Mesh* mesh);
    // public System.Void ModifyMesh(UnityEngine.UI.VertexHelper verts)
    // Offset: 0xFFFFFFFF
    void ModifyMesh(UnityEngine::UI::VertexHelper* verts);
  }; // UnityEngine.UI.IMeshModifier
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::IMeshModifier*, "UnityEngine.UI", "IMeshModifier");
#pragma pack(pop)
