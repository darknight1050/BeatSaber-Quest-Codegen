// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass23_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass25_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass27_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass29_0 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InstallerBase
  class InstallerBase;
  // Forward declaring type: ScopeConcreteIdArgConditionCopyNonLazyBinder
  class ScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactorySubContainerBinderBase`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92150
  template<typename TContract>
  class FactorySubContainerBinderBase_1 : public ::Il2CppObject {
    public:
    // Nested type: Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass23_0<TContract>
    class $$c__DisplayClass23_0;
    // Nested type: Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass25_0<TContract>
    class $$c__DisplayClass25_0;
    // Nested type: Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass27_0<TContract>
    class $$c__DisplayClass27_0;
    // Nested type: Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass29_0<TContract>
    class $$c__DisplayClass29_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass23_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D93618
    class $$c__DisplayClass23_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderBase_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass23_0";
      // public Zenject.FactorySubContainerBinderBase`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderBase_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderBase_1<TContract>*) == 0x8);
      // public Zenject.SubContainerCreatorBindInfo subcontainerBindInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo;
      // Field size check
      static_assert(sizeof(Zenject::SubContainerCreatorBindInfo*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass23_0
      $$c__DisplayClass23_0(Zenject::FactorySubContainerBinderBase_1<TContract>* $$4__this_ = {}, Zenject::SubContainerCreatorBindInfo* subcontainerBindInfo_ = {}, System::Type* installerType_ = {}) noexcept : $$4__this{$$4__this_}, subcontainerBindInfo{subcontainerBindInfo_}, installerType{installerType_} {}
      // Zenject.IProvider <ByInstaller>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByInstaller$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass23_0::<ByInstaller>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByInstaller>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderBase_1<TContract>::$$c__DisplayClass23_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass23_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderBase_1<TContract>::$$c__DisplayClass23_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass23_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass23_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass25_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D93628
    class $$c__DisplayClass25_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderBase_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass25_0";
      // public Zenject.FactorySubContainerBinderBase`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderBase_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderBase_1<TContract>*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass25_0
      $$c__DisplayClass25_0(Zenject::FactorySubContainerBinderBase_1<TContract>* $$4__this_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}, System::Type* installerType_ = {}) noexcept : $$4__this{$$4__this_}, gameObjectInfo{gameObjectInfo_}, installerType{installerType_} {}
      // Zenject.IProvider <ByNewGameObjectInstaller>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewGameObjectInstaller$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass25_0::<ByNewGameObjectInstaller>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewGameObjectInstaller>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderBase_1<TContract>::$$c__DisplayClass25_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass25_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderBase_1<TContract>::$$c__DisplayClass25_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass25_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass25_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass27_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D93638
    class $$c__DisplayClass27_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderBase_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass27_0";
      // public Zenject.FactorySubContainerBinderBase`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderBase_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderBase_1<TContract>*) == 0x8);
      // public UnityEngine.Object prefab
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::Object* prefab;
      // Field size check
      static_assert(sizeof(UnityEngine::Object*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass27_0
      $$c__DisplayClass27_0(Zenject::FactorySubContainerBinderBase_1<TContract>* $$4__this_ = {}, UnityEngine::Object* prefab_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}, System::Type* installerType_ = {}) noexcept : $$4__this{$$4__this_}, prefab{prefab_}, gameObjectInfo{gameObjectInfo_}, installerType{installerType_} {}
      // Zenject.IProvider <ByNewPrefabInstaller>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewPrefabInstaller$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass27_0::<ByNewPrefabInstaller>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewPrefabInstaller>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderBase_1<TContract>::$$c__DisplayClass27_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass27_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderBase_1<TContract>::$$c__DisplayClass27_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass27_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass27_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass29_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D93648
    class $$c__DisplayClass29_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderBase_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass29_0";
      // public Zenject.FactorySubContainerBinderBase`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderBase_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderBase_1<TContract>*) == 0x8);
      // public System.String resourcePath
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* resourcePath;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass29_0
      $$c__DisplayClass29_0(Zenject::FactorySubContainerBinderBase_1<TContract>* $$4__this_ = {}, ::Il2CppString* resourcePath_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}, System::Type* installerType_ = {}) noexcept : $$4__this{$$4__this_}, resourcePath{resourcePath_}, gameObjectInfo{gameObjectInfo_}, installerType{installerType_} {}
      // Zenject.IProvider <ByNewPrefabResourceInstaller>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewPrefabResourceInstaller$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass29_0::<ByNewPrefabResourceInstaller>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewPrefabResourceInstaller>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderBase_1<TContract>::$$c__DisplayClass29_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::$$c__DisplayClass29_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderBase_1<TContract>::$$c__DisplayClass29_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass29_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderBase`1/<>c__DisplayClass29_0 is generic, or has no fields that are valid for size checks!
    // [CompilerGeneratedAttribute] Offset: 0xD94298
    // private Zenject.DiContainer <BindContainer>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* BindContainer;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD942A8
    // private Zenject.FactoryBindInfo <FactoryBindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    Zenject::FactoryBindInfo* FactoryBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::FactoryBindInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD942B8
    // private Zenject.BindInfo <BindInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    Zenject::BindInfo* BindInfo;
    // Field size check
    static_assert(sizeof(Zenject::BindInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD942C8
    // private System.Object <SubIdentifier>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* SubIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: FactorySubContainerBinderBase_1
    FactorySubContainerBinderBase_1(Zenject::DiContainer* BindContainer_ = {}, Zenject::FactoryBindInfo* FactoryBindInfo_ = {}, Zenject::BindInfo* BindInfo_ = {}, ::Il2CppObject* SubIdentifier_ = {}) noexcept : BindContainer{BindContainer_}, FactoryBindInfo{FactoryBindInfo_}, BindInfo{BindInfo_}, SubIdentifier{SubIdentifier_} {}
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactorySubContainerBinderBase_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, ::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactorySubContainerBinderBase_1<TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, subIdentifier)));
    }
    // protected Zenject.DiContainer get_BindContainer()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_BindContainer() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::get_BindContainer");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_BindContainer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // private System.Void set_BindContainer(Zenject.DiContainer value)
    // Offset: 0xFFFFFFFF
    void set_BindContainer(Zenject::DiContainer* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::set_BindContainer");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_BindContainer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // protected Zenject.FactoryBindInfo get_FactoryBindInfo()
    // Offset: 0xFFFFFFFF
    Zenject::FactoryBindInfo* get_FactoryBindInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::get_FactoryBindInfo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_FactoryBindInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryBindInfo*, false>(this, ___internal__method);
    }
    // private System.Void set_FactoryBindInfo(Zenject.FactoryBindInfo value)
    // Offset: 0xFFFFFFFF
    void set_FactoryBindInfo(Zenject::FactoryBindInfo* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::set_FactoryBindInfo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_FactoryBindInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // protected System.Func`2<Zenject.DiContainer,Zenject.IProvider> get_ProviderFunc()
    // Offset: 0xFFFFFFFF
    System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* get_ProviderFunc() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::get_ProviderFunc");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_ProviderFunc", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>*, false>(this, ___internal__method);
    }
    // protected System.Void set_ProviderFunc(System.Func`2<Zenject.DiContainer,Zenject.IProvider> value)
    // Offset: 0xFFFFFFFF
    void set_ProviderFunc(System::Func_2<Zenject::DiContainer*, Zenject::IProvider*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::set_ProviderFunc");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_ProviderFunc", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // protected Zenject.BindInfo get_BindInfo()
    // Offset: 0xFFFFFFFF
    Zenject::BindInfo* get_BindInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::get_BindInfo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_BindInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<Zenject::BindInfo*, false>(this, ___internal__method);
    }
    // private System.Void set_BindInfo(Zenject.BindInfo value)
    // Offset: 0xFFFFFFFF
    void set_BindInfo(Zenject::BindInfo* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::set_BindInfo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_BindInfo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // protected System.Object get_SubIdentifier()
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* get_SubIdentifier() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::get_SubIdentifier");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_SubIdentifier", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
    }
    // private System.Void set_SubIdentifier(System.Object value)
    // Offset: 0xFFFFFFFF
    void set_SubIdentifier(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::set_SubIdentifier");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_SubIdentifier", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // protected System.Type get_ContractType()
    // Offset: 0xFFFFFFFF
    System::Type* get_ContractType() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::get_ContractType");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_ContractType", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByInstaller()
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::ByInstaller");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByInstaller", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method);
    }
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder ByInstaller(System.Type installerType)
    // Offset: 0xFFFFFFFF
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller(System::Type* installerType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::ByInstaller");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByInstaller", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(installerType)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectInstaller()
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller() {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::ByNewGameObjectInstaller");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewGameObjectInstaller", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewGameObjectInstaller(System.Type installerType)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller(System::Type* installerType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::ByNewGameObjectInstaller");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewGameObjectInstaller", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(installerType)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabInstaller(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(UnityEngine::Object* prefab) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::ByNewPrefabInstaller");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewPrefabInstaller", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::il2cpp_utils::ExtractTypes(prefab)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabInstaller(UnityEngine.Object prefab, System.Type installerType)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(UnityEngine::Object* prefab, System::Type* installerType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::ByNewPrefabInstaller");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewPrefabInstaller", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(prefab, installerType)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, prefab, installerType);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceInstaller(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::Il2CppString* resourcePath) {
      static_assert(std::is_convertible_v<TInstaller, Zenject::InstallerBase*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::ByNewPrefabResourceInstaller");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewPrefabResourceInstaller", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::il2cpp_utils::ExtractTypes(resourcePath)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResourceInstaller(System.String resourcePath, System.Type installerType)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::Il2CppString* resourcePath, System::Type* installerType) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderBase_1::ByNewPrefabResourceInstaller");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewPrefabResourceInstaller", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(resourcePath, installerType)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, resourcePath, installerType);
    }
  }; // Zenject.FactorySubContainerBinderBase`1
  // Could not write size check! Type: Zenject.FactorySubContainerBinderBase`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinderBase_1, "Zenject", "FactorySubContainerBinderBase`1");
