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
  // Autogenerated type: Valve.VR.D3D12TextureData_t
  struct D3D12TextureData_t : public System::ValueType {
    public:
    // public System.IntPtr m_pResource
    // Offset: 0x0
    System::IntPtr m_pResource;
    // public System.IntPtr m_pCommandQueue
    // Offset: 0x8
    System::IntPtr m_pCommandQueue;
    // public System.UInt32 m_nNodeMask
    // Offset: 0x10
    uint m_nNodeMask;
    // Creating value type constructor for type: D3D12TextureData_t
    D3D12TextureData_t(System::IntPtr m_pResource_ = {}, System::IntPtr m_pCommandQueue_ = {}, uint m_nNodeMask_ = {}) : m_pResource{m_pResource_}, m_pCommandQueue{m_pCommandQueue_}, m_nNodeMask{m_nNodeMask_} {}
  }; // Valve.VR.D3D12TextureData_t
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::D3D12TextureData_t, "Valve.VR", "D3D12TextureData_t");
#pragma pack(pop)
