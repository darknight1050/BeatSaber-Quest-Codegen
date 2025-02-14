// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
  // Forward declaring type: SceneInfo
  class SceneInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: EventsTestScenesTransitionSetupDataSO
  class EventsTestScenesTransitionSetupDataSO : public GlobalNamespace::ScenesTransitionSetupDataSO {
    public:
    // private EnvironmentInfoSO _environmentInfo
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentInfoSO* environmentInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentInfoSO*) == 0x8);
    // private SceneInfo _eventsTestSceneInfo
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SceneInfo* eventsTestSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // private SceneInfo _gameCoreSceneInfo
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SceneInfo* gameCoreSceneInfo;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SceneInfo*) == 0x8);
    // Creating value type constructor for type: EventsTestScenesTransitionSetupDataSO
    EventsTestScenesTransitionSetupDataSO(GlobalNamespace::EnvironmentInfoSO* environmentInfo_ = {}, GlobalNamespace::SceneInfo* eventsTestSceneInfo_ = {}, GlobalNamespace::SceneInfo* gameCoreSceneInfo_ = {}) noexcept : environmentInfo{environmentInfo_}, eventsTestSceneInfo{eventsTestSceneInfo_}, gameCoreSceneInfo{gameCoreSceneInfo_} {}
    // public System.Void Init()
    // Offset: 0x10C25D0
    void Init();
    // public System.Void .ctor()
    // Offset: 0x10C2790
    // Implemented from: ScenesTransitionSetupDataSO
    // Base method: System.Void ScenesTransitionSetupDataSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventsTestScenesTransitionSetupDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EventsTestScenesTransitionSetupDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventsTestScenesTransitionSetupDataSO*, creationType>()));
    }
  }; // EventsTestScenesTransitionSetupDataSO
  #pragma pack(pop)
  static check_size<sizeof(EventsTestScenesTransitionSetupDataSO), 56 + sizeof(GlobalNamespace::SceneInfo*)> __GlobalNamespace_EventsTestScenesTransitionSetupDataSOSizeCheck;
  static_assert(sizeof(EventsTestScenesTransitionSetupDataSO) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EventsTestScenesTransitionSetupDataSO*, "", "EventsTestScenesTransitionSetupDataSO");
