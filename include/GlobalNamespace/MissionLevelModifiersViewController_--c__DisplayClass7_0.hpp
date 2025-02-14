// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MissionLevelModifiersViewController
#include "GlobalNamespace/MissionLevelModifiersViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierParamsSO
  class GameplayModifierParamsSO;
  // Forward declaring type: GameplayModifierInfoListItem
  class GameplayModifierInfoListItem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MissionLevelModifiersViewController/<>c__DisplayClass7_0
  // [CompilerGeneratedAttribute] Offset: E1289C
  class MissionLevelModifiersViewController::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<GameplayModifierParamsSO> modifierParamsList
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass7_0
    $$c__DisplayClass7_0(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>* modifierParamsList_ = {}) noexcept : modifierParamsList{modifierParamsList_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*
    constexpr operator System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*() const noexcept {
      return modifierParamsList;
    }
    // System.Void <RefreshContent>b__0(System.Int32 idx, GameplayModifierInfoListItem gameplayModifierInfoListItem)
    // Offset: 0x1051AAC
    void $RefreshContent$b__0(int idx, GlobalNamespace::GameplayModifierInfoListItem* gameplayModifierInfoListItem);
    // public System.Void .ctor()
    // Offset: 0x1051A9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissionLevelModifiersViewController::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissionLevelModifiersViewController::$$c__DisplayClass7_0*, creationType>()));
    }
  }; // MissionLevelModifiersViewController/<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(MissionLevelModifiersViewController::$$c__DisplayClass7_0), 16 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO*>*)> __GlobalNamespace_MissionLevelModifiersViewController_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(MissionLevelModifiersViewController::$$c__DisplayClass7_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0*, "", "MissionLevelModifiersViewController/<>c__DisplayClass7_0");
