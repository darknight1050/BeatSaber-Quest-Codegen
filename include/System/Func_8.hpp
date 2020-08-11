// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Func`8
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename TResult>
  class Func_8 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static Func_8<T1, T2, T3, T4, T5, T6, T7, TResult>* New_ctor(::CsObject* object, System::IntPtr method) {
      return (Func_8<T1, T2, T3, T4, T5, T6, T7, TResult>*)THROW_UNLESS((il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Func_8<T1, T2, T3, T4, T5, T6, T7, TResult>*>::get(), object, method)));
    }
    // public TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7)
    // Offset: 0xFFFFFFFF
    TResult Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "Invoke", arg1, arg2, arg3, arg4, arg5, arg6, arg7));
    }
    // public System.IAsyncResult BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, System::AsyncCallback* callback, ::CsObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", arg1, arg2, arg3, arg4, arg5, arg6, arg7, callback, object));
    }
    // public TResult EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    TResult EndInvoke(System::IAsyncResult* result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TResult>(this, "EndInvoke", result));
    }
  }; // System.Func`8
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Func_8, "System", "Func`8");
#pragma pack(pop)
