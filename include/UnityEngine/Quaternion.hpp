// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Quaternion
  struct Quaternion : public System::ValueType, public System::IEquatable_1<UnityEngine::Quaternion> {
    public:
    // public System.Single x
    // Offset: 0x0
    float x;
    // public System.Single y
    // Offset: 0x4
    float y;
    // public System.Single z
    // Offset: 0x8
    float z;
    // public System.Single w
    // Offset: 0xC
    float w;
    // Get static field: static private readonly UnityEngine.Quaternion identityQuaternion
    static UnityEngine::Quaternion _get_identityQuaternion();
    // Set static field: static private readonly UnityEngine.Quaternion identityQuaternion
    static void _set_identityQuaternion(UnityEngine::Quaternion value);
    // static field const value: static public System.Single kEpsilon
    static constexpr const float kEpsilon = 1e-06;
    // Get static field: static public System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static public System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // Creating value type constructor for type: Quaternion
    Quaternion(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) : x{x_}, y{y_}, z{z_}, w{w_} {}
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection)
    // Offset: 0x140513C
    static UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection);
    // static public UnityEngine.Quaternion Inverse(UnityEngine.Quaternion rotation)
    // Offset: 0x1405244
    static UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1405338
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion SlerpUnclamped(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1405460
    static UnityEngine::Quaternion SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1405588
    static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static private UnityEngine.Quaternion Internal_FromEulerRad(UnityEngine.Vector3 euler)
    // Offset: 0x14056B0
    static UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler);
    // static private UnityEngine.Vector3 Internal_ToEulerRad(UnityEngine.Quaternion rotation)
    // Offset: 0x14057A4
    static UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation);
    // static private System.Void Internal_ToAxisAngleRad(UnityEngine.Quaternion q, UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x140589C
    static void Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, float& angle);
    // static public UnityEngine.Quaternion AngleAxis(System.Single angle, UnityEngine.Vector3 axis)
    // Offset: 0x14059A0
    static UnityEngine::Quaternion AngleAxis(float angle, UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards)
    // Offset: 0x1405AB4
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward)
    // Offset: 0x1405BBC
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0xA454C8
    static Quaternion* New_ctor(float x, float y, float z, float w);
    // static public UnityEngine.Quaternion get_identity()
    // Offset: 0x1405C94
    static UnityEngine::Quaternion get_identity();
    // static private System.Boolean IsEqualUsingDot(System.Single dot)
    // Offset: 0x1405E18
    static bool IsEqualUsingDot(float dot);
    // static public System.Single Dot(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x1405EF4
    static float Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view)
    // Offset: 0xA454D4
    void SetLookRotation(UnityEngine::Vector3 view);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view, UnityEngine.Vector3 up)
    // Offset: 0xA454DC
    void SetLookRotation(UnityEngine::Vector3 view, UnityEngine::Vector3 up);
    // static public System.Single Angle(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x1406130
    static float Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // static private UnityEngine.Vector3 Internal_MakePositive(UnityEngine.Vector3 euler)
    // Offset: 0x140623C
    static UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler);
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0xA454E4
    UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0xA454EC
    void set_eulerAngles(UnityEngine::Vector3 value);
    // static public UnityEngine.Quaternion Euler(System.Single x, System.Single y, System.Single z)
    // Offset: 0x1406488
    static UnityEngine::Quaternion Euler(float x, float y, float z);
    // static public UnityEngine.Quaternion Euler(UnityEngine.Vector3 euler)
    // Offset: 0x140657C
    static UnityEngine::Quaternion Euler(UnityEngine::Vector3 euler);
    // public System.Void ToAngleAxis(System.Single angle, UnityEngine.Vector3 axis)
    // Offset: 0xA454F4
    void ToAngleAxis(float& angle, UnityEngine::Vector3& axis);
    // static public UnityEngine.Quaternion RotateTowards(UnityEngine.Quaternion from, UnityEngine.Quaternion to, System.Single maxDegreesDelta)
    // Offset: 0x1406700
    static UnityEngine::Quaternion RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, float maxDegreesDelta);
    // static public UnityEngine.Quaternion Normalize(UnityEngine.Quaternion q)
    // Offset: 0x1406868
    static UnityEngine::Quaternion Normalize(UnityEngine::Quaternion q);
    // static private System.Void .cctor()
    // Offset: 0x1406CE0
    static void _cctor();
    // static private System.Void FromToRotation_Injected(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection, UnityEngine.Quaternion ret)
    // Offset: 0x14051EC
    static void FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret);
    // static private System.Void Inverse_Injected(UnityEngine.Quaternion rotation, UnityEngine.Quaternion ret)
    // Offset: 0x14052E8
    static void Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret);
    // static private System.Void Slerp_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, UnityEngine.Quaternion ret)
    // Offset: 0x14053F8
    static void Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void SlerpUnclamped_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, UnityEngine.Quaternion ret)
    // Offset: 0x1405520
    static void SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Lerp_Injected(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t, UnityEngine.Quaternion ret)
    // Offset: 0x1405648
    static void Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_FromEulerRad_Injected(UnityEngine.Vector3 euler, UnityEngine.Quaternion ret)
    // Offset: 0x1405754
    static void Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_ToEulerRad_Injected(UnityEngine.Quaternion rotation, UnityEngine.Vector3 ret)
    // Offset: 0x140584C
    static void Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret);
    // static private System.Void Internal_ToAxisAngleRad_Injected(UnityEngine.Quaternion q, UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x1405948
    static void Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, float& angle);
    // static private System.Void AngleAxis_Injected(System.Single angle, UnityEngine.Vector3 axis, UnityEngine.Quaternion ret)
    // Offset: 0x1405A54
    static void AngleAxis_Injected(float angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret);
    // static private System.Void LookRotation_Injected(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards, UnityEngine.Quaternion ret)
    // Offset: 0x1405B64
    static void LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xA454FC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xA45504
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::CsObject* other);
    // public System.Boolean Equals(UnityEngine.Quaternion other)
    // Offset: 0xA4550C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(UnityEngine.Quaternion other)
    bool Equals(UnityEngine::Quaternion other);
    // public override System.String ToString()
    // Offset: 0xA45514
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::CsString* ToString();
  }; // UnityEngine.Quaternion
  // static public UnityEngine.Quaternion op_Multiply(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1405D00
  UnityEngine::Quaternion operator*(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.Vector3 point)
  // Offset: 0x1405D74
  UnityEngine::Vector3 operator*(const UnityEngine::Quaternion& rotation, const UnityEngine::Vector3& point);
  // static public System.Boolean op_Equality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1405E2C
  bool operator ==(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1405F14
  bool operator !=(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Quaternion, "UnityEngine", "Quaternion");
#pragma pack(pop)
