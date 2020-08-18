// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHintController
  class HoverHintController;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.HoverHint
  class HoverHint : public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler, public UnityEngine::MonoBehaviour {
    public:
    // private System.String _text
    // Offset: 0x18
    ::Il2CppString* text;
    // private UnityEngine.Vector3[] _worldCornersTemp
    // Offset: 0x20
    ::Array<UnityEngine::Vector3>* worldCornersTemp;
    // private HMUI.HoverHintController _hoverHintController
    // Offset: 0x28
    HMUI::HoverHintController* hoverHintController;
    // public System.String get_text()
    // Offset: 0xE3E4F0
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0xE3E4F8
    void set_text(::Il2CppString* value);
    // public UnityEngine.Vector2 get_size()
    // Offset: 0xE3E500
    UnityEngine::Vector2 get_size();
    // public UnityEngine.Vector3 get_worldCenter()
    // Offset: 0xE3E598
    UnityEngine::Vector3 get_worldCenter();
    // private System.Void OnDisable()
    // Offset: 0xE3E838
    void OnDisable();
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE3E720
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE3E7D4
    // Implemented from: UnityEngine.EventSystems.IPointerExitHandler
    // Base method: System.Void IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0xE3E86C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HoverHint* New_ctor();
  }; // HMUI.HoverHint
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHint*, "HMUI", "HoverHint");
#pragma pack(pop)
