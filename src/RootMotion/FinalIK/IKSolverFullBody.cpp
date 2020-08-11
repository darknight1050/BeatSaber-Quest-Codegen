// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKSolverFullBody
#include "RootMotion/FinalIK/IKSolverFullBody.hpp"
// Including type: RootMotion.FinalIK.FBIKChain
#include "RootMotion/FinalIK/FBIKChain.hpp"
// Including type: RootMotion.FinalIK.IKEffector
#include "RootMotion/FinalIK/IKEffector.hpp"
// Including type: RootMotion.FinalIK.IKMappingSpine
#include "RootMotion/FinalIK/IKMappingSpine.hpp"
// Including type: RootMotion.FinalIK.IKMappingBone
#include "RootMotion/FinalIK/IKMappingBone.hpp"
// Including type: RootMotion.FinalIK.IKMappingLimb
#include "RootMotion/FinalIK/IKMappingLimb.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: RootMotion.FinalIK.IKSolver/UpdateDelegate
#include "RootMotion/FinalIK/IKSolver_UpdateDelegate.hpp"
// Including type: RootMotion.FinalIK.IKSolver/IterationDelegate
#include "RootMotion/FinalIK/IKSolver_IterationDelegate.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Node
#include "RootMotion/FinalIK/IKSolver_Node.hpp"
// Including type: RootMotion.FinalIK.IKSolver/Point
#include "RootMotion/FinalIK/IKSolver_Point.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.GetEffector
RootMotion::FinalIK::IKEffector* RootMotion::FinalIK::IKSolverFullBody::GetEffector(UnityEngine::Transform* t) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKEffector*>(this, "GetEffector", t));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.GetChain
RootMotion::FinalIK::FBIKChain* RootMotion::FinalIK::IKSolverFullBody::GetChain(UnityEngine::Transform* transform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::FBIKChain*>(this, "GetChain", transform));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.GetChainIndex
int RootMotion::FinalIK::IKSolverFullBody::GetChainIndex(UnityEngine::Transform* transform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetChainIndex", transform));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.GetNode
RootMotion::FinalIK::IKSolver::Node* RootMotion::FinalIK::IKSolverFullBody::GetNode(int chainIndex, int nodeIndex) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolver::Node*>(this, "GetNode", chainIndex, nodeIndex));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.GetChainAndNodeIndexes
void RootMotion::FinalIK::IKSolverFullBody::GetChainAndNodeIndexes(UnityEngine::Transform* transform, int& chainIndex, int& nodeIndex) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetChainAndNodeIndexes", transform, chainIndex, nodeIndex));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.ReadPose
void RootMotion::FinalIK::IKSolverFullBody::ReadPose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadPose"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.Solve
void RootMotion::FinalIK::IKSolverFullBody::Solve() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Solve"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.ApplyBendConstraints
void RootMotion::FinalIK::IKSolverFullBody::ApplyBendConstraints() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ApplyBendConstraints"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.WritePose
void RootMotion::FinalIK::IKSolverFullBody::WritePose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WritePose"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.GetPoints
::Array<RootMotion::FinalIK::IKSolver::Point*>* RootMotion::FinalIK::IKSolverFullBody::GetPoints() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<RootMotion::FinalIK::IKSolver::Point*>*>(this, "GetPoints"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.GetPoint
RootMotion::FinalIK::IKSolver::Point* RootMotion::FinalIK::IKSolverFullBody::GetPoint(UnityEngine::Transform* transform) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<RootMotion::FinalIK::IKSolver::Point*>(this, "GetPoint", transform));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.IsValid
bool RootMotion::FinalIK::IKSolverFullBody::IsValid(::CsString*& message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid", message));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.StoreDefaultLocalState
void RootMotion::FinalIK::IKSolverFullBody::StoreDefaultLocalState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreDefaultLocalState"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.FixTransforms
void RootMotion::FinalIK::IKSolverFullBody::FixTransforms() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTransforms"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.OnInitiate
void RootMotion::FinalIK::IKSolverFullBody::OnInitiate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnInitiate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody.OnUpdate
void RootMotion::FinalIK::IKSolverFullBody::OnUpdate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnUpdate"));
}
// Autogenerated method: RootMotion.FinalIK.IKSolverFullBody..ctor
RootMotion::FinalIK::IKSolverFullBody* RootMotion::FinalIK::IKSolverFullBody::New_ctor() {
  return (IKSolverFullBody*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKSolverFullBody"));
}
