// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
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
  // Autogenerated type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private UnityEngine.Sprite _icon
    // Offset: 0x18
    UnityEngine::Sprite* icon;
    // private System.String _descriptionLocalizationKey
    // Offset: 0x20
    ::CsString* descriptionLocalizationKey;
    // private System.String _characteristicNameLocalizationKey
    // Offset: 0x28
    ::CsString* characteristicNameLocalizationKey;
    // private System.String _serializedName
    // Offset: 0x30
    ::CsString* serializedName;
    // private System.String _compoundIdPartName
    // Offset: 0x38
    ::CsString* compoundIdPartName;
    // private System.Int32 _sortingOrder
    // Offset: 0x40
    int sortingOrder;
    // private System.Boolean _containsRotationEvents
    // Offset: 0x44
    bool containsRotationEvents;
    // private System.Boolean _requires360Movement
    // Offset: 0x45
    bool requires360Movement;
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x1976844
    UnityEngine::Sprite* get_icon();
    // public System.String get_descriptionLocalizationKey()
    // Offset: 0x197684C
    ::CsString* get_descriptionLocalizationKey();
    // public System.String get_characteristicNameLocalizationKey()
    // Offset: 0x1976854
    ::CsString* get_characteristicNameLocalizationKey();
    // public System.String get_serializedName()
    // Offset: 0x197685C
    ::CsString* get_serializedName();
    // public System.String get_compoundIdPartName()
    // Offset: 0x1976864
    ::CsString* get_compoundIdPartName();
    // public System.Int32 get_sortingOrder()
    // Offset: 0x197686C
    int get_sortingOrder();
    // public System.Boolean get_containsRotationEvents()
    // Offset: 0x1976874
    bool get_containsRotationEvents();
    // public System.Boolean get_requires360Movement()
    // Offset: 0x197687C
    bool get_requires360Movement();
    // public System.Void .ctor()
    // Offset: 0x1976884
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapCharacteristicSO* New_ctor();
  }; // BeatmapCharacteristicSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicSO*, "", "BeatmapCharacteristicSO");
#pragma pack(pop)
