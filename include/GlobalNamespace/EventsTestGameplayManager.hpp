// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: EventsTestGameplayManager
  class EventsTestGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // [InjectAttribute] Offset: 0xE1BD70
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private BeatmapEventType _beatmapEventType
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType beatmapEventType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // Padding between fields: beatmapEventType and: beatmapEventTypeBindings
    char __padding1[0x4] = {};
    // private System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,BeatmapEventType> _beatmapEventTypeBindings
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, GlobalNamespace::BeatmapEventType>* beatmapEventTypeBindings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, GlobalNamespace::BeatmapEventType>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Int32> _beatmapValuesBindings
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, int>* beatmapValuesBindings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, int>*) == 0x8);
    // private System.Boolean _rotatingLasers
    // Size: 0x1
    // Offset: 0x38
    bool rotatingLasers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EventsTestGameplayManager
    EventsTestGameplayManager(GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, GlobalNamespace::BeatmapEventType beatmapEventType_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, GlobalNamespace::BeatmapEventType>* beatmapEventTypeBindings_ = {}, System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, int>* beatmapValuesBindings_ = {}, bool rotatingLasers_ = {}) noexcept : beatmapObjectCallbackController{beatmapObjectCallbackController_}, beatmapEventType{beatmapEventType_}, beatmapEventTypeBindings{beatmapEventTypeBindings_}, beatmapValuesBindings{beatmapValuesBindings_}, rotatingLasers{rotatingLasers_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x10C189C
    void Awake();
    // protected System.Void Update()
    // Offset: 0x10C1B58
    void Update();
    // public System.Void .ctor()
    // Offset: 0x10C1F04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventsTestGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EventsTestGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventsTestGameplayManager*, creationType>()));
    }
  }; // EventsTestGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(EventsTestGameplayManager), 56 + sizeof(bool)> __GlobalNamespace_EventsTestGameplayManagerSizeCheck;
  static_assert(sizeof(EventsTestGameplayManager) == 0x39);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventsTestGameplayManager*, "", "EventsTestGameplayManager");
