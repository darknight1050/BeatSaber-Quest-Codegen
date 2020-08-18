// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassLight
#include "GlobalNamespace/BloomPrePassLight.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: ParametricBoxController
  class ParametricBoxController;
  // Forward declaring type: Parametric3SliceSpriteController
  class Parametric3SliceSpriteController;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector4
  struct Vector4;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TubeBloomPrePassLight
  class TubeBloomPrePassLight : public GlobalNamespace::BloomPrePassLight {
    public:
    // private BoolSO _mainEffectPostProcessEnabled
    // Offset: 0x30
    GlobalNamespace::BoolSO* mainEffectPostProcessEnabled;
    // private System.Single _width
    // Offset: 0x38
    float width;
    // private System.Single _length
    // Offset: 0x3C
    float length;
    // private System.Single _center
    // Offset: 0x40
    float center;
    // private UnityEngine.Color _color
    // Offset: 0x44
    UnityEngine::Color color;
    // private System.Single _colorAlphaMultiplier
    // Offset: 0x54
    float colorAlphaMultiplier;
    // private System.Single _bloomFogIntensityMultiplier
    // Offset: 0x58
    float bloomFogIntensityMultiplier;
    // private System.Single _minAlpha
    // Offset: 0x5C
    float minAlpha;
    // private System.Single _maxAlpha
    // Offset: 0x60
    float maxAlpha;
    // private System.Boolean _forceUseBakedGlow
    // Offset: 0x64
    bool forceUseBakedGlow;
    // private ParametricBoxController _parametricBoxController
    // Offset: 0x68
    GlobalNamespace::ParametricBoxController* parametricBoxController;
    // private Parametric3SliceSpriteController _dynamic3SliceSprite
    // Offset: 0x70
    GlobalNamespace::Parametric3SliceSpriteController* dynamic3SliceSprite;
    // private UnityEngine.Transform _transform
    // Offset: 0x78
    UnityEngine::Transform* transform;
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1785F44
    void set_color(UnityEngine::Color value);
    // public UnityEngine.Color get_color()
    // Offset: 0x17860C0
    UnityEngine::Color get_color();
    // protected System.Void Awake()
    // Offset: 0x1786128
    void Awake();
    // private System.Void Refresh()
    // Offset: 0x178617C
    void Refresh();
    // private System.Void ClipPoints(UnityEngine.Vector4 fromPointClipPos, UnityEngine.Vector4 toPointClipPos, UnityEngine.Vector3 fromPointViewPos, UnityEngine.Vector3 toPointViewPos, System.Boolean fromPointInside, System.Single t)
    // Offset: 0x1787098
    void ClipPoints(UnityEngine::Vector4& fromPointClipPos, UnityEngine::Vector4& toPointClipPos, UnityEngine::Vector3& fromPointViewPos, UnityEngine::Vector3& toPointViewPos, bool fromPointInside, float t);
    // protected System.Void OnDrawGizmos()
    // Offset: 0x1787314
    void OnDrawGizmos();
    // static protected System.Void NoDomainReloadInit()
    // Offset: 0x17860CC
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::NoDomainReloadInit()
    static void NoDomainReloadInit();
    // protected override System.Void OnEnable()
    // Offset: 0x1786158
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::OnEnable()
    void OnEnable();
    // public override System.Void FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    // Offset: 0x17863CC
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::FillMeshData(System.Int32 lightNum, UnityEngine.Vector3[] vertices, UnityEngine.Color[] colors, UnityEngine.Vector4[] viewPos, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    void FillMeshData(int lightNum, ::Array<UnityEngine::Vector3>* vertices, ::Array<UnityEngine::Color>* colors, ::Array<UnityEngine::Vector4>* viewPos, UnityEngine::Matrix4x4 viewMatrix, UnityEngine::Matrix4x4 projectionMatrix, float lineWidth);
    // public System.Void .ctor()
    // Offset: 0x17874E8
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TubeBloomPrePassLight* New_ctor();
  }; // TubeBloomPrePassLight
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TubeBloomPrePassLight*, "", "TubeBloomPrePassLight");
#pragma pack(pop)
