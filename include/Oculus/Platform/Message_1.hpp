// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Skipping declaration: Callback because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Message`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class Message_1 : public Oculus::Platform::Message {
    public:
    // Nested type: Oculus::Platform::Message_1::Callback<T>
    class Callback;
    // WARNING Size may be invalid!
    // Autogenerated type: Oculus.Platform.Message`1/Callback
    // [] Offset: FFFFFFFF
    class Callback : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::MulticastDelegate {
      public:
      using declaring_type = Message_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Callback";
      // Creating value type constructor for type: Callback
      Callback() noexcept {}
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename Message_1<T>::Callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::Callback::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename Message_1<T>::Callback*, creationType>(object, method)));
      }
      // public System.Void Invoke(Oculus.Platform.Message`1<T> message)
      // Offset: 0xFFFFFFFF
      void Invoke_NEW(Oculus::Platform::Message_1<T>* message) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::Callback::Invoke_NEW");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(message)));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
      }
      // public System.IAsyncResult BeginInvoke(Oculus.Platform.Message`1<T> message, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke_NEW(Oculus::Platform::Message_1<T>* message, System::AsyncCallback* callback, ::Il2CppObject* object) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::Callback::BeginInvoke_NEW");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "BeginInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(message, callback, object)));
        return ::il2cpp_utils::RunMethodThrow<System::IAsyncResult*, false>(this, ___internal__method, message, callback, object);
      }
      // public System.Void EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      void EndInvoke_NEW(System::IAsyncResult* result) {
        static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::Callback::EndInvoke_NEW");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EndInvoke", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, result);
      }
    }; // Oculus.Platform.Message`1/Callback
    // Could not write size check! Type: Oculus.Platform.Message`1/Callback is generic, or has no fields that are valid for size checks!
    // private T data
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T data;
    // Creating value type constructor for type: Message_1
    Message_1(T data_ = {}) noexcept : data{data_} {}
    // public T get_Data()
    // Offset: 0xFFFFFFFF
    T get_Data() {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::get_Data");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Data", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // protected T GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xFFFFFFFF
    T GetDataFromMessage_NEW(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::GetDataFromMessage_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetDataFromMessage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(c_message)));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, c_message);
    }
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xFFFFFFFF
    // Implemented from: Oculus.Platform.Message
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Message_1<T>* New_ctor(System::IntPtr c_message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Message_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Message_1<T>*, creationType>(c_message)));
    }
  }; // Oculus.Platform.Message`1
  // Could not write size check! Type: Oculus.Platform.Message`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Oculus::Platform::Message_1, "Oculus.Platform", "Message`1");
