// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerTexture
  class DownloadHandlerTexture : public UnityEngine::Networking::DownloadHandler {
    public:
    // private UnityEngine.Texture2D mTexture
    // Offset: 0x18
    UnityEngine::Texture2D* mTexture;
    // private System.Boolean mHasTexture
    // Offset: 0x20
    bool mHasTexture;
    // private System.Boolean mNonReadable
    // Offset: 0x21
    bool mNonReadable;
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerTexture obj, System.Boolean readable)
    // Offset: 0x18D3460
    static System::IntPtr Create(UnityEngine::Networking::DownloadHandlerTexture* obj, bool readable);
    // private System.Void InternalCreateTexture(System.Boolean readable)
    // Offset: 0x18D34B0
    void InternalCreateTexture(bool readable);
    // public System.Void .ctor(System.Boolean readable)
    // Offset: 0x18D3508
    static DownloadHandlerTexture* New_ctor(bool readable);
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0x18D357C
    UnityEngine::Texture2D* get_texture();
    // private UnityEngine.Texture2D InternalGetTexture()
    // Offset: 0x18D3580
    UnityEngine::Texture2D* InternalGetTexture();
    // private UnityEngine.Texture2D InternalGetTextureNative()
    // Offset: 0x18D36D4
    UnityEngine::Texture2D* InternalGetTextureNative();
    // static public UnityEngine.Texture2D GetContent(UnityEngine.Networking.UnityWebRequest www)
    // Offset: 0x18D3714
    static UnityEngine::Texture2D* GetContent(UnityEngine::Networking::UnityWebRequest* www);
    // protected override System.Byte[] GetData()
    // Offset: 0x18D3574
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Byte[] DownloadHandler::GetData()
    ::Array<uint8_t>* GetData();
  }; // UnityEngine.Networking.DownloadHandlerTexture
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::DownloadHandlerTexture*, "UnityEngine.Networking", "DownloadHandlerTexture");
#pragma pack(pop)
