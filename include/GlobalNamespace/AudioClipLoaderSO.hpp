// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipLoaderSO
  class AudioClipLoaderSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3
    class $LoadAudioFileCoroutine$d__3;
    // private System.Boolean _isLoading
    // Size: 0x1
    // Offset: 0x18
    bool isLoading;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AudioClipLoaderSO
    AudioClipLoaderSO(bool isLoading_ = {}) noexcept : isLoading{isLoading_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void LoadAudioFile(System.String filePath, System.Action`1<UnityEngine.AudioClip> finishCallback)
    // Offset: 0x112B710
    void LoadAudioFile(::Il2CppString* filePath, System::Action_1<UnityEngine::AudioClip*>* finishCallback);
    // public System.Collections.IEnumerator LoadAudioFileCoroutine(System.String filePath, System.Action`1<UnityEngine.AudioClip> finishCallback)
    // Offset: 0x112B7D0
    System::Collections::IEnumerator* LoadAudioFileCoroutine(::Il2CppString* filePath, System::Action_1<UnityEngine::AudioClip*>* finishCallback);
    // protected override System.Void OnEnable()
    // Offset: 0x112B6E8
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x112B880
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipLoaderSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioClipLoaderSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipLoaderSO*, creationType>()));
    }
  }; // AudioClipLoaderSO
  #pragma pack(pop)
  static check_size<sizeof(AudioClipLoaderSO), 24 + sizeof(bool)> __GlobalNamespace_AudioClipLoaderSOSizeCheck;
  static_assert(sizeof(AudioClipLoaderSO) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioClipLoaderSO*, "", "AudioClipLoaderSO");
