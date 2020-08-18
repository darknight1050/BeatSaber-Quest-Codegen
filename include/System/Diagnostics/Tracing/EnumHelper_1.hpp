// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Skipping declaration: Transformer`1 because it is already included!
  // Skipping declaration: Caster`1 because it is already included!
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EnumHelper`1
  template<typename UnderlyingType>
  class EnumHelper_1 : public ::Il2CppObject {
    public:
    // Nested type: System::Diagnostics::Tracing::EnumHelper_1::Transformer_1<UnderlyingType, ValueType>
    template<typename ValueType>
    class Transformer_1;
    // Nested type: System::Diagnostics::Tracing::EnumHelper_1::Caster_1<UnderlyingType, ValueType>
    template<typename ValueType>
    class Caster_1;
    // Autogenerated type: System.Diagnostics.Tracing.EnumHelper`1/Transformer`1
    template<typename ValueType>
    class Transformer_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::MulticastDelegate {
      public:
      using declaring_type = EnumHelper_1<UnderlyingType>*;
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      static typename EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        return (typename EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>*>::get(), object, method));
      }
      // public UnderlyingType Invoke(ValueType value)
      // Offset: 0xFFFFFFFF
      UnderlyingType Invoke(ValueType value) {
        return THROW_UNLESS(il2cpp_utils::RunMethod<UnderlyingType>(this, "Invoke", value));
      }
      // public System.IAsyncResult BeginInvoke(ValueType value, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(ValueType value, System::AsyncCallback* callback, ::Il2CppObject* object) {
        return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", value, callback, object));
      }
      // public UnderlyingType EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      UnderlyingType EndInvoke(System::IAsyncResult* result) {
        return THROW_UNLESS(il2cpp_utils::RunMethod<UnderlyingType>(this, "EndInvoke", result));
      }
    }; // System.Diagnostics.Tracing.EnumHelper`1/Transformer`1
    // Autogenerated type: System.Diagnostics.Tracing.EnumHelper`1/Caster`1
    template<typename ValueType>
    class Caster_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = EnumHelper_1<UnderlyingType>*;
      // Autogenerated static field getter
      // Get static field: static public readonly System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> Instance
      static typename System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>* _get_Instance() {
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<typename System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumHelper_1<UnderlyingType>::Caster_1<ValueType>*>::get(), "Instance"));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly System.Diagnostics.Tracing.EnumHelper`1/Transformer`1<UnderlyingType,ValueType> Instance
      static void _set_Instance(typename System::Diagnostics::Tracing::EnumHelper_1<UnderlyingType>::Transformer_1<ValueType>* value) {
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumHelper_1<UnderlyingType>::Caster_1<ValueType>*>::get(), "Instance", value));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename EnumHelper_1<UnderlyingType>::Caster_1<ValueType>*>::get(), ".cctor"));
      }
    }; // System.Diagnostics.Tracing.EnumHelper`1/Caster`1
    // Autogenerated static field getter
    // Get static field: static private readonly System.Reflection.MethodInfo IdentityInfo
    static System::Reflection::MethodInfo* _get_IdentityInfo() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Reflection::MethodInfo*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumHelper_1<UnderlyingType>*>::get(), "IdentityInfo"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Reflection.MethodInfo IdentityInfo
    static void _set_IdentityInfo(System::Reflection::MethodInfo* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumHelper_1<UnderlyingType>*>::get(), "IdentityInfo", value));
    }
    // static public UnderlyingType Cast(ValueType value)
    // Offset: 0xFFFFFFFF
    template<class ValueType>
    static UnderlyingType Cast(ValueType value) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<UnderlyingType>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumHelper_1<UnderlyingType>*>::get(), "Cast", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ValueType>::get()}, value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumHelper_1<UnderlyingType>*>::get(), ".cctor"));
    }
  }; // System.Diagnostics.Tracing.EnumHelper`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Diagnostics::Tracing::EnumHelper_1, "System.Diagnostics.Tracing", "EnumHelper`1");
#pragma pack(pop)
