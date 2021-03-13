// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE5BD0
  class IVRChaperoneSetup::_GetWorkingPlayAreaRect : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetWorkingPlayAreaRect
    _GetWorkingPlayAreaRect() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1E34238
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetWorkingPlayAreaRect* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetWorkingPlayAreaRect*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref Valve.VR.HmdQuad_t rect)
    // Offset: 0x1E34248
    bool Invoke_NEW(Valve::VR::HmdQuad_t& rect);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.HmdQuad_t rect, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1E344A8
    System::IAsyncResult* BeginInvoke_NEW(Valve::VR::HmdQuad_t& rect, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.HmdQuad_t rect, System.IAsyncResult result)
    // Offset: 0x1E3453C
    bool EndInvoke_NEW(Valve::VR::HmdQuad_t& rect, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetWorkingPlayAreaRect*, "Valve.VR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect");
