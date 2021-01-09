// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
#include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`6<T1, T2, T3, T4, T5, T6>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
  class Action_6;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectMethod`5
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D92C40
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class SubContainerCreatorByNewGameObjectMethod_5 : public Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
    public:
    // Nested type: Zenject::SubContainerCreatorByNewGameObjectMethod_5::$$c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5>
    class $$c__DisplayClass2_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectMethod`5/<>c__DisplayClass2_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D93E38
    class $$c__DisplayClass2_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = SubContainerCreatorByNewGameObjectMethod_5<TParam1, TParam2, TParam3, TParam4, TParam5>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass2_0";
      // public Zenject.SubContainerCreatorByNewGameObjectMethod`5<TParam1,TParam2,TParam3,TParam4,TParam5> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::SubContainerCreatorByNewGameObjectMethod_5<TParam1, TParam2, TParam3, TParam4, TParam5>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::SubContainerCreatorByNewGameObjectMethod_5<TParam1, TParam2, TParam3, TParam4, TParam5>*) == 0x8);
      // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass2_0
      $$c__DisplayClass2_0(Zenject::SubContainerCreatorByNewGameObjectMethod_5<TParam1, TParam2, TParam3, TParam4, TParam5>* $$4__this_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args_ = {}) noexcept : $$4__this{$$4__this_}, args{args_} {}
      // System.Void <AddInstallers>b__0(Zenject.DiContainer subContainer)
      // Offset: 0xFFFFFFFF
      void $AddInstallers$b__0(Zenject::DiContainer* subContainer) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewGameObjectMethod_5::$$c__DisplayClass2_0::<AddInstallers>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<AddInstallers>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(subContainer))));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, subContainer);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename SubContainerCreatorByNewGameObjectMethod_5<TParam1, TParam2, TParam3, TParam4, TParam5>::$$c__DisplayClass2_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewGameObjectMethod_5::$$c__DisplayClass2_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename SubContainerCreatorByNewGameObjectMethod_5<TParam1, TParam2, TParam3, TParam4, TParam5>::$$c__DisplayClass2_0*, creationType>()));
      }
    }; // Zenject.SubContainerCreatorByNewGameObjectMethod`5/<>c__DisplayClass2_0
    // Could not write size check! Type: Zenject.SubContainerCreatorByNewGameObjectMethod`5/<>c__DisplayClass2_0 is generic, or has no fields that are valid for size checks!
    // private readonly System.Action`6<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5> _installerMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_6<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5>* installerMethod;
    // Field size check
    static_assert(sizeof(System::Action_6<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5>*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByNewGameObjectMethod_5
    SubContainerCreatorByNewGameObjectMethod_5(System::Action_6<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5>* installerMethod_ = {}) noexcept : installerMethod{installerMethod_} {}
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Action`6<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TParam5> installerMethod)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewGameObjectMethod_5<TParam1, TParam2, TParam3, TParam4, TParam5>* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Action_6<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewGameObjectMethod_5::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewGameObjectMethod_5<TParam1, TParam2, TParam3, TParam4, TParam5>*, creationType>(container, gameObjectBindInfo, installerMethod)));
    }
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewGameObjectMethod_5::AddInstallers");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddInstallers", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(args, context)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, args, context);
    }
  }; // Zenject.SubContainerCreatorByNewGameObjectMethod`5
  // Could not write size check! Type: Zenject.SubContainerCreatorByNewGameObjectMethod`5 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByNewGameObjectMethod_5, "Zenject", "SubContainerCreatorByNewGameObjectMethod`5");
