// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVREventType
  struct EVREventType;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_GetEventTypeNameFromEnum
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D841B4
  class IVRSystem::_GetEventTypeNameFromEnum : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetEventTypeNameFromEnum
    _GetEventTypeNameFromEnum() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x191261C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetEventTypeNameFromEnum* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetEventTypeNameFromEnum*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(OVR.OpenVR.EVREventType eType)
    // Offset: 0x1912630
    System::IntPtr Invoke(OVR::OpenVR::EVREventType eType);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREventType eType, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19128A4
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::EVREventType eType, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.IntPtr EndInvoke(System.IAsyncResult result)
    // Offset: 0x1912930
    System::IntPtr EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_GetEventTypeNameFromEnum
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_GetEventTypeNameFromEnum*, "OVR.OpenVR", "IVRSystem/_GetEventTypeNameFromEnum");
#pragma pack(pop)
