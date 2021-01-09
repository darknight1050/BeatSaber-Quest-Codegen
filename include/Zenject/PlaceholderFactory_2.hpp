// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PlaceholderFactoryBase`1
#include "Zenject/PlaceholderFactoryBase_1.hpp"
// Including type: Zenject.IFactory`2
#include "Zenject/IFactory_2.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <get_ParamTypes>d__2 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PlaceholderFactory`2
  // [] Offset: FFFFFFFF
  template<typename TParam1, typename TValue>
  class PlaceholderFactory_2 : public Zenject::PlaceholderFactoryBase_1<TValue>/*, public Zenject::IFactory_2<TParam1, TValue>*/ {
    public:
    // Nested type: Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2<TParam1, TValue>
    class $get_ParamTypes$d__2;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.PlaceholderFactory`2/<get_ParamTypes>d__2
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D93C38
    class $get_ParamTypes$d__2 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<System::Type*>, public System::Collections::Generic::IEnumerator_1<System::Type*>*/ {
      public:
      using declaring_type = PlaceholderFactory_2<TParam1, TValue>*;
      static constexpr std::string_view NESTED_NAME = "$get_ParamTypes$d__2";
      // private System.Int32 <>1__state
      // Size: 0x4
      // Offset: 0x0
      int $$1__state;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Type <>2__current
      // Size: 0x8
      // Offset: 0x0
      System::Type* $$2__current;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // private System.Int32 <>l__initialThreadId
      // Size: 0x4
      // Offset: 0x0
      int $$l__initialThreadId;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: $get_ParamTypes$d__2
      $get_ParamTypes$d__2(int $$1__state_ = {}, System::Type* $$2__current_ = {}, int $$l__initialThreadId_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_} {}
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Type*>
      operator System::Collections::Generic::IEnumerable_1<System::Type*>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this);
      }
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Type*>
      operator System::Collections::Generic::IEnumerator_1<System::Type*>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Type*>*>(this);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename PlaceholderFactory_2<TParam1, TValue>::$get_ParamTypes$d__2* New_ctor(int $$1__state) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename PlaceholderFactory_2<TParam1, TValue>::$get_ParamTypes$d__2*, creationType>($$1__state)));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2::System.IDisposable.Dispose");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2::MoveNext");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "MoveNext", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // private System.Type System.Collections.Generic.IEnumerator<System.Type>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      System::Type* System_Collections_Generic_IEnumerator_1_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2::System.Collections.Generic.IEnumerator<System.Type>.get_Current");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerator<System.Type>.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        return ::il2cpp_utils::RunMethodThrow<System::Type*, false>(this, ___internal__method);
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2::System.Collections.IEnumerator.Reset");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2::System.Collections.IEnumerator.get_Current");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method);
      }
      // private System.Collections.Generic.IEnumerator`1<System.Type> System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerable`1
      // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
      System::Collections::Generic::IEnumerator_1<System::Type*>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerator_1<System::Type*>*, false>(this, ___internal__method);
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerable
      // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::$get_ParamTypes$d__2::System.Collections.IEnumerable.GetEnumerator");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
        return ::il2cpp_utils::RunMethodThrow<System::Collections::IEnumerator*, false>(this, ___internal__method);
      }
    }; // Zenject.PlaceholderFactory`2/<get_ParamTypes>d__2
    // Could not write size check! Type: Zenject.PlaceholderFactory`2/<get_ParamTypes>d__2 is generic, or has no fields that are valid for size checks!
    // Creating value type constructor for type: PlaceholderFactory_2
    PlaceholderFactory_2() noexcept {}
    // Creating interface conversion operator: operator Zenject::IFactory_2<TParam1, TValue>
    operator Zenject::IFactory_2<TParam1, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_2<TParam1, TValue>*>(this);
    }
    // public TValue Create(TParam1 param)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`2
    // Base method: TValue IFactory_2::Create(TParam1 param)
    TValue Create(TParam1 param) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::Create");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(param)));
      return ::il2cpp_utils::RunMethodThrow<TValue, false>(this, ___internal__method, param);
    }
    // Creating proxy method: Zenject_IFactory_2_Create
    // Maps to method: Create
    TValue Zenject_IFactory_2_Create(TParam1 param) {
      return Create(param);
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ParamTypes()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> PlaceholderFactoryBase_1::get_ParamTypes()
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ParamTypes() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::get_ParamTypes");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_ParamTypes", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<System::Type*>*, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactoryBase`1
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaceholderFactory_2<TParam1, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactory_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaceholderFactory_2<TParam1, TValue>*, creationType>()));
    }
  }; // Zenject.PlaceholderFactory`2
  // Could not write size check! Type: Zenject.PlaceholderFactory`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactory_2, "Zenject", "PlaceholderFactory`2");
