// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: StandardLevelInfoSaveData
#include "GlobalNamespace/StandardLevelInfoSaveData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelInfoSaveData/VersionCheck
  // [] Offset: FFFFFFFF
  class StandardLevelInfoSaveData::VersionCheck : public ::Il2CppObject {
    public:
    // private System.String _version
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* version;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: VersionCheck
    VersionCheck(::Il2CppString* version_ = {}) noexcept : version{version_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return version;
    }
    // public System.String get_version()
    // Offset: 0x1015738
    ::Il2CppString* get_version();
    // public System.Void .ctor()
    // Offset: 0x1015740
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelInfoSaveData::VersionCheck* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StandardLevelInfoSaveData::VersionCheck::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelInfoSaveData::VersionCheck*, creationType>()));
    }
  }; // StandardLevelInfoSaveData/VersionCheck
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelInfoSaveData::VersionCheck), 16 + sizeof(::Il2CppString*)> __GlobalNamespace_StandardLevelInfoSaveData_VersionCheckSizeCheck;
  static_assert(sizeof(StandardLevelInfoSaveData::VersionCheck) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelInfoSaveData::VersionCheck*, "", "StandardLevelInfoSaveData/VersionCheck");
