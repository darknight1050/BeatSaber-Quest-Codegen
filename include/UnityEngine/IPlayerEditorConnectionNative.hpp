// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.IPlayerEditorConnectionNative
  // [] Offset: FFFFFFFF
  class IPlayerEditorConnectionNative {
    public:
    // Creating value type constructor for type: IPlayerEditorConnectionNative
    IPlayerEditorConnectionNative() noexcept {}
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFF
    void Initialize_NEW();
    // public System.Void DisconnectAll()
    // Offset: 0xFFFFFFFF
    void DisconnectAll_NEW();
    // public System.Void SendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0xFFFFFFFF
    void SendMessage_NEW(System::Guid messageId, ::Array<uint8_t>* data, int playerId);
    // public System.Boolean TrySendMessage(System.Guid messageId, System.Byte[] data, System.Int32 playerId)
    // Offset: 0xFFFFFFFF
    bool TrySendMessage_NEW(System::Guid messageId, ::Array<uint8_t>* data, int playerId);
    // public System.Void Poll()
    // Offset: 0xFFFFFFFF
    void Poll_NEW();
    // public System.Void RegisterInternal(System.Guid messageId)
    // Offset: 0xFFFFFFFF
    void RegisterInternal_NEW(System::Guid messageId);
    // public System.Void UnregisterInternal(System.Guid messageId)
    // Offset: 0xFFFFFFFF
    void UnregisterInternal_NEW(System::Guid messageId);
    // public System.Boolean IsConnected()
    // Offset: 0xFFFFFFFF
    bool IsConnected_NEW();
  }; // UnityEngine.IPlayerEditorConnectionNative
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IPlayerEditorConnectionNative*, "UnityEngine", "IPlayerEditorConnectionNative");
