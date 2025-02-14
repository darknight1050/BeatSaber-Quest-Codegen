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
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.LazyInstanceInjector
  // [NoReflectionBakingAttribute] Offset: DDCEF8
  class LazyInstanceInjector : public ::Il2CppObject {
    public:
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.Object> _instancesToInject
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::HashSet_1<::Il2CppObject*>* instancesToInject;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: LazyInstanceInjector
    LazyInstanceInjector(Zenject::DiContainer* container_ = {}, System::Collections::Generic::HashSet_1<::Il2CppObject*>* instancesToInject_ = {}) noexcept : container{container_}, instancesToInject{instancesToInject_} {}
    // public System.Void .ctor(Zenject.DiContainer container)
    // Offset: 0x16C56C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LazyInstanceInjector* New_ctor(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::LazyInstanceInjector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LazyInstanceInjector*, creationType>(container)));
    }
    // public System.Collections.Generic.IEnumerable`1<System.Object> get_Instances()
    // Offset: 0x16C5748
    System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* get_Instances();
    // public System.Void AddInstance(System.Object instance)
    // Offset: 0x16C5750
    void AddInstance(::Il2CppObject* instance);
    // public System.Void AddInstances(System.Collections.Generic.IEnumerable`1<System.Object> instances)
    // Offset: 0x16C57B8
    void AddInstances(System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* instances);
    // public System.Void LazyInject(System.Object instance)
    // Offset: 0x16C5820
    void LazyInject(::Il2CppObject* instance);
    // public System.Void LazyInjectAll()
    // Offset: 0x16C58B0
    void LazyInjectAll();
  }; // Zenject.LazyInstanceInjector
  #pragma pack(pop)
  static check_size<sizeof(LazyInstanceInjector), 24 + sizeof(System::Collections::Generic::HashSet_1<::Il2CppObject*>*)> __Zenject_LazyInstanceInjectorSizeCheck;
  static_assert(sizeof(LazyInstanceInjector) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::LazyInstanceInjector*, "Zenject", "LazyInstanceInjector");
