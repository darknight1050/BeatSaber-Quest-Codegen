// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.StaticMemoryPool`1
#include "Zenject/StaticMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.HashSetPool`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class HashSetPool_1 : public Zenject::StaticMemoryPool_1<System::Collections::Generic::HashSet_1<T>*> {
    public:
    // Creating value type constructor for type: HashSetPool_1
    HashSetPool_1() noexcept {}
    // Autogenerated static field getter
    // Get static field: static private readonly Zenject.HashSetPool`1<T> _instance
    static Zenject::HashSetPool_1<T>* _get__instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::HashSetPool_1::_get__instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<Zenject::HashSetPool_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetPool_1<T>*>::get(), "_instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly Zenject.HashSetPool`1<T> _instance
    static void _set__instance(Zenject::HashSetPool_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::HashSetPool_1::_set__instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetPool_1<T>*>::get(), "_instance", value));
    }
    // static public Zenject.HashSetPool`1<T> get_Instance()
    // Offset: 0xFFFFFFFF
    static Zenject::HashSetPool_1<T>* get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::HashSetPool_1::get_Instance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetPool_1<T>*>::get(), "get_Instance", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<Zenject::HashSetPool_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // static private System.Void OnSpawned(System.Collections.Generic.HashSet`1<T> items)
    // Offset: 0xFFFFFFFF
    static void OnSpawned(System::Collections::Generic::HashSet_1<T>* items) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::HashSetPool_1::OnSpawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetPool_1<T>*>::get(), "OnSpawned", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(items))));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, items);
    }
    // static private System.Void OnDespawned(System.Collections.Generic.HashSet`1<T> items)
    // Offset: 0xFFFFFFFF
    static void OnDespawned(System::Collections::Generic::HashSet_1<T>* items) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::HashSetPool_1::OnDespawned");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetPool_1<T>*>::get(), "OnDespawned", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(items))));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, items);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::HashSetPool_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashSetPool_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HashSetPool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::HashSetPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HashSetPool_1<T>*, creationType>()));
    }
  }; // Zenject.HashSetPool`1
  // Could not write size check! Type: Zenject.HashSetPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::HashSetPool_1, "Zenject", "HashSetPool`1");
