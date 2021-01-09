// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.IFileWatcher
#include "System/IO/IFileWatcher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  // Autogenerated type: System.IO.NullFileWatcher
  // [] Offset: FFFFFFFF
  class NullFileWatcher : public ::Il2CppObject/*, public System::IO::IFileWatcher*/ {
    public:
    // Creating value type constructor for type: NullFileWatcher
    NullFileWatcher() noexcept {}
    // Creating interface conversion operator: operator System::IO::IFileWatcher
    operator System::IO::IFileWatcher() noexcept {
      return *reinterpret_cast<System::IO::IFileWatcher*>(this);
    }
    // Get static field: static private System.IO.IFileWatcher instance
    static System::IO::IFileWatcher* _get_instance();
    // Set static field: static private System.IO.IFileWatcher instance
    static void _set_instance(System::IO::IFileWatcher* value);
    // static public System.Boolean GetInstance(out System.IO.IFileWatcher watcher)
    // Offset: 0x148F490
    static bool GetInstance(System::IO::IFileWatcher*& watcher);
    // public System.Void StartDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0x148FE9C
    // Implemented from: System.IO.IFileWatcher
    // Base method: System.Void IFileWatcher::StartDispatching(System.IO.FileSystemWatcher fsw)
    void StartDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void StopDispatching(System.IO.FileSystemWatcher fsw)
    // Offset: 0x148FEA0
    // Implemented from: System.IO.IFileWatcher
    // Base method: System.Void IFileWatcher::StopDispatching(System.IO.FileSystemWatcher fsw)
    void StopDispatching(System::IO::FileSystemWatcher* fsw);
    // public System.Void .ctor()
    // Offset: 0x148FEA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullFileWatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::NullFileWatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullFileWatcher*, creationType>()));
    }
  }; // System.IO.NullFileWatcher
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::NullFileWatcher*, "System.IO", "NullFileWatcher");
#pragma pack(pop)
