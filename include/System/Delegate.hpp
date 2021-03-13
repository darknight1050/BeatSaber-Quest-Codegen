// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DelegateData
  class DelegateData;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeType
  class RuntimeType;
  // Forward declaring type: MulticastDelegate
  class MulticastDelegate;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Skipping declaration: StreamingContext because it is already included!
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x61
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Delegate
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C93A90
  // [ClassInterfaceAttribute] Offset: C93A90
  class Delegate : public ::Il2CppObject/*, public System::ICloneable, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // private System.IntPtr method_ptr
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr method_ptr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr invoke_impl
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr invoke_impl;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Object m_target
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* m_target;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.IntPtr method
    // Size: 0x8
    // Offset: 0x28
    System::IntPtr method;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr delegate_trampoline
    // Size: 0x8
    // Offset: 0x30
    System::IntPtr delegate_trampoline;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr extra_arg
    // Size: 0x8
    // Offset: 0x38
    System::IntPtr extra_arg;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.IntPtr method_code
    // Size: 0x8
    // Offset: 0x40
    System::IntPtr method_code;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Reflection.MethodInfo method_info
    // Size: 0x8
    // Offset: 0x48
    System::Reflection::MethodInfo* method_info;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // private System.Reflection.MethodInfo original_method_info
    // Size: 0x8
    // Offset: 0x50
    System::Reflection::MethodInfo* original_method_info;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // private System.DelegateData data
    // Size: 0x8
    // Offset: 0x58
    System::DelegateData* data;
    // Field size check
    static_assert(sizeof(System::DelegateData*) == 0x8);
    // private System.Boolean method_is_virtual
    // Size: 0x1
    // Offset: 0x60
    bool method_is_virtual;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: Delegate
    Delegate(System::IntPtr method_ptr_ = {}, System::IntPtr invoke_impl_ = {}, ::Il2CppObject* m_target_ = {}, System::IntPtr method_ = {}, System::IntPtr delegate_trampoline_ = {}, System::IntPtr extra_arg_ = {}, System::IntPtr method_code_ = {}, System::Reflection::MethodInfo* method_info_ = {}, System::Reflection::MethodInfo* original_method_info_ = {}, System::DelegateData* data_ = {}, bool method_is_virtual_ = {}) noexcept : method_ptr{method_ptr_}, invoke_impl{invoke_impl_}, m_target{m_target_}, method{method_}, delegate_trampoline{delegate_trampoline_}, extra_arg{extra_arg_}, method_code{method_code_}, method_info{method_info_}, original_method_info{original_method_info_}, data{data_}, method_is_virtual{method_is_virtual_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // public System.Reflection.MethodInfo get_Method()
    // Offset: 0x199FE00
    System::Reflection::MethodInfo* get_Method();
    // private System.Reflection.MethodInfo GetVirtualMethod_internal()
    // Offset: 0x199FE0C
    System::Reflection::MethodInfo* GetVirtualMethod_internal();
    // public System.Object get_Target()
    // Offset: 0x199FE10
    ::Il2CppObject* get_Target();
    // static System.Delegate CreateDelegate_internal(System.Type type, System.Object target, System.Reflection.MethodInfo info, System.Boolean throwOnBindFailure)
    // Offset: 0x199FE18
    static System::Delegate* CreateDelegate_internal(System::Type* type, ::Il2CppObject* target, System::Reflection::MethodInfo* info, bool throwOnBindFailure);
    // static private System.Boolean arg_type_match(System.Type delArgType, System.Type argType)
    // Offset: 0x199FE20
    static bool arg_type_match(System::Type* delArgType, System::Type* argType);
    // static private System.Boolean arg_type_match_this(System.Type delArgType, System.Type argType, System.Boolean boxedThis)
    // Offset: 0x199FFDC
    static bool arg_type_match_this(System::Type* delArgType, System::Type* argType, bool boxedThis);
    // static private System.Boolean return_type_match(System.Type delReturnType, System.Type returnType)
    // Offset: 0x19A0158
    static bool return_type_match(System::Type* delReturnType, System::Type* returnType);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure)
    // Offset: 0x19A0220
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure);
    // static private System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure, System.Boolean allowClosed)
    // Offset: 0x19A022C
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object firstArgument, System.Reflection.MethodInfo method)
    // Offset: 0x19A0A18
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Reflection.MethodInfo method, System.Boolean throwOnBindFailure)
    // Offset: 0x19A0A24
    static System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Reflection.MethodInfo method)
    // Offset: 0x19A0A3C
    static System::Delegate* CreateDelegate(System::Type* type, System::Reflection::MethodInfo* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method)
    // Offset: 0x19A0A50
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method);
    // static private System.Reflection.MethodInfo GetCandidateMethod(System.Type type, System.Type target, System.String method, System.Reflection.BindingFlags bflags, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x19A0A68
    static System::Reflection::MethodInfo* GetCandidateMethod(System::Type* type, System::Type* target, ::Il2CppString* method, System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Type target, System.String method, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x19A0E60
    static System::Delegate* CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Type target, System.String method)
    // Offset: 0x19A0F80
    static System::Delegate* CreateDelegate(System::Type* type, System::Type* target, ::Il2CppString* method);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method, System.Boolean ignoreCase, System.Boolean throwOnBindFailure)
    // Offset: 0x19A0F8C
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase, bool throwOnBindFailure);
    // static public System.Delegate CreateDelegate(System.Type type, System.Object target, System.String method, System.Boolean ignoreCase)
    // Offset: 0x19A0A5C
    static System::Delegate* CreateDelegate(System::Type* type, ::Il2CppObject* target, ::Il2CppString* method, bool ignoreCase);
    // public System.Object Clone()
    // Offset: 0x19A1088
    ::Il2CppObject* Clone_NEW();
    // protected System.Reflection.MethodInfo GetMethodImpl()
    // Offset: 0x19A12D8
    System::Reflection::MethodInfo* GetMethodImpl_NEW();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x19A13A4
    void GetObjectData_NEW(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Delegate[] GetInvocationList()
    // Offset: 0x19A15D0
    ::Array<System::Delegate*>* GetInvocationList_NEW();
    // static public System.Delegate Combine(System.Delegate a, System.Delegate b)
    // Offset: 0x19A1670
    static System::Delegate* Combine(System::Delegate* a, System::Delegate* b);
    // static public System.Delegate Combine(params System.Delegate[] delegates)
    // Offset: 0x19A1864
    static System::Delegate* Combine(::Array<System::Delegate*>* delegates);
    // Creating initializer_list -> params proxy for: System.Delegate Combine(params System.Delegate[] delegates)
    static System::Delegate* Combine(std::initializer_list<System::Delegate*> delegates);
    // Creating TArgs -> initializer_list proxy for: System.Delegate Combine(params System.Delegate[] delegates)
    template<class ...TParams>
    static System::Delegate* Combine(TParams&&... delegates) {
      return Combine({delegates...});
    }
    // protected System.Delegate CombineImpl(System.Delegate d)
    // Offset: 0x19A18DC
    System::Delegate* CombineImpl_NEW(System::Delegate* d);
    // static public System.Delegate Remove(System.Delegate source, System.Delegate value)
    // Offset: 0x19A1954
    static System::Delegate* Remove(System::Delegate* source, System::Delegate* value);
    // protected System.Delegate RemoveImpl(System.Delegate d)
    // Offset: 0x19A1B40
    System::Delegate* RemoveImpl_NEW(System::Delegate* d);
    // static System.Delegate CreateDelegateNoSecurityCheck(System.RuntimeType type, System.Object firstArgument, System.Reflection.MethodInfo method)
    // Offset: 0x19A1B98
    static System::Delegate* CreateDelegateNoSecurityCheck(System::RuntimeType* type, ::Il2CppObject* firstArgument, System::Reflection::MethodInfo* method);
    // static System.MulticastDelegate AllocDelegateLike_internal(System.Delegate d)
    // Offset: 0x19A1BA0
    static System::MulticastDelegate* AllocDelegateLike_internal(System::Delegate* d);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x19A1090
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals_NEW(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19A1258
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode_NEW()
    int GetHashCode();
  }; // System.Delegate
  #pragma pack(pop)
  static check_size<sizeof(Delegate), 96 + sizeof(bool)> __System_DelegateSizeCheck;
  static_assert(sizeof(Delegate) == 0x61);
  // static public System.Boolean op_Equality(System.Delegate d1, System.Delegate d2)
  // Offset: 0x19A1B70
  bool operator ==(System::Delegate* d1, System::Delegate& d2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Delegate*, "System", "Delegate");
