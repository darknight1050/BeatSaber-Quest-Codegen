// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Skipping declaration: VREvent_t because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_ControllerManager
  class SteamVR_ControllerManager : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject left
    // Offset: 0x18
    UnityEngine::GameObject* left;
    // public UnityEngine.GameObject right
    // Offset: 0x20
    UnityEngine::GameObject* right;
    // public UnityEngine.GameObject[] objects
    // Offset: 0x28
    ::Array<UnityEngine::GameObject*>* objects;
    // public System.Boolean assignAllBeforeIdentified
    // Offset: 0x30
    bool assignAllBeforeIdentified;
    // private System.UInt32[] indices
    // Offset: 0x38
    ::Array<uint>* indices;
    // private System.Boolean[] connected
    // Offset: 0x40
    ::Array<bool>* connected;
    // private System.UInt32 leftIndex
    // Offset: 0x48
    uint leftIndex;
    // private System.UInt32 rightIndex
    // Offset: 0x4C
    uint rightIndex;
    // private SteamVR_Events/Action inputFocusAction
    // Offset: 0x50
    GlobalNamespace::SteamVR_Events::Action* inputFocusAction;
    // private SteamVR_Events/Action deviceConnectedAction
    // Offset: 0x58
    GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction;
    // private SteamVR_Events/Action trackedDeviceRoleChangedAction
    // Offset: 0x60
    GlobalNamespace::SteamVR_Events::Action* trackedDeviceRoleChangedAction;
    // Get static field: static private System.String hiddenPrefix
    static ::Il2CppString* _get_hiddenPrefix();
    // Set static field: static private System.String hiddenPrefix
    static void _set_hiddenPrefix(::Il2CppString* value);
    // Get static field: static private System.String hiddenPostfix
    static ::Il2CppString* _get_hiddenPostfix();
    // Set static field: static private System.String hiddenPostfix
    static void _set_hiddenPostfix(::Il2CppString* value);
    // Get static field: static private System.String[] labels
    static ::Array<::Il2CppString*>* _get_labels();
    // Set static field: static private System.String[] labels
    static void _set_labels(::Array<::Il2CppString*>* value);
    // private System.Void SetUniqueObject(UnityEngine.GameObject o, System.Int32 index)
    // Offset: 0xCDDCBC
    void SetUniqueObject(UnityEngine::GameObject* o, int index);
    // public System.Void UpdateTargets()
    // Offset: 0xCDDDEC
    void UpdateTargets();
    // private System.Void Awake()
    // Offset: 0xCDDF48
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0xCDE2BC
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xCDE85C
    void OnDisable();
    // private System.Void OnInputFocus(System.Boolean hasFocus)
    // Offset: 0xCDE8C0
    void OnInputFocus(bool hasFocus);
    // private System.Void HideObject(UnityEngine.Transform t, System.String name)
    // Offset: 0xCDEC70
    void HideObject(UnityEngine::Transform* t, ::Il2CppString* name);
    // private System.Void ShowObject(UnityEngine.Transform t, System.String name)
    // Offset: 0xCDEB7C
    void ShowObject(UnityEngine::Transform* t, ::Il2CppString* name);
    // private System.Void SetTrackedDeviceIndex(System.Int32 objectIndex, System.UInt32 trackedDeviceIndex)
    // Offset: 0xCDEDE0
    void SetTrackedDeviceIndex(int objectIndex, uint trackedDeviceIndex);
    // private System.Void OnTrackedDeviceRoleChanged(Valve.VR.VREvent_t vrEvent)
    // Offset: 0xCDF02C
    void OnTrackedDeviceRoleChanged(Valve::VR::VREvent_t vrEvent);
    // private System.Void OnDeviceConnected(System.Int32 index, System.Boolean connected)
    // Offset: 0xCDE738
    void OnDeviceConnected(int index, bool connected);
    // public System.Void Refresh()
    // Offset: 0xCDE49C
    void Refresh();
    // private System.Void .ctor()
    // Offset: 0xCDDF4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_ControllerManager* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0xCDF030
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_ControllerManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_ControllerManager*, "", "SteamVR_ControllerManager");
#pragma pack(pop)
