// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SongController
  // [] Offset: FFFFFFFF
  class SongController : public UnityEngine::MonoBehaviour {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD295F4
    // private System.Action songDidFinishEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* songDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: SongController
    SongController(System::Action* songDidFinishEvent_ = {}) noexcept : songDidFinishEvent{songDidFinishEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_songDidFinishEvent(System.Action value)
    // Offset: 0xF7905C
    void add_songDidFinishEvent(System::Action* value);
    // public System.Void remove_songDidFinishEvent(System.Action value)
    // Offset: 0xF79100
    void remove_songDidFinishEvent(System::Action* value);
    // public System.Void SendSongDidFinishEvent()
    // Offset: 0xF791A4
    void SendSongDidFinishEvent();
    // public System.Void StopSong()
    // Offset: 0xFFFFFFFF
    void StopSong_NEW();
    // public System.Void PauseSong()
    // Offset: 0xFFFFFFFF
    void PauseSong_NEW();
    // public System.Void ResumeSong()
    // Offset: 0xFFFFFFFF
    void ResumeSong_NEW();
    // protected System.Void .ctor()
    // Offset: 0xF791B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongController*, creationType>()));
    }
  }; // SongController
  #pragma pack(pop)
  static check_size<sizeof(SongController), 24 + sizeof(System::Action*)> __GlobalNamespace_SongControllerSizeCheck;
  static_assert(sizeof(SongController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongController*, "", "SongController");
