// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  // Autogenerated type: FileBrowserItem
  // [] Offset: FFFFFFFF
  class FileBrowserItem : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xDC2B8C
    // private System.String <displayName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* displayName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC2B9C
    // private System.String <fullPath>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* fullPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xDC2BAC
    // private System.Boolean <isDirectory>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool isDirectory;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: FileBrowserItem
    FileBrowserItem(::Il2CppString* displayName_ = {}, ::Il2CppString* fullPath_ = {}, bool isDirectory_ = {}) noexcept : displayName{displayName_}, fullPath{fullPath_}, isDirectory{isDirectory_} {}
    // public System.String get_displayName()
    // Offset: 0x1A10704
    ::Il2CppString* get_displayName();
    // private System.Void set_displayName(System.String value)
    // Offset: 0x1A1070C
    void set_displayName(::Il2CppString* value);
    // public System.String get_fullPath()
    // Offset: 0x1A10714
    ::Il2CppString* get_fullPath();
    // private System.Void set_fullPath(System.String value)
    // Offset: 0x1A1071C
    void set_fullPath(::Il2CppString* value);
    // public System.Boolean get_isDirectory()
    // Offset: 0x1A10724
    bool get_isDirectory();
    // private System.Void set_isDirectory(System.Boolean value)
    // Offset: 0x1A1072C
    void set_isDirectory(bool value);
    // public System.Void .ctor(System.String displayName, System.String fullPath, System.Boolean isDirectory)
    // Offset: 0x1A10738
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileBrowserItem* New_ctor(::Il2CppString* displayName, ::Il2CppString* fullPath, bool isDirectory) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileBrowserItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileBrowserItem*, creationType>(displayName, fullPath, isDirectory)));
    }
  }; // FileBrowserItem
  static check_size<sizeof(FileBrowserItem), 32 + sizeof(bool)> __GlobalNamespace_FileBrowserItemSizeCheck;
  static_assert(sizeof(FileBrowserItem) == 0x21);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserItem*, "", "FileBrowserItem");
#pragma pack(pop)
