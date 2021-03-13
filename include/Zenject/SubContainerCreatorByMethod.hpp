// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByMethodBase
#include "Zenject/SubContainerCreatorByMethodBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
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
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SubContainerCreatorByMethod
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: CEF2E8
  class SubContainerCreatorByMethod : public Zenject::SubContainerCreatorByMethodBase {
    public:
    // private readonly System.Action`1<Zenject.DiContainer> _installMethod
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<Zenject::DiContainer*>* installMethod;
    // Field size check
    static_assert(sizeof(System::Action_1<Zenject::DiContainer*>*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByMethod
    SubContainerCreatorByMethod(System::Action_1<Zenject::DiContainer*>* installMethod_ = {}) noexcept : installMethod{installMethod_} {}
    // Creating conversion operator: operator System::Action_1<Zenject::DiContainer*>*
    constexpr operator System::Action_1<Zenject::DiContainer*>*() const noexcept {
      return installMethod;
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Action`1<Zenject.DiContainer> installMethod)
    // Offset: 0x1517BF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByMethod* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Action_1<Zenject::DiContainer*>* installMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByMethod*, creationType>(container, containerBindInfo, installMethod)));
    }
    // public override Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0x15192D4
    // Implemented from: Zenject.SubContainerCreatorByMethodBase
    // Base method: Zenject.DiContainer SubContainerCreatorByMethodBase::CreateSubContainer_NEW(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorByMethod
  #pragma pack(pop)
  static check_size<sizeof(SubContainerCreatorByMethod), 32 + sizeof(System::Action_1<Zenject::DiContainer*>*)> __Zenject_SubContainerCreatorByMethodSizeCheck;
  static_assert(sizeof(SubContainerCreatorByMethod) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByMethod*, "Zenject", "SubContainerCreatorByMethod");
