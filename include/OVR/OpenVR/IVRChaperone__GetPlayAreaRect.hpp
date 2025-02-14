// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdQuad_t
  struct HmdQuad_t;
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
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetPlayAreaRect
  // [UnmanagedFunctionPointerAttribute] Offset: DCE944
  class IVRChaperone::_GetPlayAreaRect : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetPlayAreaRect
    _GetPlayAreaRect() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x159B9E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetPlayAreaRect* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_GetPlayAreaRect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetPlayAreaRect*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref OVR.OpenVR.HmdQuad_t rect)
    // Offset: 0x1590F8C
    bool Invoke(OVR::OpenVR::HmdQuad_t& rect);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x159B9F4
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdQuad_t& rect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0x159BA88
    bool EndInvoke(OVR::OpenVR::HmdQuad_t& rect, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetPlayAreaRect
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetPlayAreaRect*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaRect");
