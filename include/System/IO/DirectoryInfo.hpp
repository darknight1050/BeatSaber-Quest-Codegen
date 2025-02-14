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
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.DirectoryInfo
  // [ComVisibleAttribute] Offset: D7C9FC
  class DirectoryInfo : public System::IO::FileSystemInfo {
    public:
    // private System.String current
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* current;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String parent
    // Size: 0x8
    // Offset: 0x68
    ::Il2CppString* parent;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DirectoryInfo
    DirectoryInfo(::Il2CppString* current_ = {}, ::Il2CppString* parent_ = {}) noexcept : current{current_}, parent{parent_} {}
    // public System.Void .ctor(System.String path)
    // Offset: 0x1930F14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(::Il2CppString* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(path)));
    }
    // System.Void .ctor(System.String path, System.Boolean simpleOriginalPath)
    // Offset: 0x192F714
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(::Il2CppString* path, bool simpleOriginalPath) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(path, simpleOriginalPath)));
    }
    // private System.Void Initialize()
    // Offset: 0x19311E8
    void Initialize();
    // public System.IO.DirectoryInfo get_Parent()
    // Offset: 0x192F7E4
    System::IO::DirectoryInfo* get_Parent();
    // public System.Void Create()
    // Offset: 0x192F860
    void Create();
    // public System.IO.DirectoryInfo[] GetDirectories()
    // Offset: 0x193163C
    ::Array<System::IO::DirectoryInfo*>* GetDirectories();
    // public System.IO.DirectoryInfo[] GetDirectories(System.String searchPattern)
    // Offset: 0x193168C
    ::Array<System::IO::DirectoryInfo*>* GetDirectories(::Il2CppString* searchPattern);
    // System.Void CheckPath(System.String path)
    // Offset: 0x1930F7C
    void CheckPath(::Il2CppString* path);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1931464
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Void FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DirectoryInfo* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::DirectoryInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DirectoryInfo*, creationType>(info, context)));
    }
    // public override System.Boolean get_Exists()
    // Offset: 0x19315A8
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Boolean FileSystemInfo::get_Exists()
    bool get_Exists();
    // public override System.String get_Name()
    // Offset: 0x1931634
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.String FileSystemInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.String ToString()
    // Offset: 0x19317F8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.IO.DirectoryInfo
  #pragma pack(pop)
  static check_size<sizeof(DirectoryInfo), 104 + sizeof(::Il2CppString*)> __System_IO_DirectoryInfoSizeCheck;
  static_assert(sizeof(DirectoryInfo) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::DirectoryInfo*, "System.IO", "DirectoryInfo");
