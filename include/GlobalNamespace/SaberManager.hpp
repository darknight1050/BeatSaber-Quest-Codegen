// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: SaberType
  struct SaberType;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: SaberManager
  // [] Offset: FFFFFFFF
  class SaberManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SaberManager::InitData
    class InitData;
    // private Saber _leftSaber
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::Saber* leftSaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // private Saber _rightSaber
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::Saber* rightSaber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Saber*) == 0x8);
    // [InjectAttribute] Offset: 0xDCAD7C
    // private readonly SaberManager/InitData _initData
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SaberManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager::InitData*) == 0x8);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x30
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: didUpdateSaberPositionsEvent
    char __padding3[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xDCAD8C
    // private System.Action`2<Saber,Saber> didUpdateSaberPositionsEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_2<GlobalNamespace::Saber*, GlobalNamespace::Saber*>* didUpdateSaberPositionsEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::Saber*, GlobalNamespace::Saber*>*) == 0x8);
    // Creating value type constructor for type: SaberManager
    SaberManager(GlobalNamespace::Saber* leftSaber_ = {}, GlobalNamespace::Saber* rightSaber_ = {}, GlobalNamespace::SaberManager::InitData* initData_ = {}, bool started_ = {}, System::Action_2<GlobalNamespace::Saber*, GlobalNamespace::Saber*>* didUpdateSaberPositionsEvent_ = {}) noexcept : leftSaber{leftSaber_}, rightSaber{rightSaber_}, initData{initData_}, started{started_}, didUpdateSaberPositionsEvent{didUpdateSaberPositionsEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public Saber get_leftSaber()
    // Offset: 0xFC0844
    GlobalNamespace::Saber* get_leftSaber();
    // public Saber get_rightSaber()
    // Offset: 0xFC084C
    GlobalNamespace::Saber* get_rightSaber();
    // public System.Void add_didUpdateSaberPositionsEvent(System.Action`2<Saber,Saber> value)
    // Offset: 0xFC0854
    void add_didUpdateSaberPositionsEvent(System::Action_2<GlobalNamespace::Saber*, GlobalNamespace::Saber*>* value);
    // public System.Void remove_didUpdateSaberPositionsEvent(System.Action`2<Saber,Saber> value)
    // Offset: 0xFC08F8
    void remove_didUpdateSaberPositionsEvent(System::Action_2<GlobalNamespace::Saber*, GlobalNamespace::Saber*>* value);
    // public System.Void set_disableSabers(System.Boolean value)
    // Offset: 0xFC099C
    void set_disableSabers(bool value);
    // protected System.Void Start()
    // Offset: 0xFC09AC
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0xFC0B10
    void OnDisable();
    // protected System.Void OnEnable()
    // Offset: 0xFC0B14
    void OnEnable();
    // protected System.Void Update()
    // Offset: 0xFC0B24
    void Update();
    // public Saber SaberForType(SaberType saberType)
    // Offset: 0xFC0C0C
    GlobalNamespace::Saber* SaberForType(GlobalNamespace::SaberType saberType);
    // private System.Void RefreshSabers()
    // Offset: 0xFC09D4
    void RefreshSabers();
    // public System.Void .ctor()
    // Offset: 0xFC0C7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberManager*, creationType>()));
    }
  }; // SaberManager
  static check_size<sizeof(SaberManager), 56 + sizeof(System::Action_2<GlobalNamespace::Saber*, GlobalNamespace::Saber*>*)> __GlobalNamespace_SaberManagerSizeCheck;
  static_assert(sizeof(SaberManager) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberManager*, "", "SaberManager");
#pragma pack(pop)
