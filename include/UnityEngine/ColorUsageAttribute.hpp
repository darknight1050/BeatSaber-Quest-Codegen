// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ColorUsageAttribute
  // [AttributeUsageAttribute] Offset: D8FD78
  class ColorUsageAttribute : public UnityEngine::PropertyAttribute {
    public:
    // public readonly System.Boolean showAlpha
    // Size: 0x1
    // Offset: 0x10
    bool showAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean hdr
    // Size: 0x1
    // Offset: 0x11
    bool hdr;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hdr and: minBrightness
    char __padding1[0x2] = {};
    // [ObsoleteAttribute] Offset: 0xD93B0C
    // public readonly System.Single minBrightness
    // Size: 0x4
    // Offset: 0x14
    float minBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [ObsoleteAttribute] Offset: 0xD93B44
    // public readonly System.Single maxBrightness
    // Size: 0x4
    // Offset: 0x18
    float maxBrightness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [ObsoleteAttribute] Offset: 0xD93B7C
    // public readonly System.Single minExposureValue
    // Size: 0x4
    // Offset: 0x1C
    float minExposureValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [ObsoleteAttribute] Offset: 0xD93BB4
    // public readonly System.Single maxExposureValue
    // Size: 0x4
    // Offset: 0x20
    float maxExposureValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: ColorUsageAttribute
    ColorUsageAttribute(bool showAlpha_ = {}, bool hdr_ = {}, float minBrightness_ = {}, float maxBrightness_ = {}, float minExposureValue_ = {}, float maxExposureValue_ = {}) noexcept : showAlpha{showAlpha_}, hdr{hdr_}, minBrightness{minBrightness_}, maxBrightness{maxBrightness_}, minExposureValue{minExposureValue_}, maxExposureValue{maxExposureValue_} {}
    // public System.Void .ctor(System.Boolean showAlpha)
    // Offset: 0x1B757C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorUsageAttribute* New_ctor(bool showAlpha) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ColorUsageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorUsageAttribute*, creationType>(showAlpha)));
    }
    // public System.Void .ctor(System.Boolean showAlpha, System.Boolean hdr)
    // Offset: 0x1B75804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorUsageAttribute* New_ctor(bool showAlpha, bool hdr) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ColorUsageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorUsageAttribute*, creationType>(showAlpha, hdr)));
    }
  }; // UnityEngine.ColorUsageAttribute
  #pragma pack(pop)
  static check_size<sizeof(ColorUsageAttribute), 32 + sizeof(float)> __UnityEngine_ColorUsageAttributeSizeCheck;
  static_assert(sizeof(ColorUsageAttribute) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ColorUsageAttribute*, "UnityEngine", "ColorUsageAttribute");
