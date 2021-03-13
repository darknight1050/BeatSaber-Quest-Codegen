// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: KawaseBlurRendererSO
  class KawaseBlurRendererSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ImageView
  class ImageView;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BlurredCoverImageView
  // [] Offset: FFFFFFFF
  class BlurredCoverImageView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BlurredCoverImageView::$SetTextureAsync$d__6
    struct $SetTextureAsync$d__6;
    // private HMUI.ImageView _coverImage
    // Size: 0x8
    // Offset: 0x18
    HMUI::ImageView* coverImage;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // [SpaceAttribute] Offset: 0xD2FFA4
    // private KawaseBlurRendererSO _kawaseBlurRenderer
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::KawaseBlurRendererSO*) == 0x8);
    // private System.String _settingTextureForLevelId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* settingTextureForLevelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // private UnityEngine.Texture2D _blurredCoverTexture
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Texture2D* blurredCoverTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::Texture2D*) == 0x8);
    // Creating value type constructor for type: BlurredCoverImageView
    BlurredCoverImageView(HMUI::ImageView* coverImage_ = {}, GlobalNamespace::KawaseBlurRendererSO* kawaseBlurRenderer_ = {}, ::Il2CppString* settingTextureForLevelId_ = {}, System::Threading::CancellationTokenSource* cancellationTokenSource_ = {}, UnityEngine::Texture2D* blurredCoverTexture_ = {}) noexcept : coverImage{coverImage_}, kawaseBlurRenderer{kawaseBlurRenderer_}, settingTextureForLevelId{settingTextureForLevelId_}, cancellationTokenSource{cancellationTokenSource_}, blurredCoverTexture{blurredCoverTexture_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnDestroy()
    // Offset: 0xF04EB0
    void OnDestroy();
    // public System.Void SetTextureAsync(IPreviewBeatmapLevel level)
    // Offset: 0xF04F78
    void SetTextureAsync(GlobalNamespace::IPreviewBeatmapLevel* level);
    // public System.Void .ctor()
    // Offset: 0xF0503C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlurredCoverImageView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BlurredCoverImageView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlurredCoverImageView*, creationType>()));
    }
  }; // BlurredCoverImageView
  #pragma pack(pop)
  static check_size<sizeof(BlurredCoverImageView), 56 + sizeof(UnityEngine::Texture2D*)> __GlobalNamespace_BlurredCoverImageViewSizeCheck;
  static_assert(sizeof(BlurredCoverImageView) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BlurredCoverImageView*, "", "BlurredCoverImageView");
