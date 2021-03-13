// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.ComponentModel.IComponent
#include "System/ComponentModel/IComponent.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.Component
  // [] Offset: FFFFFFFF
  // [ClassInterfaceAttribute] Offset: CA0060
  // [DesignerCategoryAttribute] Offset: CA0060
  // [ComVisibleAttribute] Offset: CA0060
  class Component : public System::MarshalByRefObject/*, public System::ComponentModel::IComponent*/ {
    public:
    // private System.ComponentModel.ISite site
    // Size: 0x8
    // Offset: 0x18
    System::ComponentModel::ISite* site;
    // Field size check
    static_assert(sizeof(System::ComponentModel::ISite*) == 0x8);
    // private System.ComponentModel.EventHandlerList events
    // Size: 0x8
    // Offset: 0x20
    System::ComponentModel::EventHandlerList* events;
    // Field size check
    static_assert(sizeof(System::ComponentModel::EventHandlerList*) == 0x8);
    // Creating value type constructor for type: Component
    Component(System::ComponentModel::ISite* site_ = {}, System::ComponentModel::EventHandlerList* events_ = {}) noexcept : site{site_}, events{events_} {}
    // Creating interface conversion operator: operator System::ComponentModel::IComponent
    operator System::ComponentModel::IComponent() noexcept {
      return *reinterpret_cast<System::ComponentModel::IComponent*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private readonly System.Object EventDisposed
    static ::Il2CppObject* _get_EventDisposed();
    // Set static field: static private readonly System.Object EventDisposed
    static void _set_EventDisposed(::Il2CppObject* value);
    // protected System.Boolean get_CanRaiseEvents()
    // Offset: 0x16C58BC
    bool get_CanRaiseEvents_NEW();
    // System.Boolean get_CanRaiseEventsInternal()
    // Offset: 0x16C58C4
    bool get_CanRaiseEventsInternal();
    // public System.Void Dispose()
    // Offset: 0x16C58D0
    void Dispose_NEW();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x16C594C
    void Dispose(bool disposing);
    // protected System.Object GetService(System.Type service)
    // Offset: 0x16C5C6C
    ::Il2CppObject* GetService_NEW(System::Type* service);
    // protected System.Boolean get_DesignMode()
    // Offset: 0x16C5D3C
    bool get_DesignMode();
    // static private System.Void .cctor()
    // Offset: 0x16C5F2C
    static void _cctor();
    // protected override System.Void Finalize()
    // Offset: 0x16C5848
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize_NEW()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x16C5DFC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString_NEW()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x16C5F24
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Component* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::Component::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Component*, creationType>()));
    }
  }; // System.ComponentModel.Component
  #pragma pack(pop)
  static check_size<sizeof(Component), 32 + sizeof(System::ComponentModel::EventHandlerList*)> __System_ComponentModel_ComponentSizeCheck;
  static_assert(sizeof(Component) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Component*, "System.ComponentModel", "Component");
