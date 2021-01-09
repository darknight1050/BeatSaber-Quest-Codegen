// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.PersistentListenerMode
#include "UnityEngine/Events/PersistentListenerMode.hpp"
// Including type: UnityEngine.Events.UnityEventCallState
#include "UnityEngine/Events/UnityEventCallState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: ArgumentCache
  class ArgumentCache;
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
  // Forward declaring type: UnityEventBase
  class UnityEventBase;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Size: 0x34
  // Autogenerated type: UnityEngine.Events.PersistentCall
  // [] Offset: FFFFFFFF
  class PersistentCall : public ::Il2CppObject {
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xD514CC
    // private UnityEngine.Object m_Target
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::Object* m_Target;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD51518
    // private System.String m_MethodName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_MethodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD51564
    // private UnityEngine.Events.PersistentListenerMode m_Mode
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::Events::PersistentListenerMode m_Mode;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::PersistentListenerMode) == 0x4);
    // Padding between fields: m_Mode and: m_Arguments
    char __padding2[0x4] = {};
    // [FormerlySerializedAsAttribute] Offset: 0xD515B0
    // private UnityEngine.Events.ArgumentCache m_Arguments
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Events::ArgumentCache* m_Arguments;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::ArgumentCache*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0xD515FC
    // [FormerlySerializedAsAttribute] Offset: 0xD515FC
    // private UnityEngine.Events.UnityEventCallState m_CallState
    // Size: 0x4
    // Offset: 0x30
    UnityEngine::Events::UnityEventCallState m_CallState;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEventCallState) == 0x4);
    // Creating value type constructor for type: PersistentCall
    PersistentCall(UnityEngine::Object* m_Target_ = {}, ::Il2CppString* m_MethodName_ = {}, UnityEngine::Events::PersistentListenerMode m_Mode_ = {}, UnityEngine::Events::ArgumentCache* m_Arguments_ = {}, UnityEngine::Events::UnityEventCallState m_CallState_ = {}) noexcept : m_Target{m_Target_}, m_MethodName{m_MethodName_}, m_Mode{m_Mode_}, m_Arguments{m_Arguments_}, m_CallState{m_CallState_} {}
    // public UnityEngine.Object get_target()
    // Offset: 0x1686C04
    UnityEngine::Object* get_target();
    // public System.String get_methodName()
    // Offset: 0x1686C0C
    ::Il2CppString* get_methodName();
    // public UnityEngine.Events.PersistentListenerMode get_mode()
    // Offset: 0x1686C14
    UnityEngine::Events::PersistentListenerMode get_mode();
    // public UnityEngine.Events.ArgumentCache get_arguments()
    // Offset: 0x1686C1C
    UnityEngine::Events::ArgumentCache* get_arguments();
    // public System.Boolean IsValid()
    // Offset: 0x1686C24
    bool IsValid();
    // public UnityEngine.Events.BaseInvokableCall GetRuntimeCall(UnityEngine.Events.UnityEventBase theEvent)
    // Offset: 0x1686CB8
    UnityEngine::Events::BaseInvokableCall* GetRuntimeCall(UnityEngine::Events::UnityEventBase* theEvent);
    // static private UnityEngine.Events.BaseInvokableCall GetObjectCall(UnityEngine.Object target, System.Reflection.MethodInfo method, UnityEngine.Events.ArgumentCache arguments)
    // Offset: 0x1687020
    static UnityEngine::Events::BaseInvokableCall* GetObjectCall(UnityEngine::Object* target, System::Reflection::MethodInfo* method, UnityEngine::Events::ArgumentCache* arguments);
    // public System.Void .ctor()
    // Offset: 0x1687478
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PersistentCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Events::PersistentCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PersistentCall*, creationType>()));
    }
  }; // UnityEngine.Events.PersistentCall
  static check_size<sizeof(PersistentCall), 48 + sizeof(UnityEngine::Events::UnityEventCallState)> __UnityEngine_Events_PersistentCallSizeCheck;
  static_assert(sizeof(PersistentCall) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::PersistentCall*, "UnityEngine.Events", "PersistentCall");
#pragma pack(pop)
