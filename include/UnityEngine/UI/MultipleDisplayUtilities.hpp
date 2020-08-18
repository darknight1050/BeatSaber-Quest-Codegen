// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.MultipleDisplayUtilities
  class MultipleDisplayUtilities : public ::Il2CppObject {
    public:
    // static public System.Boolean GetRelativeMousePositionForDrag(UnityEngine.EventSystems.PointerEventData eventData, UnityEngine.Vector2 position)
    // Offset: 0x115B0C4
    static bool GetRelativeMousePositionForDrag(UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine::Vector2& position);
    // static public UnityEngine.Vector2 GetMousePositionRelativeToMainDisplayResolution()
    // Offset: 0x11625B8
    static UnityEngine::Vector2 GetMousePositionRelativeToMainDisplayResolution();
  }; // UnityEngine.UI.MultipleDisplayUtilities
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::MultipleDisplayUtilities*, "UnityEngine.UI", "MultipleDisplayUtilities");
#pragma pack(pop)
