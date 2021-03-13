// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Action`11
  // [] Offset: FFFFFFFF
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
  class Action_11 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Action_11
    Action_11() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Action_11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Action_11::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Action_11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>*, creationType>(object, method)));
    }
    // public System.Void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11)
    // Offset: 0xFFFFFFFF
    void Invoke_NEW(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Action_11::Invoke_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }
    // public System.IAsyncResult BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke_NEW(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, T7 arg7, T8 arg8, T9 arg9, T10 arg10, T11 arg11, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Action_11::BeginInvoke_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, callback, object)));
      return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, callback, object);
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    void EndInvoke_NEW(System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Action_11::EndInvoke_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
    }
  }; // System.Action`11
  // Could not write size check! Type: System.Action`11 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Action_11, "System", "Action`11");
