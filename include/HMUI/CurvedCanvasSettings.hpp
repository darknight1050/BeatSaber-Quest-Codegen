// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Vector2 because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x90
  // Autogenerated type: HMUI.CurvedCanvasSettings
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: DA5AD0
  // [RequireComponent] Offset: DA5AD0
  class CurvedCanvasSettings : public UnityEngine::UI::Graphic {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x8C
    char ___base_padding[0x3] = {};
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x8C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: CurvedCanvasSettings
    CurvedCanvasSettings(float radius_ = {}) noexcept : radius{radius_} {}
    // static field const value: static public System.Single kMaxElementWidth
    static constexpr const float kMaxElementWidth = 15;
    // Get static field: static public System.Single kMaxElementWidth
    static float _get_kMaxElementWidth();
    // Set static field: static public System.Single kMaxElementWidth
    static void _set_kMaxElementWidth(float value);
    // public System.Single get_radius()
    // Offset: 0x10ABA74
    float get_radius();
    // public System.Void SetRadius(System.Single value)
    // Offset: 0x10ABA7C
    void SetRadius(float value);
    // private UnityEngine.Vector3 TransformPointFromCanvasTo3D(UnityEngine.Vector2 point)
    // Offset: 0x10ABD48
    UnityEngine::Vector3 TransformPointFromCanvasTo3D(UnityEngine::Vector2 point);
    // static private System.Void RebuildAndSetup(UnityEngine.Transform t)
    // Offset: 0x10ABA98
    static void RebuildAndSetup(UnityEngine::Transform* t);
    // protected override System.Void Start()
    // Offset: 0x10ABB8C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x10ABC38
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // public System.Void .ctor()
    // Offset: 0x10ABE18
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CurvedCanvasSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::CurvedCanvasSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CurvedCanvasSettings*, creationType>()));
    }
  }; // HMUI.CurvedCanvasSettings
  static check_size<sizeof(CurvedCanvasSettings), 140 + sizeof(float)> __HMUI_CurvedCanvasSettingsSizeCheck;
  static_assert(sizeof(CurvedCanvasSettings) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::CurvedCanvasSettings*, "HMUI", "CurvedCanvasSettings");
#pragma pack(pop)
