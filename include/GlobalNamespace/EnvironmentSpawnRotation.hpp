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
  // Forward declaring type: IBeatmapObjectCallbackController
  class IBeatmapObjectCallbackController;
  // Forward declaring type: SpawnRotationProcessor
  class SpawnRotationProcessor;
  // Forward declaring type: BeatmapEventCallbackData
  class BeatmapEventCallbackData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: EnvironmentSpawnRotation
  // [] Offset: FFFFFFFF
  class EnvironmentSpawnRotation : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _aheadTime
    // Size: 0x4
    // Offset: 0x18
    float aheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _smooth
    // Size: 0x4
    // Offset: 0x1C
    float smooth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [InjectAttribute] Offset: 0xD24878
    // private readonly IBeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapObjectCallbackController*) == 0x8);
    // private readonly SpawnRotationProcessor _spawnRotationProcessor
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::SpawnRotationProcessor* spawnRotationProcessor;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SpawnRotationProcessor*) == 0x8);
    // private BeatmapEventCallbackData _eventCallbackData
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapEventCallbackData* eventCallbackData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventCallbackData*) == 0x8);
    // private System.Single _currentRotation
    // Size: 0x4
    // Offset: 0x38
    float currentRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _prevRotation
    // Size: 0x4
    // Offset: 0x3C
    float prevRotation;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: EnvironmentSpawnRotation
    EnvironmentSpawnRotation(float aheadTime_ = {}, float smooth_ = {}, GlobalNamespace::IBeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}, GlobalNamespace::SpawnRotationProcessor* spawnRotationProcessor_ = {}, GlobalNamespace::BeatmapEventCallbackData* eventCallbackData_ = {}, float currentRotation_ = {}, float prevRotation_ = {}) noexcept : aheadTime{aheadTime_}, smooth{smooth_}, beatmapObjectCallbackController{beatmapObjectCallbackController_}, spawnRotationProcessor{spawnRotationProcessor_}, eventCallbackData{eventCallbackData_}, currentRotation{currentRotation_}, prevRotation{prevRotation_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD24888
    // Get static field: static private readonly System.Int32 _spawnRotationID
    static int _get__spawnRotationID();
    // Set static field: static private readonly System.Int32 _spawnRotationID
    static void _set__spawnRotationID(int value);
    // Get static field: static private System.Int32 _numberOfActiveEnvironmentSpawnRotationObjects
    static int _get__numberOfActiveEnvironmentSpawnRotationObjects();
    // Set static field: static private System.Int32 _numberOfActiveEnvironmentSpawnRotationObjects
    static void _set__numberOfActiveEnvironmentSpawnRotationObjects(int value);
    // public System.Single get_targetRotation()
    // Offset: 0xF288B4
    float get_targetRotation();
    // protected System.Void Awake()
    // Offset: 0xF288D0
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0xF288F0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xF28960
    void OnDisable();
    // protected System.Void Start()
    // Offset: 0xF289D0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xF28B74
    void OnDestroy();
    // private System.Void BeatmapEventAtNoteSpawnCallback(BeatmapEventData beatmapEventData)
    // Offset: 0xF28C30
    void BeatmapEventAtNoteSpawnCallback(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // protected System.Void FixedUpdate()
    // Offset: 0xF28D98
    void FixedUpdate();
    // protected System.Void LateUpdate()
    // Offset: 0xF28E74
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xF29010
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnvironmentSpawnRotation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnvironmentSpawnRotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnvironmentSpawnRotation*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0xF29078
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // EnvironmentSpawnRotation
  #pragma pack(pop)
  static check_size<sizeof(EnvironmentSpawnRotation), 60 + sizeof(float)> __GlobalNamespace_EnvironmentSpawnRotationSizeCheck;
  static_assert(sizeof(EnvironmentSpawnRotation) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSpawnRotation*, "", "EnvironmentSpawnRotation");
