// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverTrigonometric
#include "RootMotion/FinalIK/IKSolverTrigonometric.hpp"
// Including type: RootMotion.FinalIK.IKSolverTrigonometric/TrigonometricBone
#include "RootMotion/FinalIK/IKSolverTrigonometric_TrigonometricBone.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.SetBendGoalPosition
void RootMotion::FinalIK::IKSolverTrigonometric::SetBendGoalPosition(UnityEngine::Vector3 goalPosition, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetBendGoalPosition", goalPosition, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.SetBendPlaneToCurrent
void RootMotion::FinalIK::IKSolverTrigonometric::SetBendPlaneToCurrent() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetBendPlaneToCurrent"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.SetIKRotation
void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotation(UnityEngine::Quaternion rotation) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIKRotation", rotation));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.SetIKRotationWeight
void RootMotion::FinalIK::IKSolverTrigonometric::SetIKRotationWeight(float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetIKRotationWeight", weight));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.GetIKRotation
UnityEngine::Quaternion RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotation() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Quaternion>(this, "GetIKRotation"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.GetIKRotationWeight
float RootMotion::FinalIK::IKSolverTrigonometric::GetIKRotationWeight() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "GetIKRotationWeight"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.SetChain
bool RootMotion::FinalIK::IKSolverTrigonometric::SetChain(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, UnityEngine::Transform* root) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "SetChain", bone1, bone2, bone3, root));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.Solve
void RootMotion::FinalIK::IKSolverTrigonometric::Solve(UnityEngine::Transform* bone1, UnityEngine::Transform* bone2, UnityEngine::Transform* bone3, UnityEngine::Vector3 targetPosition, UnityEngine::Vector3 bendNormal, float weight) {
  THROW_UNLESS(il2cpp_utils::RunMethod("RootMotion.FinalIK", "IKSolverTrigonometric", "Solve", bone1, bone2, bone3, targetPosition, bendNormal, weight));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.GetDirectionToBendPoint
UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetDirectionToBendPoint(UnityEngine::Vector3 direction, float directionMag, UnityEngine::Vector3 bendDirection, float sqrMag1, float sqrMag2) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>("RootMotion.FinalIK", "IKSolverTrigonometric", "GetDirectionToBendPoint", direction, directionMag, bendDirection, sqrMag1, sqrMag2));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.IsDirectHierarchy
bool RootMotion::FinalIK::IKSolverTrigonometric::IsDirectHierarchy() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsDirectHierarchy"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.InitiateBones
void RootMotion::FinalIK::IKSolverTrigonometric::InitiateBones() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "InitiateBones"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.OnInitiateVirtual
void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiateVirtual() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnInitiateVirtual"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.OnUpdateVirtual
void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdateVirtual() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnUpdateVirtual"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.OnPostSolveVirtual
void RootMotion::FinalIK::IKSolverTrigonometric::OnPostSolveVirtual() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnPostSolveVirtual"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.GetBendDirection
UnityEngine::Vector3 RootMotion::FinalIK::IKSolverTrigonometric::GetBendDirection(UnityEngine::Vector3 IKPosition, UnityEngine::Vector3 bendNormal) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetBendDirection", IKPosition, bendNormal));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.GetPoints
::Array<RootMotion::FinalIK::IKSolver::Point*>* RootMotion::FinalIK::IKSolverTrigonometric::GetPoints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<RootMotion::FinalIK::IKSolver::Point*>*>(this, "GetPoints"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.GetPoint
RootMotion::FinalIK::IKSolver::Point* RootMotion::FinalIK::IKSolverTrigonometric::GetPoint(UnityEngine::Transform* transform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolver::Point*>(this, "GetPoint", transform));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.StoreDefaultLocalState
void RootMotion::FinalIK::IKSolverTrigonometric::StoreDefaultLocalState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreDefaultLocalState"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.FixTransforms
void RootMotion::FinalIK::IKSolverTrigonometric::FixTransforms() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTransforms"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.IsValid
bool RootMotion::FinalIK::IKSolverTrigonometric::IsValid(::CsString*& message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid", message));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.OnInitiate
void RootMotion::FinalIK::IKSolverTrigonometric::OnInitiate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnInitiate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric.OnUpdate
void RootMotion::FinalIK::IKSolverTrigonometric::OnUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnUpdate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverTrigonometric..ctor
RootMotion::FinalIK::IKSolverTrigonometric* RootMotion::FinalIK::IKSolverTrigonometric::New_ctor() {
  return (IKSolverTrigonometric*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolverTrigonometric"));
}
