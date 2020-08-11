// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.IKMappingSpine
#include "RootMotion/FinalIK/IKMappingSpine.hpp"
// Including type: UnityEngine.Transform
#include "UnityEngine/Transform.hpp"
// Including type: RootMotion.FinalIK.IKSolverFullBody
#include "RootMotion/FinalIK/IKSolverFullBody.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: RootMotion.FinalIK.IKSolver
#include "RootMotion/FinalIK/IKSolver.hpp"
// Including type: RootMotion.FinalIK.IKMapping/BoneMap
#include "RootMotion/FinalIK/IKMapping_BoneMap.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine..ctor
RootMotion::FinalIK::IKMappingSpine* RootMotion::FinalIK::IKMappingSpine::New_ctor(::Array<UnityEngine::Transform*>* spineBones, UnityEngine::Transform* leftUpperArmBone, UnityEngine::Transform* rightUpperArmBone, UnityEngine::Transform* leftThighBone, UnityEngine::Transform* rightThighBone) {
  return (IKMappingSpine*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKMappingSpine", spineBones, leftUpperArmBone, rightUpperArmBone, leftThighBone, rightThighBone));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.SetBones
void RootMotion::FinalIK::IKMappingSpine::SetBones(::Array<UnityEngine::Transform*>* spineBones, UnityEngine::Transform* leftUpperArmBone, UnityEngine::Transform* rightUpperArmBone, UnityEngine::Transform* leftThighBone, UnityEngine::Transform* rightThighBone) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetBones", spineBones, leftUpperArmBone, rightUpperArmBone, leftThighBone, rightThighBone));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.StoreDefaultLocalState
void RootMotion::FinalIK::IKMappingSpine::StoreDefaultLocalState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StoreDefaultLocalState"));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.FixTransforms
void RootMotion::FinalIK::IKMappingSpine::FixTransforms() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "FixTransforms"));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.UseFABRIK
bool RootMotion::FinalIK::IKMappingSpine::UseFABRIK() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "UseFABRIK"));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.ReadPose
void RootMotion::FinalIK::IKMappingSpine::ReadPose() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReadPose"));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.WritePose
void RootMotion::FinalIK::IKMappingSpine::WritePose(RootMotion::FinalIK::IKSolverFullBody* solver) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "WritePose", solver));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.ForwardReach
void RootMotion::FinalIK::IKMappingSpine::ForwardReach(UnityEngine::Vector3 position) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ForwardReach", position));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.BackwardReach
void RootMotion::FinalIK::IKMappingSpine::BackwardReach(UnityEngine::Vector3 position) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "BackwardReach", position));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.MapToSolverPositions
void RootMotion::FinalIK::IKMappingSpine::MapToSolverPositions(RootMotion::FinalIK::IKSolverFullBody* solver) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MapToSolverPositions", solver));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.IsValid
bool RootMotion::FinalIK::IKMappingSpine::IsValid(RootMotion::FinalIK::IKSolver* solver, ::CsString*& message) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValid", solver, message));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine..ctor
RootMotion::FinalIK::IKMappingSpine* RootMotion::FinalIK::IKMappingSpine::New_ctor() {
  return (IKMappingSpine*)THROW_UNLESS(il2cpp_utils::New("RootMotion.FinalIK", "IKMappingSpine"));
}
// Autogenerated method: RootMotion.FinalIK.IKMappingSpine.Initiate
void RootMotion::FinalIK::IKMappingSpine::Initiate(RootMotion::FinalIK::IKSolverFullBody* solver) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Initiate", solver));
}
