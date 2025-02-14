// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IO.MonoIOStat
#include "System/IO/MonoIOStat.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: FileAttributes because it is already included!
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileSystemInfo
  // [ComVisibleAttribute] Offset: D7C8D0
  class FileSystemInfo : public System::MarshalByRefObject/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // System.IO.MonoIOStat _data
    // Size: 0x28
    // Offset: 0x18
    System::IO::MonoIOStat data;
    // Field size check
    static_assert(sizeof(System::IO::MonoIOStat) == 0x28);
    // System.Int32 _dataInitialised
    // Size: 0x4
    // Offset: 0x40
    int dataInitialised;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: dataInitialised and: FullPath
    char __padding1[0x4] = {};
    // protected System.String FullPath
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* FullPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // protected System.String OriginalPath
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* OriginalPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _displayPath
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* displayPath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: FileSystemInfo
    FileSystemInfo(System::IO::MonoIOStat data_ = {}, int dataInitialised_ = {}, ::Il2CppString* FullPath_ = {}, ::Il2CppString* OriginalPath_ = {}, ::Il2CppString* displayPath_ = {}) noexcept : data{data_}, dataInitialised{dataInitialised_}, FullPath{FullPath_}, OriginalPath{OriginalPath_}, displayPath{displayPath_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1931488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemInfo* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemInfo*, creationType>(info, context)));
    }
    // public System.String get_FullName()
    // Offset: 0x193A3F4
    ::Il2CppString* get_FullName();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
    // public System.Boolean get_Exists()
    // Offset: 0xFFFFFFFF
    bool get_Exists();
    // public System.DateTime get_CreationTime()
    // Offset: 0x193A3FC
    System::DateTime get_CreationTime();
    // public System.DateTime get_CreationTimeUtc()
    // Offset: 0x193A428
    System::DateTime get_CreationTimeUtc();
    // public System.DateTime get_LastAccessTime()
    // Offset: 0x193A4D0
    System::DateTime get_LastAccessTime();
    // public System.DateTime get_LastAccessTimeUtc()
    // Offset: 0x193A4FC
    System::DateTime get_LastAccessTimeUtc();
    // public System.Void Refresh()
    // Offset: 0x1931600
    void Refresh();
    // public System.IO.FileAttributes get_Attributes()
    // Offset: 0x193A5A4
    System::IO::FileAttributes get_Attributes();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x193A600
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.String get_DisplayPath()
    // Offset: 0x193A6E4
    ::Il2CppString* get_DisplayPath();
    // System.Void set_DisplayPath(System.String value)
    // Offset: 0x193A6EC
    void set_DisplayPath(::Il2CppString* value);
    // protected System.Void .ctor()
    // Offset: 0x1930F1C
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileSystemInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileSystemInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileSystemInfo*, creationType>()));
    }
  }; // System.IO.FileSystemInfo
  #pragma pack(pop)
  static check_size<sizeof(FileSystemInfo), 88 + sizeof(::Il2CppString*)> __System_IO_FileSystemInfoSizeCheck;
  static_assert(sizeof(FileSystemInfo) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemInfo*, "System.IO", "FileSystemInfo");
