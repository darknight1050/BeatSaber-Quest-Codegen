// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: IStateTable`3
#include "GlobalNamespace/IStateTable_3.hpp"
// Including type: NodePoseSyncState/NodePose
#include "GlobalNamespace/NodePoseSyncState_NodePose.hpp"
// Including type: PoseSerializable
#include "GlobalNamespace/PoseSerializable.hpp"
// Including type: IEquatableByReference`1
#include "GlobalNamespace/IEquatableByReference_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NodePoseSyncState
  struct NodePoseSyncState/*, public System::ValueType, public GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>, public LiteNetLib::Utils::INetSerializable, public GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>*/ {
    public:
    // private PoseSerializable _head
    // Size: 0x18
    // Offset: 0x0
    GlobalNamespace::PoseSerializable head;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PoseSerializable) == 0x18);
    // private PoseSerializable _leftController
    // Size: 0x18
    // Offset: 0x18
    GlobalNamespace::PoseSerializable leftController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PoseSerializable) == 0x18);
    // private PoseSerializable _rightController
    // Size: 0x18
    // Offset: 0x30
    GlobalNamespace::PoseSerializable rightController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PoseSerializable) == 0x18);
    // Creating value type constructor for type: NodePoseSyncState
    constexpr NodePoseSyncState(GlobalNamespace::PoseSerializable head_ = {}, GlobalNamespace::PoseSerializable leftController_ = {}, GlobalNamespace::PoseSerializable rightController_ = {}) noexcept : head{head_}, leftController{leftController_}, rightController{rightController_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>
    operator GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IStateTable_3<GlobalNamespace::NodePoseSyncState, GlobalNamespace::NodePoseSyncState_NodePose, GlobalNamespace::PoseSerializable>*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>
    operator GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IEquatableByReference_1<GlobalNamespace::NodePoseSyncState>*>(this);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xEF04D4
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xEF04DC
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void SetState(NodePoseSyncState/NodePose nodePose, PoseSerializable pose)
    // Offset: 0xEF04E4
    void SetState(GlobalNamespace::NodePoseSyncState_NodePose nodePose, GlobalNamespace::PoseSerializable pose);
    // public PoseSerializable GetState(NodePoseSyncState/NodePose nodePose)
    // Offset: 0xEF054C
    GlobalNamespace::PoseSerializable GetState(GlobalNamespace::NodePoseSyncState_NodePose nodePose);
    // public System.Boolean Equals(in NodePoseSyncState other)
    // Offset: 0xEF0598
    bool Equals(GlobalNamespace::NodePoseSyncState& other);
    // public NodePoseSyncState GetDelta(in NodePoseSyncState latest)
    // Offset: 0xEF05A0
    GlobalNamespace::NodePoseSyncState GetDelta(GlobalNamespace::NodePoseSyncState& latest);
    // public NodePoseSyncState ApplyDelta(in NodePoseSyncState delta)
    // Offset: 0xEF05A8
    GlobalNamespace::NodePoseSyncState ApplyDelta(GlobalNamespace::NodePoseSyncState& delta);
    // public System.Int32 GetSize()
    // Offset: 0xEF05B0
    int GetSize();
    // private NodePoseSyncState IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta(in NodePoseSyncState stateTable)
    // Offset: 0xEF05B8
    GlobalNamespace::NodePoseSyncState IStateTable$NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable$_GetDelta(GlobalNamespace::NodePoseSyncState& stateTable);
    // private NodePoseSyncState IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta(in NodePoseSyncState delta)
    // Offset: 0xEF05C0
    GlobalNamespace::NodePoseSyncState IStateTable$NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable$_ApplyDelta(GlobalNamespace::NodePoseSyncState& delta);
    // private System.Boolean IEquatableByReference<NodePoseSyncState>.Equals(in NodePoseSyncState other)
    // Offset: 0xEF05C8
    bool IEquatableByReference$NodePoseSyncState$_Equals(GlobalNamespace::NodePoseSyncState& other);
  }; // NodePoseSyncState
  #pragma pack(pop)
  static check_size<sizeof(NodePoseSyncState), 48 + sizeof(GlobalNamespace::PoseSerializable)> __GlobalNamespace_NodePoseSyncStateSizeCheck;
  static_assert(sizeof(NodePoseSyncState) == 0x48);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncState, "", "NodePoseSyncState");
