// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MainEffectGraphicsSettingsPresetsSO
#include "GlobalNamespace/MainEffectGraphicsSettingsPresetsSO.hpp"
// Including type: NamedPreset
#include "GlobalNamespace/NamedPreset.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainEffectSO
  class MainEffectSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: MainEffectGraphicsSettingsPresetsSO/Preset
  // [] Offset: FFFFFFFF
  class MainEffectGraphicsSettingsPresetsSO::Preset : public GlobalNamespace::NamedPreset {
    public:
    // public MainEffectSO mainEffect
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MainEffectSO* mainEffect;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MainEffectSO*) == 0x8);
    // Creating value type constructor for type: Preset
    Preset(GlobalNamespace::MainEffectSO* mainEffect_ = {}) noexcept : mainEffect{mainEffect_} {}
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // public System.Void .ctor()
    // Offset: 0x1A6C198
    // Implemented from: NamedPreset
    // Base method: System.Void NamedPreset::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectGraphicsSettingsPresetsSO::Preset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectGraphicsSettingsPresetsSO::Preset*, creationType>()));
    }
  }; // MainEffectGraphicsSettingsPresetsSO/Preset
  static check_size<sizeof(MainEffectGraphicsSettingsPresetsSO::Preset), 24 + sizeof(GlobalNamespace::MainEffectSO*)> __GlobalNamespace_MainEffectGraphicsSettingsPresetsSO_PresetSizeCheck;
  static_assert(sizeof(MainEffectGraphicsSettingsPresetsSO::Preset) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectGraphicsSettingsPresetsSO::Preset*, "", "MainEffectGraphicsSettingsPresetsSO/Preset");
#pragma pack(pop)
