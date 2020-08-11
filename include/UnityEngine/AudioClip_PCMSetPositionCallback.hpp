// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AudioClip/PCMSetPositionCallback
  class AudioClip::PCMSetPositionCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19434E8
    static AudioClip::PCMSetPositionCallback* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Int32 position)
    // Offset: 0x1943238
    void Invoke(int position);
    // public System.IAsyncResult BeginInvoke(System.Int32 position, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19434FC
    System::IAsyncResult* BeginInvoke(int position, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1943588
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.AudioClip/PCMSetPositionCallback
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip::PCMSetPositionCallback*, "UnityEngine", "AudioClip/PCMSetPositionCallback");
#pragma pack(pop)
