// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
#include "UnityEngine/UI/HorizontalOrVerticalLayoutGroup.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x62
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.HorizontalLayoutGroup
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: CD82FC
  class HorizontalLayoutGroup : public UnityEngine::UI::HorizontalOrVerticalLayoutGroup {
    public:
    // Creating value type constructor for type: HorizontalLayoutGroup
    HorizontalLayoutGroup() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x1756D20
    // Implemented from: UnityEngine.UI.HorizontalOrVerticalLayoutGroup
    // Base method: System.Void HorizontalOrVerticalLayoutGroup::.ctor()
    // Base method: System.Void LayoutGroup::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HorizontalLayoutGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::HorizontalLayoutGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HorizontalLayoutGroup*, creationType>()));
    }
    // public override System.Void CalculateLayoutInputHorizontal()
    // Offset: 0x1756D40
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputHorizontal_NEW()
    void CalculateLayoutInputHorizontal();
    // public override System.Void CalculateLayoutInputVertical()
    // Offset: 0x1757008
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::CalculateLayoutInputVertical_NEW()
    void CalculateLayoutInputVertical();
    // public override System.Void SetLayoutHorizontal()
    // Offset: 0x1757014
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutHorizontal_NEW()
    void SetLayoutHorizontal();
    // public override System.Void SetLayoutVertical()
    // Offset: 0x17575EC
    // Implemented from: UnityEngine.UI.LayoutGroup
    // Base method: System.Void LayoutGroup::SetLayoutVertical_NEW()
    void SetLayoutVertical();
  }; // UnityEngine.UI.HorizontalLayoutGroup
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::HorizontalLayoutGroup*, "UnityEngine.UI", "HorizontalLayoutGroup");
