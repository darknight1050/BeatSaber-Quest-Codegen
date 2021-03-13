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
// Forward declaring namespace: UnityEngineInternal::Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputUpdateType
  struct NativeInputUpdateType;
  // Forward declaring type: NativeInputEventBuffer
  struct NativeInputEventBuffer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.Input.NativeUpdateCallback
  // [] Offset: FFFFFFFF
  class NativeUpdateCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: NativeUpdateCallback
    NativeUpdateCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x218ADF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeUpdateCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngineInternal::Input::NativeUpdateCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeUpdateCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngineInternal.Input.NativeInputUpdateType updateType, UnityEngineInternal.Input.NativeInputEventBuffer* buffer)
    // Offset: 0x218AA20
    void Invoke_NEW(UnityEngineInternal::Input::NativeInputUpdateType updateType, UnityEngineInternal::Input::NativeInputEventBuffer* buffer);
    // public System.IAsyncResult BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType updateType, UnityEngineInternal.Input.NativeInputEventBuffer* buffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x218AE00
    System::IAsyncResult* BeginInvoke_NEW(UnityEngineInternal::Input::NativeInputUpdateType updateType, UnityEngineInternal::Input::NativeInputEventBuffer* buffer, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x218AE98
    void EndInvoke_NEW(System::IAsyncResult* result);
  }; // UnityEngineInternal.Input.NativeUpdateCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::Input::NativeUpdateCallback*, "UnityEngineInternal.Input", "NativeUpdateCallback");
