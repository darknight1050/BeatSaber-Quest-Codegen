// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Request
#include "Oculus/Platform/Request.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Skipping declaration: Message because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Request`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class Request_1 : public Oculus::Platform::Request {
    public:
    // private Oculus.Platform.Message`1/Callback<T> callback_
    // Size: 0x8
    // Offset: 0x0
    typename Oculus::Platform::Message_1<T>::Callback* callback;
    // Field size check
    static_assert(sizeof(typename Oculus::Platform::Message_1<T>::Callback*) == 0x8);
    // Creating value type constructor for type: Request_1
    Request_1(typename Oculus::Platform::Message_1<T>::Callback* callback_ = {}) noexcept : callback{callback_} {}
    // Creating conversion operator: operator typename Oculus::Platform::Message_1<T>::Callback*
    constexpr operator typename Oculus::Platform::Message_1<T>::Callback*() const noexcept {
      return callback;
    }
    // public Oculus.Platform.Request`1<T> OnComplete(Oculus.Platform.Message`1/Callback<T> callback)
    // Offset: 0xFFFFFFFF
    Oculus::Platform::Request_1<T>* OnComplete(typename Oculus::Platform::Message_1<T>::Callback* callback) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Request_1::OnComplete");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnComplete", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(callback)));
      return ::il2cpp_utils::RunMethodThrow<Oculus::Platform::Request_1<T>*, false>(this, ___internal__method, callback);
    }
    // public System.Void .ctor(System.UInt64 requestID)
    // Offset: 0xFFFFFFFF
    // Implemented from: Oculus.Platform.Request
    // Base method: System.Void Request::.ctor(System.UInt64 requestID)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Request_1<T>* New_ctor(uint64_t requestID) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Request_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Request_1<T>*, creationType>(requestID)));
    }
    // public override System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0xFFFFFFFF
    // Implemented from: Oculus.Platform.Request
    // Base method: System.Void Request::HandleMessage(Oculus.Platform.Message msg)
    void HandleMessage(Oculus::Platform::Message* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Request_1::HandleMessage");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleMessage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(msg)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, msg);
    }
  }; // Oculus.Platform.Request`1
  // Could not write size check! Type: Oculus.Platform.Request`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Oculus::Platform::Request_1, "Oculus.Platform", "Request`1");
