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
  // Forward declaring type: NoteDebrisPhysics
  class NoteDebrisPhysics;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: LazyCopyHashSet`1<T>
  template<typename T>
  class LazyCopyHashSet_1;
  // Forward declaring type: INoteDebrisDidFinishEvent
  class INoteDebrisDidFinishEvent;
  // Forward declaring type: ILazyCopyHashSet`1<T>
  template<typename T>
  class ILazyCopyHashSet_1;
  // Forward declaring type: ColorType
  struct ColorType;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Mesh
  class Mesh;
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: NoteDebris
  // [] Offset: FFFFFFFF
  class NoteDebris : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NoteDebris::Pool
    class Pool;
    // private UnityEngine.Transform _meshTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Transform* meshTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // private NoteDebrisPhysics _physics
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteDebrisPhysics* physics;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteDebrisPhysics*) == 0x8);
    // private MaterialPropertyBlockController _materialPropertyBlockController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MaterialPropertyBlockController*) == 0x8);
    // [SpaceAttribute] Offset: 0xD22CD8
    // private UnityEngine.AnimationCurve _cutoutCurve
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::AnimationCurve* cutoutCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _maxCutPointCenterDistance
    // Size: 0x4
    // Offset: 0x38
    float maxCutPointCenterDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: maxCutPointCenterDistance and: centroidComputationMesh
    char __padding4[0x4] = {};
    // [SpaceAttribute] Offset: 0xD22D20
    // private UnityEngine.Mesh _centroidComputationMesh
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Mesh* centroidComputationMesh;
    // Field size check
    static_assert(sizeof(UnityEngine::Mesh*) == 0x8);
    // [InjectAttribute] Offset: 0xD22D58
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // private System.Single _elapsedTime
    // Size: 0x4
    // Offset: 0x50
    float elapsedTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _lifeTime
    // Size: 0x4
    // Offset: 0x54
    float lifeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly LazyCopyHashSet`1<INoteDebrisDidFinishEvent> _didFinishEvent
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* didFinishEvent;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>*) == 0x8);
    // Creating value type constructor for type: NoteDebris
    NoteDebris(UnityEngine::Transform* meshTransform_ = {}, GlobalNamespace::NoteDebrisPhysics* physics_ = {}, GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController_ = {}, UnityEngine::AnimationCurve* cutoutCurve_ = {}, float maxCutPointCenterDistance_ = {}, UnityEngine::Mesh* centroidComputationMesh_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, float elapsedTime_ = {}, float lifeTime_ = {}, GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* didFinishEvent_ = {}) noexcept : meshTransform{meshTransform_}, physics{physics_}, materialPropertyBlockController{materialPropertyBlockController_}, cutoutCurve{cutoutCurve_}, maxCutPointCenterDistance{maxCutPointCenterDistance_}, centroidComputationMesh{centroidComputationMesh_}, colorManager{colorManager_}, elapsedTime{elapsedTime_}, lifeTime{lifeTime_}, didFinishEvent{didFinishEvent_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD22D68
    // Get static field: static private readonly System.Int32 _cutoutPropertyID
    static int _get__cutoutPropertyID();
    // Set static field: static private readonly System.Int32 _cutoutPropertyID
    static void _set__cutoutPropertyID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD22D78
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD22D88
    // Get static field: static private readonly System.Int32 _cutPlaneID
    static int _get__cutPlaneID();
    // Set static field: static private readonly System.Int32 _cutPlaneID
    static void _set__cutPlaneID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD22D98
    // Get static field: static private readonly System.Int32 _cutoutTexOffsetID
    static int _get__cutoutTexOffsetID();
    // Set static field: static private readonly System.Int32 _cutoutTexOffsetID
    static void _set__cutoutTexOffsetID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD22DA8
    // Get static field: static private UnityEngine.Vector3[] _meshVertices
    static ::Array<UnityEngine::Vector3>* _get__meshVertices();
    // Set static field: static private UnityEngine.Vector3[] _meshVertices
    static void _set__meshVertices(::Array<UnityEngine::Vector3>* value);
    // public ILazyCopyHashSet`1<INoteDebrisDidFinishEvent> get_didFinishEvent()
    // Offset: 0x10C3FB8
    GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>* get_didFinishEvent();
    // protected System.Void Awake()
    // Offset: 0x10C3FC0
    void Awake();
    // protected System.Void Update()
    // Offset: 0x10C4070
    void Update();
    // public System.Void Init(ColorType colorType, UnityEngine.Vector3 notePos, UnityEngine.Quaternion noteRot, UnityEngine.Vector3 noteScale, UnityEngine.Vector3 positionOffset, UnityEngine.Quaternion rotationOffset, UnityEngine.Vector3 cutPoint, UnityEngine.Vector3 cutNormal, UnityEngine.Vector3 force, UnityEngine.Vector3 torque, System.Single lifeTime)
    // Offset: 0x10C4294
    void Init(GlobalNamespace::ColorType colorType, UnityEngine::Vector3 notePos, UnityEngine::Quaternion noteRot, UnityEngine::Vector3 noteScale, UnityEngine::Vector3 positionOffset, UnityEngine::Quaternion rotationOffset, UnityEngine::Vector3 cutPoint, UnityEngine::Vector3 cutNormal, UnityEngine::Vector3 force, UnityEngine::Vector3 torque, float lifeTime);
    // public System.Void .ctor()
    // Offset: 0x10C4B80
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteDebris* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteDebris::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteDebris*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x10C4C18
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // NoteDebris
  #pragma pack(pop)
  static check_size<sizeof(NoteDebris), 88 + sizeof(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteDebrisDidFinishEvent*>*)> __GlobalNamespace_NoteDebrisSizeCheck;
  static_assert(sizeof(NoteDebris) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebris*, "", "NoteDebris");
