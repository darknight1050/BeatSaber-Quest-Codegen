// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: RenderModel_TextureMap_t
  struct RenderModel_TextureMap_t;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Autogenerated type: OVR.OpenVR.RenderModel_TextureMap_t_Packed
  struct RenderModel_TextureMap_t_Packed : public System::ValueType {
    public:
    // public System.UInt16 unWidth
    // Offset: 0x0
    uint16_t unWidth;
    // public System.UInt16 unHeight
    // Offset: 0x2
    uint16_t unHeight;
    // public System.IntPtr rubTextureMapData
    // Offset: 0x4
    System::IntPtr rubTextureMapData;
    // Creating value type constructor for type: RenderModel_TextureMap_t_Packed
    RenderModel_TextureMap_t_Packed(uint16_t unWidth_ = {}, uint16_t unHeight_ = {}, System::IntPtr rubTextureMapData_ = {}) : unWidth{unWidth_}, unHeight{unHeight_}, rubTextureMapData{rubTextureMapData_} {}
    // public System.Void .ctor(OVR.OpenVR.RenderModel_TextureMap_t unpacked)
    // Offset: 0x9934A0
    static RenderModel_TextureMap_t_Packed* New_ctor(OVR::OpenVR::RenderModel_TextureMap_t unpacked);
    // public System.Void Unpack(OVR.OpenVR.RenderModel_TextureMap_t unpacked)
    // Offset: 0x9934B4
    void Unpack(OVR::OpenVR::RenderModel_TextureMap_t& unpacked);
  }; // OVR.OpenVR.RenderModel_TextureMap_t_Packed
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::RenderModel_TextureMap_t_Packed, "OVR.OpenVR", "RenderModel_TextureMap_t_Packed");
#pragma pack(pop)
