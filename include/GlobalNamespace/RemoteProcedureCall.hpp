// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IRemoteProcedureCall
#include "GlobalNamespace/IRemoteProcedureCall.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
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
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: RemoteProcedureCall
  class RemoteProcedureCall : public ::Il2CppObject/*, public GlobalNamespace::IRemoteProcedureCall*/ {
    public:
    // Nested type: GlobalNamespace::RemoteProcedureCall::TypeWrapper_1<T>
    template<typename T>
    struct TypeWrapper_1;
    // [CompilerGeneratedAttribute] Offset: 0xDF005C
    // private System.Single <syncTime>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    float syncTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: RemoteProcedureCall
    RemoteProcedureCall(float syncTime_ = {}) noexcept : syncTime{syncTime_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRemoteProcedureCall
    operator GlobalNamespace::IRemoteProcedureCall() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRemoteProcedureCall*>(this);
    }
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return syncTime;
    }
    // public System.Single get_syncTime()
    // Offset: 0x2363550
    float get_syncTime();
    // public System.Void set_syncTime(System.Single value)
    // Offset: 0x2363558
    void set_syncTime(float value);
    // protected System.Void SerializeData(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2363560
    void SerializeData(LiteNetLib::Utils::NetDataWriter* writer);
    // protected System.Void DeserializeData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x2363564
    void DeserializeData(LiteNetLib::Utils::NetDataReader* reader);
    // private System.Void LiteNetLib.Utils.INetSerializable.Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x2363568
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // private System.Void LiteNetLib.Utils.INetSerializable.Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x23635B0
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0x23635F8
    void Release();
    // public IRemoteProcedureCall Init(System.Single syncTime)
    // Offset: 0x2363718
    GlobalNamespace::IRemoteProcedureCall* Init(float syncTime);
    // protected System.Void .ctor()
    // Offset: 0x2363720
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteProcedureCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::RemoteProcedureCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteProcedureCall*, creationType>()));
    }
  }; // RemoteProcedureCall
  #pragma pack(pop)
  static check_size<sizeof(RemoteProcedureCall), 16 + sizeof(float)> __GlobalNamespace_RemoteProcedureCallSizeCheck;
  static_assert(sizeof(RemoteProcedureCall) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RemoteProcedureCall*, "", "RemoteProcedureCall");
