// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.HiddenAreaMesh_t
  struct HiddenAreaMesh_t : public System::ValueType {
    public:
    // public System.IntPtr pVertexData
    // Offset: 0x0
    System::IntPtr pVertexData;
    // public System.UInt32 unTriangleCount
    // Offset: 0x8
    uint unTriangleCount;
    // Creating value type constructor for type: HiddenAreaMesh_t
    HiddenAreaMesh_t(System::IntPtr pVertexData_ = {}, uint unTriangleCount_ = {}) : pVertexData{pVertexData_}, unTriangleCount{unTriangleCount_} {}
  }; // Valve.VR.HiddenAreaMesh_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::HiddenAreaMesh_t, "Valve.VR", "HiddenAreaMesh_t");
#pragma pack(pop)
