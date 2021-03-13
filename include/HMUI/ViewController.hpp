// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
  // Forward declaring type: ContainerViewController
  class ContainerViewController;
  // Forward declaring type: Screen
  class Screen;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseRaycaster
  class BaseRaycaster;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ViewController
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: D016F4
  // [RequireComponent] Offset: D016F4
  // [RequireComponent] Offset: D016F4
  class ViewController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: HMUI::ViewController::DidActivateDelegate
    class DidActivateDelegate;
    // Nested type: HMUI::ViewController::DidDeactivateDelegate
    class DidDeactivateDelegate;
    // Nested type: HMUI::ViewController::AnimationType
    struct AnimationType;
    // Nested type: HMUI::ViewController::AnimationDirection
    struct AnimationDirection;
    // Nested type: HMUI::ViewController::$PresentViewControllerCoroutine$d__58
    class $PresentViewControllerCoroutine$d__58;
    // Nested type: HMUI::ViewController::$ReplaceViewControllerCoroutine$d__60
    class $ReplaceViewControllerCoroutine$d__60;
    // Nested type: HMUI::ViewController::$DismissViewControllerCoroutine$d__62
    class $DismissViewControllerCoroutine$d__62;
    // [CompilerGeneratedAttribute] Offset: 0xD02B68
    // private HMUI.ViewController/DidActivateDelegate didActivateEvent
    // Size: 0x8
    // Offset: 0x18
    HMUI::ViewController::DidActivateDelegate* didActivateEvent;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::DidActivateDelegate*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD02B78
    // private HMUI.ViewController/DidDeactivateDelegate didDeactivateEvent
    // Size: 0x8
    // Offset: 0x20
    HMUI::ViewController::DidDeactivateDelegate* didDeactivateEvent;
    // Field size check
    static_assert(sizeof(HMUI::ViewController::DidDeactivateDelegate*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD02B88
    // private HMUI.ButtonBinder <buttonBinder>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private HMUI.ContainerViewController _containerViewController
    // Size: 0x8
    // Offset: 0x30
    HMUI::ContainerViewController* containerViewController;
    // Field size check
    static_assert(sizeof(HMUI::ContainerViewController*) == 0x8);
    // private HMUI.ViewController _parentViewController
    // Size: 0x8
    // Offset: 0x38
    HMUI::ViewController* parentViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // private HMUI.ViewController _childViewController
    // Size: 0x8
    // Offset: 0x40
    HMUI::ViewController* childViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // private HMUI.Screen _screen
    // Size: 0x8
    // Offset: 0x48
    HMUI::Screen* screen;
    // Field size check
    static_assert(sizeof(HMUI::Screen*) == 0x8);
    // private UnityEngine.RectTransform _rectTransform
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::RectTransform* rectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.CanvasGroup _canvasGroup
    // Size: 0x8
    // Offset: 0x58
    UnityEngine::CanvasGroup* canvasGroup;
    // Field size check
    static_assert(sizeof(UnityEngine::CanvasGroup*) == 0x8);
    // private System.Boolean _wasActivatedBefore
    // Size: 0x1
    // Offset: 0x60
    bool wasActivatedBefore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isActivated
    // Size: 0x1
    // Offset: 0x61
    bool isActivated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isInTransition
    // Size: 0x1
    // Offset: 0x62
    bool isInTransition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInTransition and: graphicRaycaster
    char __padding11[0x5] = {};
    // private UnityEngine.EventSystems.BaseRaycaster _graphicRaycaster
    // Size: 0x8
    // Offset: 0x68
    UnityEngine::EventSystems::BaseRaycaster* graphicRaycaster;
    // Field size check
    static_assert(sizeof(UnityEngine::EventSystems::BaseRaycaster*) == 0x8);
    // Creating value type constructor for type: ViewController
    ViewController(HMUI::ViewController::DidActivateDelegate* didActivateEvent_ = {}, HMUI::ViewController::DidDeactivateDelegate* didDeactivateEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, HMUI::ContainerViewController* containerViewController_ = {}, HMUI::ViewController* parentViewController_ = {}, HMUI::ViewController* childViewController_ = {}, HMUI::Screen* screen_ = {}, UnityEngine::RectTransform* rectTransform_ = {}, UnityEngine::CanvasGroup* canvasGroup_ = {}, bool wasActivatedBefore_ = {}, bool isActivated_ = {}, bool isInTransition_ = {}, UnityEngine::EventSystems::BaseRaycaster* graphicRaycaster_ = {}) noexcept : didActivateEvent{didActivateEvent_}, didDeactivateEvent{didDeactivateEvent_}, buttonBinder{buttonBinder_}, containerViewController{containerViewController_}, parentViewController{parentViewController_}, childViewController{childViewController_}, screen{screen_}, rectTransform{rectTransform_}, canvasGroup{canvasGroup_}, wasActivatedBefore{wasActivatedBefore_}, isActivated{isActivated_}, isInTransition{isInTransition_}, graphicRaycaster{graphicRaycaster_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static public System.Single kTransitionDuration
    static constexpr const float kTransitionDuration = 0.4;
    // Get static field: static public System.Single kTransitionDuration
    static float _get_kTransitionDuration();
    // Set static field: static public System.Single kTransitionDuration
    static void _set_kTransitionDuration(float value);
    // static field const value: static private System.Single kTransitionMoveOffset
    static constexpr const float kTransitionMoveOffset = 2;
    // Get static field: static private System.Single kTransitionMoveOffset
    static float _get_kTransitionMoveOffset();
    // Set static field: static private System.Single kTransitionMoveOffset
    static void _set_kTransitionMoveOffset(float value);
    // public HMUI.ContainerViewController get_containerViewController()
    // Offset: 0x1206D9C
    HMUI::ContainerViewController* get_containerViewController();
    // public HMUI.Screen get_screen()
    // Offset: 0x1206DA4
    HMUI::Screen* get_screen();
    // public HMUI.ViewController get_parentViewController()
    // Offset: 0x1206DAC
    HMUI::ViewController* get_parentViewController();
    // public HMUI.ViewController get_childViewController()
    // Offset: 0x1206DB4
    HMUI::ViewController* get_childViewController();
    // public System.Boolean get_isInViewControllerHierarchy()
    // Offset: 0x1206DBC
    bool get_isInViewControllerHierarchy();
    // public System.Boolean get_isActivated()
    // Offset: 0x1206E2C
    bool get_isActivated();
    // public System.Boolean get_wasActivatedBefore()
    // Offset: 0x1206E34
    bool get_wasActivatedBefore();
    // public System.Boolean get_isInTransition()
    // Offset: 0x1206E3C
    bool get_isInTransition();
    // public System.Void set_isInTransition(System.Boolean value)
    // Offset: 0x1206E44
    void set_isInTransition(bool value);
    // public System.Boolean get_enableUserInteractions()
    // Offset: 0x1206E50
    bool get_enableUserInteractions();
    // public System.Void set_enableUserInteractions(System.Boolean value)
    // Offset: 0x12019A0
    void set_enableUserInteractions(bool value);
    // public System.Void add_didActivateEvent(HMUI.ViewController/DidActivateDelegate value)
    // Offset: 0x1206F08
    void add_didActivateEvent(HMUI::ViewController::DidActivateDelegate* value);
    // public System.Void remove_didActivateEvent(HMUI.ViewController/DidActivateDelegate value)
    // Offset: 0x1206FAC
    void remove_didActivateEvent(HMUI::ViewController::DidActivateDelegate* value);
    // public System.Void add_didDeactivateEvent(HMUI.ViewController/DidDeactivateDelegate value)
    // Offset: 0x11F66BC
    void add_didDeactivateEvent(HMUI::ViewController::DidDeactivateDelegate* value);
    // public System.Void remove_didDeactivateEvent(HMUI.ViewController/DidDeactivateDelegate value)
    // Offset: 0x11F6144
    void remove_didDeactivateEvent(HMUI::ViewController::DidDeactivateDelegate* value);
    // protected HMUI.ButtonBinder get_buttonBinder()
    // Offset: 0x1207050
    HMUI::ButtonBinder* get_buttonBinder();
    // private System.Void set_buttonBinder(HMUI.ButtonBinder value)
    // Offset: 0x1207058
    void set_buttonBinder(HMUI::ButtonBinder* value);
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x11F7604
    UnityEngine::RectTransform* get_rectTransform();
    // public UnityEngine.CanvasGroup get_canvasGroup()
    // Offset: 0x11F99C0
    UnityEngine::CanvasGroup* get_canvasGroup();
    // private UnityEngine.EventSystems.BaseRaycaster get_graphicRaycaster()
    // Offset: 0x1206E70
    UnityEngine::EventSystems::BaseRaycaster* get_graphicRaycaster();
    // protected System.Void OnDestroy()
    // Offset: 0x1207060
    void OnDestroy_NEW();
    // protected System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x12070B8
    void DidActivate_NEW(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x12070BC
    void DidDeactivate_NEW(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void __Init(HMUI.Screen screen, HMUI.ViewController parentViewController, HMUI.ContainerViewController containerViewController)
    // Offset: 0x12070C0
    void __Init(HMUI::Screen* screen, HMUI::ViewController* parentViewController, HMUI::ContainerViewController* containerViewController);
    // public System.Void __ResetViewController()
    // Offset: 0x12071DC
    void __ResetViewController_NEW();
    // public System.Void __PresentViewController(HMUI.ViewController viewController, System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x12072AC
    void __PresentViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // private System.Collections.IEnumerator PresentViewControllerCoroutine(HMUI.ViewController newViewController, System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x12072DC
    System::Collections::IEnumerator* PresentViewControllerCoroutine(HMUI::ViewController* newViewController, System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // public System.Void __ReplaceViewController(HMUI.ViewController viewController, System.Action finishedCallback, HMUI.ViewController/AnimationType animationType, HMUI.ViewController/AnimationDirection animationDirection)
    // Offset: 0x120737C
    void __ReplaceViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, HMUI::ViewController::AnimationType animationType, HMUI::ViewController::AnimationDirection animationDirection);
    // private System.Collections.IEnumerator ReplaceViewControllerCoroutine(HMUI.ViewController newViewController, System.Action finishedCallback, HMUI.ViewController/AnimationType animationType, HMUI.ViewController/AnimationDirection animationDirection)
    // Offset: 0x12073A8
    System::Collections::IEnumerator* ReplaceViewControllerCoroutine(HMUI::ViewController* newViewController, System::Action* finishedCallback, HMUI::ViewController::AnimationType animationType, HMUI::ViewController::AnimationDirection animationDirection);
    // public System.Void __DismissViewController(System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x1207440
    void __DismissViewController(System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // private System.Collections.IEnumerator DismissViewControllerCoroutine(System.Action finishedCallback, HMUI.ViewController/AnimationDirection animationDirection, System.Boolean immediately)
    // Offset: 0x1207470
    System::Collections::IEnumerator* DismissViewControllerCoroutine(System::Action* finishedCallback, HMUI::ViewController::AnimationDirection animationDirection, bool immediately);
    // public System.Void __Activate(System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x120750C
    void __Activate(bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void __Deactivate(System.Boolean removedFromHierarchy, System.Boolean deactivateGameObject, System.Boolean screenSystemDisabling)
    // Offset: 0x12075D8
    void __Deactivate(bool removedFromHierarchy, bool deactivateGameObject, bool screenSystemDisabling);
    // public System.Void DeactivateGameObject()
    // Offset: 0x120768C
    void DeactivateGameObject();
    // public System.Boolean IsViewControllerInHierarchy(HMUI.ViewController viewController)
    // Offset: 0x12076E8
    bool IsViewControllerInHierarchy(HMUI::ViewController* viewController);
    // static public System.Void Log(System.String message)
    // Offset: 0x1207870
    static void Log(::Il2CppString* message);
    // public System.Void .ctor()
    // Offset: 0x1205D3C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ViewController*, creationType>()));
    }
  }; // HMUI.ViewController
  #pragma pack(pop)
  static check_size<sizeof(ViewController), 104 + sizeof(UnityEngine::EventSystems::BaseRaycaster*)> __HMUI_ViewControllerSizeCheck;
  static_assert(sizeof(ViewController) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ViewController*, "HMUI", "ViewController");
