// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: EventType
  struct EventType;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: PointerType
  struct PointerType;
  // Forward declaring type: EventModifiers
  struct EventModifiers;
  // Forward declaring type: KeyCode
  struct KeyCode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Event
  class Event : public ::CsObject {
    public:
    // System.IntPtr m_Ptr
    // Offset: 0x10
    System::IntPtr m_Ptr;
    // Get static field: static private UnityEngine.Event s_Current
    static UnityEngine::Event* _get_s_Current();
    // Set static field: static private UnityEngine.Event s_Current
    static void _set_s_Current(UnityEngine::Event* value);
    // Get static field: static private UnityEngine.Event s_MasterEvent
    static UnityEngine::Event* _get_s_MasterEvent();
    // Set static field: static private UnityEngine.Event s_MasterEvent
    static void _set_s_MasterEvent(UnityEngine::Event* value);
    // public UnityEngine.EventType get_rawType()
    // Offset: 0x1246770
    UnityEngine::EventType get_rawType();
    // public UnityEngine.Vector2 get_mousePosition()
    // Offset: 0x12467B0
    UnityEngine::Vector2 get_mousePosition();
    // public UnityEngine.Vector2 get_delta()
    // Offset: 0x1246858
    UnityEngine::Vector2 get_delta();
    // public UnityEngine.PointerType get_pointerType()
    // Offset: 0x1246900
    UnityEngine::PointerType get_pointerType();
    // public UnityEngine.EventModifiers get_modifiers()
    // Offset: 0x1246940
    UnityEngine::EventModifiers get_modifiers();
    // public System.Void set_modifiers(UnityEngine.EventModifiers value)
    // Offset: 0x1246980
    void set_modifiers(UnityEngine::EventModifiers value);
    // public System.Int32 get_clickCount()
    // Offset: 0x12469D0
    int get_clickCount();
    // public System.Char get_character()
    // Offset: 0x1246A10
    ::Il2CppChar get_character();
    // public System.Void set_character(System.Char value)
    // Offset: 0x1246A50
    void set_character(::Il2CppChar value);
    // public UnityEngine.KeyCode get_keyCode()
    // Offset: 0x1246AA0
    UnityEngine::KeyCode get_keyCode();
    // public System.Void set_keyCode(UnityEngine.KeyCode value)
    // Offset: 0x1246AE0
    void set_keyCode(UnityEngine::KeyCode value);
    // public System.Void set_displayIndex(System.Int32 value)
    // Offset: 0x1246B30
    void set_displayIndex(int value);
    // public UnityEngine.EventType get_type()
    // Offset: 0x1246B80
    UnityEngine::EventType get_type();
    // public System.Void set_type(UnityEngine.EventType value)
    // Offset: 0x1246BC0
    void set_type(UnityEngine::EventType value);
    // public System.String get_commandName()
    // Offset: 0x1246C10
    ::CsString* get_commandName();
    // private System.Void Internal_Use()
    // Offset: 0x1246C50
    void Internal_Use();
    // static private System.IntPtr Internal_Create(System.Int32 displayIndex)
    // Offset: 0x1246C90
    static System::IntPtr Internal_Create(int displayIndex);
    // static private System.Void Internal_Destroy(System.IntPtr ptr)
    // Offset: 0x1246CD0
    static void Internal_Destroy(System::IntPtr ptr);
    // public UnityEngine.EventType GetTypeForControl(System.Int32 controlID)
    // Offset: 0x1246D10
    UnityEngine::EventType GetTypeForControl(int controlID);
    // static public System.Boolean PopEvent(UnityEngine.Event outEvent)
    // Offset: 0x1246D60
    static bool PopEvent(UnityEngine::Event* outEvent);
    // static private System.Void Internal_SetNativeEvent(System.IntPtr ptr)
    // Offset: 0x1246DA0
    static void Internal_SetNativeEvent(System::IntPtr ptr);
    // static System.Void Internal_MakeMasterEventCurrent(System.Int32 displayIndex)
    // Offset: 0x1246DE0
    static void Internal_MakeMasterEventCurrent(int displayIndex);
    // public System.Void .ctor(System.Int32 displayIndex)
    // Offset: 0x1246EF0
    static Event* New_ctor(int displayIndex);
    // public System.Boolean get_shift()
    // Offset: 0x1247078
    bool get_shift();
    // public System.Boolean get_control()
    // Offset: 0x12470C0
    bool get_control();
    // public System.Boolean get_alt()
    // Offset: 0x1247108
    bool get_alt();
    // public System.Boolean get_command()
    // Offset: 0x1247150
    bool get_command();
    // static public UnityEngine.Event get_current()
    // Offset: 0x1247198
    static UnityEngine::Event* get_current();
    // public System.Boolean get_isKey()
    // Offset: 0x12471E8
    bool get_isKey();
    // public System.Boolean get_isMouse()
    // Offset: 0x1247238
    bool get_isMouse();
    // System.Boolean get_isDirectManipulationDevice()
    // Offset: 0x12472A0
    bool get_isDirectManipulationDevice();
    // static public UnityEngine.Event KeyboardEvent(System.String key)
    // Offset: 0x1247320
    static UnityEngine::Event* KeyboardEvent(::CsString* key);
    // public System.Void Use()
    // Offset: 0x12498A0
    void Use();
    // private System.Void get_mousePosition_Injected(UnityEngine.Vector2 ret)
    // Offset: 0x1246808
    void get_mousePosition_Injected(UnityEngine::Vector2& ret);
    // private System.Void get_delta_Injected(UnityEngine.Vector2 ret)
    // Offset: 0x12468B0
    void get_delta_Injected(UnityEngine::Vector2& ret);
    // public System.Void .ctor()
    // Offset: 0x1246F4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Event* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x1246F9C
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1248C84
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1248D70
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::CsObject* obj);
    // public override System.String ToString()
    // Offset: 0x1248FEC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
  }; // UnityEngine.Event
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Event*, "UnityEngine", "Event");
#pragma pack(pop)
