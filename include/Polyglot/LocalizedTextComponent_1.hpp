// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
// Including type: Polyglot.LanguageDirection
#include "Polyglot/LanguageDirection.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Component because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // WARNING Size may be invalid!
  // Autogenerated type: Polyglot.LocalizedTextComponent`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class LocalizedTextComponent_1 : public UnityEngine::MonoBehaviour/*, public Polyglot::ILocalize*/ {
    public:
    // [TooltipAttribute] Offset: 0xDB0AD0
    // protected T localizedComponent
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T localizedComponent;
    // [TooltipAttribute] Offset: 0xDB0B1C
    // private System.Boolean maintainTextAlignment
    // Size: 0x1
    // Offset: 0x0
    bool maintainTextAlignment;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xDB0B68
    // [LocalizationKeyAttribute] Offset: 0xDB0B68
    // private System.String key
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.Object> parameters
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<::Il2CppObject*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: LocalizedTextComponent_1
    LocalizedTextComponent_1(T localizedComponent_ = {}, bool maintainTextAlignment_ = {}, ::Il2CppString* key_ = {}, System::Collections::Generic::List_1<::Il2CppObject*>* parameters_ = {}) noexcept : localizedComponent{localizedComponent_}, maintainTextAlignment{maintainTextAlignment_}, key{key_}, parameters{parameters_} {}
    // Creating interface conversion operator: operator Polyglot::ILocalize
    operator Polyglot::ILocalize() noexcept {
      return *reinterpret_cast<Polyglot::ILocalize*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Boolean get_MaintainTextAlignment()
    // Offset: 0xFFFFFFFF
    bool get_MaintainTextAlignment() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::get_MaintainTextAlignment");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_MaintainTextAlignment", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public System.Void set_MaintainTextAlignment(System.Boolean value)
    // Offset: 0xFFFFFFFF
    void set_MaintainTextAlignment(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::set_MaintainTextAlignment");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_MaintainTextAlignment", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.String get_Key()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Key() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::get_Key");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Key", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
    // public System.Void set_Key(System.String value)
    // Offset: 0xFFFFFFFF
    void set_Key(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::set_Key");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_Key", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Collections.Generic.List`1<System.Object> get_Parameters()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::List_1<::Il2CppObject*>* get_Parameters() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::get_Parameters");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Parameters", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<::Il2CppObject*>*, false>(this, ___internal__method);
    }
    // public System.Void OnEnable()
    // Offset: 0xFFFFFFFF
    void OnEnable() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::OnEnable");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnEnable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void SetText(T component, System.String value)
    // Offset: 0xFFFFFFFF
    void SetText(T component, ::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::SetText");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetText", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(component, value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, component, value);
    }
    // protected System.Void UpdateAlignment(T component, Polyglot.LanguageDirection direction)
    // Offset: 0xFFFFFFFF
    void UpdateAlignment(T component, Polyglot::LanguageDirection direction) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::UpdateAlignment");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UpdateAlignment", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(component, direction)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, component, direction);
    }
    // public System.Void ClearParameters()
    // Offset: 0xFFFFFFFF
    void ClearParameters() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::ClearParameters");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ClearParameters", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void AddParameter(System.Object parameter)
    // Offset: 0xFFFFFFFF
    void AddParameter(::Il2CppObject* parameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::AddParameter");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddParameter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(parameter)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, parameter);
    }
    // public System.Void AddParameter(System.Int32 parameter)
    // Offset: 0xFFFFFFFF
    void AddParameter(int parameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::AddParameter");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddParameter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(parameter)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, parameter);
    }
    // public System.Void AddParameter(System.Single parameter)
    // Offset: 0xFFFFFFFF
    void AddParameter(float parameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::AddParameter");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddParameter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(parameter)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, parameter);
    }
    // public System.Void AddParameter(System.String parameter)
    // Offset: 0xFFFFFFFF
    void AddParameter(::Il2CppString* parameter) {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::AddParameter");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddParameter", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(parameter)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, parameter);
    }
    // public System.Void OnLocalize()
    // Offset: 0xFFFFFFFF
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::OnLocalize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnLocalize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextComponent_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizedTextComponent_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextComponent_1<T>*, creationType>()));
    }
  }; // Polyglot.LocalizedTextComponent`1
  // Could not write size check! Type: Polyglot.LocalizedTextComponent`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Polyglot::LocalizedTextComponent_1, "Polyglot", "LocalizedTextComponent`1");
