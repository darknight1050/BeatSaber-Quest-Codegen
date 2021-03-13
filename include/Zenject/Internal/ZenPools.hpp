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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: StaticMemoryPool`1<TValue>
  template<typename TValue>
  class StaticMemoryPool_1;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: BindStatement
  class BindStatement;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindingId
  struct BindingId;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Forward declaring namespace: Zenject::Internal
namespace Zenject::Internal {
  // Forward declaring type: LookupId
  class LookupId;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ZenPools
  // [] Offset: FFFFFFFF
  class ZenPools : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ZenPools
    ZenPools() noexcept {}
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.InjectContext> _contextPool
    static Zenject::StaticMemoryPool_1<Zenject::InjectContext*>* _get__contextPool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.InjectContext> _contextPool
    static void _set__contextPool(Zenject::StaticMemoryPool_1<Zenject::InjectContext*>* value);
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.Internal.LookupId> _lookupIdPool
    static Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId*>* _get__lookupIdPool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.Internal.LookupId> _lookupIdPool
    static void _set__lookupIdPool(Zenject::StaticMemoryPool_1<Zenject::Internal::LookupId*>* value);
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindInfo> _bindInfoPool
    static Zenject::StaticMemoryPool_1<Zenject::BindInfo*>* _get__bindInfoPool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindInfo> _bindInfoPool
    static void _set__bindInfoPool(Zenject::StaticMemoryPool_1<Zenject::BindInfo*>* value);
    // Get static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindStatement> _bindStatementPool
    static Zenject::StaticMemoryPool_1<Zenject::BindStatement*>* _get__bindStatementPool();
    // Set static field: static private readonly Zenject.StaticMemoryPool`1<Zenject.BindStatement> _bindStatementPool
    static void _set__bindStatementPool(Zenject::StaticMemoryPool_1<Zenject::BindStatement*>* value);
    // static public System.Collections.Generic.HashSet`1<T> SpawnHashSet()
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::HashSet_1<T>* SpawnHashSet() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::SpawnHashSet");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "SpawnHashSet", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::HashSet_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public System.Collections.Generic.Dictionary`2<TKey,TValue> SpawnDictionary()
    // Offset: 0xFFFFFFFF
    template<class TKey, class TValue>
    static System::Collections::Generic::Dictionary_2<TKey, TValue>* SpawnDictionary() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::SpawnDictionary");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "SpawnDictionary", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::il2cpp_utils::ExtractTypes())));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public Zenject.BindStatement SpawnStatement()
    // Offset: 0x147E660
    static Zenject::BindStatement* SpawnStatement();
    // static public System.Void DespawnStatement(Zenject.BindStatement statement)
    // Offset: 0x147E6DC
    static void DespawnStatement(Zenject::BindStatement* statement);
    // static public Zenject.BindInfo SpawnBindInfo()
    // Offset: 0x147E770
    static Zenject::BindInfo* SpawnBindInfo();
    // static public System.Void DespawnBindInfo(Zenject.BindInfo bindInfo)
    // Offset: 0x147E7EC
    static void DespawnBindInfo(Zenject::BindInfo* bindInfo);
    // static public System.Void DespawnDictionary(System.Collections.Generic.Dictionary`2<TKey,TValue> dictionary)
    // Offset: 0xFFFFFFFF
    template<class TKey, class TValue>
    static void DespawnDictionary(System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::DespawnDictionary");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "DespawnDictionary", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::il2cpp_utils::ExtractTypes(dictionary))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dictionary);
    }
    // static public System.Void DespawnHashSet(System.Collections.Generic.HashSet`1<T> set)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void DespawnHashSet(System::Collections::Generic::HashSet_1<T>* set) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::DespawnHashSet");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "DespawnHashSet", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(set)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, set);
    }
    // static public Zenject.Internal.LookupId SpawnLookupId(Zenject.IProvider provider, Zenject.BindingId bindingId)
    // Offset: 0x147E880
    static Zenject::Internal::LookupId* SpawnLookupId(Zenject::IProvider* provider, Zenject::BindingId bindingId);
    // static public System.Void DespawnLookupId(Zenject.Internal.LookupId lookupId)
    // Offset: 0x147E920
    static void DespawnLookupId(Zenject::Internal::LookupId* lookupId);
    // static public System.Collections.Generic.List`1<T> SpawnList()
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::List_1<T>* SpawnList() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::SpawnList");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "SpawnList", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::List_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
    // static public System.Void DespawnList(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void DespawnList(System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::DespawnList");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "DespawnList", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list);
    }
    // static public System.Void DespawnArray(T[] arr)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void DespawnArray(::Array<T>* arr) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::DespawnArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "DespawnArray", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(arr)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, arr);
    }
    // static public T[] SpawnArray(System.Int32 length)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* SpawnArray(int length) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::ZenPools::SpawnArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Zenject.Internal", "ZenPools", "SpawnArray", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(length)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, length);
    }
    // static public Zenject.InjectContext SpawnInjectContext(Zenject.DiContainer container, System.Type memberType)
    // Offset: 0x147E9A4
    static Zenject::InjectContext* SpawnInjectContext(Zenject::DiContainer* container, System::Type* memberType);
    // static public System.Void DespawnInjectContext(Zenject.InjectContext context)
    // Offset: 0x14798C0
    static void DespawnInjectContext(Zenject::InjectContext* context);
    // static public Zenject.InjectContext SpawnInjectContext(Zenject.DiContainer container, Zenject.InjectableInfo injectableInfo, Zenject.InjectContext currentContext, System.Object targetInstance, System.Type targetType, System.Object concreteIdentifier)
    // Offset: 0x147EA40
    static Zenject::InjectContext* SpawnInjectContext(Zenject::DiContainer* container, Zenject::InjectableInfo* injectableInfo, Zenject::InjectContext* currentContext, ::Il2CppObject* targetInstance, System::Type* targetType, ::Il2CppObject* concreteIdentifier);
    // static private System.Void .cctor()
    // Offset: 0x147EB18
    static void _cctor();
  }; // Zenject.Internal.ZenPools
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::Internal::ZenPools*, "Zenject.Internal", "ZenPools");
