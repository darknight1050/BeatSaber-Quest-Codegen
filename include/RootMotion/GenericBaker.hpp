// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.Baker
#include "RootMotion/Baker.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BakerTransform
  class BakerTransform;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.GenericBaker
  class GenericBaker : public RootMotion::Baker {
    public:
    // public System.Boolean markAsLegacy
    // Offset: 0x74
    bool markAsLegacy;
    // public UnityEngine.Transform root
    // Offset: 0x78
    UnityEngine::Transform* root;
    // public UnityEngine.Transform rootNode
    // Offset: 0x80
    UnityEngine::Transform* rootNode;
    // public UnityEngine.Transform[] ignoreList
    // Offset: 0x88
    ::Array<UnityEngine::Transform*>* ignoreList;
    // public UnityEngine.Transform[] bakePositionList
    // Offset: 0x90
    ::Array<UnityEngine::Transform*>* bakePositionList;
    // private RootMotion.BakerTransform[] children
    // Offset: 0x98
    ::Array<RootMotion::BakerTransform*>* children;
    // private RootMotion.BakerTransform rootChild
    // Offset: 0xA0
    RootMotion::BakerTransform* rootChild;
    // private System.Int32 rootChildIndex
    // Offset: 0xA8
    int rootChildIndex;
    // private System.Void Awake()
    // Offset: 0x119D8B4
    void Awake();
    // private System.Boolean IsIgnored(UnityEngine.Transform t)
    // Offset: 0x119DAE4
    bool IsIgnored(UnityEngine::Transform* t);
    // private System.Boolean BakePosition(UnityEngine.Transform t)
    // Offset: 0x119DBBC
    bool BakePosition(UnityEngine::Transform* t);
    // protected override UnityEngine.Transform GetCharacterRoot()
    // Offset: 0x119DC94
    // Implemented from: RootMotion.Baker
    // Base method: UnityEngine.Transform Baker::GetCharacterRoot()
    UnityEngine::Transform* GetCharacterRoot();
    // protected override System.Void OnStartBaking()
    // Offset: 0x119DC9C
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnStartBaking()
    void OnStartBaking();
    // protected override System.Void OnSetLoopFrame(System.Single time)
    // Offset: 0x119DDAC
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetLoopFrame(System.Single time)
    void OnSetLoopFrame(float time);
    // protected override System.Void OnSetCurves(UnityEngine.AnimationClip clip)
    // Offset: 0x119DE28
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetCurves(UnityEngine.AnimationClip clip)
    void OnSetCurves(UnityEngine::AnimationClip*& clip);
    // protected override System.Void OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    // Offset: 0x119DEA4
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    void OnSetKeyframes(float time, bool lastFrame);
    // public System.Void .ctor()
    // Offset: 0x119DF20
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GenericBaker* New_ctor();
  }; // RootMotion.GenericBaker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::GenericBaker*, "RootMotion", "GenericBaker");
#pragma pack(pop)
