// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
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
  // Forward declaring type: VREvent_t
  struct VREvent_t;
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
  // Autogenerated type: Valve.VR.IVRSystem/_PollNextEvent
  // [UnmanagedFunctionPointerAttribute] Offset: DD352C
  class IVRSystem::_PollNextEvent : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PollNextEvent
    _PollNextEvent() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C8193C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_PollNextEvent* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_PollNextEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_PollNextEvent*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x1C8194C
    bool Invoke(Valve::VR::VREvent_t& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(ref Valve.VR.VREvent_t pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C81BCC
    System::IAsyncResult* BeginInvoke(Valve::VR::VREvent_t& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref Valve.VR.VREvent_t pEvent, System.IAsyncResult result)
    // Offset: 0x1C81C80
    bool EndInvoke(Valve::VR::VREvent_t& pEvent, System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_PollNextEvent
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_PollNextEvent*, "Valve.VR", "IVRSystem/_PollNextEvent");
