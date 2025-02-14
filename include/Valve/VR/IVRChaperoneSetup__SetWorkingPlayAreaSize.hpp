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
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
  // [UnmanagedFunctionPointerAttribute] Offset: DD3B58
  class IVRChaperoneSetup::_SetWorkingPlayAreaSize : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _SetWorkingPlayAreaSize
    _SetWorkingPlayAreaSize() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F9E80C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_SetWorkingPlayAreaSize* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_SetWorkingPlayAreaSize*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Single sizeX, System.Single sizeZ)
    // Offset: 0x1F9E81C
    void Invoke(float sizeX, float sizeZ);
    // public System.IAsyncResult BeginInvoke(System.Single sizeX, System.Single sizeZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F9EA94
    System::IAsyncResult* BeginInvoke(float sizeX, float sizeZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1F9EB34
    void EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_SetWorkingPlayAreaSize*, "Valve.VR", "IVRChaperoneSetup/_SetWorkingPlayAreaSize");
