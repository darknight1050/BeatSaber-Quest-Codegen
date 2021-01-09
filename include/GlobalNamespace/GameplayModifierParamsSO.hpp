// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  // Autogenerated type: GameplayModifierParamsSO
  // [] Offset: FFFFFFFF
  class GameplayModifierParamsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // [LocalizationKeyAttribute] Offset: 0xDC2BBC
    // private System.String _modifierNameLocalizationKey
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* modifierNameLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0xDC2BF4
    // private System.String _descriptionLocalizationKey
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* descriptionLocalizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _multiplier
    // Size: 0x4
    // Offset: 0x28
    float multiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: multiplier and: icon
    char __padding2[0x4] = {};
    // private UnityEngine.Sprite _icon
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Sprite* icon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private GameplayModifierParamsSO[] _mutuallyExclusives
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* mutuallyExclusives;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::GameplayModifierParamsSO*>*) == 0x8);
    // Creating value type constructor for type: GameplayModifierParamsSO
    GameplayModifierParamsSO(::Il2CppString* modifierNameLocalizationKey_ = {}, ::Il2CppString* descriptionLocalizationKey_ = {}, float multiplier_ = {}, UnityEngine::Sprite* icon_ = {}, ::Array<GlobalNamespace::GameplayModifierParamsSO*>* mutuallyExclusives_ = {}) noexcept : modifierNameLocalizationKey{modifierNameLocalizationKey_}, descriptionLocalizationKey{descriptionLocalizationKey_}, multiplier{multiplier_}, icon{icon_}, mutuallyExclusives{mutuallyExclusives_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.String get_modifierNameLocalizationKey()
    // Offset: 0x1A218E4
    ::Il2CppString* get_modifierNameLocalizationKey();
    // public System.String get_descriptionLocalizationKey()
    // Offset: 0x1A218EC
    ::Il2CppString* get_descriptionLocalizationKey();
    // public System.Single get_multiplier()
    // Offset: 0x1A218F4
    float get_multiplier();
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x1A218FC
    UnityEngine::Sprite* get_icon();
    // public GameplayModifierParamsSO[] get_mutuallyExclusives()
    // Offset: 0x1A21904
    ::Array<GlobalNamespace::GameplayModifierParamsSO*>* get_mutuallyExclusives();
    // public System.Void .ctor()
    // Offset: 0x1A2190C
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifierParamsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifierParamsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifierParamsSO*, creationType>()));
    }
  }; // GameplayModifierParamsSO
  static check_size<sizeof(GameplayModifierParamsSO), 56 + sizeof(::Array<GlobalNamespace::GameplayModifierParamsSO*>*)> __GlobalNamespace_GameplayModifierParamsSOSizeCheck;
  static_assert(sizeof(GameplayModifierParamsSO) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierParamsSO*, "", "GameplayModifierParamsSO");
#pragma pack(pop)
