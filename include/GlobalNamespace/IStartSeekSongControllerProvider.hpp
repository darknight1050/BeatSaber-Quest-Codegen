// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IStartSeekSongController
  class IStartSeekSongController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IStartSeekSongControllerProvider
  // [] Offset: FFFFFFFF
  class IStartSeekSongControllerProvider {
    public:
    // Creating value type constructor for type: IStartSeekSongControllerProvider
    IStartSeekSongControllerProvider() noexcept {}
    // public IStartSeekSongController get_songController()
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IStartSeekSongController* get_songController_NEW();
  }; // IStartSeekSongControllerProvider
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IStartSeekSongControllerProvider*, "", "IStartSeekSongControllerProvider");
