// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverFABRIKRoot
#include "RootMotion/FinalIK/IKSolverFABRIKRoot.hpp"
// Including type: RootMotion.FinalIK.FABRIKChain
#include "RootMotion/FinalIK/FABRIKChain.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.IsRoot
bool RootMotion::FinalIK::IKSolverFABRIKRoot::IsRoot(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsRoot", index));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.AddPointsToArray
void RootMotion::FinalIK::IKSolverFABRIKRoot::AddPointsToArray(::Array<RootMotion::FinalIK::IKSolver::Point*>*& array, RootMotion::FinalIK::FABRIKChain* chain) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddPointsToArray", array, chain));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.GetCentroid
UnityEngine::Vector3 RootMotion::FinalIK::IKSolverFABRIKRoot::GetCentroid() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Vector3>(this, "GetCentroid"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.IsValid
bool RootMotion::FinalIK::IKSolverFABRIKRoot::IsValid(::CsString*& message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid", message));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.StoreDefaultLocalState
void RootMotion::FinalIK::IKSolverFABRIKRoot::StoreDefaultLocalState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreDefaultLocalState"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.FixTransforms
void RootMotion::FinalIK::IKSolverFABRIKRoot::FixTransforms() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTransforms"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.OnInitiate
void RootMotion::FinalIK::IKSolverFABRIKRoot::OnInitiate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnInitiate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.OnUpdate
void RootMotion::FinalIK::IKSolverFABRIKRoot::OnUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnUpdate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.GetPoints
::Array<RootMotion::FinalIK::IKSolver::Point*>* RootMotion::FinalIK::IKSolverFABRIKRoot::GetPoints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<RootMotion::FinalIK::IKSolver::Point*>*>(this, "GetPoints"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot.GetPoint
RootMotion::FinalIK::IKSolver::Point* RootMotion::FinalIK::IKSolverFABRIKRoot::GetPoint(UnityEngine::Transform* transform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolver::Point*>(this, "GetPoint", transform));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFABRIKRoot..ctor
RootMotion::FinalIK::IKSolverFABRIKRoot* RootMotion::FinalIK::IKSolverFABRIKRoot::New_ctor() {
  return (IKSolverFABRIKRoot*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolverFABRIKRoot"));
}
