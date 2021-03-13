// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.HoverHintPanel
  // [] Offset: FFFFFFFF
  class HoverHintPanel : public UnityEngine::MonoBehaviour {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.Vector2 _padding
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Vector2 padding;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _containerPadding
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Vector2 containerPadding;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private System.Single _separator
    // Size: 0x4
    // Offset: 0x30
    float separator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _zOffset
    // Size: 0x4
    // Offset: 0x34
    float zOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD020E0
    // private System.Boolean <isShown>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool isShown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HoverHintPanel
    HoverHintPanel(TMPro::TextMeshProUGUI* text_ = {}, UnityEngine::Vector2 padding_ = {}, UnityEngine::Vector2 containerPadding_ = {}, float separator_ = {}, float zOffset_ = {}, bool isShown_ = {}) noexcept : text{text_}, padding{padding_}, containerPadding{containerPadding_}, separator{separator_}, zOffset{zOffset_}, isShown{isShown_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_isShown()
    // Offset: 0x122C58C
    bool get_isShown();
    // private System.Void set_isShown(System.Boolean value)
    // Offset: 0x122C594
    void set_isShown(bool value);
    // protected System.Void Awake()
    // Offset: 0x122C5A0
    void Awake();
    // public System.Void Show(System.String text, UnityEngine.Transform parent, UnityEngine.Vector2 containerSize, UnityEngine.Rect spawnRect)
    // Offset: 0x122C040
    void Show(::Il2CppString* text, UnityEngine::Transform* parent, UnityEngine::Vector2 containerSize, UnityEngine::Rect spawnRect);
    // public System.Void Hide()
    // Offset: 0x122BB78
    void Hide();
    // private UnityEngine.Vector2 CalculatePanelPosition(UnityEngine.Vector2 containerSize, UnityEngine.Rect spawnRect, UnityEngine.Vector2 panelSize)
    // Offset: 0x122C6A8
    UnityEngine::Vector2 CalculatePanelPosition(UnityEngine::Vector2 containerSize, UnityEngine::Rect spawnRect, UnityEngine::Vector2 panelSize);
    // public System.Void .ctor()
    // Offset: 0x122C7D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoverHintPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::HoverHintPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoverHintPanel*, creationType>()));
    }
  }; // HMUI.HoverHintPanel
  #pragma pack(pop)
  static check_size<sizeof(HoverHintPanel), 56 + sizeof(bool)> __HMUI_HoverHintPanelSizeCheck;
  static_assert(sizeof(HoverHintPanel) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::HoverHintPanel*, "HMUI", "HoverHintPanel");
