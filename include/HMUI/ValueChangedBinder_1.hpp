// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: IValueChanger`1<T>
  template<typename T>
  class IValueChanger_1;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.ValueChangedBinder`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class ValueChangedBinder_1 : public ::Il2CppObject {
    public:
    // private System.Collections.Generic.List`1<System.Tuple`2<HMUI.IValueChanger`1<T>,System.Action`1<T>>> _bindings
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>*, System::Action_1<T>*>*>* bindings;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>*, System::Action_1<T>*>*>*) == 0x8);
    // Creating value type constructor for type: ValueChangedBinder_1
    ValueChangedBinder_1(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>*, System::Action_1<T>*>*>* bindings_ = {}) noexcept : bindings{bindings_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>*, System::Action_1<T>*>*>*
    constexpr operator System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>*, System::Action_1<T>*>*>*() const noexcept {
      return bindings;
    }
    // public System.Void .ctor(HMUI.IValueChanger`1<T> valueChanger, System.Action`1<T> action)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueChangedBinder_1<T>* New_ctor(HMUI::IValueChanger_1<T>* valueChanger, System::Action_1<T>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ValueChangedBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueChangedBinder_1<T>*, creationType>(valueChanger, action)));
    }
    // public System.Void .ctor(System.Collections.Generic.List`1<System.Tuple`2<HMUI.IValueChanger`1<T>,System.Action`1<T>>> bindingData)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueChangedBinder_1<T>* New_ctor(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>*, System::Action_1<T>*>*>* bindingData) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ValueChangedBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueChangedBinder_1<T>*, creationType>(bindingData)));
    }
    // private System.Void Init()
    // Offset: 0xFFFFFFFF
    void Init() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ValueChangedBinder_1::Init");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void AddBindings(System.Collections.Generic.List`1<System.Tuple`2<HMUI.IValueChanger`1<T>,System.Action`1<T>>> bindingData)
    // Offset: 0xFFFFFFFF
    void AddBindings(System::Collections::Generic::List_1<System::Tuple_2<HMUI::IValueChanger_1<T>*, System::Action_1<T>*>*>* bindingData) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ValueChangedBinder_1::AddBindings");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddBindings", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(bindingData)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, bindingData);
    }
    // public System.Void AddBinding(HMUI.IValueChanger`1<T> valueChanger, System.Action`1<T> action)
    // Offset: 0xFFFFFFFF
    void AddBinding(HMUI::IValueChanger_1<T>* valueChanger, System::Action_1<T>* action) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ValueChangedBinder_1::AddBinding");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddBinding", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(valueChanger, action)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, valueChanger, action);
    }
    // public System.Void ClearBindings()
    // Offset: 0xFFFFFFFF
    void ClearBindings() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ValueChangedBinder_1::ClearBindings");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ClearBindings", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueChangedBinder_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ValueChangedBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueChangedBinder_1<T>*, creationType>()));
    }
  }; // HMUI.ValueChangedBinder`1
  // Could not write size check! Type: HMUI.ValueChangedBinder`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::ValueChangedBinder_1, "HMUI", "ValueChangedBinder`1");
