// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: MediaContentType
  struct MediaContentType;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ShareMediaResult
  class ShareMediaResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Media
  // [] Offset: FFFFFFFF
  class Media : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Media
    Media() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.ShareMediaResult> ShareToFacebook(System.String postTextSuggestion, System.String filePath, Oculus.Platform.MediaContentType contentType)
    // Offset: 0x137EA18
    static Oculus::Platform::Request_1<Oculus::Platform::Models::ShareMediaResult*>* ShareToFacebook(::Il2CppString* postTextSuggestion, ::Il2CppString* filePath, Oculus::Platform::MediaContentType contentType);
  }; // Oculus.Platform.Media
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Media*, "Oculus.Platform", "Media");
