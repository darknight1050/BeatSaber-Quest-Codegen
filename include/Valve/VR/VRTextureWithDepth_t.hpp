// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Valve.VR.VRTextureDepthInfo_t
#include "Valve/VR/VRTextureDepthInfo_t.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.VRTextureWithDepth_t
  struct VRTextureWithDepth_t : public System::ValueType {
    public:
    // public Valve.VR.VRTextureDepthInfo_t depth
    // Offset: 0x0
    Valve::VR::VRTextureDepthInfo_t depth;
    // Creating value type constructor for type: VRTextureWithDepth_t
    VRTextureWithDepth_t(Valve::VR::VRTextureDepthInfo_t depth_ = {}) : depth{depth_} {}
  }; // Valve.VR.VRTextureWithDepth_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::VRTextureWithDepth_t, "Valve.VR", "VRTextureWithDepth_t");
#pragma pack(pop)
