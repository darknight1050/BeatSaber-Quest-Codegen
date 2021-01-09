// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Size: 0x18
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerBuffer
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: D90660
  class DownloadHandlerBuffer : public UnityEngine::Networking::DownloadHandler {
    public:
    // Creating value type constructor for type: DownloadHandlerBuffer
    DownloadHandlerBuffer() noexcept {}
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerBuffer obj)
    // Offset: 0x19DDEE0
    static System::IntPtr Create(UnityEngine::Networking::DownloadHandlerBuffer* obj);
    // private System.Void InternalCreateBuffer()
    // Offset: 0x19DDF20
    void InternalCreateBuffer();
    // private System.Byte[] InternalGetData()
    // Offset: 0x19DDFF8
    ::Array<uint8_t>* InternalGetData();
    // public System.Void .ctor()
    // Offset: 0x19DDF68
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Void DownloadHandler::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandlerBuffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Networking::DownloadHandlerBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandlerBuffer*, creationType>()));
    }
    // protected override System.Byte[] GetData()
    // Offset: 0x19DDFB8
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Byte[] DownloadHandler::GetData()
    ::Array<uint8_t>* GetData();
  }; // UnityEngine.Networking.DownloadHandlerBuffer
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerBuffer*, "UnityEngine.Networking", "DownloadHandlerBuffer");
#pragma pack(pop)
