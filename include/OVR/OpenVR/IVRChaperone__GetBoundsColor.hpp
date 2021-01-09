// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
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
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetBoundsColor
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D846DC
  class IVRChaperone::_GetBoundsColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetBoundsColor
    _GetBoundsColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x11FAD40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetBoundsColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_GetBoundsColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetBoundsColor*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor)
    // Offset: 0x11F09C0
    void Invoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor, System.AsyncCallback callback, System.Object object)
    // Offset: 0x11FAD54
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, ref OVR.OpenVR.HmdColor_t pOutputCameraColor, System.IAsyncResult result)
    // Offset: 0x11FAE40
    void EndInvoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, OVR::OpenVR::HmdColor_t& pOutputCameraColor, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetBoundsColor
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetBoundsColor*, "OVR.OpenVR", "IVRChaperone/_GetBoundsColor");
#pragma pack(pop)
