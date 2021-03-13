// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.NetManager
#include "LiteNetLib/NetManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: NetPeer
  class NetPeer;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: LiteNetLib.NetManager/NetPeerEnumerator
  // [] Offset: FFFFFFFF
  struct NetManager::NetPeerEnumerator/*, public System::ValueType, public System::Collections::Generic::IEnumerator_1<LiteNetLib::NetPeer*>*/ {
    public:
    // private readonly LiteNetLib.NetPeer _initialPeer
    // Size: 0x8
    // Offset: 0x0
    LiteNetLib::NetPeer* initialPeer;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPeer*) == 0x8);
    // private LiteNetLib.NetPeer _p
    // Size: 0x8
    // Offset: 0x8
    LiteNetLib::NetPeer* p;
    // Field size check
    static_assert(sizeof(LiteNetLib::NetPeer*) == 0x8);
    // Creating value type constructor for type: NetPeerEnumerator
    constexpr NetPeerEnumerator(LiteNetLib::NetPeer* initialPeer_ = {}, LiteNetLib::NetPeer* p_ = {}) noexcept : initialPeer{initialPeer_}, p{p_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<LiteNetLib::NetPeer*>
    operator System::Collections::Generic::IEnumerator_1<LiteNetLib::NetPeer*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<LiteNetLib::NetPeer*>*>(this);
    }
    // public System.Void .ctor(LiteNetLib.NetPeer p)
    // Offset: 0xDFD924
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    NetPeerEnumerator(LiteNetLib::NetPeer* p) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NetManager::NetPeerEnumerator::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(p)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, p);
    }
    // public System.Void Dispose()
    // Offset: 0xDFD92C
    void Dispose_NEW();
    // public System.Boolean MoveNext()
    // Offset: 0xDFD930
    bool MoveNext_NEW();
    // public System.Void Reset()
    // Offset: 0xDFD970
    void Reset_NEW();
    // public LiteNetLib.NetPeer get_Current()
    // Offset: 0xDFD97C
    LiteNetLib::NetPeer* get_Current_NEW();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0xDFD984
    ::Il2CppObject* System_Collections_IEnumerator_get_Current_NEW();
  }; // LiteNetLib.NetManager/NetPeerEnumerator
  #pragma pack(pop)
  static check_size<sizeof(NetManager::NetPeerEnumerator), 8 + sizeof(LiteNetLib::NetPeer*)> __LiteNetLib_NetManager_NetPeerEnumeratorSizeCheck;
  static_assert(sizeof(NetManager::NetPeerEnumerator) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetManager::NetPeerEnumerator, "LiteNetLib", "NetManager/NetPeerEnumerator");
