// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHintController
  class HoverHintController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverHint
  class HoverHint : public UnityEngine::MonoBehaviour/*, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // private System.String _text
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [InjectAttribute] Offset: 0xDF61C4
    // private readonly HMUI.HoverHintController _hoverHintController
    // Size: 0x8
    // Offset: 0x20
    HMUI::HoverHintController* hoverHintController;
    // Field size check
    static_assert(sizeof(HMUI::HoverHintController*) == 0x8);
    // private readonly UnityEngine.Vector3[] _worldCornersTemp
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::Vector3>* worldCornersTemp;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // Creating value type constructor for type: HoverHint
    HoverHint(::Il2CppString* text_ = {}, HMUI::HoverHintController* hoverHintController_ = {}, ::Array<UnityEngine::Vector3>* worldCornersTemp_ = {}) noexcept : text{text_}, hoverHintController{hoverHintController_}, worldCornersTemp{worldCornersTemp_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerExitHandler
    operator UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_text()
    // Offset: 0x12FE130
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x12FE138
    void set_text(::Il2CppString* value);
    // public UnityEngine.Vector2 get_size()
    // Offset: 0x12FE140
    UnityEngine::Vector2 get_size();
    // public UnityEngine.Vector3 get_worldCenter()
    // Offset: 0x12FE1D8
    UnityEngine::Vector3 get_worldCenter();
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12FE360
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x12FE414
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.Void OnDisable()
    // Offset: 0x12FE57C
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x12FE60C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverHint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HoverHint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverHint*, creationType>()));
    }
  }; // HMUI.HoverHint
  #pragma pack(pop)
  static check_size<sizeof(HoverHint), 40 + sizeof(::Array<UnityEngine::Vector3>*)> __HMUI_HoverHintSizeCheck;
  static_assert(sizeof(HoverHint) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHint*, "HMUI", "HoverHint");
