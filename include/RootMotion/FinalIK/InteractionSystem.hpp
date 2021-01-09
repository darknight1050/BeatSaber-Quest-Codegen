// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: RootMotion.FinalIK.InteractionTrigger
#include "RootMotion/FinalIK/InteractionTrigger.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedIK
  class FullBodyBipedIK;
  // Forward declaring type: InteractionLookAt
  class InteractionLookAt;
  // Forward declaring type: InteractionEffector
  class InteractionEffector;
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
  // Forward declaring type: InteractionObject
  class InteractionObject;
  // Forward declaring type: InteractionTarget
  class InteractionTarget;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0xF0
  // Autogenerated type: RootMotion.FinalIK.InteractionSystem
  // [] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: DB4C50
  // [AddComponentMenu] Offset: DB4C50
  class InteractionSystem : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: RootMotion::FinalIK::InteractionSystem::InteractionDelegate
    class InteractionDelegate;
    // Nested type: RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate
    class InteractionEventDelegate;
    // [TooltipAttribute] Offset: 0xDB74B8
    // public System.String targetTag
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* targetTag;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB74F0
    // public System.Single fadeInTime
    // Size: 0x4
    // Offset: 0x20
    float fadeInTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB7528
    // public System.Single speed
    // Size: 0x4
    // Offset: 0x24
    float speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xDB7560
    // public System.Single resetToDefaultsSpeed
    // Size: 0x4
    // Offset: 0x28
    float resetToDefaultsSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: resetToDefaultsSpeed and: characterCollider
    char __padding3[0x4] = {};
    // [HeaderAttribute] Offset: 0xDB7598
    // [TooltipAttribute] Offset: 0xDB7598
    // [FormerlySerializedAsAttribute] Offset: 0xDB7598
    // public UnityEngine.Collider characterCollider
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Collider* characterCollider;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB761C
    // [FormerlySerializedAsAttribute] Offset: 0xDB761C
    // public UnityEngine.Transform FPSCamera
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Transform* FPSCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB767C
    // public UnityEngine.LayerMask camRaycastLayers
    // Size: 0x4
    // Offset: 0x40
    UnityEngine::LayerMask camRaycastLayers;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // [TooltipAttribute] Offset: 0xDB76B4
    // public System.Single camRaycastDistance
    // Size: 0x4
    // Offset: 0x44
    float camRaycastDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xDB76EC
    // private System.Collections.Generic.List`1<RootMotion.FinalIK.InteractionTrigger> <triggersInRange>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* triggersInRange;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>*) == 0x8);
    // private System.Collections.Generic.List`1<RootMotion.FinalIK.InteractionTrigger> inContact
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* inContact;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.Int32> bestRangeIndexes
    // Size: 0x8
    // Offset: 0x58
    System::Collections::Generic::List_1<int>* bestRangeIndexes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionStart
    // Size: 0x8
    // Offset: 0x60
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionStart;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*) == 0x8);
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionPause
    // Size: 0x8
    // Offset: 0x68
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionPause;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*) == 0x8);
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionPickUp
    // Size: 0x8
    // Offset: 0x70
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionPickUp;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*) == 0x8);
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionResume
    // Size: 0x8
    // Offset: 0x78
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionResume;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*) == 0x8);
    // public RootMotion.FinalIK.InteractionSystem/InteractionDelegate OnInteractionStop
    // Size: 0x8
    // Offset: 0x80
    RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionStop;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*) == 0x8);
    // public RootMotion.FinalIK.InteractionSystem/InteractionEventDelegate OnInteractionEvent
    // Size: 0x8
    // Offset: 0x88
    RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate* OnInteractionEvent;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate*) == 0x8);
    // public UnityEngine.RaycastHit raycastHit
    // Size: 0x2C
    // Offset: 0x90
    UnityEngine::RaycastHit raycastHit;
    // Field size check
    static_assert(sizeof(UnityEngine::RaycastHit) == 0x2C);
    // Padding between fields: raycastHit and: fullBody
    char __padding17[0x4] = {};
    // [SpaceAttribute] Offset: 0xDB76FC
    // [TooltipAttribute] Offset: 0xDB76FC
    // private RootMotion.FinalIK.FullBodyBipedIK fullBody
    // Size: 0x8
    // Offset: 0xC0
    RootMotion::FinalIK::FullBodyBipedIK* fullBody;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::FullBodyBipedIK*) == 0x8);
    // [TooltipAttribute] Offset: 0xDB775C
    // public RootMotion.FinalIK.InteractionLookAt lookAt
    // Size: 0x8
    // Offset: 0xC8
    RootMotion::FinalIK::InteractionLookAt* lookAt;
    // Field size check
    static_assert(sizeof(RootMotion::FinalIK::InteractionLookAt*) == 0x8);
    // private RootMotion.FinalIK.InteractionEffector[] interactionEffectors
    // Size: 0x8
    // Offset: 0xD0
    ::Array<RootMotion::FinalIK::InteractionEffector*>* interactionEffectors;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::InteractionEffector*>*) == 0x8);
    // private System.Boolean initiated
    // Size: 0x1
    // Offset: 0xD8
    bool initiated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: initiated and: lastCollider
    char __padding21[0x7] = {};
    // private UnityEngine.Collider lastCollider
    // Size: 0x8
    // Offset: 0xE0
    UnityEngine::Collider* lastCollider;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // private UnityEngine.Collider c
    // Size: 0x8
    // Offset: 0xE8
    UnityEngine::Collider* c;
    // Field size check
    static_assert(sizeof(UnityEngine::Collider*) == 0x8);
    // Creating value type constructor for type: InteractionSystem
    InteractionSystem(::Il2CppString* targetTag_ = {}, float fadeInTime_ = {}, float speed_ = {}, float resetToDefaultsSpeed_ = {}, UnityEngine::Collider* characterCollider_ = {}, UnityEngine::Transform* FPSCamera_ = {}, UnityEngine::LayerMask camRaycastLayers_ = {}, float camRaycastDistance_ = {}, System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* triggersInRange_ = {}, System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* inContact_ = {}, System::Collections::Generic::List_1<int>* bestRangeIndexes_ = {}, RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionStart_ = {}, RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionPause_ = {}, RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionPickUp_ = {}, RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionResume_ = {}, RootMotion::FinalIK::InteractionSystem::InteractionDelegate* OnInteractionStop_ = {}, RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate* OnInteractionEvent_ = {}, UnityEngine::RaycastHit raycastHit_ = {}, RootMotion::FinalIK::FullBodyBipedIK* fullBody_ = {}, RootMotion::FinalIK::InteractionLookAt* lookAt_ = {}, ::Array<RootMotion::FinalIK::InteractionEffector*>* interactionEffectors_ = {}, bool initiated_ = {}, UnityEngine::Collider* lastCollider_ = {}, UnityEngine::Collider* c_ = {}) noexcept : targetTag{targetTag_}, fadeInTime{fadeInTime_}, speed{speed_}, resetToDefaultsSpeed{resetToDefaultsSpeed_}, characterCollider{characterCollider_}, FPSCamera{FPSCamera_}, camRaycastLayers{camRaycastLayers_}, camRaycastDistance{camRaycastDistance_}, triggersInRange{triggersInRange_}, inContact{inContact_}, bestRangeIndexes{bestRangeIndexes_}, OnInteractionStart{OnInteractionStart_}, OnInteractionPause{OnInteractionPause_}, OnInteractionPickUp{OnInteractionPickUp_}, OnInteractionResume{OnInteractionResume_}, OnInteractionStop{OnInteractionStop_}, OnInteractionEvent{OnInteractionEvent_}, raycastHit{raycastHit_}, fullBody{fullBody_}, lookAt{lookAt_}, interactionEffectors{interactionEffectors_}, initiated{initiated_}, lastCollider{lastCollider_}, c{c_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void OpenUserManual()
    // Offset: 0x17EBEEC
    void OpenUserManual();
    // private System.Void OpenScriptReference()
    // Offset: 0x17EBF38
    void OpenScriptReference();
    // private System.Void OpenTutorial1()
    // Offset: 0x17EBF84
    void OpenTutorial1();
    // private System.Void OpenTutorial2()
    // Offset: 0x17EBFD0
    void OpenTutorial2();
    // private System.Void OpenTutorial3()
    // Offset: 0x17EC01C
    void OpenTutorial3();
    // private System.Void OpenTutorial4()
    // Offset: 0x17EC068
    void OpenTutorial4();
    // private System.Void SupportGroup()
    // Offset: 0x17EC0B4
    void SupportGroup();
    // private System.Void ASThread()
    // Offset: 0x17EC100
    void ASThread();
    // public System.Boolean get_inInteraction()
    // Offset: 0x17EC14C
    bool get_inInteraction();
    // public System.Boolean IsInInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x17EC2DC
    bool IsInInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Boolean IsPaused(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x17EC3A8
    bool IsPaused(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Boolean IsPaused()
    // Offset: 0x17EC474
    bool IsPaused();
    // public System.Boolean IsInSync()
    // Offset: 0x17EC520
    bool IsInSync();
    // public System.Boolean StartInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject, System.Boolean interrupt)
    // Offset: 0x17EC618
    bool StartInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject, bool interrupt);
    // public System.Boolean PauseInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x17EC734
    bool PauseInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Boolean ResumeInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x17EC7C4
    bool ResumeInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Boolean StopInteraction(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x17EC854
    bool StopInteraction(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Void PauseAll()
    // Offset: 0x17EC8E4
    void PauseAll();
    // public System.Void ResumeAll()
    // Offset: 0x17EC958
    void ResumeAll();
    // public System.Void StopAll()
    // Offset: 0x17EC9CC
    void StopAll();
    // public RootMotion.FinalIK.InteractionObject GetInteractionObject(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x17ECA34
    RootMotion::FinalIK::InteractionObject* GetInteractionObject(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Single GetProgress(RootMotion.FinalIK.FullBodyBipedEffector effectorType)
    // Offset: 0x17ECAC0
    float GetProgress(RootMotion::FinalIK::FullBodyBipedEffector effectorType);
    // public System.Single GetMinActiveProgress()
    // Offset: 0x17ECB74
    float GetMinActiveProgress();
    // public System.Boolean TriggerInteraction(System.Int32 index, System.Boolean interrupt)
    // Offset: 0x17ECC58
    bool TriggerInteraction(int index, bool interrupt);
    // public System.Boolean TriggerInteraction(System.Int32 index, System.Boolean interrupt, out RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x17ECEFC
    bool TriggerInteraction(int index, bool interrupt, RootMotion::FinalIK::InteractionObject*& interactionObject);
    // public System.Boolean TriggerInteraction(System.Int32 index, System.Boolean interrupt, out RootMotion.FinalIK.InteractionTarget interactionTarget)
    // Offset: 0x17ED0EC
    bool TriggerInteraction(int index, bool interrupt, RootMotion::FinalIK::InteractionTarget*& interactionTarget);
    // public RootMotion.FinalIK.InteractionTrigger/Range GetClosestInteractionRange()
    // Offset: 0x17ED370
    RootMotion::FinalIK::InteractionTrigger::Range* GetClosestInteractionRange();
    // public RootMotion.FinalIK.InteractionObject GetClosestInteractionObjectInRange()
    // Offset: 0x17ED664
    RootMotion::FinalIK::InteractionObject* GetClosestInteractionObjectInRange();
    // public RootMotion.FinalIK.InteractionTarget GetClosestInteractionTargetInRange()
    // Offset: 0x17ED6A8
    RootMotion::FinalIK::InteractionTarget* GetClosestInteractionTargetInRange();
    // public RootMotion.FinalIK.InteractionObject[] GetClosestInteractionObjectsInRange()
    // Offset: 0x17ED720
    ::Array<RootMotion::FinalIK::InteractionObject*>* GetClosestInteractionObjectsInRange();
    // public RootMotion.FinalIK.InteractionTarget[] GetClosestInteractionTargetsInRange()
    // Offset: 0x17ED858
    ::Array<RootMotion::FinalIK::InteractionTarget*>* GetClosestInteractionTargetsInRange();
    // public System.Boolean TriggerEffectorsReady(System.Int32 index)
    // Offset: 0x17ED9D0
    bool TriggerEffectorsReady(int index);
    // public RootMotion.FinalIK.InteractionTrigger/Range GetTriggerRange(System.Int32 index)
    // Offset: 0x17EDC78
    RootMotion::FinalIK::InteractionTrigger::Range* GetTriggerRange(int index);
    // public System.Int32 GetClosestTriggerIndex()
    // Offset: 0x17ED470
    int GetClosestTriggerIndex();
    // public RootMotion.FinalIK.FullBodyBipedIK get_ik()
    // Offset: 0x17EDDA4
    RootMotion::FinalIK::FullBodyBipedIK* get_ik();
    // public System.Void set_ik(RootMotion.FinalIK.FullBodyBipedIK value)
    // Offset: 0x17EDDAC
    void set_ik(RootMotion::FinalIK::FullBodyBipedIK* value);
    // public System.Collections.Generic.List`1<RootMotion.FinalIK.InteractionTrigger> get_triggersInRange()
    // Offset: 0x17EDDB4
    System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* get_triggersInRange();
    // private System.Void set_triggersInRange(System.Collections.Generic.List`1<RootMotion.FinalIK.InteractionTrigger> value)
    // Offset: 0x17EDDBC
    void set_triggersInRange(System::Collections::Generic::List_1<RootMotion::FinalIK::InteractionTrigger*>* value);
    // public System.Void Start()
    // Offset: 0x17EDDC4
    void Start();
    // private System.Void InteractionPause(RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x17EE578
    void InteractionPause(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject* interactionObject);
    // private System.Void InteractionResume(RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x17EE598
    void InteractionResume(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject* interactionObject);
    // private System.Void InteractionStop(RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x17EE5B4
    void InteractionStop(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject* interactionObject);
    // private System.Void LookAtInteraction(RootMotion.FinalIK.FullBodyBipedEffector effector, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x17EE5D0
    void LookAtInteraction(RootMotion::FinalIK::FullBodyBipedEffector effector, RootMotion::FinalIK::InteractionObject* interactionObject);
    // public System.Void OnTriggerEnter(UnityEngine.Collider c)
    // Offset: 0x17EE630
    void OnTriggerEnter(UnityEngine::Collider* c);
    // public System.Void OnTriggerExit(UnityEngine.Collider c)
    // Offset: 0x17EE74C
    void OnTriggerExit(UnityEngine::Collider* c);
    // private System.Boolean ContactIsInRange(System.Int32 index, out System.Int32 bestRangeIndex)
    // Offset: 0x17EE848
    bool ContactIsInRange(int index, int& bestRangeIndex);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x17EE9F0
    void OnDrawGizmosSelected();
    // public System.Void Update()
    // Offset: 0x17EEB08
    void Update();
    // private System.Void Raycasting()
    // Offset: 0x17EED54
    void Raycasting();
    // private System.Void UpdateTriggerEventBroadcasting()
    // Offset: 0x17EE2D8
    void UpdateTriggerEventBroadcasting();
    // private System.Void UpdateEffectors()
    // Offset: 0x17EEE94
    void UpdateEffectors();
    // private System.Void OnPreFBBIK()
    // Offset: 0x17EEFC0
    void OnPreFBBIK();
    // private System.Void OnPostFBBIK()
    // Offset: 0x17EF058
    void OnPostFBBIK();
    // private System.Void OnFixTransforms()
    // Offset: 0x17EF130
    void OnFixTransforms();
    // private System.Void OnDestroy()
    // Offset: 0x17EF148
    void OnDestroy();
    // private System.Boolean IsValid(System.Boolean log)
    // Offset: 0x17EC1F8
    bool IsValid(bool log);
    // private System.Boolean TriggerIndexIsValid(System.Int32 index)
    // Offset: 0x17ECDF8
    bool TriggerIndexIsValid(int index);
    // public System.Void .ctor()
    // Offset: 0x17EF50C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionSystem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionSystem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionSystem*, creationType>()));
    }
  }; // RootMotion.FinalIK.InteractionSystem
  static check_size<sizeof(InteractionSystem), 232 + sizeof(UnityEngine::Collider*)> __RootMotion_FinalIK_InteractionSystemSizeCheck;
  static_assert(sizeof(InteractionSystem) == 0xF0);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionSystem*, "RootMotion.FinalIK", "InteractionSystem");
#pragma pack(pop)
