// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVROverlay
#include "GlobalNamespace/OVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVROverlay/ExternalSurfaceObjectCreated
  class OVROverlay::ExternalSurfaceObjectCreated : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ExternalSurfaceObjectCreated
    ExternalSurfaceObjectCreated() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x12DE760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVROverlay::ExternalSurfaceObjectCreated* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVROverlay::ExternalSurfaceObjectCreated::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVROverlay::ExternalSurfaceObjectCreated*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x12DA078
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x12DE770
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x12DE79C
    void EndInvoke(System::IAsyncResult* result);
  }; // OVROverlay/ExternalSurfaceObjectCreated
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay::ExternalSurfaceObjectCreated*, "", "OVROverlay/ExternalSurfaceObjectCreated");
