// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PersistentSingleton`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class PersistentSingleton_1 : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: PersistentSingleton_1
    PersistentSingleton_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static private T _instance
    static T _get__instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::_get__instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<T>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private T _instance
    static void _set__instance(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::_set__instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_instance", value));
    }
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xCF4BF4
    // Autogenerated static field getter
    // Get static field: static private System.Object _lock
    static ::Il2CppObject* _get__lock() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::_get__lock");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppObject*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_lock"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Object _lock
    static void _set__lock(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::_set__lock");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_lock", value));
    }
    // Autogenerated static field getter
    // Get static field: static private System.Boolean _applicationIsQuitting
    static bool _get__applicationIsQuitting() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::_get__applicationIsQuitting");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_applicationIsQuitting"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Boolean _applicationIsQuitting
    static void _set__applicationIsQuitting(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::_set__applicationIsQuitting");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "_applicationIsQuitting", value));
    }
    // static public T get_instance()
    // Offset: 0xFFFFFFFF
    static T get_instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::get_instance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "get_instance", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public System.Void TouchInstance()
    // Offset: 0xFFFFFFFF
    static void TouchInstance() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::TouchInstance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "TouchInstance", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static public System.Boolean get_IsSingletonAvailable()
    // Offset: 0xFFFFFFFF
    static bool get_IsSingletonAvailable() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::get_IsSingletonAvailable");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), "get_IsSingletonAvailable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // protected System.Void OnEnable()
    // Offset: 0xFFFFFFFF
    void OnEnable() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::OnEnable");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnEnable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // protected System.Void OnDestroy()
    // Offset: 0xFFFFFFFF
    void OnDestroy_NEW() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::OnDestroy_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnDestroy", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PersistentSingleton_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PersistentSingleton_1<T>*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PersistentSingleton_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PersistentSingleton_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
  }; // PersistentSingleton`1
  // Could not write size check! Type: PersistentSingleton`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::PersistentSingleton_1, "", "PersistentSingleton`1");
