// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: HMUI.Interactable
#include "HMUI/Interactable.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableView
  class TableView;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.AlphabetScrollbar
  class AlphabetScrollbar : public UnityEngine::EventSystems::IPointerDownHandler, public UnityEngine::EventSystems::IPointerUpHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler, public HMUI::Interactable {
    public:
    // Nested type: HMUI::AlphabetScrollbar::$PointerMoveInsideCoroutine$d__18
    class $PointerMoveInsideCoroutine$d__18;
    // private HMUI.TableView _tableView
    // Offset: 0x20
    HMUI::TableView* tableView;
    // private System.Single _characterHeight
    // Offset: 0x28
    float characterHeight;
    // private UnityEngine.Color _normalColor
    // Offset: 0x2C
    UnityEngine::Color normalColor;
    // private TMPro.TextMeshProUGUI _textPrefab
    // Offset: 0x40
    TMPro::TextMeshProUGUI* textPrefab;
    // private TMPro.TextMeshProUGUI[] _prealocatedTexts
    // Offset: 0x48
    ::Array<TMPro::TextMeshProUGUI*>* prealocatedTexts;
    // private UnityEngine.UI.Image _highlightImage
    // Offset: 0x50
    UnityEngine::UI::Image* highlightImage;
    // private AlphabetScrollInfo/Data[] _characterScrollData
    // Offset: 0x58
    ::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData;
    // private System.Collections.Generic.List`1<TMPro.TextMeshProUGUI> _texts
    // Offset: 0x60
    System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>* texts;
    // private System.Int32 _highlightedCharactedIndex
    // Offset: 0x68
    int highlightedCharactedIndex;
    // private System.Boolean _pointerIsDown
    // Offset: 0x6C
    bool pointerIsDown;
    // protected System.Void Awake()
    // Offset: 0xE31DDC
    void Awake();
    // public System.Void SetData(AlphabetScrollInfo/Data[] characterScrollData)
    // Offset: 0xE31DFC
    void SetData(::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData);
    // private System.Void PrepareTransforms()
    // Offset: 0xE32084
    void PrepareTransforms();
    // private System.Void RefreshHighlight()
    // Offset: 0xE326EC
    void RefreshHighlight();
    // private System.Collections.IEnumerator PointerMoveInsideCoroutine(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE32624
    System::Collections::IEnumerator* PointerMoveInsideCoroutine(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Int32 GetPointerCharacterIndex(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE3246C
    int GetPointerCharacterIndex(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void InitText(TMPro.TextMeshProUGUI text, System.Char character)
    // Offset: 0xE31F84
    void InitText(TMPro::TextMeshProUGUI* text, ::Il2CppChar character);
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE323FC
    // Implemented from: UnityEngine.EventSystems.IPointerDownHandler
    // Base method: System.Void IPointerDownHandler::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE325F0
    // Implemented from: UnityEngine.EventSystems.IPointerUpHandler
    // Base method: System.Void IPointerUpHandler::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE325F8
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xE326BC
    // Implemented from: UnityEngine.EventSystems.IPointerExitHandler
    // Base method: System.Void IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0xE32808
    // Implemented from: HMUI.Interactable
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AlphabetScrollbar* New_ctor();
  }; // HMUI.AlphabetScrollbar
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::AlphabetScrollbar*, "HMUI", "AlphabetScrollbar");
#pragma pack(pop)
