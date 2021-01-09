// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Signal
#include "GlobalNamespace/Signal.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: GenericSignal`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class GenericSignal_1 : public GlobalNamespace::Signal {
    public:
    // private System.Action`1<T> _floatEvent
    // Size: 0x8
    // Offset: 0x0
    System::Action_1<T>* floatEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<T>*) == 0x8);
    // Creating value type constructor for type: GenericSignal_1
    GenericSignal_1(System::Action_1<T>* floatEvent_ = {}) noexcept : floatEvent{floatEvent_} {}
    // public System.Void Raise(T f)
    // Offset: 0xFFFFFFFF
    void Raise(T f) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GenericSignal_1::Raise");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Raise", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(f)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, f);
    }
    // public System.Void Subscribe(System.Action`1<T> foo)
    // Offset: 0xFFFFFFFF
    void Subscribe(System::Action_1<T>* foo) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GenericSignal_1::Subscribe");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Subscribe", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(foo)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, foo);
    }
    // public System.Void Unsubscribe(System.Action`1<T> foo)
    // Offset: 0xFFFFFFFF
    void Unsubscribe(System::Action_1<T>* foo) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GenericSignal_1::Unsubscribe");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Unsubscribe", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(foo)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, foo);
    }
    // public override System.Void Raise()
    // Offset: 0xFFFFFFFF
    // Implemented from: Signal
    // Base method: System.Void Signal::Raise()
    void Raise() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GenericSignal_1::Raise");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Raise", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Signal
    // Base method: System.Void Signal::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericSignal_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GenericSignal_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericSignal_1<T>*, creationType>()));
    }
  }; // GenericSignal`1
  // Could not write size check! Type: GenericSignal`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GenericSignal_1, "", "GenericSignal`1");
