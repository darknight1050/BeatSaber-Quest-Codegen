// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayerLayout
  struct MultiplayerPlayerLayout;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerPlayerPlacement
  // [] Offset: FFFFFFFF
  class MultiplayerPlayerPlacement : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MultiplayerPlayerPlacement::$$c
    class $$c;
    // Creating value type constructor for type: MultiplayerPlayerPlacement
    MultiplayerPlayerPlacement() noexcept {}
    // static public UnityEngine.Vector3 GetPlayerWorldPosition(System.Single outerCircleRadius, System.Single outerCirclePositionAngle, MultiplayerPlayerLayout layout)
    // Offset: 0xF13B20
    static UnityEngine::Vector3 GetPlayerWorldPosition(float outerCircleRadius, float outerCirclePositionAngle, GlobalNamespace::MultiplayerPlayerLayout layout);
    // static public System.Single GetOuterCirclePositionAngleForPlayer(System.Int32 playerIndex, System.Int32 localPlayerIndex, System.Single angleBetweenPlayers)
    // Offset: 0xF13CDC
    static float GetOuterCirclePositionAngleForPlayer(int playerIndex, int localPlayerIndex, float angleBetweenPlayers);
    // static public System.Single GetOuterCircleRadius(System.Single angleBetweenPlayers, System.Single innerCircleRadius)
    // Offset: 0xF13CEC
    static float GetOuterCircleRadius(float angleBetweenPlayers, float innerCircleRadius);
    // static public System.Single GetAngleBetweenPlayersWithEvenAdjustment(System.Int32 numberOfPlayers, MultiplayerPlayerLayout layout)
    // Offset: 0xF13D84
    static float GetAngleBetweenPlayersWithEvenAdjustment(int numberOfPlayers, GlobalNamespace::MultiplayerPlayerLayout layout);
    // static public System.Void SortPlayers(System.Collections.Generic.List`1<IConnectedPlayer> players)
    // Offset: 0xF13DB0
    static void SortPlayers(System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* players);
    // static public System.Int32 GetLocalPlayerIndex(System.Collections.Generic.IList`1<IConnectedPlayer> otherPlayers, IConnectedPlayer localPlayer)
    // Offset: 0xF13EA4
    static int GetLocalPlayerIndex(System::Collections::Generic::IList_1<GlobalNamespace::IConnectedPlayer*>* otherPlayers, GlobalNamespace::IConnectedPlayer* localPlayer);
  }; // MultiplayerPlayerPlacement
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerPlayerPlacement*, "", "MultiplayerPlayerPlacement");
