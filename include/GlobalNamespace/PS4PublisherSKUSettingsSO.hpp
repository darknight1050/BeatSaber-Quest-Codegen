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
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PS4PublisherSKUSettingsSO
  class PS4PublisherSKUSettingsSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.String _skuName
    // Offset: 0x18
    ::CsString* skuName;
    // private System.String _contentId
    // Offset: 0x20
    ::CsString* contentId;
    // private System.Int32 _parentalLockLevel
    // Offset: 0x28
    int parentalLockLevel;
    // private System.String _npTitleFilenamePath
    // Offset: 0x30
    ::CsString* npTitleFilenamePath;
    // private System.Int32 _defaultAgeRestriction
    // Offset: 0x38
    int defaultAgeRestriction;
    // public System.String get_skuName()
    // Offset: 0xBBCED8
    ::CsString* get_skuName();
    // public System.String get_contentId()
    // Offset: 0xBBCEE0
    ::CsString* get_contentId();
    // public System.Int32 get_parentalLockLevel()
    // Offset: 0xBBCEE8
    int get_parentalLockLevel();
    // public System.String get_npTitleFilenamePath()
    // Offset: 0xBBCEF0
    ::CsString* get_npTitleFilenamePath();
    // public System.Int32 get_defaultAgeRestriction()
    // Offset: 0xBBCEF8
    int get_defaultAgeRestriction();
    // public System.Void .ctor()
    // Offset: 0xBBCF00
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PS4PublisherSKUSettingsSO* New_ctor();
  }; // PS4PublisherSKUSettingsSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4PublisherSKUSettingsSO*, "", "PS4PublisherSKUSettingsSO");
#pragma pack(pop)
