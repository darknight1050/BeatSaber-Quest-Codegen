// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_ControllerManager
  class SteamVR_ControllerManager : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.GameObject left
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GameObject* left;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject right
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::GameObject* right;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [TooltipAttribute] Offset: 0xDD4ACC
    // public UnityEngine.GameObject[] objects
    // Size: 0x8
    // Offset: 0x28
    ::Array<UnityEngine::GameObject*>* objects;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::GameObject*>*) == 0x8);
    // [TooltipAttribute] Offset: 0xDD4B04
    // public System.Boolean assignAllBeforeIdentified
    // Size: 0x1
    // Offset: 0x30
    bool assignAllBeforeIdentified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: assignAllBeforeIdentified and: indices
    char __padding3[0x7] = {};
    // private System.UInt32[] indices
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint>* indices;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Boolean[] connected
    // Size: 0x8
    // Offset: 0x40
    ::Array<bool>* connected;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private System.UInt32 leftIndex
    // Size: 0x4
    // Offset: 0x48
    uint leftIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 rightIndex
    // Size: 0x4
    // Offset: 0x4C
    uint rightIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private SteamVR_Events/Action inputFocusAction
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::SteamVR_Events::Action* inputFocusAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private SteamVR_Events/Action deviceConnectedAction
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // private SteamVR_Events/Action trackedDeviceRoleChangedAction
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::SteamVR_Events::Action* trackedDeviceRoleChangedAction;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SteamVR_Events::Action*) == 0x8);
    // Creating value type constructor for type: SteamVR_ControllerManager
    SteamVR_ControllerManager(UnityEngine::GameObject* left_ = {}, UnityEngine::GameObject* right_ = {}, ::Array<UnityEngine::GameObject*>* objects_ = {}, bool assignAllBeforeIdentified_ = {}, ::Array<uint>* indices_ = {}, ::Array<bool>* connected_ = {}, uint leftIndex_ = {}, uint rightIndex_ = {}, GlobalNamespace::SteamVR_Events::Action* inputFocusAction_ = {}, GlobalNamespace::SteamVR_Events::Action* deviceConnectedAction_ = {}, GlobalNamespace::SteamVR_Events::Action* trackedDeviceRoleChangedAction_ = {}) noexcept : left{left_}, right{right_}, objects{objects_}, assignAllBeforeIdentified{assignAllBeforeIdentified_}, indices{indices_}, connected{connected_}, leftIndex{leftIndex_}, rightIndex{rightIndex_}, inputFocusAction{inputFocusAction_}, deviceConnectedAction{deviceConnectedAction_}, trackedDeviceRoleChangedAction{trackedDeviceRoleChangedAction_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
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
    // Offset: 0x13B19B4
    void SetUniqueObject(UnityEngine::GameObject* o, int index);
    // public System.Void UpdateTargets()
    // Offset: 0x13B1AC8
    void UpdateTargets();
    // private System.Void Awake()
    // Offset: 0x13B1C04
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x13B1F4C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x13B24EC
    void OnDisable();
    // private System.Void OnInputFocus(System.Boolean hasFocus)
    // Offset: 0x13B2550
    void OnInputFocus(bool hasFocus);
    // private System.Void HideObject(UnityEngine.Transform t, System.String name)
    // Offset: 0x13B2900
    void HideObject(UnityEngine::Transform* t, ::Il2CppString* name);
    // private System.Void ShowObject(UnityEngine.Transform t, System.String name)
    // Offset: 0x13B280C
    void ShowObject(UnityEngine::Transform* t, ::Il2CppString* name);
    // private System.Void SetTrackedDeviceIndex(System.Int32 objectIndex, System.UInt32 trackedDeviceIndex)
    // Offset: 0x13B2A70
    void SetTrackedDeviceIndex(int objectIndex, uint trackedDeviceIndex);
    // private System.Void OnTrackedDeviceRoleChanged(Valve.VR.VREvent_t vrEvent)
    // Offset: 0x13B2CBC
    void OnTrackedDeviceRoleChanged(Valve::VR::VREvent_t vrEvent);
    // private System.Void OnDeviceConnected(System.Int32 index, System.Boolean connected)
    // Offset: 0x13B23C8
    void OnDeviceConnected(int index, bool connected);
    // public System.Void Refresh()
    // Offset: 0x13B212C
    void Refresh();
    // private System.Void .ctor()
    // Offset: 0x13B1C08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_ControllerManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_ControllerManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_ControllerManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x13B2CC0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // SteamVR_ControllerManager
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_ControllerManager), 96 + sizeof(GlobalNamespace::SteamVR_Events::Action*)> __GlobalNamespace_SteamVR_ControllerManagerSizeCheck;
  static_assert(sizeof(SteamVR_ControllerManager) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_ControllerManager*, "", "SteamVR_ControllerManager");
