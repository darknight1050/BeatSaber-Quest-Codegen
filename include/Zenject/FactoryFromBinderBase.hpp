// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
  // Autogenerated type: Zenject.FactoryFromBinderBase
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
    // private Zenject.DiContainer <BindContainer>k__BackingField
    // Offset: 0x20
    Zenject::DiContainer* BindContainer;
    // private Zenject.FactoryBindInfo <FactoryBindInfo>k__BackingField
    // Offset: 0x28
    Zenject::FactoryBindInfo* FactoryBindInfo;
    // private System.Type <ContractType>k__BackingField
    // Offset: 0x30
    System::Type* ContractType;
    // public System.Void .ctor(Zenject.DiContainer bindContainer, System.Type contractType, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xF1A5E8
    static FactoryFromBinderBase* New_ctor(Zenject::DiContainer* bindContainer, System::Type* contractType, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo);
    // Zenject.DiContainer get_BindContainer()
    // Offset: 0xF1A6D0
    Zenject::DiContainer* get_BindContainer();
    // private System.Void set_BindContainer(Zenject.DiContainer value)
    // Offset: 0xF1A6D8
    void set_BindContainer(Zenject::DiContainer* value);
    // protected Zenject.FactoryBindInfo get_FactoryBindInfo()
    // Offset: 0xF1A6E0
    Zenject::FactoryBindInfo* get_FactoryBindInfo();
    // private System.Void set_FactoryBindInfo(Zenject.FactoryBindInfo value)
    // Offset: 0xF1A6E8
    void set_FactoryBindInfo(Zenject::FactoryBindInfo* value);
    // System.Func`2<Zenject.DiContainer,Zenject.IProvider> get_ProviderFunc()
    // Offset: 0xF1A6F0
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* get_ProviderFunc();
    // System.Void set_ProviderFunc(System.Func`2<Zenject.DiContainer,Zenject.IProvider> value)
    // Offset: 0xF1A70C
    void set_ProviderFunc(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* value);
    // protected System.Type get_ContractType()
    // Offset: 0xF1A728
    System::Type* get_ContractType();
    // private System.Void set_ContractType(System.Type value)
    // Offset: 0xF1A730
    void set_ContractType(System::Type* value);
    // public System.Collections.Generic.IEnumerable`1<System.Type> get_AllParentTypes()
    // Offset: 0xF1A738
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_AllParentTypes();
    // public Zenject.ConditionCopyNonLazyBinder FromNew()
    // Offset: 0xF1A7FC
    Zenject::ConditionCopyNonLazyBinder* FromNew();
    // public Zenject.ConditionCopyNonLazyBinder FromResolve()
    // Offset: 0xF1A834
    Zenject::ConditionCopyNonLazyBinder* FromResolve();
    // public Zenject.ConditionCopyNonLazyBinder FromInstance(System.Object instance)
    // Offset: 0xF1A918
    Zenject::ConditionCopyNonLazyBinder* FromInstance(::CsObject* instance);
    // public Zenject.ConditionCopyNonLazyBinder FromResolve(System.Object subIdentifier)
    // Offset: 0xF1A83C
    Zenject::ConditionCopyNonLazyBinder* FromResolve(::CsObject* subIdentifier);
    // Zenject.ConcreteBinderGeneric`1<T> CreateIFactoryBinder(System.Guid factoryId)
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConcreteBinderGeneric_1<T>* CreateIFactoryBinder(System::Guid& factoryId) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ConcreteBinderGeneric_1<T>*>(this, "CreateIFactoryBinder", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, factoryId)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOn(UnityEngine.GameObject gameObject)
    // Offset: 0xF1AA24
    Zenject::ConditionCopyNonLazyBinder* FromComponentOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0xF1AB30
    Zenject::ConditionCopyNonLazyBinder* FromComponentOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.ConditionCopyNonLazyBinder FromComponentOnRoot()
    // Offset: 0xF1AC2C
    Zenject::ConditionCopyNonLazyBinder* FromComponentOnRoot();
    // public Zenject.ConditionCopyNonLazyBinder FromNewComponentOn(UnityEngine.GameObject gameObject)
    // Offset: 0xF1ACA8
    Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(UnityEngine::GameObject* gameObject);
    // public Zenject.ConditionCopyNonLazyBinder FromNewComponentOn(System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter)
    // Offset: 0xF1ADB4
    Zenject::ConditionCopyNonLazyBinder* FromNewComponentOn(System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefab(UnityEngine.Object prefab)
    // Offset: 0xF1AEB0
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefab(UnityEngine.Object prefab)
    // Offset: 0xF1B020
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefab(UnityEngine::Object* prefab);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromComponentInNewPrefabResource(System.String resourcePath)
    // Offset: 0xF1B17C
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromComponentInNewPrefabResource(::CsString* resourcePath);
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder FromNewComponentOnNewPrefabResource(System.String resourcePath)
    // Offset: 0xF1B2D8
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* FromNewComponentOnNewPrefabResource(::CsString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromNewScriptableObjectResource(System.String resourcePath)
    // Offset: 0xF1B440
    Zenject::ConditionCopyNonLazyBinder* FromNewScriptableObjectResource(::CsString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromScriptableObjectResource(System.String resourcePath)
    // Offset: 0xF1B540
    Zenject::ConditionCopyNonLazyBinder* FromScriptableObjectResource(::CsString* resourcePath);
    // public Zenject.ConditionCopyNonLazyBinder FromResource(System.String resourcePath)
    // Offset: 0xF1B640
    Zenject::ConditionCopyNonLazyBinder* FromResource(::CsString* resourcePath);
    // private Zenject.IProvider <.ctor>b__0_0(Zenject.DiContainer container)
    // Offset: 0xF1B730
    Zenject::IProvider* $_ctor$b__0_0(Zenject::DiContainer* container);
    // private UnityEngine.GameObject <FromComponentOnRoot>b__25_0(Zenject.InjectContext ctx)
    // Offset: 0xF1B7E0
    UnityEngine::GameObject* $FromComponentOnRoot$b__25_0(Zenject::InjectContext* ctx);
  }; // Zenject.FactoryFromBinderBase
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase*, "Zenject", "FactoryFromBinderBase");
#pragma pack(pop)
