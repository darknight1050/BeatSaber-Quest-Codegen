// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: Vector3Serializable
#include "GlobalNamespace/Vector3Serializable.hpp"
// Including type: QuaternionSerializable
#include "GlobalNamespace/QuaternionSerializable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: PoseSerializable
  struct PoseSerializable/*, public System::ValueType, public LiteNetLib::Utils::INetSerializable, public System::IEquatable_1<GlobalNamespace::PoseSerializable>*/ {
    public:
    // public Vector3Serializable position
    // Size: 0xC
    // Offset: 0x0
    GlobalNamespace::Vector3Serializable position;
    // Field size check
    static_assert(sizeof(GlobalNamespace::Vector3Serializable) == 0xC);
    // public QuaternionSerializable rotation
    // Size: 0xC
    // Offset: 0xC
    GlobalNamespace::QuaternionSerializable rotation;
    // Field size check
    static_assert(sizeof(GlobalNamespace::QuaternionSerializable) == 0xC);
    // Creating value type constructor for type: PoseSerializable
    constexpr PoseSerializable(GlobalNamespace::Vector3Serializable position_ = {}, GlobalNamespace::QuaternionSerializable rotation_ = {}) noexcept : position{position_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::PoseSerializable>
    operator System::IEquatable_1<GlobalNamespace::PoseSerializable>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::PoseSerializable>*>(this);
    }
    // public System.Void .ctor(Vector3Serializable position, QuaternionSerializable rotation)
    // Offset: 0xF20308
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  PoseSerializable(GlobalNamespace::Vector3Serializable position, GlobalNamespace::QuaternionSerializable rotation)
    // static public PoseSerializable get_identity()
    // Offset: 0x23301C8
    static GlobalNamespace::PoseSerializable get_identity();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xF2031C
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xF2034C
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Boolean Equals(PoseSerializable other)
    // Offset: 0xF2037C
    bool Equals(GlobalNamespace::PoseSerializable other);
    // public System.Int32 GetSize()
    // Offset: 0xF203CC
    int GetSize();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xF203B4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xF203BC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xF203C4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // PoseSerializable
  #pragma pack(pop)
  static check_size<sizeof(PoseSerializable), 12 + sizeof(GlobalNamespace::QuaternionSerializable)> __GlobalNamespace_PoseSerializableSizeCheck;
  static_assert(sizeof(PoseSerializable) == 0x18);
  // static public PoseSerializable op_Addition(PoseSerializable a, PoseSerializable b)
  // Offset: 0x2330834
  GlobalNamespace::PoseSerializable operator+(const GlobalNamespace::PoseSerializable& a, const GlobalNamespace::PoseSerializable& b);
  // static public PoseSerializable op_Subtraction(PoseSerializable a, PoseSerializable b)
  // Offset: 0x23308D0
  GlobalNamespace::PoseSerializable operator-(const GlobalNamespace::PoseSerializable& a, const GlobalNamespace::PoseSerializable& b);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PoseSerializable, "", "PoseSerializable");
