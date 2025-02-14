// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Libraries.HM.HMLib.VR
namespace Libraries::HM::HMLib::VR {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: Libraries.HM.HMLib.VR.HapticPresetSO
  class HapticPresetSO : public UnityEngine::ScriptableObject {
    public:
    // public System.Single _duration
    // Size: 0x4
    // Offset: 0x18
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _strength
    // Size: 0x4
    // Offset: 0x1C
    float strength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single _frequency
    // Size: 0x4
    // Offset: 0x20
    float frequency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean _continuous
    // Size: 0x1
    // Offset: 0x24
    bool continuous;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: HapticPresetSO
    HapticPresetSO(float duration_ = {}, float strength_ = {}, float frequency_ = {}, bool continuous_ = {}) noexcept : duration{duration_}, strength{strength_}, frequency{frequency_}, continuous{continuous_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void CopyFrom(Libraries.HM.HMLib.VR.HapticPresetSO hapticPreset)
    // Offset: 0x12301E4
    void CopyFrom(Libraries::HM::HMLib::VR::HapticPresetSO* hapticPreset);
    // public System.Void .ctor()
    // Offset: 0x1230218
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HapticPresetSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Libraries::HM::HMLib::VR::HapticPresetSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HapticPresetSO*, creationType>()));
    }
  }; // Libraries.HM.HMLib.VR.HapticPresetSO
  #pragma pack(pop)
  static check_size<sizeof(HapticPresetSO), 36 + sizeof(bool)> __Libraries_HM_HMLib_VR_HapticPresetSOSizeCheck;
  static_assert(sizeof(HapticPresetSO) == 0x25);
}
DEFINE_IL2CPP_ARG_TYPE(Libraries::HM::HMLib::VR::HapticPresetSO*, "Libraries.HM.HMLib.VR", "HapticPresetSO");
