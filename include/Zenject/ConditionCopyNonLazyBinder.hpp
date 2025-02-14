// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: Zenject.CopyNonLazyBinder
#include "Zenject/CopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindingCondition
  class BindingCondition;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConditionCopyNonLazyBinder
  // [NoReflectionBakingAttribute] Offset: DDC670
  class ConditionCopyNonLazyBinder : public Zenject::CopyNonLazyBinder {
    public:
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_1
    class $$c__DisplayClass3_1;
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__4_1<T>
    template<typename T>
    class $$c__4_1;
    // Nested type: Zenject::ConditionCopyNonLazyBinder::$$c__5_1<T>
    template<typename T>
    class $$c__5_1;
    // Creating value type constructor for type: ConditionCopyNonLazyBinder
    ConditionCopyNonLazyBinder() noexcept {}
    // public Zenject.CopyNonLazyBinder When(Zenject.BindingCondition condition)
    // Offset: 0x1371D3C
    Zenject::CopyNonLazyBinder* When(Zenject::BindingCondition* condition);
    // public Zenject.CopyNonLazyBinder WhenInjectedIntoInstance(System.Object instance)
    // Offset: 0x1371D58
    Zenject::CopyNonLazyBinder* WhenInjectedIntoInstance(::Il2CppObject* instance);
    // public Zenject.CopyNonLazyBinder WhenInjectedInto(params System.Type[] targets)
    // Offset: 0x1371E0C
    Zenject::CopyNonLazyBinder* WhenInjectedInto(::Array<System::Type*>* targets);
    // Creating initializer_list -> params proxy for: Zenject.CopyNonLazyBinder WhenInjectedInto(params System.Type[] targets)
    Zenject::CopyNonLazyBinder* WhenInjectedInto(std::initializer_list<System::Type*> targets);
    // Creating TArgs -> initializer_list proxy for: Zenject.CopyNonLazyBinder WhenInjectedInto(params System.Type[] targets)
    template<class ...TParams>
    Zenject::CopyNonLazyBinder* WhenInjectedInto(TParams&&... targets) {
      return WhenInjectedInto({targets...});
    }
    // public Zenject.CopyNonLazyBinder WhenInjectedInto()
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::CopyNonLazyBinder* WhenInjectedInto() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConditionCopyNonLazyBinder::WhenInjectedInto");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WhenInjectedInto", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::CopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public Zenject.CopyNonLazyBinder WhenNotInjectedInto()
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::CopyNonLazyBinder* WhenNotInjectedInto() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConditionCopyNonLazyBinder::WhenNotInjectedInto");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WhenNotInjectedInto", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::CopyNonLazyBinder*, false>(this, ___generic__method);
    }
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0x1371D2C
    // Implemented from: Zenject.CopyNonLazyBinder
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConditionCopyNonLazyBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.ConditionCopyNonLazyBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConditionCopyNonLazyBinder*, "Zenject", "ConditionCopyNonLazyBinder");
