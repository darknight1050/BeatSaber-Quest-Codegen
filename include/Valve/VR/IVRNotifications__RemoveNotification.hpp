// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRNotifications
#include "Valve/VR/IVRNotifications.hpp"
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
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
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
  // Autogenerated type: Valve.VR.IVRNotifications/_RemoveNotification
  // [UnmanagedFunctionPointerAttribute] Offset: DD4788
  class IVRNotifications::_RemoveNotification : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _RemoveNotification
    _RemoveNotification() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FA87E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRNotifications::_RemoveNotification* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRNotifications::_RemoveNotification::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRNotifications::_RemoveNotification*, creationType>(object, method)));
    }
    // public Valve.VR.EVRNotificationError Invoke(System.UInt32 notificationId)
    // Offset: 0x1FA87F8
    Valve::VR::EVRNotificationError Invoke(uint notificationId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 notificationId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FA8A60
    System::IAsyncResult* BeginInvoke(uint notificationId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRNotificationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x1FA8AEC
    Valve::VR::EVRNotificationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRNotifications/_RemoveNotification
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRNotifications::_RemoveNotification*, "Valve.VR", "IVRNotifications/_RemoveNotification");
