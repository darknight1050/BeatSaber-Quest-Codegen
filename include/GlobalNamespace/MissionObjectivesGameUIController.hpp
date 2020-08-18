// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionObjectiveGameUIView
  class MissionObjectiveGameUIView;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionObjectivesGameUIController
  class MissionObjectivesGameUIController : public UnityEngine::MonoBehaviour {
    public:
    // private MissionObjectiveGameUIView _missionObjectiveGameUIViewPrefab
    // Offset: 0x18
    GlobalNamespace::MissionObjectiveGameUIView* missionObjectiveGameUIViewPrefab;
    // private UnityEngine.GameObject _backgroundGO
    // Offset: 0x20
    UnityEngine::GameObject* backgroundGO;
    // private System.Single _separator
    // Offset: 0x28
    float separator;
    // private System.Single _elementWidth
    // Offset: 0x2C
    float elementWidth;
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Offset: 0x30
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // private System.Collections.Generic.List`1<MissionObjectiveGameUIView> _missionObjectiveGameUIViews
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::MissionObjectiveGameUIView*>* missionObjectiveGameUIViews;
    // protected System.Void Start()
    // Offset: 0x1951938
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1951D30
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectivesListDidChange()
    // Offset: 0x1951E00
    void HandleMissionObjectiveCheckersManagerObjectivesListDidChange();
    // private System.Void CreateUIElements()
    // Offset: 0x19519C8
    void CreateUIElements();
    // public System.Void .ctor()
    // Offset: 0x1951E04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionObjectivesGameUIController* New_ctor();
  }; // MissionObjectivesGameUIController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectivesGameUIController*, "", "MissionObjectivesGameUIController");
#pragma pack(pop)
