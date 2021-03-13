// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
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
  // Forward declaring type: UIntPtr
  struct UIntPtr;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.CAPI/FilterCallback
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D098FC
  class CAPI::FilterCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: FilterCallback
    FilterCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x137717C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CAPI::FilterCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::CAPI::FilterCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CAPI::FilterCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(in System.Int16[] pcmData, System.UIntPtr pcmDataLength, System.Int32 frequency, System.Int32 numChannels)
    // Offset: 0x137718C
    void Invoke_NEW(::Array<int16_t>*& pcmData, System::UIntPtr pcmDataLength, int frequency, int numChannels);
    // public System.IAsyncResult BeginInvoke(in System.Int16[] pcmData, System.UIntPtr pcmDataLength, System.Int32 frequency, System.Int32 numChannels, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1377430
    System::IAsyncResult* BeginInvoke_NEW(::Array<int16_t>*& pcmData, System::UIntPtr pcmDataLength, int frequency, int numChannels, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1377500
    void EndInvoke_NEW(System::IAsyncResult* result);
  }; // Oculus.Platform.CAPI/FilterCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI::FilterCallback*, "Oculus.Platform", "CAPI/FilterCallback");
