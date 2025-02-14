// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ImageEffectController
#include "GlobalNamespace/ImageEffectController.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: ImageEffectController/RenderImageCallback
  class ImageEffectController::RenderImageCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: RenderImageCallback
    RenderImageCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D6F11C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageEffectController::RenderImageCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ImageEffectController::RenderImageCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageEffectController::RenderImageCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x1D6ED2C
    void Invoke(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public System.IAsyncResult BeginInvoke(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D6F12C
    System::IAsyncResult* BeginInvoke(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D6F15C
    void EndInvoke(System::IAsyncResult* result);
  }; // ImageEffectController/RenderImageCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ImageEffectController::RenderImageCallback*, "", "ImageEffectController/RenderImageCallback");
