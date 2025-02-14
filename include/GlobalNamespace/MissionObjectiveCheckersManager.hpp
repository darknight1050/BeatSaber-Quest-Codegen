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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveChecker
  class MissionObjectiveChecker;
  // Forward declaring type: ILevelEndActions
  class ILevelEndActions;
  // Forward declaring type: MissionObjectiveTypeSO
  class MissionObjectiveTypeSO;
  // Forward declaring type: MissionObjectiveResult
  class MissionObjectiveResult;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MissionObjectiveCheckersManager::InitData
    class InitData;
    // private MissionObjectiveChecker[] _missionObjectiveCheckers
    // Size: 0x8
    // Offset: 0x18
    ::Array<GlobalNamespace::MissionObjectiveChecker*>* missionObjectiveCheckers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjectiveChecker*>*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C990
    // private MissionObjectiveCheckersManager/InitData _initData
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MissionObjectiveCheckersManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveCheckersManager::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xE1C9A0
    // private ILevelEndActions _gameplayManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ILevelEndActions* gameplayManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILevelEndActions*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C9B0
    // private System.Action objectiveDidFailEvent
    // Size: 0x8
    // Offset: 0x30
    System::Action* objectiveDidFailEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C9C0
    // private System.Action objectiveWasClearedEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* objectiveWasClearedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xE1C9D0
    // private System.Action objectivesListDidChangeEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* objectivesListDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private MissionObjectiveChecker[] _activeMissionObjectiveCheckers
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::MissionObjectiveChecker*>* activeMissionObjectiveCheckers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MissionObjectiveChecker*>*) == 0x8);
    // Creating value type constructor for type: MissionObjectiveCheckersManager
    MissionObjectiveCheckersManager(::Array<GlobalNamespace::MissionObjectiveChecker*>* missionObjectiveCheckers_ = {}, GlobalNamespace::MissionObjectiveCheckersManager::InitData* initData_ = {}, GlobalNamespace::ILevelEndActions* gameplayManager_ = {}, System::Action* objectiveDidFailEvent_ = {}, System::Action* objectiveWasClearedEvent_ = {}, System::Action* objectivesListDidChangeEvent_ = {}, ::Array<GlobalNamespace::MissionObjectiveChecker*>* activeMissionObjectiveCheckers_ = {}) noexcept : missionObjectiveCheckers{missionObjectiveCheckers_}, initData{initData_}, gameplayManager{gameplayManager_}, objectiveDidFailEvent{objectiveDidFailEvent_}, objectiveWasClearedEvent{objectiveWasClearedEvent_}, objectivesListDidChangeEvent{objectivesListDidChangeEvent_}, activeMissionObjectiveCheckers{activeMissionObjectiveCheckers_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_objectiveDidFailEvent(System.Action value)
    // Offset: 0x10517FC
    void add_objectiveDidFailEvent(System::Action* value);
    // public System.Void remove_objectiveDidFailEvent(System.Action value)
    // Offset: 0x1051348
    void remove_objectiveDidFailEvent(System::Action* value);
    // public System.Void add_objectiveWasClearedEvent(System.Action value)
    // Offset: 0x104E608
    void add_objectiveWasClearedEvent(System::Action* value);
    // public System.Void remove_objectiveWasClearedEvent(System.Action value)
    // Offset: 0x104E734
    void remove_objectiveWasClearedEvent(System::Action* value);
    // public System.Void add_objectivesListDidChangeEvent(System.Action value)
    // Offset: 0x1055CCC
    void add_objectivesListDidChangeEvent(System::Action* value);
    // public System.Void remove_objectivesListDidChangeEvent(System.Action value)
    // Offset: 0x1055D70
    void remove_objectivesListDidChangeEvent(System::Action* value);
    // public MissionObjectiveChecker[] get_activeMissionObjectiveCheckers()
    // Offset: 0x1055E14
    ::Array<GlobalNamespace::MissionObjectiveChecker*>* get_activeMissionObjectiveCheckers();
    // protected System.Void Start()
    // Offset: 0x1055E1C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1056308
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckerStatusDidChange(MissionObjectiveChecker missionObjectiveChecker)
    // Offset: 0x10564A4
    void HandleMissionObjectiveCheckerStatusDidChange(GlobalNamespace::MissionObjectiveChecker* missionObjectiveChecker);
    // public MissionObjectiveChecker GetMissionObjectiveChecker(MissionObjectiveTypeSO missionObjectiveType)
    // Offset: 0x10564E4
    GlobalNamespace::MissionObjectiveChecker* GetMissionObjectiveChecker(GlobalNamespace::MissionObjectiveTypeSO* missionObjectiveType);
    // public MissionObjectiveResult[] GetResults()
    // Offset: 0x1050854
    ::Array<GlobalNamespace::MissionObjectiveResult*>* GetResults();
    // private System.Void HandleLevelFailed()
    // Offset: 0x105660C
    void HandleLevelFailed();
    // private System.Void HandleLevelFinished()
    // Offset: 0x10566F8
    void HandleLevelFinished();
    // private System.Void StopChecking()
    // Offset: 0x1056610
    void StopChecking();
    // public System.Void .ctor()
    // Offset: 0x10566FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectiveCheckersManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjectiveCheckersManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectiveCheckersManager*, creationType>()));
    }
  }; // MissionObjectiveCheckersManager
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectiveCheckersManager), 72 + sizeof(::Array<GlobalNamespace::MissionObjectiveChecker*>*)> __GlobalNamespace_MissionObjectiveCheckersManagerSizeCheck;
  static_assert(sizeof(MissionObjectiveCheckersManager) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectiveCheckersManager*, "", "MissionObjectiveCheckersManager");
