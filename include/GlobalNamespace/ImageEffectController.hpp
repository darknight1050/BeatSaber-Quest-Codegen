// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: ImageEffectController
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: DA42CC
  // [RequireComponent] Offset: DA42CC
  class ImageEffectController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ImageEffectController::RenderImageCallback
    class RenderImageCallback;
    // private ImageEffectController/RenderImageCallback _renderImageCallback
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ImageEffectController::RenderImageCallback* renderImageCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ImageEffectController::RenderImageCallback*) == 0x8);
    // Creating value type constructor for type: ImageEffectController
    ImageEffectController(GlobalNamespace::ImageEffectController::RenderImageCallback* renderImageCallback_ = {}) noexcept : renderImageCallback{renderImageCallback_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetCallback(ImageEffectController/RenderImageCallback renderImageCallback)
    // Offset: 0x187911C
    void SetCallback(GlobalNamespace::ImageEffectController::RenderImageCallback* renderImageCallback);
    // protected System.Void OnRenderImage(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest)
    // Offset: 0x1879124
    void OnRenderImage(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest);
    // public System.Void .ctor()
    // Offset: 0x1879538
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImageEffectController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ImageEffectController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImageEffectController*, creationType>()));
    }
  }; // ImageEffectController
  static check_size<sizeof(ImageEffectController), 24 + sizeof(GlobalNamespace::ImageEffectController::RenderImageCallback*)> __GlobalNamespace_ImageEffectControllerSizeCheck;
  static_assert(sizeof(ImageEffectController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ImageEffectController*, "", "ImageEffectController");
#pragma pack(pop)
