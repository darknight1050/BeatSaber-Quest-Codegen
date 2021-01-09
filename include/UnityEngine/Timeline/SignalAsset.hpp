// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  // Autogenerated type: UnityEngine.Timeline.SignalAsset
  // [] Offset: FFFFFFFF
  // [AssetFileNameExtensionAttribute] Offset: D8CFA4
  class SignalAsset : public UnityEngine::ScriptableObject {
    public:
    // Creating value type constructor for type: SignalAsset
    SignalAsset() noexcept {}
    // [CompilerGeneratedAttribute] Offset: 0xD8E130
    // Get static field: static private System.Action`1<UnityEngine.Timeline.SignalAsset> OnEnableCallback
    static System::Action_1<UnityEngine::Timeline::SignalAsset*>* _get_OnEnableCallback();
    // Set static field: static private System.Action`1<UnityEngine.Timeline.SignalAsset> OnEnableCallback
    static void _set_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value);
    // static System.Void add_OnEnableCallback(System.Action`1<UnityEngine.Timeline.SignalAsset> value)
    // Offset: 0x1420544
    static void add_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value);
    // static System.Void remove_OnEnableCallback(System.Action`1<UnityEngine.Timeline.SignalAsset> value)
    // Offset: 0x14205F8
    static void remove_OnEnableCallback(System::Action_1<UnityEngine::Timeline::SignalAsset*>* value);
    // private System.Void OnEnable()
    // Offset: 0x14206AC
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1420720
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::SignalAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalAsset*, creationType>()));
    }
  }; // UnityEngine.Timeline.SignalAsset
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::SignalAsset*, "UnityEngine.Timeline", "SignalAsset");
#pragma pack(pop)
