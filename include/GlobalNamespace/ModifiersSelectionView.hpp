// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ModifiersSelectionView
  class ModifiersSelectionView : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::ModifiersSelectionView::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // private GameplayModifierInfoListItemsList _modifierInfoList
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameplayModifierInfoListItemsList* modifierInfoList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierInfoListItemsList*) == 0x8);
    // private TMPro.TextMeshProUGUI _noModifiersText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* noModifiersText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0xE274B4
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // Creating value type constructor for type: ModifiersSelectionView
    ModifiersSelectionView(GlobalNamespace::GameplayModifierInfoListItemsList* modifierInfoList_ = {}, TMPro::TextMeshProUGUI* noModifiersText_ = {}, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel_ = {}) noexcept : modifierInfoList{modifierInfoList_}, noModifiersText{noModifiersText_}, gameplayModifiersModel{gameplayModifiersModel_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0x113E47C
    void SetGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void .ctor()
    // Offset: 0x113E5D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModifiersSelectionView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ModifiersSelectionView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModifiersSelectionView*, creationType>()));
    }
  }; // ModifiersSelectionView
  #pragma pack(pop)
  static check_size<sizeof(ModifiersSelectionView), 40 + sizeof(GlobalNamespace::GameplayModifiersModelSO*)> __GlobalNamespace_ModifiersSelectionViewSizeCheck;
  static_assert(sizeof(ModifiersSelectionView) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ModifiersSelectionView*, "", "ModifiersSelectionView");
