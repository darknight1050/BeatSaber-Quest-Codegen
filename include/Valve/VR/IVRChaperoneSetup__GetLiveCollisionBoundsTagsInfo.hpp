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
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
  // [] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: CE5CC0
  class IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetLiveCollisionBoundsTagsInfo
    _GetLiveCollisionBoundsTagsInfo() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1509DE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount)
    // Offset: 0x15035C0
    bool Invoke_NEW(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount);
    // public System.IAsyncResult BeginInvoke(in System.Byte[] pTagsBuffer, ref System.UInt32 punTagCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1509DF8
    System::IAsyncResult* BeginInvoke_NEW(::Array<uint8_t>*& pTagsBuffer, uint& punTagCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref System.UInt32 punTagCount, System.IAsyncResult result)
    // Offset: 0x1509E94
    bool EndInvoke_NEW(uint& punTagCount, System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*, "Valve.VR", "IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo");
