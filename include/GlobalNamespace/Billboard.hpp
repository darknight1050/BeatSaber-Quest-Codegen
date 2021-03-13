// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Billboard
  // [] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: CF4498
  class Billboard : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::Billboard::RotationMode
    struct RotationMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Billboard/RotationMode
    // [] Offset: FFFFFFFF
    struct RotationMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: RotationMode
      constexpr RotationMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Billboard/RotationMode AllAxis
      static constexpr const int AllAxis = 0;
      // Get static field: static public Billboard/RotationMode AllAxis
      static GlobalNamespace::Billboard::RotationMode _get_AllAxis();
      // Set static field: static public Billboard/RotationMode AllAxis
      static void _set_AllAxis(GlobalNamespace::Billboard::RotationMode value);
      // static field const value: static public Billboard/RotationMode XAxis
      static constexpr const int XAxis = 1;
      // Get static field: static public Billboard/RotationMode XAxis
      static GlobalNamespace::Billboard::RotationMode _get_XAxis();
      // Set static field: static public Billboard/RotationMode XAxis
      static void _set_XAxis(GlobalNamespace::Billboard::RotationMode value);
      // static field const value: static public Billboard/RotationMode YAxis
      static constexpr const int YAxis = 2;
      // Get static field: static public Billboard/RotationMode YAxis
      static GlobalNamespace::Billboard::RotationMode _get_YAxis();
      // Set static field: static public Billboard/RotationMode YAxis
      static void _set_YAxis(GlobalNamespace::Billboard::RotationMode value);
      // static field const value: static public Billboard/RotationMode ZAxis
      static constexpr const int ZAxis = 3;
      // Get static field: static public Billboard/RotationMode ZAxis
      static GlobalNamespace::Billboard::RotationMode _get_ZAxis();
      // Set static field: static public Billboard/RotationMode ZAxis
      static void _set_ZAxis(GlobalNamespace::Billboard::RotationMode value);
    }; // Billboard/RotationMode
    #pragma pack(pop)
    static check_size<sizeof(Billboard::RotationMode), 0 + sizeof(int)> __GlobalNamespace_Billboard_RotationModeSizeCheck;
    static_assert(sizeof(Billboard::RotationMode) == 0x4);
    // private Billboard/RotationMode _rotationMode
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::Billboard::RotationMode rotationMode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Billboard::RotationMode) == 0x4);
    // private System.Boolean _flipDirection
    // Size: 0x1
    // Offset: 0x1C
    bool flipDirection;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: flipDirection and: transform
    char __padding1[0x3] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    // Creating value type constructor for type: Billboard
    Billboard(GlobalNamespace::Billboard::RotationMode rotationMode_ = {}, bool flipDirection_ = {}, UnityEngine::Transform* transform_ = {}) noexcept : rotationMode{rotationMode_}, flipDirection{flipDirection_}, transform{transform_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x1119304
    void Awake();
    // private System.Void OnWillRenderObject()
    // Offset: 0x111932C
    void OnWillRenderObject();
    // public System.Void .ctor()
    // Offset: 0x111947C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Billboard* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::Billboard::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Billboard*, creationType>()));
    }
  }; // Billboard
  #pragma pack(pop)
  static check_size<sizeof(Billboard), 32 + sizeof(UnityEngine::Transform*)> __GlobalNamespace_BillboardSizeCheck;
  static_assert(sizeof(Billboard) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Billboard*, "", "Billboard");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Billboard::RotationMode, "", "Billboard/RotationMode");
