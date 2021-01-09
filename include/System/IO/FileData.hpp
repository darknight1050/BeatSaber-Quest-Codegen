// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileAttributes
#include "System/IO/FileAttributes.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x30
  // Autogenerated type: System.IO.FileData
  // [] Offset: FFFFFFFF
  class FileData : public ::Il2CppObject {
    public:
    // public System.String Directory
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Directory;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.IO.FileAttributes Attributes
    // Size: 0x4
    // Offset: 0x18
    System::IO::FileAttributes Attributes;
    // Field size check
    static_assert(sizeof(System::IO::FileAttributes) == 0x4);
    // public System.Boolean NotExists
    // Size: 0x1
    // Offset: 0x1C
    bool NotExists;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: NotExists and: CreationTime
    char __padding2[0x3] = {};
    // public System.DateTime CreationTime
    // Size: 0x8
    // Offset: 0x20
    System::DateTime CreationTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // public System.DateTime LastWriteTime
    // Size: 0x8
    // Offset: 0x28
    System::DateTime LastWriteTime;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // Creating value type constructor for type: FileData
    FileData(::Il2CppString* Directory_ = {}, System::IO::FileAttributes Attributes_ = {}, bool NotExists_ = {}, System::DateTime CreationTime_ = {}, System::DateTime LastWriteTime_ = {}) noexcept : Directory{Directory_}, Attributes{Attributes_}, NotExists{NotExists_}, CreationTime{CreationTime_}, LastWriteTime{LastWriteTime_} {}
    // public System.Void .ctor()
    // Offset: 0x148E6D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileData*, creationType>()));
    }
  }; // System.IO.FileData
  static check_size<sizeof(FileData), 40 + sizeof(System::DateTime)> __System_IO_FileDataSizeCheck;
  static_assert(sizeof(FileData) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileData*, "System.IO", "FileData");
#pragma pack(pop)
