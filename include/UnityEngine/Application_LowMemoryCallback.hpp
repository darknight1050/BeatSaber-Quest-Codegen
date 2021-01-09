// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Application
#include "UnityEngine/Application.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  // Autogenerated type: UnityEngine.Application/LowMemoryCallback
  // [] Offset: FFFFFFFF
  class Application::LowMemoryCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: LowMemoryCallback
    LowMemoryCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x167C3F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Application::LowMemoryCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Application::LowMemoryCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Application::LowMemoryCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x167ABF8
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x167C404
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x167C430
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Application/LowMemoryCallback
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Application::LowMemoryCallback*, "UnityEngine", "Application/LowMemoryCallback");
#pragma pack(pop)
