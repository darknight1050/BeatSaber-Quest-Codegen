// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRExtendedDisplay
#include "Valve/VR/IVRExtendedDisplay.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVREye
  struct EVREye;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.CVRExtendedDisplay
  class CVRExtendedDisplay : public ::Il2CppObject {
    public:
    // private Valve.VR.IVRExtendedDisplay FnTable
    // Size: 0x18
    // Offset: 0x10
    Valve::VR::IVRExtendedDisplay FnTable;
    // Field size check
    static_assert(sizeof(Valve::VR::IVRExtendedDisplay) == 0x18);
    // Creating value type constructor for type: CVRExtendedDisplay
    CVRExtendedDisplay(Valve::VR::IVRExtendedDisplay FnTable_ = {}) noexcept : FnTable{FnTable_} {}
    // Creating conversion operator: operator Valve::VR::IVRExtendedDisplay
    constexpr operator Valve::VR::IVRExtendedDisplay() const noexcept {
      return FnTable;
    }
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x16BD230
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRExtendedDisplay* New_ctor(System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::CVRExtendedDisplay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRExtendedDisplay*, creationType>(pInterface)));
    }
    // public System.Void GetWindowBounds(ref System.Int32 pnX, ref System.Int32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x16BD338
    void GetWindowBounds(int& pnX, int& pnY, uint& pnWidth, uint& pnHeight);
    // public System.Void GetEyeOutputViewport(Valve.VR.EVREye eEye, ref System.UInt32 pnX, ref System.UInt32 pnY, ref System.UInt32 pnWidth, ref System.UInt32 pnHeight)
    // Offset: 0x16BD364
    void GetEyeOutputViewport(Valve::VR::EVREye eEye, uint& pnX, uint& pnY, uint& pnWidth, uint& pnHeight);
    // public System.Void GetDXGIOutputInfo(ref System.Int32 pnAdapterIndex, ref System.Int32 pnAdapterOutputIndex)
    // Offset: 0x16BD390
    void GetDXGIOutputInfo(int& pnAdapterIndex, int& pnAdapterOutputIndex);
  }; // Valve.VR.CVRExtendedDisplay
  #pragma pack(pop)
  static check_size<sizeof(CVRExtendedDisplay), 16 + sizeof(Valve::VR::IVRExtendedDisplay)> __Valve_VR_CVRExtendedDisplaySizeCheck;
  static_assert(sizeof(CVRExtendedDisplay) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::CVRExtendedDisplay*, "Valve.VR", "CVRExtendedDisplay");
