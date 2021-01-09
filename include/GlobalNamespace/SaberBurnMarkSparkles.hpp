// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Forward declaring type: BoxCollider
  class BoxCollider;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x107
  // Autogenerated type: SaberBurnMarkSparkles
  // [] Offset: FFFFFFFF
  class SaberBurnMarkSparkles : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparklesPS
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparklesPS;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.ParticleSystem _burnMarksPSPrefab
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ParticleSystem* burnMarksPSPrefab;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem*) == 0x8);
    // private UnityEngine.BoxCollider _boxCollider
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::BoxCollider* boxCollider;
    // Field size check
    static_assert(sizeof(UnityEngine::BoxCollider*) == 0x8);
    // [InjectAttribute] Offset: 0xDC6AB0
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [InjectAttribute] Offset: 0xDC6AC0
    // private readonly SaberManager _saberManager
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::SaberManager* saberManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberManager*) == 0x8);
    // private Saber[] _sabers
    // Size: 0x8
    // Offset: 0x40
    ::Array<GlobalNamespace::Saber*>* sabers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::Saber*>*) == 0x8);
    // private UnityEngine.Plane _plane
    // Size: 0x10
    // Offset: 0x48
    UnityEngine::Plane plane;
    // Field size check
    static_assert(sizeof(UnityEngine::Plane) == 0x10);
    // private UnityEngine.Vector3[] _prevBurnMarkPos
    // Size: 0x8
    // Offset: 0x58
    ::Array<UnityEngine::Vector3>* prevBurnMarkPos;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Vector3>*) == 0x8);
    // private System.Boolean[] _prevBurnMarkPosValid
    // Size: 0x8
    // Offset: 0x60
    ::Array<bool>* prevBurnMarkPosValid;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private UnityEngine.ParticleSystem[] _burnMarksPS
    // Size: 0x8
    // Offset: 0x68
    ::Array<UnityEngine::ParticleSystem*>* burnMarksPS;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem*>*) == 0x8);
    // private UnityEngine.ParticleSystem/EmissionModule[] _burnMarksEmissionModules
    // Size: 0x8
    // Offset: 0x70
    ::Array<UnityEngine::ParticleSystem::EmissionModule>* burnMarksEmissionModules;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem::EmissionModule>*) == 0x8);
    // private UnityEngine.ParticleSystem/EmitParams _sparklesEmitParams
    // Size: 0x8F
    // Offset: 0x78
    UnityEngine::ParticleSystem::EmitParams sparklesEmitParams;
    // Field size check
    static_assert(sizeof(UnityEngine::ParticleSystem::EmitParams) == 0x8F);
    // Creating value type constructor for type: SaberBurnMarkSparkles
    SaberBurnMarkSparkles(UnityEngine::ParticleSystem* sparklesPS_ = {}, UnityEngine::ParticleSystem* burnMarksPSPrefab_ = {}, UnityEngine::BoxCollider* boxCollider_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, GlobalNamespace::SaberManager* saberManager_ = {}, ::Array<GlobalNamespace::Saber*>* sabers_ = {}, UnityEngine::Plane plane_ = {}, ::Array<UnityEngine::Vector3>* prevBurnMarkPos_ = {}, ::Array<bool>* prevBurnMarkPosValid_ = {}, ::Array<UnityEngine::ParticleSystem*>* burnMarksPS_ = {}, ::Array<UnityEngine::ParticleSystem::EmissionModule>* burnMarksEmissionModules_ = {}, UnityEngine::ParticleSystem::EmitParams sparklesEmitParams_ = {}) noexcept : sparklesPS{sparklesPS_}, burnMarksPSPrefab{burnMarksPSPrefab_}, boxCollider{boxCollider_}, colorManager{colorManager_}, saberManager{saberManager_}, sabers{sabers_}, plane{plane_}, prevBurnMarkPos{prevBurnMarkPos_}, prevBurnMarkPosValid{prevBurnMarkPosValid_}, burnMarksPS{burnMarksPS_}, burnMarksEmissionModules{burnMarksEmissionModules_}, sparklesEmitParams{sparklesEmitParams_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFBEF48
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFBF454
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0xFBF560
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xFBF650
    void OnDisable();
    // private System.Boolean GetBurnMarkPos(UnityEngine.Vector3 bladeBottomPos, UnityEngine.Vector3 bladeTopPos, out UnityEngine.Vector3 burnMarkPos)
    // Offset: 0xFBF740
    bool GetBurnMarkPos(UnityEngine::Vector3 bladeBottomPos, UnityEngine::Vector3 bladeTopPos, UnityEngine::Vector3& burnMarkPos);
    // protected System.Void LateUpdate()
    // Offset: 0xFBF9D8
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xFBFE6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SaberBurnMarkSparkles* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SaberBurnMarkSparkles::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SaberBurnMarkSparkles*, creationType>()));
    }
  }; // SaberBurnMarkSparkles
  static check_size<sizeof(SaberBurnMarkSparkles), 120 + sizeof(UnityEngine::ParticleSystem::EmitParams)> __GlobalNamespace_SaberBurnMarkSparklesSizeCheck;
  static_assert(sizeof(SaberBurnMarkSparkles) == 0x107);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberBurnMarkSparkles*, "", "SaberBurnMarkSparkles");
#pragma pack(pop)
