// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  // Autogenerated type: PacketEncryptionLayer/PendingEncryptionStateList
  // [] Offset: FFFFFFFF
  class PacketEncryptionLayer::PendingEncryptionStateList : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass4_0
    class $$c__DisplayClass4_0;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c
    class $$c;
    // Nested type: GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::$$c__DisplayClass8_0
    class $$c__DisplayClass8_0;
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,PacketEncryptionLayer/EncryptionState> _pendingStatesByPort
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*>* pendingStatesByPort;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*>*) == 0x8);
    // Creating value type constructor for type: PendingEncryptionStateList
    PendingEncryptionStateList(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*>* pendingStatesByPort_ = {}) noexcept : pendingStatesByPort{pendingStatesByPort_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Creating conversion operator: operator System::Collections::Generic::Dictionary_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*>*
    constexpr operator System::Collections::Generic::Dictionary_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*>*() const noexcept {
      return pendingStatesByPort;
    }
    // public System.Boolean get_isEmpty()
    // Offset: 0x1E4E0C4
    bool get_isEmpty();
    // public PacketEncryptionLayer/EncryptionState[] GetSortedEncryptionStates(System.Int32 port)
    // Offset: 0x1E4ECCC
    ::Array<GlobalNamespace::PacketEncryptionLayer::EncryptionState*>* GetSortedEncryptionStates(int port);
    // public System.Boolean TryGetEncryptionState(System.Int32 port, out PacketEncryptionLayer/EncryptionState encryptionState)
    // Offset: 0x1E4E9AC
    bool TryGetEncryptionState(int port, GlobalNamespace::PacketEncryptionLayer::EncryptionState*& encryptionState);
    // public System.Void Add(System.Int32 port, PacketEncryptionLayer/EncryptionState encryptionState)
    // Offset: 0x1E4E380
    void Add(int port, GlobalNamespace::PacketEncryptionLayer::EncryptionState* encryptionState);
    // public System.Boolean Remove(System.Int32 port)
    // Offset: 0x1E4E05C
    bool Remove(int port);
    // public System.Boolean Remove(System.Int32 port, PacketEncryptionLayer/EncryptionState encryptionState)
    // Offset: 0x1E4F0C0
    bool Remove(int port, GlobalNamespace::PacketEncryptionLayer::EncryptionState* encryptionState);
    // public System.Void Dispose()
    // Offset: 0x1E50DC4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void .ctor()
    // Offset: 0x1E4E304
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketEncryptionLayer::PendingEncryptionStateList* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketEncryptionLayer::PendingEncryptionStateList*, creationType>()));
    }
  }; // PacketEncryptionLayer/PendingEncryptionStateList
  static check_size<sizeof(PacketEncryptionLayer::PendingEncryptionStateList), 16 + sizeof(System::Collections::Generic::Dictionary_2<int, GlobalNamespace::PacketEncryptionLayer::EncryptionState*>*)> __GlobalNamespace_PacketEncryptionLayer_PendingEncryptionStateListSizeCheck;
  static_assert(sizeof(PacketEncryptionLayer::PendingEncryptionStateList) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PacketEncryptionLayer::PendingEncryptionStateList*, "", "PacketEncryptionLayer/PendingEncryptionStateList");
#pragma pack(pop)
