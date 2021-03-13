// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_SelectionCaret
  // [] Offset: FFFFFFFF
  class TMP_SelectionCaret : public UnityEngine::UI::MaskableGraphic {
    public:
    // Creating value type constructor for type: TMP_SelectionCaret
    TMP_SelectionCaret() noexcept {}
    // public override System.Void Cull(UnityEngine.Rect clipRect, System.Boolean validRect)
    // Offset: 0xFB60B8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::Cull_NEW(UnityEngine.Rect clipRect, System.Boolean validRect)
    void Cull(UnityEngine::Rect clipRect, bool validRect);
    // public System.Void .ctor()
    // Offset: 0xFB60BC
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_SelectionCaret* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_SelectionCaret::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_SelectionCaret*, creationType>()));
    }
  }; // TMPro.TMP_SelectionCaret
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SelectionCaret*, "TMPro", "TMP_SelectionCaret");
