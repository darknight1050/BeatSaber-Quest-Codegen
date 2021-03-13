// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayersTableView
#include "GlobalNamespace/NetworkPlayersTableView.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: NetworkPlayersTableView/CellInfo
  // [] Offset: FFFFFFFF
  class NetworkPlayersTableView::CellInfo : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType
    struct CellType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: NetworkPlayersTableView/CellInfo/CellType
    // [] Offset: FFFFFFFF
    struct CellType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: CellType
      constexpr CellType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public NetworkPlayersTableView/CellInfo/CellType Header
      static constexpr const int Header = 0;
      // Get static field: static public NetworkPlayersTableView/CellInfo/CellType Header
      static GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType _get_Header();
      // Set static field: static public NetworkPlayersTableView/CellInfo/CellType Header
      static void _set_Header(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType value);
      // static field const value: static public NetworkPlayersTableView/CellInfo/CellType Player
      static constexpr const int Player = 1;
      // Get static field: static public NetworkPlayersTableView/CellInfo/CellType Player
      static GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType _get_Player();
      // Set static field: static public NetworkPlayersTableView/CellInfo/CellType Player
      static void _set_Player(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType value);
      // static field const value: static public NetworkPlayersTableView/CellInfo/CellType Options
      static constexpr const int Options = 2;
      // Get static field: static public NetworkPlayersTableView/CellInfo/CellType Options
      static GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType _get_Options();
      // Set static field: static public NetworkPlayersTableView/CellInfo/CellType Options
      static void _set_Options(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType value);
    }; // NetworkPlayersTableView/CellInfo/CellType
    #pragma pack(pop)
    static check_size<sizeof(NetworkPlayersTableView::CellInfo::CellType), 0 + sizeof(int)> __GlobalNamespace_NetworkPlayersTableView_CellInfo_CellTypeSizeCheck;
    static_assert(sizeof(NetworkPlayersTableView::CellInfo::CellType) == 0x4);
    // public NetworkPlayersTableView/CellInfo/CellType type
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType) == 0x4);
    // Padding between fields: type and: headerString
    char __padding0[0x4] = {};
    // public System.String headerString
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* headerString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public INetworkPlayer player
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::INetworkPlayer* player;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INetworkPlayer*) == 0x8);
    // public System.Boolean lastCellInParty
    // Size: 0x1
    // Offset: 0x28
    bool lastCellInParty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: CellInfo
    CellInfo(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType type_ = {}, ::Il2CppString* headerString_ = {}, GlobalNamespace::INetworkPlayer* player_ = {}, bool lastCellInParty_ = {}) noexcept : type{type_}, headerString{headerString_}, player{player_}, lastCellInParty{lastCellInParty_} {}
    // public System.Void .ctor()
    // Offset: 0x10BD4CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkPlayersTableView::CellInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetworkPlayersTableView::CellInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkPlayersTableView::CellInfo*, creationType>()));
    }
  }; // NetworkPlayersTableView/CellInfo
  #pragma pack(pop)
  static check_size<sizeof(NetworkPlayersTableView::CellInfo), 40 + sizeof(bool)> __GlobalNamespace_NetworkPlayersTableView_CellInfoSizeCheck;
  static_assert(sizeof(NetworkPlayersTableView::CellInfo) == 0x29);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersTableView::CellInfo*, "", "NetworkPlayersTableView/CellInfo");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayersTableView::CellInfo::CellType, "", "NetworkPlayersTableView/CellInfo/CellType");
