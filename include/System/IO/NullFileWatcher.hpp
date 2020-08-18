// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.IFileWatcher
#include "System/IO/IFileWatcher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileSystemWatcher
  class FileSystemWatcher;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.NullFileWatcher
  class NullFileWatcher : public System::IO::IFileWatcher, public ::Il2CppObject {
    public:
    // Get static field: static private System.IO.IFileWatcher instance
    static System::IO::IFileWatcher* _get_instance();
    // Set static field: static private System.IO.IFileWatcher instance
    static void _set_instance(System::IO::IFileWatcher* value);
    // static public System.Boolean GetInstance(System.IO.IFileWatcher watcher)
    // Offset: 0xEC3884
    static bool GetInstance(System::IO::IFileWatcher*& watcher);
    // public System.Void StartDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0xEC4290
    // Implemented from: System.IO.IFileWatcher
    // Base method: System.Void IFileWatcher::StartDispatching(System.IO.FileSystemWatcher fsw)
    void StartDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void StopDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0xEC4294
    // Implemented from: System.IO.IFileWatcher
    // Base method: System.Void IFileWatcher::StopDispatching(System.IO.FileSystemWatcher fsw)
    void StopDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void .ctor()
    // Offset: 0xEC4298
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NullFileWatcher* New_ctor();
  }; // System.IO.NullFileWatcher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::NullFileWatcher*, "System.IO", "NullFileWatcher");
#pragma pack(pop)
