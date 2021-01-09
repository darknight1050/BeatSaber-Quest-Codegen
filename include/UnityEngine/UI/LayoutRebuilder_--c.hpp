// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.LayoutRebuilder
#include "UnityEngine/UI/LayoutRebuilder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  // Autogenerated type: UnityEngine.UI.LayoutRebuilder/<>c
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D7DA40
  class LayoutRebuilder::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.UI.LayoutRebuilder/<>c <>9
    static UnityEngine::UI::LayoutRebuilder::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.UI.LayoutRebuilder/<>c <>9
    static void _set_$$9(UnityEngine::UI::LayoutRebuilder::$$c* value);
    // Get static field: static public System.Predicate`1<UnityEngine.Component> <>9__10_0
    static System::Predicate_1<UnityEngine::Component*>* _get_$$9__10_0();
    // Set static field: static public System.Predicate`1<UnityEngine.Component> <>9__10_0
    static void _set_$$9__10_0(System::Predicate_1<UnityEngine::Component*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_0
    static UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* _get_$$9__12_0();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_0
    static void _set_$$9__12_0(UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_1
    static UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* _get_$$9__12_1();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_1
    static void _set_$$9__12_1(UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_2
    static UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* _get_$$9__12_2();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_2
    static void _set_$$9__12_2(UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* value);
    // Get static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_3
    static UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* _get_$$9__12_3();
    // Set static field: static public UnityEngine.Events.UnityAction`1<UnityEngine.Component> <>9__12_3
    static void _set_$$9__12_3(UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1562C28
    static void _cctor();
    // System.Void <.cctor>b__5_0(UnityEngine.UI.LayoutRebuilder x)
    // Offset: 0x1562C98
    void $_cctor$b__5_0(UnityEngine::UI::LayoutRebuilder* x);
    // System.Boolean <StripDisabledBehavioursFromList>b__10_0(UnityEngine.Component e)
    // Offset: 0x1562CD0
    bool $StripDisabledBehavioursFromList$b__10_0(UnityEngine::Component* e);
    // System.Void <Rebuild>b__12_0(UnityEngine.Component e)
    // Offset: 0x1562D64
    void $Rebuild$b__12_0(UnityEngine::Component* e);
    // System.Void <Rebuild>b__12_1(UnityEngine.Component e)
    // Offset: 0x1562E30
    void $Rebuild$b__12_1(UnityEngine::Component* e);
    // System.Void <Rebuild>b__12_2(UnityEngine.Component e)
    // Offset: 0x1562EFC
    void $Rebuild$b__12_2(UnityEngine::Component* e);
    // System.Void <Rebuild>b__12_3(UnityEngine.Component e)
    // Offset: 0x1562FCC
    void $Rebuild$b__12_3(UnityEngine::Component* e);
    // public System.Void .ctor()
    // Offset: 0x1562C90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayoutRebuilder::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::LayoutRebuilder::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayoutRebuilder::$$c*, creationType>()));
    }
  }; // UnityEngine.UI.LayoutRebuilder/<>c
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutRebuilder::$$c*, "UnityEngine.UI", "LayoutRebuilder/<>c");
#pragma pack(pop)
