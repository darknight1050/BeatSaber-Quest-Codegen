// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.LazyThreadSafetyMode
#include "System/Threading/LazyThreadSafetyMode.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Boxed because it is already included!
  // Skipping declaration: LazyInternalExceptionHolder because it is already included!
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Lazy`1
  // [DebuggerDisplayAttribute] Offset: D79FB4
  // [DebuggerTypeProxyAttribute] Offset: D79FB4
  // [ComVisibleAttribute] Offset: D79FB4
  template<typename T>
  class Lazy_1 : public ::Il2CppObject {
    public:
    // Nested type: System::Lazy_1::Boxed<T>
    class Boxed;
    // Nested type: System::Lazy_1::LazyInternalExceptionHolder<T>
    class LazyInternalExceptionHolder;
    // Nested type: System::Lazy_1::$$c<T>
    class $$c;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Lazy`1/Boxed
    class Boxed : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = Lazy_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Boxed";
      // T m_value
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T m_value;
      // Creating value type constructor for type: Boxed
      Boxed(T m_value_ = {}) noexcept : m_value{m_value_} {}
      // System.Void .ctor(T value)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Lazy_1<T>::Boxed* New_ctor(T value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::Boxed::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Lazy_1<T>::Boxed*, creationType>(value)));
      }
    }; // System.Lazy`1/Boxed
    // Could not write size check! Type: System.Lazy`1/Boxed is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Lazy`1/LazyInternalExceptionHolder
    class LazyInternalExceptionHolder : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = Lazy_1<T>*;
      static constexpr std::string_view NESTED_NAME = "LazyInternalExceptionHolder";
      // System.Runtime.ExceptionServices.ExceptionDispatchInfo m_edi
      // Size: 0x8
      // Offset: 0x0
      System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_edi;
      // Field size check
      static_assert(sizeof(System::Runtime::ExceptionServices::ExceptionDispatchInfo*) == 0x8);
      // Creating value type constructor for type: LazyInternalExceptionHolder
      LazyInternalExceptionHolder(System::Runtime::ExceptionServices::ExceptionDispatchInfo* m_edi_ = {}) noexcept : m_edi{m_edi_} {}
      // Creating conversion operator: operator System::Runtime::ExceptionServices::ExceptionDispatchInfo*
      constexpr operator System::Runtime::ExceptionServices::ExceptionDispatchInfo*() const noexcept {
        return m_edi;
      }
      // System.Void .ctor(System.Exception ex)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Lazy_1<T>::LazyInternalExceptionHolder* New_ctor(System::Exception* ex) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::LazyInternalExceptionHolder::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Lazy_1<T>::LazyInternalExceptionHolder*, creationType>(ex)));
      }
    }; // System.Lazy`1/LazyInternalExceptionHolder
    // Could not write size check! Type: System.Lazy`1/LazyInternalExceptionHolder is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Lazy`1/<>c
    // [CompilerGeneratedAttribute] Offset: D7A050
    class $$c : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = Lazy_1<T>*;
      static constexpr std::string_view NESTED_NAME = "$$c";
      // Creating value type constructor for type: $$c
      $$c() noexcept {}
      // Autogenerated static field getter
      // Get static field: static public readonly System.Lazy`1/<>c<T> <>9
      static typename System::Lazy_1<T>::$$c* _get_$$9() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::$$c::_get_$$9");
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename System::Lazy_1<T>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly System.Lazy`1/<>c<T> <>9
      static void _set_$$9(typename System::Lazy_1<T>::$$c* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::$$c::_set_$$9");
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::$$c*>::get(), "<>9", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::$$c::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename Lazy_1<T>::$$c*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
      // T <.cctor>b__27_0()
      // Offset: 0xFFFFFFFF
      T $_cctor$b__27_0() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::$$c::<.cctor>b__27_0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<.cctor>b__27_0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
        return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Lazy_1<T>::$$c* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::$$c::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Lazy_1<T>::$$c*, creationType>()));
      }
    }; // System.Lazy`1/<>c
    // Could not write size check! Type: System.Lazy`1/<>c is generic, or has no fields that are valid for size checks!
    // private System.Object m_boxed
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* m_boxed;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Func`1<T> m_valueFactory
    // Size: 0x8
    // Offset: 0x0
    System::Func_1<T>* m_valueFactory;
    // Field size check
    static_assert(sizeof(System::Func_1<T>*) == 0x8);
    // private System.Object m_threadSafeObj
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppObject* m_threadSafeObj;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: Lazy_1
    Lazy_1(::Il2CppObject* m_boxed_ = {}, System::Func_1<T>* m_valueFactory_ = {}, ::Il2CppObject* m_threadSafeObj_ = {}) noexcept : m_boxed{m_boxed_}, m_valueFactory{m_valueFactory_}, m_threadSafeObj{m_threadSafeObj_} {}
    // Autogenerated static field getter
    // Get static field: static private readonly System.Func`1<T> ALREADY_INVOKED_SENTINEL
    static System::Func_1<T>* _get_ALREADY_INVOKED_SENTINEL() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::_get_ALREADY_INVOKED_SENTINEL");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Func_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), "ALREADY_INVOKED_SENTINEL"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Func`1<T> ALREADY_INVOKED_SENTINEL
    static void _set_ALREADY_INVOKED_SENTINEL(System::Func_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::_set_ALREADY_INVOKED_SENTINEL");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), "ALREADY_INVOKED_SENTINEL", value));
    }
    // public System.Void .ctor(System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1<T>* New_ctor(System::Func_1<T>* valueFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1<T>*, creationType>(valueFactory)));
    }
    // public System.Void .ctor(System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1<T>* New_ctor(System::Threading::LazyThreadSafetyMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1<T>*, creationType>(mode)));
    }
    // public System.Void .ctor(System.Func`1<T> valueFactory, System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1<T>* New_ctor(System::Func_1<T>* valueFactory, System::Threading::LazyThreadSafetyMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1<T>*, creationType>(valueFactory, mode)));
    }
    // static private System.Object GetObjectFromMode(System.Threading.LazyThreadSafetyMode mode)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* GetObjectFromMode(System::Threading::LazyThreadSafetyMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::GetObjectFromMode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), "GetObjectFromMode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(mode)})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, mode);
    }
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    void OnSerializing(System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::OnSerializing");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnSerializing", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(context)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, context);
    }
    // System.Threading.LazyThreadSafetyMode get_Mode()
    // Offset: 0xFFFFFFFF
    System::Threading::LazyThreadSafetyMode get_Mode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::get_Mode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Mode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::LazyThreadSafetyMode, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsValueCreated()
    // Offset: 0xFFFFFFFF
    bool get_IsValueCreated() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::get_IsValueCreated");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsValueCreated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
    // public T get_Value()
    // Offset: 0xFFFFFFFF
    T get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::get_Value");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // private T LazyInitValue()
    // Offset: 0xFFFFFFFF
    T LazyInitValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::LazyInitValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "LazyInitValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // private System.Lazy`1/Boxed<T> CreateValue()
    // Offset: 0xFFFFFFFF
    typename System::Lazy_1<T>::Boxed* CreateValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::CreateValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CreateValue", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<typename System::Lazy_1<T>::Boxed*, false>(this, ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Lazy_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Lazy_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Lazy_1<T>*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Lazy_1::ToString");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "ToString", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
  }; // System.Lazy`1
  // Could not write size check! Type: System.Lazy`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Lazy_1, "System", "Lazy`1");
