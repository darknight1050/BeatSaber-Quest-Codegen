// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.AddToCurrentGameObjectComponentProvider
#include "Zenject/AddToCurrentGameObjectComponentProvider.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.AddToCurrentGameObjectComponentProvider/<>c__DisplayClass15_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CF0530
  class AddToCurrentGameObjectComponentProvider::$$c__DisplayClass15_0 : public ::Il2CppObject {
    public:
    // public Zenject.AddToCurrentGameObjectComponentProvider <>4__this
    // Size: 0x8
    // Offset: 0x10
    Zenject::AddToCurrentGameObjectComponentProvider* $$4__this;
    // Field size check
    static_assert(sizeof(Zenject::AddToCurrentGameObjectComponentProvider*) == 0x8);
    // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
    // public System.Object instance
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public Zenject.InjectContext context
    // Size: 0x8
    // Offset: 0x28
    Zenject::InjectContext* context;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass15_0
    $$c__DisplayClass15_0(Zenject::AddToCurrentGameObjectComponentProvider* $$4__this_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args_ = {}, ::Il2CppObject* instance_ = {}, Zenject::InjectContext* context_ = {}) noexcept : $$4__this{$$4__this_}, args{args_}, instance{instance_}, context{context_} {}
    // System.Void <GetAllInstancesWithInjectSplit>b__0()
    // Offset: 0x129EAE4
    void $GetAllInstancesWithInjectSplit$b__0();
    // public System.Void .ctor()
    // Offset: 0x129EADC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AddToCurrentGameObjectComponentProvider::$$c__DisplayClass15_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::AddToCurrentGameObjectComponentProvider::$$c__DisplayClass15_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AddToCurrentGameObjectComponentProvider::$$c__DisplayClass15_0*, creationType>()));
    }
  }; // Zenject.AddToCurrentGameObjectComponentProvider/<>c__DisplayClass15_0
  #pragma pack(pop)
  static check_size<sizeof(AddToCurrentGameObjectComponentProvider::$$c__DisplayClass15_0), 40 + sizeof(Zenject::InjectContext*)> __Zenject_AddToCurrentGameObjectComponentProvider_$$c__DisplayClass15_0SizeCheck;
  static_assert(sizeof(AddToCurrentGameObjectComponentProvider::$$c__DisplayClass15_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::AddToCurrentGameObjectComponentProvider::$$c__DisplayClass15_0*, "Zenject", "AddToCurrentGameObjectComponentProvider/<>c__DisplayClass15_0");
