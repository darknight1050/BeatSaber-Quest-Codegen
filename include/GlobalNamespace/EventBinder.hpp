// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: EventBinder
  // [] Offset: FFFFFFFF
  class EventBinder : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.Action> _unsubscribes
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Action*>* unsubscribes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Action*>*) == 0x8);
    // Creating value type constructor for type: EventBinder
    EventBinder(System::Collections::Generic::List_1<System::Action*>* unsubscribes_ = {}) noexcept : unsubscribes{unsubscribes_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<System::Action*>*
    constexpr operator System::Collections::Generic::List_1<System::Action*>*() const noexcept {
      return unsubscribes;
    }
    // public System.Void Bind(System.Action subscribe, System.Action unsubscribe)
    // Offset: 0x102EDD4
    void Bind(System::Action* subscribe, System::Action* unsubscribe);
    // public System.Void ClearAllBindings()
    // Offset: 0x102EE50
    void ClearAllBindings();
    // public System.Void .ctor()
    // Offset: 0x102EF60
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EventBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventBinder*, creationType>()));
    }
  }; // EventBinder
  static check_size<sizeof(EventBinder), 16 + sizeof(System::Collections::Generic::List_1<System::Action*>*)> __GlobalNamespace_EventBinderSizeCheck;
  static_assert(sizeof(EventBinder) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventBinder*, "", "EventBinder");
#pragma pack(pop)
