// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Including type: UnityEngine.IExposedPropertyTable
#include "UnityEngine/IExposedPropertyTable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: DirectorWrapMode
  struct DirectorWrapMode;
  // Forward declaring type: PlayableAsset
  class PlayableAsset;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: PropertyName
  struct PropertyName;
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableDirector
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CD1150
  // [NativeHeaderAttribute] Offset: CD1150
  // [RequiredByNativeCodeAttribute] Offset: CD1150
  class PlayableDirector : public UnityEngine::Behaviour/*, public UnityEngine::IExposedPropertyTable*/ {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xCD11C0
    // [CompilerGeneratedAttribute] Offset: 0xCD11C0
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> played
    // Size: 0x8
    // Offset: 0x18
    System::Action_1<UnityEngine::Playables::PlayableDirector*>* played;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xCD11FC
    // [CompilerGeneratedAttribute] Offset: 0xCD11FC
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> paused
    // Size: 0x8
    // Offset: 0x20
    System::Action_1<UnityEngine::Playables::PlayableDirector*>* paused;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCD1238
    // [DebuggerBrowsableAttribute] Offset: 0xCD1238
    // private System.Action`1<UnityEngine.Playables.PlayableDirector> stopped
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<UnityEngine::Playables::PlayableDirector*>* stopped;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Playables::PlayableDirector*>*) == 0x8);
    // Creating value type constructor for type: PlayableDirector
    PlayableDirector(System::Action_1<UnityEngine::Playables::PlayableDirector*>* played_ = {}, System::Action_1<UnityEngine::Playables::PlayableDirector*>* paused_ = {}, System::Action_1<UnityEngine::Playables::PlayableDirector*>* stopped_ = {}) noexcept : played{played_}, paused{paused_}, stopped{stopped_} {}
    // Creating interface conversion operator: operator UnityEngine::IExposedPropertyTable
    operator UnityEngine::IExposedPropertyTable() noexcept {
      return *reinterpret_cast<UnityEngine::IExposedPropertyTable*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Playables.DirectorWrapMode get_extrapolationMode()
    // Offset: 0x218B238
    UnityEngine::Playables::DirectorWrapMode get_extrapolationMode();
    // public UnityEngine.Playables.PlayableAsset get_playableAsset()
    // Offset: 0x218B2B8
    UnityEngine::Playables::PlayableAsset* get_playableAsset();
    // public UnityEngine.Playables.PlayableGraph get_playableGraph()
    // Offset: 0x218B3A0
    UnityEngine::Playables::PlayableGraph get_playableGraph();
    // public System.Void SetGenericBinding(UnityEngine.Object key, UnityEngine.Object value)
    // Offset: 0x218B3FC
    void SetGenericBinding(UnityEngine::Object* key, UnityEngine::Object* value);
    // public System.Void set_time(System.Double value)
    // Offset: 0x218B4AC
    void set_time(double value);
    // public System.Double get_time()
    // Offset: 0x218B4FC
    double get_time();
    // public System.Double get_duration()
    // Offset: 0x218B53C
    double get_duration();
    // public System.Void Evaluate()
    // Offset: 0x218B57C
    void Evaluate();
    // public System.Void Play()
    // Offset: 0x218B5BC
    void Play();
    // public System.Void Stop()
    // Offset: 0x218B5FC
    void Stop();
    // public System.Void Pause()
    // Offset: 0x218B63C
    void Pause();
    // public UnityEngine.Object GetReferenceValue(UnityEngine.PropertyName id, out System.Boolean idValid)
    // Offset: 0x218B67C
    UnityEngine::Object* GetReferenceValue_NEW(UnityEngine::PropertyName id, bool& idValid);
    // public UnityEngine.Object GetGenericBinding(UnityEngine.Object key)
    // Offset: 0x218B730
    UnityEngine::Object* GetGenericBinding(UnityEngine::Object* key);
    // private UnityEngine.Playables.DirectorWrapMode GetWrapMode()
    // Offset: 0x218B278
    UnityEngine::Playables::DirectorWrapMode GetWrapMode();
    // private UnityEngine.Playables.PlayableGraph GetGraphHandle()
    // Offset: 0x218B3A4
    UnityEngine::Playables::PlayableGraph GetGraphHandle();
    // private System.Void Internal_SetGenericBinding(UnityEngine.Object key, UnityEngine.Object value)
    // Offset: 0x218B454
    void Internal_SetGenericBinding(UnityEngine::Object* key, UnityEngine::Object* value);
    // private UnityEngine.ScriptableObject Internal_GetPlayableAsset()
    // Offset: 0x218B360
    UnityEngine::ScriptableObject* Internal_GetPlayableAsset();
    // private System.Void SendOnPlayableDirectorPlay()
    // Offset: 0x218B7D0
    void SendOnPlayableDirectorPlay();
    // private System.Void SendOnPlayableDirectorPause()
    // Offset: 0x218B834
    void SendOnPlayableDirectorPause();
    // private System.Void SendOnPlayableDirectorStop()
    // Offset: 0x218B898
    void SendOnPlayableDirectorStop();
    // private UnityEngine.Object GetReferenceValue_Injected(ref UnityEngine.PropertyName id, out System.Boolean idValid)
    // Offset: 0x218B6D8
    UnityEngine::Object* GetReferenceValue_Injected_NEW(UnityEngine::PropertyName& id, bool& idValid);
    // private System.Void GetGraphHandle_Injected(out UnityEngine.Playables.PlayableGraph ret)
    // Offset: 0x218B780
    void GetGraphHandle_Injected(UnityEngine::Playables::PlayableGraph& ret);
  }; // UnityEngine.Playables.PlayableDirector
  #pragma pack(pop)
  static check_size<sizeof(PlayableDirector), 40 + sizeof(System::Action_1<UnityEngine::Playables::PlayableDirector*>*)> __UnityEngine_Playables_PlayableDirectorSizeCheck;
  static_assert(sizeof(PlayableDirector) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableDirector*, "UnityEngine.Playables", "PlayableDirector");
