// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: PublicServerInfo
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct PublicServerInfo/*, public System::ValueType, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PublicServerInfo>*/ {
    public:
    // public readonly System.String serverName
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* serverName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String code
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* code;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Int32 currentPlayerCount
    // Size: 0x4
    // Offset: 0x10
    int currentPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 maxPlayerCount
    // Size: 0x4
    // Offset: 0x14
    int maxPlayerCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean hasPassword
    // Size: 0x1
    // Offset: 0x18
    bool hasPassword;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasPassword and: configuration
    char __padding4[0x7] = {};
    // public readonly GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x20
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: PublicServerInfo
    constexpr PublicServerInfo(::Il2CppString* serverName_ = {}, ::Il2CppString* code_ = {}, int currentPlayerCount_ = {}, int maxPlayerCount_ = {}, bool hasPassword_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : serverName{serverName_}, code{code_}, currentPlayerCount{currentPlayerCount_}, maxPlayerCount{maxPlayerCount_}, hasPassword{hasPassword_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PublicServerInfo>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PublicServerInfo>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::PublicServerInfo>*>(this);
    }
    // public System.Void .ctor(System.String serverName, System.String code, System.Int32 currentPlayerCount, System.Int32 maxPlayerCount, System.Boolean hasPassword, GameplayServerConfiguration configuration)
    // Offset: 0xF21690
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  PublicServerInfo(::Il2CppString* serverName, ::Il2CppString* code, int currentPlayerCount, int maxPlayerCount, bool hasPassword, GlobalNamespace::GameplayServerConfiguration configuration)
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xF216C4
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public PublicServerInfo CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xF216CC
    GlobalNamespace::PublicServerInfo CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // static public PublicServerInfo Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2363488
    static GlobalNamespace::PublicServerInfo Deserialize(LiteNetLib::Utils::NetDataReader* reader);
  }; // PublicServerInfo
  #pragma pack(pop)
  static check_size<sizeof(PublicServerInfo), 32 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_PublicServerInfoSizeCheck;
  static_assert(sizeof(PublicServerInfo) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PublicServerInfo, "", "PublicServerInfo");
