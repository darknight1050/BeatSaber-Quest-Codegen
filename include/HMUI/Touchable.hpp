// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.Touchable
  // [] Offset: FFFFFFFF
  class Touchable : public UnityEngine::UI::Graphic {
    public:
    // Writing base type padding for base size: 0x89 to desired offset: 0x8C
    char ___base_padding[0x3] = {};
    // private System.Single _skew
    // Size: 0x4
    // Offset: 0x8C
    float skew;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Touchable
    Touchable(float skew_ = {}) noexcept : skew{skew_} {}
    // public System.Single get_skew()
    // Offset: 0x1206524
    float get_skew();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x120652C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh_NEW(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // public System.Void .ctor()
    // Offset: 0x1206548
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Touchable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::Touchable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Touchable*, creationType>()));
    }
  }; // HMUI.Touchable
  #pragma pack(pop)
  static check_size<sizeof(Touchable), 140 + sizeof(float)> __HMUI_TouchableSizeCheck;
  static_assert(sizeof(Touchable) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::Touchable*, "HMUI", "Touchable");
