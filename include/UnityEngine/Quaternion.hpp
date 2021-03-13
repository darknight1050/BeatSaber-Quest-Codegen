// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Quaternion
  // [] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: CA7C0C
  // [UsedByNativeCodeAttribute] Offset: CA7C0C
  // [NativeHeaderAttribute] Offset: CA7C0C
  // [DefaultMemberAttribute] Offset: CA7C0C
  struct Quaternion/*, public System::ValueType, public System::IEquatable_1<UnityEngine::Quaternion>*/ {
    public:
    // public System.Single x
    // Size: 0x4
    // Offset: 0x0
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x4
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x8
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single w
    // Size: 0x4
    // Offset: 0xC
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Quaternion
    constexpr Quaternion(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) noexcept : x{x_}, y{y_}, z{z_}, w{w_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Quaternion>
    operator System::IEquatable_1<UnityEngine::Quaternion>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Quaternion>*>(this);
    }
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
    // static public UnityEngine.Quaternion FromToRotation(UnityEngine.Vector3 fromDirection, UnityEngine.Vector3 toDirection)
    // Offset: 0x1A7DA38
    static UnityEngine::Quaternion FromToRotation(UnityEngine::Vector3 fromDirection, UnityEngine::Vector3 toDirection);
    // static public UnityEngine.Quaternion Inverse(UnityEngine.Quaternion rotation)
    // Offset: 0x1A7DB40
    static UnityEngine::Quaternion Inverse(UnityEngine::Quaternion rotation);
    // static public UnityEngine.Quaternion Slerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1A7DC34
    static UnityEngine::Quaternion Slerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion SlerpUnclamped(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1A7DD5C
    static UnityEngine::Quaternion SlerpUnclamped(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static public UnityEngine.Quaternion Lerp(UnityEngine.Quaternion a, UnityEngine.Quaternion b, System.Single t)
    // Offset: 0x1A7DE84
    static UnityEngine::Quaternion Lerp(UnityEngine::Quaternion a, UnityEngine::Quaternion b, float t);
    // static private UnityEngine.Quaternion Internal_FromEulerRad(UnityEngine.Vector3 euler)
    // Offset: 0x1A7DFAC
    static UnityEngine::Quaternion Internal_FromEulerRad(UnityEngine::Vector3 euler);
    // static private UnityEngine.Vector3 Internal_ToEulerRad(UnityEngine.Quaternion rotation)
    // Offset: 0x1A7E0A0
    static UnityEngine::Vector3 Internal_ToEulerRad(UnityEngine::Quaternion rotation);
    // static private System.Void Internal_ToAxisAngleRad(UnityEngine.Quaternion q, out UnityEngine.Vector3 axis, out System.Single angle)
    // Offset: 0x1A7E198
    static void Internal_ToAxisAngleRad(UnityEngine::Quaternion q, UnityEngine::Vector3& axis, float& angle);
    // static public UnityEngine.Quaternion AngleAxis(System.Single angle, UnityEngine.Vector3 axis)
    // Offset: 0x1A7E29C
    static UnityEngine::Quaternion AngleAxis(float angle, UnityEngine::Vector3 axis);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward, UnityEngine.Vector3 upwards)
    // Offset: 0x1A7E3B0
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward, UnityEngine::Vector3 upwards);
    // static public UnityEngine.Quaternion LookRotation(UnityEngine.Vector3 forward)
    // Offset: 0x1A7E4B8
    static UnityEngine::Quaternion LookRotation(UnityEngine::Vector3 forward);
    // public System.Void .ctor(System.Single x, System.Single y, System.Single z, System.Single w)
    // Offset: 0xDFE5B4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Quaternion(float x, float y, float z, float w)
    // static public UnityEngine.Quaternion get_identity()
    // Offset: 0x1A7D1C0
    static UnityEngine::Quaternion get_identity();
    // static private System.Boolean IsEqualUsingDot(System.Single dot)
    // Offset: 0x1A7E604
    static bool IsEqualUsingDot(float dot);
    // static public System.Single Dot(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x1A7E618
    static float Dot(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view)
    // Offset: 0xDFE5C0
    void SetLookRotation(UnityEngine::Vector3 view);
    // public System.Void SetLookRotation(UnityEngine.Vector3 view, UnityEngine.Vector3 up)
    // Offset: 0xDFE5C8
    void SetLookRotation(UnityEngine::Vector3 view, UnityEngine::Vector3 up);
    // static public System.Single Angle(UnityEngine.Quaternion a, UnityEngine.Quaternion b)
    // Offset: 0x1A7E854
    static float Angle(UnityEngine::Quaternion a, UnityEngine::Quaternion b);
    // static private UnityEngine.Vector3 Internal_MakePositive(UnityEngine.Vector3 euler)
    // Offset: 0x1A7E960
    static UnityEngine::Vector3 Internal_MakePositive(UnityEngine::Vector3 euler);
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0xDFE5D0
    UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0xDFE5D8
    void set_eulerAngles(UnityEngine::Vector3 value);
    // static public UnityEngine.Quaternion Euler(System.Single x, System.Single y, System.Single z)
    // Offset: 0x1A7EBAC
    static UnityEngine::Quaternion Euler(float x, float y, float z);
    // static public UnityEngine.Quaternion Euler(UnityEngine.Vector3 euler)
    // Offset: 0x1A7ECA0
    static UnityEngine::Quaternion Euler(UnityEngine::Vector3 euler);
    // public System.Void ToAngleAxis(out System.Single angle, out UnityEngine.Vector3 axis)
    // Offset: 0xDFE5E0
    void ToAngleAxis(float& angle, UnityEngine::Vector3& axis);
    // static public UnityEngine.Quaternion RotateTowards(UnityEngine.Quaternion from, UnityEngine.Quaternion to, System.Single maxDegreesDelta)
    // Offset: 0x1A7EE24
    static UnityEngine::Quaternion RotateTowards(UnityEngine::Quaternion from, UnityEngine::Quaternion to, float maxDegreesDelta);
    // static public UnityEngine.Quaternion Normalize(UnityEngine.Quaternion q)
    // Offset: 0x1A7EF8C
    static UnityEngine::Quaternion Normalize(UnityEngine::Quaternion q);
    // public System.Void Normalize()
    // Offset: 0xDFE5E8
    void Normalize();
    // public System.Boolean Equals(UnityEngine.Quaternion other)
    // Offset: 0xDFE600
    bool Equals_NEW(UnityEngine::Quaternion other);
    // static private System.Void .cctor()
    // Offset: 0x1A7F25C
    static void _cctor();
    // static private System.Void FromToRotation_Injected(ref UnityEngine.Vector3 fromDirection, ref UnityEngine.Vector3 toDirection, out UnityEngine.Quaternion ret)
    // Offset: 0x1A7DAE8
    static void FromToRotation_Injected(UnityEngine::Vector3& fromDirection, UnityEngine::Vector3& toDirection, UnityEngine::Quaternion& ret);
    // static private System.Void Inverse_Injected(ref UnityEngine.Quaternion rotation, out UnityEngine.Quaternion ret)
    // Offset: 0x1A7DBE4
    static void Inverse_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Quaternion& ret);
    // static private System.Void Slerp_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1A7DCF4
    static void Slerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void SlerpUnclamped_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1A7DE1C
    static void SlerpUnclamped_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Lerp_Injected(ref UnityEngine.Quaternion a, ref UnityEngine.Quaternion b, System.Single t, out UnityEngine.Quaternion ret)
    // Offset: 0x1A7DF44
    static void Lerp_Injected(UnityEngine::Quaternion& a, UnityEngine::Quaternion& b, float t, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_FromEulerRad_Injected(ref UnityEngine.Vector3 euler, out UnityEngine.Quaternion ret)
    // Offset: 0x1A7E050
    static void Internal_FromEulerRad_Injected(UnityEngine::Vector3& euler, UnityEngine::Quaternion& ret);
    // static private System.Void Internal_ToEulerRad_Injected(ref UnityEngine.Quaternion rotation, out UnityEngine.Vector3 ret)
    // Offset: 0x1A7E148
    static void Internal_ToEulerRad_Injected(UnityEngine::Quaternion& rotation, UnityEngine::Vector3& ret);
    // static private System.Void Internal_ToAxisAngleRad_Injected(ref UnityEngine.Quaternion q, out UnityEngine.Vector3 axis, out System.Single angle)
    // Offset: 0x1A7E244
    static void Internal_ToAxisAngleRad_Injected(UnityEngine::Quaternion& q, UnityEngine::Vector3& axis, float& angle);
    // static private System.Void AngleAxis_Injected(System.Single angle, ref UnityEngine.Vector3 axis, out UnityEngine.Quaternion ret)
    // Offset: 0x1A7E350
    static void AngleAxis_Injected(float angle, UnityEngine::Vector3& axis, UnityEngine::Quaternion& ret);
    // static private System.Void LookRotation_Injected(ref UnityEngine.Vector3 forward, ref UnityEngine.Vector3 upwards, out UnityEngine.Quaternion ret)
    // Offset: 0x1A7E460
    static void LookRotation_Injected(UnityEngine::Vector3& forward, UnityEngine::Vector3& upwards, UnityEngine::Quaternion& ret);
    // public override System.Int32 GetHashCode()
    // Offset: 0xDFE5F0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xDFE5F8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.String ToString()
    // Offset: 0xDFE608
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Quaternion
  #pragma pack(pop)
  static check_size<sizeof(Quaternion), 12 + sizeof(float)> __UnityEngine_QuaternionSizeCheck;
  static_assert(sizeof(Quaternion) == 0x10);
  // static public UnityEngine.Quaternion op_Multiply(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1A7E590
  UnityEngine::Quaternion operator*(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Quaternion rotation, UnityEngine.Vector3 point)
  // Offset: 0x1A7CD20
  UnityEngine::Vector3 operator*(const UnityEngine::Quaternion& rotation, const UnityEngine::Vector3& point);
  // static public System.Boolean op_Equality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1A7CF98
  bool operator ==(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
  // static public System.Boolean op_Inequality(UnityEngine.Quaternion lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x1A7E638
  bool operator !=(const UnityEngine::Quaternion& lhs, const UnityEngine::Quaternion& rhs);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Quaternion, "UnityEngine", "Quaternion");
