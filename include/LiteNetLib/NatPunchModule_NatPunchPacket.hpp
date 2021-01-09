// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NatPunchModule
#include "LiteNetLib/NatPunchModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x19
  // Autogenerated type: LiteNetLib.NatPunchModule/NatPunchPacket
  // [] Offset: FFFFFFFF
  class NatPunchModule::NatPunchPacket : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD9B4A8
    // private System.String <Token>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD9B4B8
    // private System.Boolean <IsExternal>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsExternal;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NatPunchPacket
    NatPunchPacket(::Il2CppString* Token_ = {}, bool IsExternal_ = {}) noexcept : Token{Token_}, IsExternal{IsExternal_} {}
    // public System.String get_Token()
    // Offset: 0x1DC5EFC
    ::Il2CppString* get_Token();
    // public System.Void set_Token(System.String value)
    // Offset: 0x1DC5F04
    void set_Token(::Il2CppString* value);
    // public System.Boolean get_IsExternal()
    // Offset: 0x1DC5F0C
    bool get_IsExternal();
    // public System.Void set_IsExternal(System.Boolean value)
    // Offset: 0x1DC5F14
    void set_IsExternal(bool value);
    // public System.Void .ctor()
    // Offset: 0x1DC5990
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NatPunchModule::NatPunchPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NatPunchModule::NatPunchPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NatPunchModule::NatPunchPacket*, creationType>()));
    }
  }; // LiteNetLib.NatPunchModule/NatPunchPacket
  static check_size<sizeof(NatPunchModule::NatPunchPacket), 24 + sizeof(bool)> __LiteNetLib_NatPunchModule_NatPunchPacketSizeCheck;
  static_assert(sizeof(NatPunchModule::NatPunchPacket) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule::NatPunchPacket*, "LiteNetLib", "NatPunchModule/NatPunchPacket");
#pragma pack(pop)
