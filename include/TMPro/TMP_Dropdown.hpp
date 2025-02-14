// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IPointerClickHandler
#include "UnityEngine/EventSystems/IPointerClickHandler.hpp"
// Including type: UnityEngine.EventSystems.ISubmitHandler
#include "UnityEngine/EventSystems/ISubmitHandler.hpp"
// Including type: UnityEngine.EventSystems.ICancelHandler
#include "UnityEngine/EventSystems/ICancelHandler.hpp"
// Including type: TMPro.FloatTween
#include "TMPro/FloatTween.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
  // Forward declaring type: TweenRunner`1<T>
  template<typename T>
  class TweenRunner_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Sprite
  class Sprite;
  // Skipping declaration: Component because it is already included!
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x159
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Dropdown
  // [AddComponentMenu] Offset: DD5600
  // [RequireComponent] Offset: DD5600
  class TMP_Dropdown : public UnityEngine::UI::Selectable/*, public UnityEngine::EventSystems::IPointerClickHandler, public UnityEngine::EventSystems::ISubmitHandler, public UnityEngine::EventSystems::ICancelHandler*/ {
    public:
    // Nested type: TMPro::TMP_Dropdown::DropdownItem
    class DropdownItem;
    // Nested type: TMPro::TMP_Dropdown::OptionData
    class OptionData;
    // Nested type: TMPro::TMP_Dropdown::OptionDataList
    class OptionDataList;
    // Nested type: TMPro::TMP_Dropdown::DropdownEvent
    class DropdownEvent;
    // Nested type: TMPro::TMP_Dropdown::$$c__DisplayClass60_0
    class $$c__DisplayClass60_0;
    // Nested type: TMPro::TMP_Dropdown::$DelayedDestroyDropdownList$d__72
    class $DelayedDestroyDropdownList$d__72;
    // private UnityEngine.RectTransform m_Template
    // Size: 0x8
    // Offset: 0xF8
    UnityEngine::RectTransform* m_Template;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private TMPro.TMP_Text m_CaptionText
    // Size: 0x8
    // Offset: 0x100
    TMPro::TMP_Text* m_CaptionText;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Text*) == 0x8);
    // private UnityEngine.UI.Image m_CaptionImage
    // Size: 0x8
    // Offset: 0x108
    UnityEngine::UI::Image* m_CaptionImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD5B20
    // private TMPro.TMP_Text m_ItemText
    // Size: 0x8
    // Offset: 0x110
    TMPro::TMP_Text* m_ItemText;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Text*) == 0x8);
    // private UnityEngine.UI.Image m_ItemImage
    // Size: 0x8
    // Offset: 0x118
    UnityEngine::UI::Image* m_ItemImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD5B68
    // private System.Int32 m_Value
    // Size: 0x4
    // Offset: 0x120
    int m_Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_Value and: m_Options
    char __padding5[0x4] = {};
    // [SpaceAttribute] Offset: 0xDD5BA0
    // private TMPro.TMP_Dropdown/OptionDataList m_Options
    // Size: 0x8
    // Offset: 0x128
    TMPro::TMP_Dropdown::OptionDataList* m_Options;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Dropdown::OptionDataList*) == 0x8);
    // [SpaceAttribute] Offset: 0xDD5BD8
    // private TMPro.TMP_Dropdown/DropdownEvent m_OnValueChanged
    // Size: 0x8
    // Offset: 0x130
    TMPro::TMP_Dropdown::DropdownEvent* m_OnValueChanged;
    // Field size check
    static_assert(sizeof(TMPro::TMP_Dropdown::DropdownEvent*) == 0x8);
    // private UnityEngine.GameObject m_Dropdown
    // Size: 0x8
    // Offset: 0x138
    UnityEngine::GameObject* m_Dropdown;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_Blocker
    // Size: 0x8
    // Offset: 0x140
    UnityEngine::GameObject* m_Blocker;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> m_Items
    // Size: 0x8
    // Offset: 0x148
    System::Collections::Generic::List_1<TMPro::TMP_Dropdown::DropdownItem*>* m_Items;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::DropdownItem*>*) == 0x8);
    // private TMPro.TweenRunner`1<TMPro.FloatTween> m_AlphaTweenRunner
    // Size: 0x8
    // Offset: 0x150
    TMPro::TweenRunner_1<TMPro::FloatTween>* m_AlphaTweenRunner;
    // Field size check
    static_assert(sizeof(TMPro::TweenRunner_1<TMPro::FloatTween>*) == 0x8);
    // private System.Boolean validTemplate
    // Size: 0x1
    // Offset: 0x158
    bool validTemplate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: TMP_Dropdown
    TMP_Dropdown(UnityEngine::RectTransform* m_Template_ = {}, TMPro::TMP_Text* m_CaptionText_ = {}, UnityEngine::UI::Image* m_CaptionImage_ = {}, TMPro::TMP_Text* m_ItemText_ = {}, UnityEngine::UI::Image* m_ItemImage_ = {}, int m_Value_ = {}, TMPro::TMP_Dropdown::OptionDataList* m_Options_ = {}, TMPro::TMP_Dropdown::DropdownEvent* m_OnValueChanged_ = {}, UnityEngine::GameObject* m_Dropdown_ = {}, UnityEngine::GameObject* m_Blocker_ = {}, System::Collections::Generic::List_1<TMPro::TMP_Dropdown::DropdownItem*>* m_Items_ = {}, TMPro::TweenRunner_1<TMPro::FloatTween>* m_AlphaTweenRunner_ = {}, bool validTemplate_ = {}) noexcept : m_Template{m_Template_}, m_CaptionText{m_CaptionText_}, m_CaptionImage{m_CaptionImage_}, m_ItemText{m_ItemText_}, m_ItemImage{m_ItemImage_}, m_Value{m_Value_}, m_Options{m_Options_}, m_OnValueChanged{m_OnValueChanged_}, m_Dropdown{m_Dropdown_}, m_Blocker{m_Blocker_}, m_Items{m_Items_}, m_AlphaTweenRunner{m_AlphaTweenRunner_}, validTemplate{validTemplate_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerClickHandler
    operator UnityEngine::EventSystems::IPointerClickHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerClickHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ISubmitHandler
    operator UnityEngine::EventSystems::ISubmitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ISubmitHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::ICancelHandler
    operator UnityEngine::EventSystems::ICancelHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::ICancelHandler*>(this);
    }
    // Get static field: static private TMPro.TMP_Dropdown/OptionData s_NoOptionData
    static TMPro::TMP_Dropdown::OptionData* _get_s_NoOptionData();
    // Set static field: static private TMPro.TMP_Dropdown/OptionData s_NoOptionData
    static void _set_s_NoOptionData(TMPro::TMP_Dropdown::OptionData* value);
    // public UnityEngine.RectTransform get_template()
    // Offset: 0x110F31C
    UnityEngine::RectTransform* get_template();
    // public System.Void set_template(UnityEngine.RectTransform value)
    // Offset: 0x110EFD0
    void set_template(UnityEngine::RectTransform* value);
    // public TMPro.TMP_Text get_captionText()
    // Offset: 0x110F324
    TMPro::TMP_Text* get_captionText();
    // public System.Void set_captionText(TMPro.TMP_Text value)
    // Offset: 0x110EFD8
    void set_captionText(TMPro::TMP_Text* value);
    // public UnityEngine.UI.Image get_captionImage()
    // Offset: 0x110F32C
    UnityEngine::UI::Image* get_captionImage();
    // public System.Void set_captionImage(UnityEngine.UI.Image value)
    // Offset: 0x110F334
    void set_captionImage(UnityEngine::UI::Image* value);
    // public TMPro.TMP_Text get_itemText()
    // Offset: 0x110F33C
    TMPro::TMP_Text* get_itemText();
    // public System.Void set_itemText(TMPro.TMP_Text value)
    // Offset: 0x110EFE0
    void set_itemText(TMPro::TMP_Text* value);
    // public UnityEngine.UI.Image get_itemImage()
    // Offset: 0x110F344
    UnityEngine::UI::Image* get_itemImage();
    // public System.Void set_itemImage(UnityEngine.UI.Image value)
    // Offset: 0x110F34C
    void set_itemImage(UnityEngine::UI::Image* value);
    // public System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> get_options()
    // Offset: 0x110EFE8
    System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* get_options();
    // public System.Void set_options(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> value)
    // Offset: 0x110F354
    void set_options(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* value);
    // public TMPro.TMP_Dropdown/DropdownEvent get_onValueChanged()
    // Offset: 0x110F370
    TMPro::TMP_Dropdown::DropdownEvent* get_onValueChanged();
    // public System.Void set_onValueChanged(TMPro.TMP_Dropdown/DropdownEvent value)
    // Offset: 0x110F378
    void set_onValueChanged(TMPro::TMP_Dropdown::DropdownEvent* value);
    // public System.Int32 get_value()
    // Offset: 0x110F380
    int get_value();
    // public System.Void set_value(System.Int32 value)
    // Offset: 0x110F388
    void set_value(int value);
    // public System.Void SetValueWithoutNotify(System.Int32 input)
    // Offset: 0x110F4B0
    void SetValueWithoutNotify(int input);
    // private System.Void SetValue(System.Int32 value, System.Boolean sendCallback)
    // Offset: 0x110F390
    void SetValue(int value, bool sendCallback);
    // public System.Boolean get_IsExpanded()
    // Offset: 0x110F4B8
    bool get_IsExpanded();
    // public System.Void RefreshShownValue()
    // Offset: 0x110F00C
    void RefreshShownValue();
    // public System.Void AddOptions(System.Collections.Generic.List`1<TMPro.TMP_Dropdown/OptionData> options)
    // Offset: 0x110FA28
    void AddOptions(System::Collections::Generic::List_1<TMPro::TMP_Dropdown::OptionData*>* options);
    // public System.Void AddOptions(System.Collections.Generic.List`1<System.String> options)
    // Offset: 0x110FAA0
    void AddOptions(System::Collections::Generic::List_1<::Il2CppString*>* options);
    // public System.Void AddOptions(System.Collections.Generic.List`1<UnityEngine.Sprite> options)
    // Offset: 0x110FBB8
    void AddOptions(System::Collections::Generic::List_1<UnityEngine::Sprite*>* options);
    // public System.Void ClearOptions()
    // Offset: 0x110FCD0
    void ClearOptions();
    // private System.Void SetupTemplate()
    // Offset: 0x110FD3C
    void SetupTemplate();
    // static private T GetOrAddComponent(UnityEngine.GameObject go)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetOrAddComponent(UnityEngine::GameObject* go) {
      static_assert(std::is_convertible_v<T, UnityEngine::Component*>);
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::GetOrAddComponent");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("TMPro", "TMP_Dropdown", "GetOrAddComponent", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(go)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, go);
    }
    // public System.Void OnPointerClick(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11101DC
    void OnPointerClick(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnSubmit(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1110E9C
    void OnSubmit(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void OnCancel(UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x1110EA0
    void OnCancel(UnityEngine::EventSystems::BaseEventData* eventData);
    // public System.Void Show()
    // Offset: 0x11101E0
    void Show();
    // protected UnityEngine.GameObject CreateBlocker(UnityEngine.Canvas rootCanvas)
    // Offset: 0x1111388
    UnityEngine::GameObject* CreateBlocker(UnityEngine::Canvas* rootCanvas);
    // protected System.Void DestroyBlocker(UnityEngine.GameObject blocker)
    // Offset: 0x1111620
    void DestroyBlocker(UnityEngine::GameObject* blocker);
    // protected UnityEngine.GameObject CreateDropdownList(UnityEngine.GameObject template)
    // Offset: 0x1111688
    UnityEngine::GameObject* CreateDropdownList(UnityEngine::GameObject* _template);
    // protected System.Void DestroyDropdownList(UnityEngine.GameObject dropdownList)
    // Offset: 0x11116F8
    void DestroyDropdownList(UnityEngine::GameObject* dropdownList);
    // protected TMPro.TMP_Dropdown/DropdownItem CreateItem(TMPro.TMP_Dropdown/DropdownItem itemTemplate)
    // Offset: 0x1111760
    TMPro::TMP_Dropdown::DropdownItem* CreateItem(TMPro::TMP_Dropdown::DropdownItem* itemTemplate);
    // protected System.Void DestroyItem(TMPro.TMP_Dropdown/DropdownItem item)
    // Offset: 0x11117D0
    void DestroyItem(TMPro::TMP_Dropdown::DropdownItem* item);
    // private TMPro.TMP_Dropdown/DropdownItem AddItem(TMPro.TMP_Dropdown/OptionData data, System.Boolean selected, TMPro.TMP_Dropdown/DropdownItem itemTemplate, System.Collections.Generic.List`1<TMPro.TMP_Dropdown/DropdownItem> items)
    // Offset: 0x1110FD8
    TMPro::TMP_Dropdown::DropdownItem* AddItem(TMPro::TMP_Dropdown::OptionData* data, bool selected, TMPro::TMP_Dropdown::DropdownItem* itemTemplate, System::Collections::Generic::List_1<TMPro::TMP_Dropdown::DropdownItem*>* items);
    // private System.Void AlphaFadeList(System.Single duration, System.Single alpha)
    // Offset: 0x11117D4
    void AlphaFadeList(float duration, float alpha);
    // private System.Void AlphaFadeList(System.Single duration, System.Single start, System.Single end)
    // Offset: 0x1111270
    void AlphaFadeList(float duration, float start, float end);
    // private System.Void SetAlpha(System.Single alpha)
    // Offset: 0x111185C
    void SetAlpha(float alpha);
    // public System.Void Hide()
    // Offset: 0x1110EA4
    void Hide();
    // private System.Collections.IEnumerator DelayedDestroyDropdownList(System.Single delay)
    // Offset: 0x1111914
    System::Collections::IEnumerator* DelayedDestroyDropdownList(float delay);
    // private System.Void ImmediateDestroyDropdownList()
    // Offset: 0x110F8C4
    void ImmediateDestroyDropdownList();
    // private System.Void OnSelectItem(UnityEngine.UI.Toggle toggle)
    // Offset: 0x11119C0
    void OnSelectItem(UnityEngine::UI::Toggle* toggle);
    // protected System.Void .ctor()
    // Offset: 0x110F528
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown*, creationType>()));
    }
    // protected override System.Void Awake()
    // Offset: 0x110F6B4
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::Awake()
    void Awake();
    // protected override System.Void Start()
    // Offset: 0x110F800
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::Start()
    void Start();
    // protected override System.Void OnDisable()
    // Offset: 0x110F828
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // static private System.Void .cctor()
    // Offset: 0x1111B04
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // TMPro.TMP_Dropdown
  #pragma pack(pop)
  static check_size<sizeof(TMP_Dropdown), 344 + sizeof(bool)> __TMPro_TMP_DropdownSizeCheck;
  static_assert(sizeof(TMP_Dropdown) == 0x159);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Dropdown*, "TMPro", "TMP_Dropdown");
