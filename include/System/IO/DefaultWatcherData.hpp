// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.DefaultWatcherData
  class DefaultWatcherData : public ::Il2CppObject {
    public:
    // public System.IO.FileSystemWatcher FSW
    // Offset: 0x10
    System::IO::FileSystemWatcher* FSW;
    // public System.String Directory
    // Offset: 0x18
    ::Il2CppString* Directory;
    // public System.String FileMask
    // Offset: 0x20
    ::Il2CppString* FileMask;
    // public System.Boolean IncludeSubdirs
    // Offset: 0x28
    bool IncludeSubdirs;
    // public System.Boolean Enabled
    // Offset: 0x29
    bool Enabled;
    // public System.Boolean NoWildcards
    // Offset: 0x2A
    bool NoWildcards;
    // public System.DateTime DisabledTime
    // Offset: 0x30
    System::DateTime DisabledTime;
    // public System.Object FilesLock
    // Offset: 0x38
    ::Il2CppObject* FilesLock;
    // public System.Collections.Hashtable Files
    // Offset: 0x40
    System::Collections::Hashtable* Files;
    // public System.Void .ctor()
    // Offset: 0xEC0708
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultWatcherData* New_ctor();
  }; // System.IO.DefaultWatcherData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::DefaultWatcherData*, "System.IO", "DefaultWatcherData");
#pragma pack(pop)
