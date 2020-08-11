// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: RootMotion.FinalIK.IKSolverVR
#include "RootMotion/FinalIK/IKSolverVR.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Skipping declaration: VRIK because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.VRIKCalibrator
  class VRIKCalibrator : public ::CsObject {
    public:
    // Nested type: RootMotion::FinalIK::VRIKCalibrator::Settings
    class Settings;
    // Nested type: RootMotion::FinalIK::VRIKCalibrator::CalibrationData
    class CalibrationData;
    // static public System.Void RecalibrateScale(RootMotion.FinalIK.VRIK ik, RootMotion.FinalIK.VRIKCalibrator/Settings settings)
    // Offset: 0x1225154
    static void RecalibrateScale(RootMotion::FinalIK::VRIK* ik, RootMotion::FinalIK::VRIKCalibrator::Settings* settings);
    // static public RootMotion.FinalIK.VRIKCalibrator/CalibrationData Calibrate(RootMotion.FinalIK.VRIK ik, RootMotion.FinalIK.VRIKCalibrator/Settings settings, UnityEngine.Transform headTracker, UnityEngine.Transform bodyTracker, UnityEngine.Transform leftHandTracker, UnityEngine.Transform rightHandTracker, UnityEngine.Transform leftFootTracker, UnityEngine.Transform rightFootTracker)
    // Offset: 0x12252BC
    static RootMotion::FinalIK::VRIKCalibrator::CalibrationData* Calibrate(RootMotion::FinalIK::VRIK* ik, RootMotion::FinalIK::VRIKCalibrator::Settings* settings, UnityEngine::Transform* headTracker, UnityEngine::Transform* bodyTracker, UnityEngine::Transform* leftHandTracker, UnityEngine::Transform* rightHandTracker, UnityEngine::Transform* leftFootTracker, UnityEngine::Transform* rightFootTracker);
    // static private System.Void CalibrateLeg(RootMotion.FinalIK.VRIKCalibrator/Settings settings, UnityEngine.Transform tracker, RootMotion.FinalIK.IKSolverVR/Leg leg, UnityEngine.Transform lastBone, UnityEngine.Vector3 rootForward, System.Boolean isLeft)
    // Offset: 0x122678C
    static void CalibrateLeg(RootMotion::FinalIK::VRIKCalibrator::Settings* settings, UnityEngine::Transform* tracker, RootMotion::FinalIK::IKSolverVR::Leg* leg, UnityEngine::Transform* lastBone, UnityEngine::Vector3 rootForward, bool isLeft);
    // static public System.Void Calibrate(RootMotion.FinalIK.VRIK ik, RootMotion.FinalIK.VRIKCalibrator/CalibrationData data, UnityEngine.Transform headTracker, UnityEngine.Transform bodyTracker, UnityEngine.Transform leftHandTracker, UnityEngine.Transform rightHandTracker, UnityEngine.Transform leftFootTracker, UnityEngine.Transform rightFootTracker)
    // Offset: 0x1227294
    static void Calibrate(RootMotion::FinalIK::VRIK* ik, RootMotion::FinalIK::VRIKCalibrator::CalibrationData* data, UnityEngine::Transform* headTracker, UnityEngine::Transform* bodyTracker, UnityEngine::Transform* leftHandTracker, UnityEngine::Transform* rightHandTracker, UnityEngine::Transform* leftFootTracker, UnityEngine::Transform* rightFootTracker);
    // static private System.Void CalibrateLeg(RootMotion.FinalIK.VRIKCalibrator/CalibrationData data, UnityEngine.Transform tracker, RootMotion.FinalIK.IKSolverVR/Leg leg, UnityEngine.Transform lastBone, UnityEngine.Vector3 rootForward, System.Boolean isLeft)
    // Offset: 0x1227DA4
    static void CalibrateLeg(RootMotion::FinalIK::VRIKCalibrator::CalibrationData* data, UnityEngine::Transform* tracker, RootMotion::FinalIK::IKSolverVR::Leg* leg, UnityEngine::Transform* lastBone, UnityEngine::Vector3 rootForward, bool isLeft);
  }; // RootMotion.FinalIK.VRIKCalibrator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::VRIKCalibrator*, "RootMotion.FinalIK", "VRIKCalibrator");
#pragma pack(pop)
