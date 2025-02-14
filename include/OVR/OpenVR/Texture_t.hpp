// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.ETextureType
#include "OVR/OpenVR/ETextureType.hpp"
// Including type: OVR.OpenVR.EColorSpace
#include "OVR/OpenVR/EColorSpace.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.Texture_t
  struct Texture_t/*, public System::ValueType*/ {
    public:
    // public System.IntPtr handle
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr handle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public OVR.OpenVR.ETextureType eType
    // Size: 0x4
    // Offset: 0x8
    OVR::OpenVR::ETextureType eType;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::ETextureType) == 0x4);
    // public OVR.OpenVR.EColorSpace eColorSpace
    // Size: 0x4
    // Offset: 0xC
    OVR::OpenVR::EColorSpace eColorSpace;
    // Field size check
    static_assert(sizeof(OVR::OpenVR::EColorSpace) == 0x4);
    // Creating value type constructor for type: Texture_t
    constexpr Texture_t(System::IntPtr handle_ = {}, OVR::OpenVR::ETextureType eType_ = {}, OVR::OpenVR::EColorSpace eColorSpace_ = {}) noexcept : handle{handle_}, eType{eType_}, eColorSpace{eColorSpace_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVR.OpenVR.Texture_t
  #pragma pack(pop)
  static check_size<sizeof(Texture_t), 12 + sizeof(OVR::OpenVR::EColorSpace)> __OVR_OpenVR_Texture_tSizeCheck;
  static_assert(sizeof(Texture_t) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::Texture_t, "OVR.OpenVR", "Texture_t");
