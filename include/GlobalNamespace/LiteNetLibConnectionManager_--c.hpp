// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLibConnectionManager
#include "GlobalNamespace/LiteNetLibConnectionManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLibConnectionManager/<>c
  // [CompilerGeneratedAttribute] Offset: DEF52C
  class LiteNetLibConnectionManager::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly LiteNetLibConnectionManager/<>c <>9
    static GlobalNamespace::LiteNetLibConnectionManager::$$c* _get_$$9();
    // Set static field: static public readonly LiteNetLibConnectionManager/<>c <>9
    static void _set_$$9(GlobalNamespace::LiteNetLibConnectionManager::$$c* value);
    // Get static field: static public System.Predicate`1<LiteNetLibConnectionManager/NetPeerConnection> <>9__71_0
    static System::Predicate_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>* _get_$$9__71_0();
    // Set static field: static public System.Predicate`1<LiteNetLibConnectionManager/NetPeerConnection> <>9__71_0
    static void _set_$$9__71_0(System::Predicate_1<GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1317B3C
    static void _cctor();
    // System.Boolean <get_hasConnectionOwner>b__71_0(LiteNetLibConnectionManager/NetPeerConnection c)
    // Offset: 0x1317BA8
    bool $get_hasConnectionOwner$b__71_0(GlobalNamespace::LiteNetLibConnectionManager::NetPeerConnection* c);
    // public System.Void .ctor()
    // Offset: 0x1317BA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LiteNetLibConnectionManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LiteNetLibConnectionManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LiteNetLibConnectionManager::$$c*, creationType>()));
    }
  }; // LiteNetLibConnectionManager/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LiteNetLibConnectionManager::$$c*, "", "LiteNetLibConnectionManager/<>c");
