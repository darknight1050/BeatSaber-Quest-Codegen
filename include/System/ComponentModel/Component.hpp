// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.IComponent
#include "System/ComponentModel/IComponent.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISite
  class ISite;
  // Forward declaring type: EventHandlerList
  class EventHandlerList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.Component
  class Component : public System::ComponentModel::IComponent, public System::MarshalByRefObject {
    public:
    // private System.ComponentModel.ISite site
    // Offset: 0x18
    System::ComponentModel::ISite* site;
    // private System.ComponentModel.EventHandlerList events
    // Offset: 0x20
    System::ComponentModel::EventHandlerList* events;
    // Get static field: static private readonly System.Object EventDisposed
    static ::Il2CppObject* _get_EventDisposed();
    // Set static field: static private readonly System.Object EventDisposed
    static void _set_EventDisposed(::Il2CppObject* value);
    // protected System.Boolean get_CanRaiseEvents()
    // Offset: 0xEB7CDC
    bool get_CanRaiseEvents();
    // System.Boolean get_CanRaiseEventsInternal()
    // Offset: 0xEB7CE4
    bool get_CanRaiseEventsInternal();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0xEB7D6C
    void Dispose(bool disposing);
    // protected System.Object GetService(System.Type service)
    // Offset: 0xEB80A4
    ::Il2CppObject* GetService(System::Type* service);
    // protected System.Boolean get_DesignMode()
    // Offset: 0xEB8174
    bool get_DesignMode();
    // static private System.Void .cctor()
    // Offset: 0xEB8364
    static void _cctor();
    // protected override System.Void Finalize()
    // Offset: 0xEB7C68
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0xEB7CF0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public override System.String ToString()
    // Offset: 0xEB8234
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0xEB835C
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static Component* New_ctor();
  }; // System.ComponentModel.Component
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Component*, "System.ComponentModel", "Component");
#pragma pack(pop)
