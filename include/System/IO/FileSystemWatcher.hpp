// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.Component
#include "System/ComponentModel/Component.hpp"
// Including type: System.IO.NotifyFilters
#include "System/IO/NotifyFilters.hpp"
// Including type: System.IO.WaitForChangedResult
#include "System/IO/WaitForChangedResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchPattern2
  class SearchPattern2;
  // Forward declaring type: FileSystemEventHandler
  class FileSystemEventHandler;
  // Forward declaring type: ErrorEventHandler
  class ErrorEventHandler;
  // Forward declaring type: RenamedEventHandler
  class RenamedEventHandler;
  // Forward declaring type: IFileWatcher
  class IFileWatcher;
  // Forward declaring type: FileSystemEventArgs
  class FileSystemEventArgs;
  // Forward declaring type: RenamedEventArgs
  class RenamedEventArgs;
  // Forward declaring type: FileAction
  struct FileAction;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISynchronizeInvoke
  class ISynchronizeInvoke;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
  // Forward declaring type: EventArgs
  class EventArgs;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileSystemWatcher
  class FileSystemWatcher : public System::ComponentModel::Component {
    public:
    // Nested type: System::IO::FileSystemWatcher::EventType
    struct EventType;
    // private System.Boolean enableRaisingEvents
    // Offset: 0x28
    bool enableRaisingEvents;
    // private System.String filter
    // Offset: 0x30
    ::Il2CppString* filter;
    // private System.Boolean includeSubdirectories
    // Offset: 0x38
    bool includeSubdirectories;
    // private System.Int32 internalBufferSize
    // Offset: 0x3C
    int internalBufferSize;
    // private System.IO.NotifyFilters notifyFilter
    // Offset: 0x40
    System::IO::NotifyFilters notifyFilter;
    // private System.String path
    // Offset: 0x48
    ::Il2CppString* path;
    // private System.String fullpath
    // Offset: 0x50
    ::Il2CppString* fullpath;
    // private System.ComponentModel.ISynchronizeInvoke synchronizingObject
    // Offset: 0x58
    System::ComponentModel::ISynchronizeInvoke* synchronizingObject;
    // private System.IO.WaitForChangedResult lastData
    // Offset: 0x60
    System::IO::WaitForChangedResult lastData;
    // private System.Boolean waiting
    // Offset: 0x80
    bool waiting;
    // private System.IO.SearchPattern2 pattern
    // Offset: 0x88
    System::IO::SearchPattern2* pattern;
    // private System.Boolean disposed
    // Offset: 0x90
    bool disposed;
    // private System.String mangledFilter
    // Offset: 0x98
    ::Il2CppString* mangledFilter;
    // private System.IO.FileSystemEventHandler Changed
    // Offset: 0xA0
    System::IO::FileSystemEventHandler* Changed;
    // private System.IO.FileSystemEventHandler Created
    // Offset: 0xA8
    System::IO::FileSystemEventHandler* Created;
    // private System.IO.FileSystemEventHandler Deleted
    // Offset: 0xB0
    System::IO::FileSystemEventHandler* Deleted;
    // private System.IO.ErrorEventHandler Error
    // Offset: 0xB8
    System::IO::ErrorEventHandler* Error;
    // private System.IO.RenamedEventHandler Renamed
    // Offset: 0xC0
    System::IO::RenamedEventHandler* Renamed;
    // Get static field: static private System.IO.IFileWatcher watcher
    static System::IO::IFileWatcher* _get_watcher();
    // Set static field: static private System.IO.IFileWatcher watcher
    static void _set_watcher(System::IO::IFileWatcher* value);
    // Get static field: static private System.Object lockobj
    static ::Il2CppObject* _get_lockobj();
    // Set static field: static private System.Object lockobj
    static void _set_lockobj(::Il2CppObject* value);
    // public System.Void .ctor(System.String path, System.String filter)
    // Offset: 0xEC3488
    static FileSystemWatcher* New_ctor(::Il2CppString* path, ::Il2CppString* filter);
    // private System.Void InitWatcher()
    // Offset: 0xEC3630
    void InitWatcher();
    // System.Boolean get_Waiting()
    // Offset: 0xEC3928
    bool get_Waiting();
    // System.Void set_Waiting(System.Boolean value)
    // Offset: 0xEC3930
    void set_Waiting(bool value);
    // System.String get_MangledFilter()
    // Offset: 0xEC08D0
    ::Il2CppString* get_MangledFilter();
    // System.IO.SearchPattern2 get_Pattern()
    // Offset: 0xEC0838
    System::IO::SearchPattern2* get_Pattern();
    // System.String get_FullPath()
    // Offset: 0xEC077C
    ::Il2CppString* get_FullPath();
    // public System.Void set_EnableRaisingEvents(System.Boolean value)
    // Offset: 0xEC3944
    void set_EnableRaisingEvents(bool value);
    // public System.Boolean get_IncludeSubdirectories()
    // Offset: 0xEC3B2C
    bool get_IncludeSubdirectories();
    // public System.Void set_NotifyFilter(System.IO.NotifyFilters value)
    // Offset: 0xEC3B34
    void set_NotifyFilter(System::IO::NotifyFilters value);
    // private System.Void RaiseEvent(System.Delegate ev, System.EventArgs arg, System.IO.FileSystemWatcher/EventType evtype)
    // Offset: 0xEC3C28
    void RaiseEvent(System::Delegate* ev, System::EventArgs* arg, System::IO::FileSystemWatcher::EventType evtype);
    // protected System.Void OnChanged(System.IO.FileSystemEventArgs e)
    // Offset: 0xEC3F3C
    void OnChanged(System::IO::FileSystemEventArgs* e);
    // protected System.Void OnCreated(System.IO.FileSystemEventArgs e)
    // Offset: 0xEC3F50
    void OnCreated(System::IO::FileSystemEventArgs* e);
    // protected System.Void OnDeleted(System.IO.FileSystemEventArgs e)
    // Offset: 0xEC3F64
    void OnDeleted(System::IO::FileSystemEventArgs* e);
    // protected System.Void OnRenamed(System.IO.RenamedEventArgs e)
    // Offset: 0xEC3F78
    void OnRenamed(System::IO::RenamedEventArgs* e);
    // System.Void DispatchEvents(System.IO.FileAction act, System.String filename, System.IO.RenamedEventArgs renamed)
    // Offset: 0xEC174C
    void DispatchEvents(System::IO::FileAction act, ::Il2CppString* filename, System::IO::RenamedEventArgs*& renamed);
    // private System.Void Start()
    // Offset: 0xEC3970
    void Start();
    // private System.Void Stop()
    // Offset: 0xEC3A4C
    void Stop();
    // public System.Void add_Changed(System.IO.FileSystemEventHandler value)
    // Offset: 0xEC404C
    void add_Changed(System::IO::FileSystemEventHandler* value);
    // public System.Void remove_Changed(System.IO.FileSystemEventHandler value)
    // Offset: 0xEC40F0
    void remove_Changed(System::IO::FileSystemEventHandler* value);
    // static private System.Int32 InternalSupportsFSW()
    // Offset: 0xEC3880
    static int InternalSupportsFSW();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xEC3B80
    // Implemented from: System.ComponentModel.Component
    // Base method: System.Void Component::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // protected override System.Void Finalize()
    // Offset: 0xEC3BC0
    // Implemented from: System.ComponentModel.Component
    // Base method: System.Void Component::Finalize()
    void Finalize();
    // static private System.Void .cctor()
    // Offset: 0xEC4194
    // Implemented from: System.ComponentModel.Component
    // Base method: System.Void Component::.cctor()
    static void _cctor();
  }; // System.IO.FileSystemWatcher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileSystemWatcher*, "System.IO", "FileSystemWatcher");
#pragma pack(pop)
