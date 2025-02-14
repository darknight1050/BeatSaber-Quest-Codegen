// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
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
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: IProvider
  class IProvider;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinderBase
  // [NoReflectionBakingAttribute] Offset: DDC900
  class FactoryFromBinderBase : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // Nested type: Zenject::FactoryFromBinderBase::$get_AllParentTypes$d__17
    class $get_AllParentTypes$d__17;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass20_0
    class $$c__DisplayClass20_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass21_0
    class $$c__DisplayClass21_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass23_0
    class $$c__DisplayClass23_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0
    class $$c__DisplayClass27_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass28_0
    class $$c__DisplayClass28_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass29_0
    class $$c__DisplayClass29_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass30_0
    class $$c__DisplayClass30_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass31_0
    class $$c__DisplayClass31_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass32_0
    class $$c__DisplayClass32_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass33_0
    class $$c__DisplayClass33_0;
    // Nested type: Zenject::FactoryFromBinderBase::$$c__DisplayClass34_0
    class $$c__DisplayClass34_0;
    // [CompilerGeneratedAttribute] Offset: 0xDDEA58
    // private Zenject.DiContainer <BindContainer>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    Zenject::DiContainer* BindContainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDDEA68
    // private Zenject.FactoryBindInfo <FactoryBindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    Zenject::FactoryBindInfo* FactoryBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::FactoryBindInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDDEA78
    // private System.Type <ContractType>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    System::Type* ContractType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: FactoryFromBinderBase
    FactoryFromBinderBase(Zenject::DiContainer* BindContainer_ = {}, Zenject::FactoryBindInfo* FactoryBindInfo_ = {}, System::Type* ContractType_ = {}) noexcept : BindContainer{BindContainer_}, FactoryBindInfo{FactoryBindInfo_}, ContractType{ContractType_} {}
    // public System.Void .ctor(Zenject.DiContainer bindContainer, System.Type contractType, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0x161D294
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinderBase* New_ctor(Zenject::DiContainer* bindContainer, System::Type* contractType, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinderBase*, creationType>(bindContainer, contractType, bindInfo, factoryBindInfo)));
    }
    // Zenject.DiContainer get_BindContainer()
    // Offset: 0x161D34C
    Zenject::DiContainer* get_BindContainer();
    // private System.Void set_BindContainer(Zenject.DiContainer value)
    // Offset: 0x161D354
    void set_BindContainer(Zenject::DiContainer* value);
    // protected Zenject.FactoryBindInfo get_FactoryBindInfo()
    // Offset: 0x161D35C
    Zenject::FactoryBindInfo* get_FactoryBindInfo();
    // private System.Void set_FactoryBindInfo(Zenject.FactoryBindInfo value)
    // Offset: 0x161D364
    void set_FactoryBindInfo(Zenject::FactoryBindInfo* value);
    // System.Func`2<Zenject.DiContainer,Zenject.IProvider> get_ProviderFunc()
    // Offset: 0x161D36C
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* get_ProviderFunc();
    // System.Void set_ProviderFunc(System.Func`2<Zenject.DiContainer,Zenject.IProvider> value)
    // Offset: 0x161D388
    void set_ProviderFunc(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* value);
    // protected System.Type get_ContractType()
    // Offset: 0x161D3A4
    System::Type* get_ContractType();
    // private System.Void set_ContractType(System.Type value)
    // Offset: 0x161D3AC
    void set_ContractType(System::Type* value);
    // public System.Collections.Generic.IEnumerable`1<System.Type> get_AllParentTypes()
    // Offset: 0x161D3B4
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_AllParentTypes();
    // public Zenject.ConditionCopyNonLazyBinder FromNew()
    // Offset: 0x161D46C
    Zenject::ConditionCopyNonLazyBinder* FromNew();
    // public Zenject.ConditionCopyNonLazyBinder FromResolve()
    // Offset: 0x161D4A4
    Zenject::ConditionCopyNonLazyBinder* FromResolve();
    // public Zenject.ConditionCopyNonLazyBinder FromInstance(System.Object instance)
    // Offset: 0x161D564
    Zenject::ConditionCopyNonLazyBinder* FromInstance(::Il2CppObject* instance);
    // public Zenject.ConditionCopyNonLazyBinder FromResolve(System.Object subIdentifier)
    // Offset: 0x161D4AC
    Zenject::ConditionCopyNonLazyBinder* FromResolve(::Il2CppObject* subIdentifier);
    // Zenject.ConcreteBinderGeneric`1<T> CreateIFactoryBinder(out System.Guid factoryId)
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConcreteBinderGeneric_1<T>* CreateIFactoryBinder(System::Guid& factoryId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinderBase::CreateIFactoryBinder");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateIFactoryBinder", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Guid&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConcreteBinderGeneric_1<T>*, false>(this, ___generic__method, factoryId);
    }
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOn(UnityEngine.GameObject gameObject)
    // Offset: 0x161D644
    Zenject::ConditionCopyNonLazyBinder* FromComponentOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0x161D728
    Zenject::ConditionCopyNonLazyBinder* FromComponentOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOnRoot()
    // Offset: 0x161D800
    Zenject::ConditionCopyNonLazyBinder* FromComponentOnRoot();
    // public Zenject.ConditionCopyNonLazyBinder FromNewComponentOn(UnityEngine.GameObject gameObject)
    // Offset: 0x161D87C
    Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ConditionCopyNonLazyBinder FromNewComponentOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0x161D960
    Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefab(UnityEngine.Object prefab)
    // Offset: 0x161DA38
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefab(UnityEngine.Object prefab)
    // Offset: 0x161DB74
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefabResource(System.String resourcePath)
    // Offset: 0x161DC9C
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::Il2CppString* resourcePath);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefabResource(System.String resourcePath)
    // Offset: 0x161DDC4
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::Il2CppString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromNewScriptableObjectResource(System.String resourcePath)
    // Offset: 0x161DEF8
    Zenject::ConditionCopyNonLazyBinder* FromNewScriptableObjectResource(::Il2CppString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromScriptableObjectResource(System.String resourcePath)
    // Offset: 0x161DFD0
    Zenject::ConditionCopyNonLazyBinder* FromScriptableObjectResource(::Il2CppString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromResource(System.String resourcePath)
    // Offset: 0x161E0A8
    Zenject::ConditionCopyNonLazyBinder* FromResource(::Il2CppString* resourcePath);
    // private Zenject.IProvider <.ctor>b__0_0(Zenject.DiContainer container)
    // Offset: 0x161E174
    Zenject::IProvider* $_ctor$b__0_0(Zenject::DiContainer* container);
    // private UnityEngine.GameObject <FromComponentOnRoot>b__25_0(Zenject.InjectContext ctx)
    // Offset: 0x161E224
    UnityEngine::GameObject* $FromComponentOnRoot$b__25_0(Zenject::InjectContext* ctx);
  }; // Zenject.FactoryFromBinderBase
  #pragma pack(pop)
  static check_size<sizeof(FactoryFromBinderBase), 48 + sizeof(System::Type*)> __Zenject_FactoryFromBinderBaseSizeCheck;
  static_assert(sizeof(FactoryFromBinderBase) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase*, "Zenject", "FactoryFromBinderBase");
