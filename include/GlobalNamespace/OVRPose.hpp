// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPose
  struct OVRPose : public System::ValueType {
    public:
    // public UnityEngine.Vector3 position
    // Offset: 0x0
    UnityEngine::Vector3 position;
    // public UnityEngine.Quaternion orientation
    // Offset: 0xC
    UnityEngine::Quaternion orientation;
    // Creating value type constructor for type: OVRPose
    OVRPose(UnityEngine::Vector3 position_ = {}, UnityEngine::Quaternion orientation_ = {}) : position{position_}, orientation{orientation_} {}
    // static public OVRPose get_identity()
    // Offset: 0xEA6978
    static GlobalNamespace::OVRPose get_identity();
    // public OVRPose Inverse()
    // Offset: 0x9A11DC
    GlobalNamespace::OVRPose Inverse();
    // public OVRPose flipZ()
    // Offset: 0x9A11E4
    GlobalNamespace::OVRPose flipZ();
    // public OVRPlugin/Posef ToPosef_Legacy()
    // Offset: 0x9A1210
    GlobalNamespace::OVRPlugin::Posef ToPosef_Legacy();
    // public OVRPlugin/Posef ToPosef()
    // Offset: 0x9A1218
    GlobalNamespace::OVRPlugin::Posef ToPosef();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x9A1198
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x9A11A0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // OVRPose
  // static public System.Boolean op_Equality(OVRPose x, OVRPose y)
  // Offset: 0xEA6AE4
  bool operator ==(const GlobalNamespace::OVRPose& x, const GlobalNamespace::OVRPose& y);
  // static public System.Boolean op_Inequality(OVRPose x, OVRPose y)
  // Offset: 0xEA6C54
  bool operator !=(const GlobalNamespace::OVRPose& x, const GlobalNamespace::OVRPose& y);
  // static public OVRPose op_Multiply(OVRPose lhs, OVRPose rhs)
  // Offset: 0xEA6CA0
  GlobalNamespace::OVRPose operator*(const GlobalNamespace::OVRPose& lhs, const GlobalNamespace::OVRPose& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPose, "", "OVRPose");
#pragma pack(pop)
