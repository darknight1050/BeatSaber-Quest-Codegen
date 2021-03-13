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
  // Forward declaring type: MissionObjectiveGameUIView
  class MissionObjectiveGameUIView;
  // Forward declaring type: MissionObjectiveCheckersManager
  class MissionObjectiveCheckersManager;
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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: MissionObjectivesGameUIController
  // [] Offset: FFFFFFFF
  class MissionObjectivesGameUIController : public UnityEngine::MonoBehaviour {
    public:
    // private MissionObjectiveGameUIView _missionObjectiveGameUIViewPrefab
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::MissionObjectiveGameUIView* missionObjectiveGameUIViewPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveGameUIView*) == 0x8);
    // private System.Single _separator
    // Size: 0x4
    // Offset: 0x20
    float separator;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _elementWidth
    // Size: 0x4
    // Offset: 0x24
    float elementWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xD251B4
    // private MissionObjectiveCheckersManager _missionObjectiveCheckersManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MissionObjectiveCheckersManager*) == 0x8);
    // private System.Collections.Generic.List`1<MissionObjectiveGameUIView> _missionObjectiveGameUIViews
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::MissionObjectiveGameUIView*>* missionObjectiveGameUIViews;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MissionObjectiveGameUIView*>*) == 0x8);
    // Creating value type constructor for type: MissionObjectivesGameUIController
    MissionObjectivesGameUIController(GlobalNamespace::MissionObjectiveGameUIView* missionObjectiveGameUIViewPrefab_ = {}, float separator_ = {}, float elementWidth_ = {}, GlobalNamespace::MissionObjectiveCheckersManager* missionObjectiveCheckersManager_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MissionObjectiveGameUIView*>* missionObjectiveGameUIViews_ = {}) noexcept : missionObjectiveGameUIViewPrefab{missionObjectiveGameUIViewPrefab_}, separator{separator_}, elementWidth{elementWidth_}, missionObjectiveCheckersManager{missionObjectiveCheckersManager_}, missionObjectiveGameUIViews{missionObjectiveGameUIViews_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0x102B858
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x102BC24
    void OnDestroy();
    // private System.Void HandleMissionObjectiveCheckersManagerObjectivesListDidChange()
    // Offset: 0x102BCF4
    void HandleMissionObjectiveCheckersManagerObjectivesListDidChange();
    // private System.Void CreateUIElements()
    // Offset: 0x102B8E8
    void CreateUIElements();
    // public System.Void .ctor()
    // Offset: 0x102BCF8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionObjectivesGameUIController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionObjectivesGameUIController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionObjectivesGameUIController*, creationType>()));
    }
  }; // MissionObjectivesGameUIController
  #pragma pack(pop)
  static check_size<sizeof(MissionObjectivesGameUIController), 48 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MissionObjectiveGameUIView*>*)> __GlobalNamespace_MissionObjectivesGameUIControllerSizeCheck;
  static_assert(sizeof(MissionObjectivesGameUIController) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionObjectivesGameUIController*, "", "MissionObjectivesGameUIController");
