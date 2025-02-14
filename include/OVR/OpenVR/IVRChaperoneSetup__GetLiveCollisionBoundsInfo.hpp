// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperoneSetup
#include "OVR/OpenVR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: OVR.OpenVR.HmdQuad_t
#include "OVR/OpenVR/HmdQuad_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo
  // [UnmanagedFunctionPointerAttribute] Offset: DCEA20
  class IVRChaperoneSetup::_GetLiveCollisionBoundsInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetLiveCollisionBoundsInfo
    _GetLiveCollisionBoundsInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x159BE54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetLiveCollisionBoundsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetLiveCollisionBoundsInfo*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(in OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, ref System.UInt32 punQuadsCount)
    // Offset: 0x1592CD8
    bool Invoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.HmdQuad_t[] pQuadsBuffer, ref System.UInt32 punQuadsCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x159BE64
    System::IAsyncResult* BeginInvoke(::Array<OVR::OpenVR::HmdQuad_t>*& pQuadsBuffer, uint& punQuadsCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punQuadsCount, System.IAsyncResult result)
    // Offset: 0x159BF00
    bool EndInvoke(uint& punQuadsCount, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsInfo");
