// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSpectatingSpot
  class IMultiplayerSpectatingSpot;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerSpectatingSpotManager
  class MultiplayerSpectatingSpotManager : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MultiplayerSpectatingSpotManager::$$c
    class $$c;
    // private readonly System.Collections.Generic.List`1<IMultiplayerSpectatingSpot> _spectatingSpots
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* spectatingSpots;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::IMultiplayerSpectatingSpot*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<IMultiplayerSpectatingSpot,System.Int32> _spotIndexBySpot
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<GlobalNamespace::IMultiplayerSpectatingSpot*, int>* spotIndexBySpot;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::IMultiplayerSpectatingSpot*, int>*) == 0x8);
    // Creating value type constructor for type: MultiplayerSpectatingSpotManager
    MultiplayerSpectatingSpotManager(System::Collections::Generic::List_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* spectatingSpots_ = {}, System::Collections::Generic::Dictionary_2<GlobalNamespace::IMultiplayerSpectatingSpot*, int>* spotIndexBySpot_ = {}) noexcept : spectatingSpots{spectatingSpots_}, spotIndexBySpot{spotIndexBySpot_} {}
    // public System.Collections.Generic.IReadOnlyList`1<IMultiplayerSpectatingSpot> get_spectatingSpots()
    // Offset: 0x23E7AE4
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IMultiplayerSpectatingSpot*>* get_spectatingSpots();
    // public IMultiplayerSpectatingSpot get_defaultSpot()
    // Offset: 0x23E7AEC
    GlobalNamespace::IMultiplayerSpectatingSpot* get_defaultSpot();
    // public System.Void RegisterSpectatingSpot(IMultiplayerSpectatingSpot spectatingSpot)
    // Offset: 0x23E7C14
    void RegisterSpectatingSpot(GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);
    // public IMultiplayerSpectatingSpot GetAdjacentSpot(IMultiplayerSpectatingSpot spectatingSpot, System.Int32 offset)
    // Offset: 0x23E7EA4
    GlobalNamespace::IMultiplayerSpectatingSpot* GetAdjacentSpot(GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot, int offset);
    // private System.Int32 GetIndexBySpot(IMultiplayerSpectatingSpot spectatingSpot)
    // Offset: 0x23E7F54
    int GetIndexBySpot(GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);
    // private System.Void UpdateIndexBySpotDictionary()
    // Offset: 0x23E7D28
    void UpdateIndexBySpotDictionary();
    // private System.Void SpotOnHasBeenRemoved(IMultiplayerSpectatingSpot spectatingSpot)
    // Offset: 0x23E7FE0
    void SpotOnHasBeenRemoved(GlobalNamespace::IMultiplayerSpectatingSpot* spectatingSpot);
    // public System.Void .ctor()
    // Offset: 0x23E80F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSpectatingSpotManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSpectatingSpotManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSpectatingSpotManager*, creationType>()));
    }
  }; // MultiplayerSpectatingSpotManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerSpectatingSpotManager), 24 + sizeof(System::Collections::Generic::Dictionary_2<GlobalNamespace::IMultiplayerSpectatingSpot*, int>*)> __GlobalNamespace_MultiplayerSpectatingSpotManagerSizeCheck;
  static_assert(sizeof(MultiplayerSpectatingSpotManager) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSpectatingSpotManager*, "", "MultiplayerSpectatingSpotManager");
