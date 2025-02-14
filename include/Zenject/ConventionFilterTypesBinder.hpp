// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: Zenject.ConventionAssemblySelectionBinder
#include "Zenject/ConventionAssemblySelectionBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ConventionBindInfo
  class ConventionBindInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexOptions
  struct RegexOptions;
  // Forward declaring type: Regex
  class Regex;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionFilterTypesBinder
  // [NoReflectionBakingAttribute] Offset: DDC6A0
  class ConventionFilterTypesBinder : public Zenject::ConventionAssemblySelectionBinder {
    public:
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>
    template<typename T>
    class $$c__DisplayClass9_0_1;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_0
    class $$c__DisplayClass13_0;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass13_1
    class $$c__DisplayClass13_1;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // Nested type: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass18_0
    class $$c__DisplayClass18_0;
    // Creating value type constructor for type: ConventionFilterTypesBinder
    ConventionFilterTypesBinder() noexcept {}
    // public Zenject.ConventionFilterTypesBinder DerivingFromOrEqual()
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConventionFilterTypesBinder* DerivingFromOrEqual() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::DerivingFromOrEqual");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DerivingFromOrEqual", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ConventionFilterTypesBinder DerivingFromOrEqual(System.Type parentType)
    // Offset: 0x13745C8
    Zenject::ConventionFilterTypesBinder* DerivingFromOrEqual(System::Type* parentType);
    // public Zenject.ConventionFilterTypesBinder DerivingFrom()
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConventionFilterTypesBinder* DerivingFrom() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::DerivingFrom");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "DerivingFrom", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ConventionFilterTypesBinder DerivingFrom(System.Type parentType)
    // Offset: 0x1374690
    Zenject::ConventionFilterTypesBinder* DerivingFrom(System::Type* parentType);
    // public Zenject.ConventionFilterTypesBinder WithAttribute()
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConventionFilterTypesBinder* WithAttribute() {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::WithAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ConventionFilterTypesBinder WithAttribute(System.Type attribute)
    // Offset: 0x1374758
    Zenject::ConventionFilterTypesBinder* WithAttribute(System::Type* attribute);
    // public Zenject.ConventionFilterTypesBinder WithoutAttribute()
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConventionFilterTypesBinder* WithoutAttribute() {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::WithoutAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithoutAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method);
    }
    // public Zenject.ConventionFilterTypesBinder WithoutAttribute(System.Type attribute)
    // Offset: 0x137485C
    Zenject::ConventionFilterTypesBinder* WithoutAttribute(System::Type* attribute);
    // public Zenject.ConventionFilterTypesBinder WithAttributeWhere(System.Func`2<T,System.Boolean> predicate)
    // Offset: 0xFFFFFFFF
    template<class T>
    Zenject::ConventionFilterTypesBinder* WithAttributeWhere(System::Func_2<T, bool>* predicate) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::WithAttributeWhere");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "WithAttributeWhere", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(predicate)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ConventionFilterTypesBinder*, false>(this, ___generic__method, predicate);
    }
    // public Zenject.ConventionFilterTypesBinder Where(System.Func`2<System.Type,System.Boolean> predicate)
    // Offset: 0x1374960
    Zenject::ConventionFilterTypesBinder* Where(System::Func_2<System::Type*, bool>* predicate);
    // public Zenject.ConventionFilterTypesBinder InNamespace(System.String ns)
    // Offset: 0x1374990
    Zenject::ConventionFilterTypesBinder* InNamespace(::Il2CppString* ns);
    // public Zenject.ConventionFilterTypesBinder InNamespaces(params System.String[] namespaces)
    // Offset: 0x1374A40
    Zenject::ConventionFilterTypesBinder* InNamespaces(::Array<::Il2CppString*>* namespaces);
    // Creating initializer_list -> params proxy for: Zenject.ConventionFilterTypesBinder InNamespaces(params System.String[] namespaces)
    Zenject::ConventionFilterTypesBinder* InNamespaces(std::initializer_list<::Il2CppString*> namespaces);
    // Creating TArgs -> initializer_list proxy for: Zenject.ConventionFilterTypesBinder InNamespaces(params System.String[] namespaces)
    template<class ...TParams>
    Zenject::ConventionFilterTypesBinder* InNamespaces(TParams&&... namespaces) {
      return InNamespaces({namespaces...});
    }
    // public Zenject.ConventionFilterTypesBinder InNamespaces(System.Collections.Generic.IEnumerable`1<System.String> namespaces)
    // Offset: 0x1374A44
    Zenject::ConventionFilterTypesBinder* InNamespaces(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* namespaces);
    // public Zenject.ConventionFilterTypesBinder WithSuffix(System.String suffix)
    // Offset: 0x1374B0C
    Zenject::ConventionFilterTypesBinder* WithSuffix(::Il2CppString* suffix);
    // public Zenject.ConventionFilterTypesBinder WithPrefix(System.String prefix)
    // Offset: 0x1374BD4
    Zenject::ConventionFilterTypesBinder* WithPrefix(::Il2CppString* prefix);
    // public Zenject.ConventionFilterTypesBinder MatchingRegex(System.String pattern)
    // Offset: 0x1374C9C
    Zenject::ConventionFilterTypesBinder* MatchingRegex(::Il2CppString* pattern);
    // public Zenject.ConventionFilterTypesBinder MatchingRegex(System.String pattern, System.Text.RegularExpressions.RegexOptions options)
    // Offset: 0x1374CA4
    Zenject::ConventionFilterTypesBinder* MatchingRegex(::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options);
    // public Zenject.ConventionFilterTypesBinder MatchingRegex(System.Text.RegularExpressions.Regex regex)
    // Offset: 0x1374D20
    Zenject::ConventionFilterTypesBinder* MatchingRegex(System::Text::RegularExpressions::Regex* regex);
    // static private System.Boolean IsInNamespace(System.Type type, System.String requiredNs)
    // Offset: 0x1374DE8
    static bool IsInNamespace(System::Type* type, ::Il2CppString* requiredNs);
    // public System.Void .ctor(Zenject.ConventionBindInfo bindInfo)
    // Offset: 0x137459C
    // Implemented from: Zenject.ConventionAssemblySelectionBinder
    // Base method: System.Void ConventionAssemblySelectionBinder::.ctor(Zenject.ConventionBindInfo bindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionFilterTypesBinder* New_ctor(Zenject::ConventionBindInfo* bindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionFilterTypesBinder*, creationType>(bindInfo)));
    }
  }; // Zenject.ConventionFilterTypesBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionFilterTypesBinder*, "Zenject", "ConventionFilterTypesBinder");
