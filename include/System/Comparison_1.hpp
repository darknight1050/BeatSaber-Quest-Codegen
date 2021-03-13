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
  // Autogenerated type: System.Comparison`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class Comparison_1 : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Comparison_1
    Comparison_1() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Comparison_1<T>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Comparison_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Comparison_1<T>*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(T x, T y)
    // Offset: 0xFFFFFFFF
    int Invoke_NEW(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Comparison_1::Invoke_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, x, y);
    }
    // public System.IAsyncResult BeginInvoke(T x, T y, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke_NEW(T x, T y, System::AsyncCallback* callback, ::Il2CppObject* object) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Comparison_1::BeginInvoke_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y, callback, object)));
      return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, x, y, callback, object);
    }
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    int EndInvoke_NEW(System::IAsyncResult* result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Comparison_1::EndInvoke_NEW");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, result);
    }
  }; // System.Comparison`1
  // Could not write size check! Type: System.Comparison`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Comparison_1, "System", "Comparison`1");
