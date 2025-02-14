// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.FileSystemInfo
#include "System/IO/FileSystemInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StreamWriter
  class StreamWriter;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileInfo
  // [ComVisibleAttribute] Offset: D7C894
  class FileInfo : public System::IO::FileSystemInfo {
    public:
    // private System.String _name
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: FileInfo
    FileInfo(::Il2CppString* name_ = {}) noexcept : name{name_} {}
    // public System.Void .ctor(System.String fileName)
    // Offset: 0x1933E44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileInfo* New_ctor(::Il2CppString* fileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileInfo*, creationType>(fileName)));
    }
    // private System.Void Init(System.String fileName, System.Boolean checkHost)
    // Offset: 0x1933EE4
    void Init(::Il2CppString* fileName, bool checkHost);
    // private System.String GetDisplayPath(System.String originalPath)
    // Offset: 0x1933FD4
    ::Il2CppString* GetDisplayPath(::Il2CppString* originalPath);
    // public System.String get_DirectoryName()
    // Offset: 0x1934070
    ::Il2CppString* get_DirectoryName();
    // public System.IO.StreamWriter CreateText()
    // Offset: 0x19340D8
    System::IO::StreamWriter* CreateText();
    // public System.IO.StreamWriter AppendText()
    // Offset: 0x1934140
    System::IO::StreamWriter* AppendText();
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1933FDC
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Void FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileInfo* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileInfo*, creationType>(info, context)));
    }
    // public override System.String get_Name()
    // Offset: 0x1934068
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.String FileSystemInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Boolean get_Exists()
    // Offset: 0x19341A8
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Boolean FileSystemInfo::get_Exists()
    bool get_Exists();
    // public override System.String ToString()
    // Offset: 0x193429C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.IO.FileInfo
  #pragma pack(pop)
  static check_size<sizeof(FileInfo), 96 + sizeof(::Il2CppString*)> __System_IO_FileInfoSizeCheck;
  static_assert(sizeof(FileInfo) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileInfo*, "System.IO", "FileInfo");
