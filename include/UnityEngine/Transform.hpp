// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: System.Collections.IEnumerable
#include "System/Collections/IEnumerable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: RotationOrder
  struct RotationOrder;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Space
  struct Space;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Transform
  // [NativeHeaderAttribute] Offset: D90BB4
  // [RequiredByNativeCodeAttribute] Offset: D90BB4
  // [NativeHeaderAttribute] Offset: D90BB4
  // [NativeHeaderAttribute] Offset: D90BB4
  class Transform : public UnityEngine::Component/*, public System::Collections::IEnumerable*/ {
    public:
    // Nested type: UnityEngine::Transform::Enumerator
    class Enumerator;
    // Creating value type constructor for type: Transform
    Transform() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IEnumerable
    operator System::Collections::IEnumerable() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerable*>(this);
    }
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x2303A94
    UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x2303B44
    void set_position(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_localPosition()
    // Offset: 0x2303BEC
    UnityEngine::Vector3 get_localPosition();
    // public System.Void set_localPosition(UnityEngine.Vector3 value)
    // Offset: 0x2303C9C
    void set_localPosition(UnityEngine::Vector3 value);
    // UnityEngine.Vector3 GetLocalEulerAngles(UnityEngine.RotationOrder order)
    // Offset: 0x2303D44
    UnityEngine::Vector3 GetLocalEulerAngles(UnityEngine::RotationOrder order);
    // System.Void SetLocalEulerAngles(UnityEngine.Vector3 euler, UnityEngine.RotationOrder order)
    // Offset: 0x2303E0C
    void SetLocalEulerAngles(UnityEngine::Vector3 euler, UnityEngine::RotationOrder order);
    // System.Void SetLocalEulerHint(UnityEngine.Vector3 euler)
    // Offset: 0x2303ECC
    void SetLocalEulerHint(UnityEngine::Vector3 euler);
    // public UnityEngine.Vector3 get_eulerAngles()
    // Offset: 0x2303F74
    UnityEngine::Vector3 get_eulerAngles();
    // public System.Void set_eulerAngles(UnityEngine.Vector3 value)
    // Offset: 0x2304000
    void set_eulerAngles(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_localEulerAngles()
    // Offset: 0x23040EC
    UnityEngine::Vector3 get_localEulerAngles();
    // public System.Void set_localEulerAngles(UnityEngine.Vector3 value)
    // Offset: 0x2304178
    void set_localEulerAngles(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_right()
    // Offset: 0x2304264
    UnityEngine::Vector3 get_right();
    // public System.Void set_right(UnityEngine.Vector3 value)
    // Offset: 0x23043B8
    void set_right(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_up()
    // Offset: 0x2304490
    UnityEngine::Vector3 get_up();
    // public System.Void set_up(UnityEngine.Vector3 value)
    // Offset: 0x23045E4
    void set_up(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_forward()
    // Offset: 0x23046BC
    UnityEngine::Vector3 get_forward();
    // public System.Void set_forward(UnityEngine.Vector3 value)
    // Offset: 0x2304810
    void set_forward(UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x2303FA4
    UnityEngine::Quaternion get_rotation();
    // public System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x2304094
    void set_rotation(UnityEngine::Quaternion value);
    // public UnityEngine.Quaternion get_localRotation()
    // Offset: 0x230411C
    UnityEngine::Quaternion get_localRotation();
    // public System.Void set_localRotation(UnityEngine.Quaternion value)
    // Offset: 0x230420C
    void set_localRotation(UnityEngine::Quaternion value);
    // UnityEngine.RotationOrder get_rotationOrder()
    // Offset: 0x23049E4
    UnityEngine::RotationOrder get_rotationOrder();
    // System.Void set_rotationOrder(UnityEngine.RotationOrder value)
    // Offset: 0x2304A64
    void set_rotationOrder(UnityEngine::RotationOrder value);
    // System.Int32 GetRotationOrderInternal()
    // Offset: 0x2304A24
    int GetRotationOrderInternal();
    // System.Void SetRotationOrderInternal(UnityEngine.RotationOrder rotationOrder)
    // Offset: 0x2304AB4
    void SetRotationOrderInternal(UnityEngine::RotationOrder rotationOrder);
    // public UnityEngine.Vector3 get_localScale()
    // Offset: 0x2304B04
    UnityEngine::Vector3 get_localScale();
    // public System.Void set_localScale(UnityEngine.Vector3 value)
    // Offset: 0x2304BB4
    void set_localScale(UnityEngine::Vector3 value);
    // public UnityEngine.Transform get_parent()
    // Offset: 0x2304C5C
    UnityEngine::Transform* get_parent();
    // public System.Void set_parent(UnityEngine.Transform value)
    // Offset: 0x2304CDC
    void set_parent(UnityEngine::Transform* value);
    // UnityEngine.Transform get_parentInternal()
    // Offset: 0x2304C9C
    UnityEngine::Transform* get_parentInternal();
    // System.Void set_parentInternal(UnityEngine.Transform value)
    // Offset: 0x2304DA8
    void set_parentInternal(UnityEngine::Transform* value);
    // private UnityEngine.Transform GetParent()
    // Offset: 0x2304DFC
    UnityEngine::Transform* GetParent();
    // public System.Void SetParent(UnityEngine.Transform p)
    // Offset: 0x2304E3C
    void SetParent(UnityEngine::Transform* p);
    // public System.Void SetParent(UnityEngine.Transform parent, System.Boolean worldPositionStays)
    // Offset: 0x2304E90
    void SetParent(UnityEngine::Transform* parent, bool worldPositionStays);
    // public UnityEngine.Matrix4x4 get_worldToLocalMatrix()
    // Offset: 0x2304EE8
    UnityEngine::Matrix4x4 get_worldToLocalMatrix();
    // public UnityEngine.Matrix4x4 get_localToWorldMatrix()
    // Offset: 0x2304FB0
    UnityEngine::Matrix4x4 get_localToWorldMatrix();
    // public System.Void SetPositionAndRotation(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation)
    // Offset: 0x2305078
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation);
    // public System.Void Translate(UnityEngine.Vector3 translation, UnityEngine.Space relativeTo)
    // Offset: 0x2305134
    void Translate(UnityEngine::Vector3 translation, UnityEngine::Space relativeTo);
    // public System.Void Translate(UnityEngine.Vector3 translation)
    // Offset: 0x23052B8
    void Translate(UnityEngine::Vector3 translation);
    // public System.Void Translate(System.Single x, System.Single y, System.Single z, UnityEngine.Space relativeTo)
    // Offset: 0x23052C0
    void Translate(float x, float y, float z, UnityEngine::Space relativeTo);
    // public System.Void Translate(System.Single x, System.Single y, System.Single z)
    // Offset: 0x23052D0
    void Translate(float x, float y, float z);
    // public System.Void Translate(UnityEngine.Vector3 translation, UnityEngine.Transform relativeTo)
    // Offset: 0x23052D8
    void Translate(UnityEngine::Vector3 translation, UnityEngine::Transform* relativeTo);
    // public System.Void Translate(System.Single x, System.Single y, System.Single z, UnityEngine.Transform relativeTo)
    // Offset: 0x2305418
    void Translate(float x, float y, float z, UnityEngine::Transform* relativeTo);
    // public System.Void Rotate(UnityEngine.Vector3 eulers, UnityEngine.Space relativeTo)
    // Offset: 0x230541C
    void Rotate(UnityEngine::Vector3 eulers, UnityEngine::Space relativeTo);
    // public System.Void Rotate(UnityEngine.Vector3 eulers)
    // Offset: 0x2305638
    void Rotate(UnityEngine::Vector3 eulers);
    // public System.Void Rotate(System.Single xAngle, System.Single yAngle, System.Single zAngle, UnityEngine.Space relativeTo)
    // Offset: 0x2305640
    void Rotate(float xAngle, float yAngle, float zAngle, UnityEngine::Space relativeTo);
    // public System.Void Rotate(System.Single xAngle, System.Single yAngle, System.Single zAngle)
    // Offset: 0x2305644
    void Rotate(float xAngle, float yAngle, float zAngle);
    // System.Void RotateAroundInternal(UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x230564C
    void RotateAroundInternal(UnityEngine::Vector3 axis, float angle);
    // public System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle, UnityEngine.Space relativeTo)
    // Offset: 0x2305714
    void Rotate(UnityEngine::Vector3 axis, float angle, UnityEngine::Space relativeTo);
    // public System.Void Rotate(UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x23057AC
    void Rotate(UnityEngine::Vector3 axis, float angle);
    // public System.Void RotateAround(UnityEngine.Vector3 point, UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x23057B4
    void RotateAround(UnityEngine::Vector3 point, UnityEngine::Vector3 axis, float angle);
    // public System.Void LookAt(UnityEngine.Transform target, UnityEngine.Vector3 worldUp)
    // Offset: 0x2305924
    void LookAt(UnityEngine::Transform* target, UnityEngine::Vector3 worldUp);
    // public System.Void LookAt(UnityEngine.Transform target)
    // Offset: 0x23059F8
    void LookAt(UnityEngine::Transform* target);
    // public System.Void LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
    // Offset: 0x23059F4
    void LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp);
    // public System.Void LookAt(UnityEngine.Vector3 worldPosition)
    // Offset: 0x2305B5C
    void LookAt(UnityEngine::Vector3 worldPosition);
    // private System.Void Internal_LookAt(UnityEngine.Vector3 worldPosition, UnityEngine.Vector3 worldUp)
    // Offset: 0x2305AF8
    void Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp);
    // public UnityEngine.Vector3 TransformDirection(UnityEngine.Vector3 direction)
    // Offset: 0x230524C
    UnityEngine::Vector3 TransformDirection(UnityEngine::Vector3 direction);
    // public UnityEngine.Vector3 TransformDirection(System.Single x, System.Single y, System.Single z)
    // Offset: 0x2305CA8
    UnityEngine::Vector3 TransformDirection(float x, float y, float z);
    // public UnityEngine.Vector3 InverseTransformDirection(UnityEngine.Vector3 direction)
    // Offset: 0x2305CAC
    UnityEngine::Vector3 InverseTransformDirection(UnityEngine::Vector3 direction);
    // public UnityEngine.Vector3 InverseTransformDirection(System.Single x, System.Single y, System.Single z)
    // Offset: 0x2305D70
    UnityEngine::Vector3 InverseTransformDirection(float x, float y, float z);
    // public UnityEngine.Vector3 TransformVector(UnityEngine.Vector3 vector)
    // Offset: 0x2305D74
    UnityEngine::Vector3 TransformVector(UnityEngine::Vector3 vector);
    // public UnityEngine.Vector3 TransformVector(System.Single x, System.Single y, System.Single z)
    // Offset: 0x2305E38
    UnityEngine::Vector3 TransformVector(float x, float y, float z);
    // public UnityEngine.Vector3 InverseTransformVector(UnityEngine.Vector3 vector)
    // Offset: 0x2305E3C
    UnityEngine::Vector3 InverseTransformVector(UnityEngine::Vector3 vector);
    // public UnityEngine.Vector3 InverseTransformVector(System.Single x, System.Single y, System.Single z)
    // Offset: 0x2305F00
    UnityEngine::Vector3 InverseTransformVector(float x, float y, float z);
    // public UnityEngine.Vector3 TransformPoint(UnityEngine.Vector3 position)
    // Offset: 0x2305F04
    UnityEngine::Vector3 TransformPoint(UnityEngine::Vector3 position);
    // public UnityEngine.Vector3 TransformPoint(System.Single x, System.Single y, System.Single z)
    // Offset: 0x2305FC8
    UnityEngine::Vector3 TransformPoint(float x, float y, float z);
    // public UnityEngine.Vector3 InverseTransformPoint(UnityEngine.Vector3 position)
    // Offset: 0x2305FCC
    UnityEngine::Vector3 InverseTransformPoint(UnityEngine::Vector3 position);
    // public UnityEngine.Vector3 InverseTransformPoint(System.Single x, System.Single y, System.Single z)
    // Offset: 0x2306090
    UnityEngine::Vector3 InverseTransformPoint(float x, float y, float z);
    // public UnityEngine.Transform get_root()
    // Offset: 0x2306094
    UnityEngine::Transform* get_root();
    // private UnityEngine.Transform GetRoot()
    // Offset: 0x23060D4
    UnityEngine::Transform* GetRoot();
    // public System.Int32 get_childCount()
    // Offset: 0x2306114
    int get_childCount();
    // public System.Void DetachChildren()
    // Offset: 0x2306154
    void DetachChildren();
    // public System.Void SetAsFirstSibling()
    // Offset: 0x2306194
    void SetAsFirstSibling();
    // public System.Void SetAsLastSibling()
    // Offset: 0x23061D4
    void SetAsLastSibling();
    // public System.Void SetSiblingIndex(System.Int32 index)
    // Offset: 0x2306214
    void SetSiblingIndex(int index);
    // public System.Int32 GetSiblingIndex()
    // Offset: 0x2306264
    int GetSiblingIndex();
    // static private UnityEngine.Transform FindRelativeTransformWithPath(UnityEngine.Transform transform, System.String path, System.Boolean isActiveOnly)
    // Offset: 0x23062A4
    static UnityEngine::Transform* FindRelativeTransformWithPath(UnityEngine::Transform* transform, ::Il2CppString* path, bool isActiveOnly);
    // public UnityEngine.Transform Find(System.String n)
    // Offset: 0x23062FC
    UnityEngine::Transform* Find(::Il2CppString* n);
    // System.Void SendTransformChangedScale()
    // Offset: 0x23063B4
    void SendTransformChangedScale();
    // public UnityEngine.Vector3 get_lossyScale()
    // Offset: 0x23063F4
    UnityEngine::Vector3 get_lossyScale();
    // public System.Boolean IsChildOf(UnityEngine.Transform parent)
    // Offset: 0x23064A4
    bool IsChildOf(UnityEngine::Transform* parent);
    // public System.Boolean get_hasChanged()
    // Offset: 0x23064F4
    bool get_hasChanged();
    // public System.Void set_hasChanged(System.Boolean value)
    // Offset: 0x2306534
    void set_hasChanged(bool value);
    // public UnityEngine.Transform FindChild(System.String n)
    // Offset: 0x2306584
    UnityEngine::Transform* FindChild(::Il2CppString* n);
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x2306588
    System::Collections::IEnumerator* GetEnumerator();
    // public System.Void RotateAround(UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x2306628
    void RotateAround(UnityEngine::Vector3 axis, float angle);
    // public System.Void RotateAroundLocal(UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x23066F0
    void RotateAroundLocal(UnityEngine::Vector3 axis, float angle);
    // public UnityEngine.Transform GetChild(System.Int32 index)
    // Offset: 0x23067B8
    UnityEngine::Transform* GetChild(int index);
    // public System.Int32 GetChildCount()
    // Offset: 0x2306808
    int GetChildCount();
    // public System.Int32 get_hierarchyCapacity()
    // Offset: 0x2306848
    int get_hierarchyCapacity();
    // public System.Void set_hierarchyCapacity(System.Int32 value)
    // Offset: 0x23068C8
    void set_hierarchyCapacity(int value);
    // private System.Int32 internal_getHierarchyCapacity()
    // Offset: 0x2306888
    int internal_getHierarchyCapacity();
    // private System.Void internal_setHierarchyCapacity(System.Int32 value)
    // Offset: 0x2306918
    void internal_setHierarchyCapacity(int value);
    // public System.Int32 get_hierarchyCount()
    // Offset: 0x2306968
    int get_hierarchyCount();
    // private System.Int32 internal_getHierarchyCount()
    // Offset: 0x23069A8
    int internal_getHierarchyCount();
    // System.Boolean IsNonUniformScaleTransform()
    // Offset: 0x23069E8
    bool IsNonUniformScaleTransform();
    // private System.Void get_position_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x2303AF4
    void get_position_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_position_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x2303B9C
    void set_position_Injected(UnityEngine::Vector3& value);
    // private System.Void get_localPosition_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x2303C4C
    void get_localPosition_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_localPosition_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x2303CF4
    void set_localPosition_Injected(UnityEngine::Vector3& value);
    // private System.Void GetLocalEulerAngles_Injected(UnityEngine.RotationOrder order, out UnityEngine.Vector3 ret)
    // Offset: 0x2303DB4
    void GetLocalEulerAngles_Injected(UnityEngine::RotationOrder order, UnityEngine::Vector3& ret);
    // private System.Void SetLocalEulerAngles_Injected(ref UnityEngine.Vector3 euler, UnityEngine.RotationOrder order)
    // Offset: 0x2303E74
    void SetLocalEulerAngles_Injected(UnityEngine::Vector3& euler, UnityEngine::RotationOrder order);
    // private System.Void SetLocalEulerHint_Injected(ref UnityEngine.Vector3 euler)
    // Offset: 0x2303F24
    void SetLocalEulerHint_Injected(UnityEngine::Vector3& euler);
    // private System.Void get_rotation_Injected(out UnityEngine.Quaternion ret)
    // Offset: 0x23048A4
    void get_rotation_Injected(UnityEngine::Quaternion& ret);
    // private System.Void set_rotation_Injected(ref UnityEngine.Quaternion value)
    // Offset: 0x23048F4
    void set_rotation_Injected(UnityEngine::Quaternion& value);
    // private System.Void get_localRotation_Injected(out UnityEngine.Quaternion ret)
    // Offset: 0x2304944
    void get_localRotation_Injected(UnityEngine::Quaternion& ret);
    // private System.Void set_localRotation_Injected(ref UnityEngine.Quaternion value)
    // Offset: 0x2304994
    void set_localRotation_Injected(UnityEngine::Quaternion& value);
    // private System.Void get_localScale_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x2304B64
    void get_localScale_Injected(UnityEngine::Vector3& ret);
    // private System.Void set_localScale_Injected(ref UnityEngine.Vector3 value)
    // Offset: 0x2304C0C
    void set_localScale_Injected(UnityEngine::Vector3& value);
    // private System.Void get_worldToLocalMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x2304F60
    void get_worldToLocalMatrix_Injected(UnityEngine::Matrix4x4& ret);
    // private System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x2305028
    void get_localToWorldMatrix_Injected(UnityEngine::Matrix4x4& ret);
    // private System.Void SetPositionAndRotation_Injected(ref UnityEngine.Vector3 position, ref UnityEngine.Quaternion rotation)
    // Offset: 0x23050DC
    void SetPositionAndRotation_Injected(UnityEngine::Vector3& position, UnityEngine::Quaternion& rotation);
    // private System.Void RotateAroundInternal_Injected(ref UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x23056B4
    void RotateAroundInternal_Injected(UnityEngine::Vector3& axis, float angle);
    // private System.Void Internal_LookAt_Injected(ref UnityEngine.Vector3 worldPosition, ref UnityEngine.Vector3 worldUp)
    // Offset: 0x2305BF8
    void Internal_LookAt_Injected(UnityEngine::Vector3& worldPosition, UnityEngine::Vector3& worldUp);
    // private System.Void TransformDirection_Injected(ref UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
    // Offset: 0x2305C50
    void TransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret);
    // private System.Void InverseTransformDirection_Injected(ref UnityEngine.Vector3 direction, out UnityEngine.Vector3 ret)
    // Offset: 0x2305D18
    void InverseTransformDirection_Injected(UnityEngine::Vector3& direction, UnityEngine::Vector3& ret);
    // private System.Void TransformVector_Injected(ref UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
    // Offset: 0x2305DE0
    void TransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret);
    // private System.Void InverseTransformVector_Injected(ref UnityEngine.Vector3 vector, out UnityEngine.Vector3 ret)
    // Offset: 0x2305EA8
    void InverseTransformVector_Injected(UnityEngine::Vector3& vector, UnityEngine::Vector3& ret);
    // private System.Void TransformPoint_Injected(ref UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
    // Offset: 0x2305F70
    void TransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
    // private System.Void InverseTransformPoint_Injected(ref UnityEngine.Vector3 position, out UnityEngine.Vector3 ret)
    // Offset: 0x2306038
    void InverseTransformPoint_Injected(UnityEngine::Vector3& position, UnityEngine::Vector3& ret);
    // private System.Void get_lossyScale_Injected(out UnityEngine.Vector3 ret)
    // Offset: 0x2306454
    void get_lossyScale_Injected(UnityEngine::Vector3& ret);
    // private System.Void RotateAround_Injected(ref UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x2306690
    void RotateAround_Injected(UnityEngine::Vector3& axis, float angle);
    // private System.Void RotateAroundLocal_Injected(ref UnityEngine.Vector3 axis, System.Single angle)
    // Offset: 0x2306758
    void RotateAroundLocal_Injected(UnityEngine::Vector3& axis, float angle);
    // protected System.Void .ctor()
    // Offset: 0x2303A8C
    // Implemented from: UnityEngine.Component
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Transform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Transform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Transform*, creationType>()));
    }
  }; // UnityEngine.Transform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Transform*, "UnityEngine", "Transform");
