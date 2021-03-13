// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: INetworkPacketSubSerializer`1
  // [] Offset: FFFFFFFF
  template<typename TData>
  class INetworkPacketSubSerializer_1 {
    public:
    // Creating value type constructor for type: INetworkPacketSubSerializer_1
    INetworkPacketSubSerializer_1() noexcept {}
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader, System.Int32 length, TData data)
    // Offset: 0xFFFFFFFF
    void Deserialize_NEW(LiteNetLib::Utils::NetDataReader* reader, int length, TData data) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::INetworkPacketSubSerializer_1::Deserialize_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Deserialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(reader, length, data)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, reader, length, data);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.Utils.INetSerializable packet)
    // Offset: 0xFFFFFFFF
    void Serialize_NEW(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::Utils::INetSerializable* packet) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::INetworkPacketSubSerializer_1::Serialize_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Serialize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(writer, packet)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, writer, packet);
    }
    // public System.Boolean HandlesType(System.Type type)
    // Offset: 0xFFFFFFFF
    bool HandlesType_NEW(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::INetworkPacketSubSerializer_1::HandlesType_NEW");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandlesType", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, type);
    }
  }; // INetworkPacketSubSerializer`1
  // Could not write size check! Type: INetworkPacketSubSerializer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::INetworkPacketSubSerializer_1, "", "INetworkPacketSubSerializer`1");
