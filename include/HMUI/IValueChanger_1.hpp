// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.IValueChanger`1
  template<typename T>
  class IValueChanger_1 {
    public:
    // Creating value type constructor for type: IValueChanger_1
    IValueChanger_1() noexcept {}
    // public System.Void add_valueChangedEvent(System.Action`1<T> value)
    // Offset: 0xFFFFFFFF
    void add_valueChangedEvent(System::Action_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::IValueChanger_1::add_valueChangedEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "add_valueChangedEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_valueChangedEvent(System.Action`1<T> value)
    // Offset: 0xFFFFFFFF
    void remove_valueChangedEvent(System::Action_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::IValueChanger_1::remove_valueChangedEvent");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "remove_valueChangedEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
  }; // HMUI.IValueChanger`1
  // Could not write size check! Type: HMUI.IValueChanger`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(HMUI::IValueChanger_1, "HMUI", "IValueChanger`1");
