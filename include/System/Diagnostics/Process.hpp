// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ComponentModel.Component
#include "System/ComponentModel/Component.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: AsyncStreamReader
  class AsyncStreamReader;
  // Forward declaring type: ProcessThreadCollection
  class ProcessThreadCollection;
  // Forward declaring type: ProcessModuleCollection
  class ProcessModuleCollection;
  // Forward declaring type: ProcessInfo
  class ProcessInfo;
  // Forward declaring type: ProcessThreadTimes
  class ProcessThreadTimes;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeProcessHandle
  class SafeProcessHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: RegisteredWaitHandle
  class RegisteredWaitHandle;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: ISynchronizeInvoke
  class ISynchronizeInvoke;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: StreamReader
  class StreamReader;
  // Forward declaring type: StreamWriter
  class StreamWriter;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0xE0
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Process
  // [DesignerAttribute] Offset: D8772C
  // [MonitoringDescriptionAttribute] Offset: D8772C
  // [DefaultPropertyAttribute] Offset: D8772C
  // [DefaultEventAttribute] Offset: D8772C
  class Process : public System::ComponentModel::Component {
    public:
    // Nested type: System::Diagnostics::Process::StreamReadMode
    struct StreamReadMode;
    // Nested type: System::Diagnostics::Process::State
    struct State;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: System.Diagnostics.Process/StreamReadMode
    struct StreamReadMode/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: StreamReadMode
      constexpr StreamReadMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Diagnostics.Process/StreamReadMode undefined
      static constexpr const int undefined = 0;
      // Get static field: static public System.Diagnostics.Process/StreamReadMode undefined
      static System::Diagnostics::Process::StreamReadMode _get_undefined();
      // Set static field: static public System.Diagnostics.Process/StreamReadMode undefined
      static void _set_undefined(System::Diagnostics::Process::StreamReadMode value);
      // static field const value: static public System.Diagnostics.Process/StreamReadMode syncMode
      static constexpr const int syncMode = 1;
      // Get static field: static public System.Diagnostics.Process/StreamReadMode syncMode
      static System::Diagnostics::Process::StreamReadMode _get_syncMode();
      // Set static field: static public System.Diagnostics.Process/StreamReadMode syncMode
      static void _set_syncMode(System::Diagnostics::Process::StreamReadMode value);
      // static field const value: static public System.Diagnostics.Process/StreamReadMode asyncMode
      static constexpr const int asyncMode = 2;
      // Get static field: static public System.Diagnostics.Process/StreamReadMode asyncMode
      static System::Diagnostics::Process::StreamReadMode _get_asyncMode();
      // Set static field: static public System.Diagnostics.Process/StreamReadMode asyncMode
      static void _set_asyncMode(System::Diagnostics::Process::StreamReadMode value);
    }; // System.Diagnostics.Process/StreamReadMode
    #pragma pack(pop)
    static check_size<sizeof(Process::StreamReadMode), 0 + sizeof(int)> __System_Diagnostics_Process_StreamReadModeSizeCheck;
    static_assert(sizeof(Process::StreamReadMode) == 0x4);
    // private System.Boolean haveProcessId
    // Size: 0x1
    // Offset: 0x28
    bool haveProcessId;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: haveProcessId and: processId
    char __padding0[0x3] = {};
    // private System.Int32 processId
    // Size: 0x4
    // Offset: 0x2C
    int processId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean haveProcessHandle
    // Size: 0x1
    // Offset: 0x30
    bool haveProcessHandle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: haveProcessHandle and: m_processHandle
    char __padding2[0x7] = {};
    // private Microsoft.Win32.SafeHandles.SafeProcessHandle m_processHandle
    // Size: 0x8
    // Offset: 0x38
    Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle;
    // Field size check
    static_assert(sizeof(Microsoft::Win32::SafeHandles::SafeProcessHandle*) == 0x8);
    // private System.Boolean isRemoteMachine
    // Size: 0x1
    // Offset: 0x40
    bool isRemoteMachine;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRemoteMachine and: machineName
    char __padding4[0x7] = {};
    // private System.String machineName
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* machineName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 m_processAccess
    // Size: 0x4
    // Offset: 0x50
    int m_processAccess;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_processAccess and: threads
    char __padding6[0x4] = {};
    // private System.Diagnostics.ProcessThreadCollection threads
    // Size: 0x8
    // Offset: 0x58
    System::Diagnostics::ProcessThreadCollection* threads;
    // Field size check
    static_assert(sizeof(System::Diagnostics::ProcessThreadCollection*) == 0x8);
    // private System.Diagnostics.ProcessModuleCollection modules
    // Size: 0x8
    // Offset: 0x60
    System::Diagnostics::ProcessModuleCollection* modules;
    // Field size check
    static_assert(sizeof(System::Diagnostics::ProcessModuleCollection*) == 0x8);
    // private System.Boolean haveWorkingSetLimits
    // Size: 0x1
    // Offset: 0x68
    bool haveWorkingSetLimits;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean havePriorityClass
    // Size: 0x1
    // Offset: 0x69
    bool havePriorityClass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean watchForExit
    // Size: 0x1
    // Offset: 0x6A
    bool watchForExit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean watchingForExit
    // Size: 0x1
    // Offset: 0x6B
    bool watchingForExit;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: watchingForExit and: onExited
    char __padding12[0x4] = {};
    // private System.EventHandler onExited
    // Size: 0x8
    // Offset: 0x70
    System::EventHandler* onExited;
    // Field size check
    static_assert(sizeof(System::EventHandler*) == 0x8);
    // private System.Boolean exited
    // Size: 0x1
    // Offset: 0x78
    bool exited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: exited and: exitCode
    char __padding14[0x3] = {};
    // private System.Int32 exitCode
    // Size: 0x4
    // Offset: 0x7C
    int exitCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean signaled
    // Size: 0x1
    // Offset: 0x80
    bool signaled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean haveExitTime
    // Size: 0x1
    // Offset: 0x81
    bool haveExitTime;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean raisedOnExited
    // Size: 0x1
    // Offset: 0x82
    bool raisedOnExited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: raisedOnExited and: registeredWaitHandle
    char __padding18[0x5] = {};
    // private System.Threading.RegisteredWaitHandle registeredWaitHandle
    // Size: 0x8
    // Offset: 0x88
    System::Threading::RegisteredWaitHandle* registeredWaitHandle;
    // Field size check
    static_assert(sizeof(System::Threading::RegisteredWaitHandle*) == 0x8);
    // private System.Threading.WaitHandle waitHandle
    // Size: 0x8
    // Offset: 0x90
    System::Threading::WaitHandle* waitHandle;
    // Field size check
    static_assert(sizeof(System::Threading::WaitHandle*) == 0x8);
    // private System.ComponentModel.ISynchronizeInvoke synchronizingObject
    // Size: 0x8
    // Offset: 0x98
    System::ComponentModel::ISynchronizeInvoke* synchronizingObject;
    // Field size check
    static_assert(sizeof(System::ComponentModel::ISynchronizeInvoke*) == 0x8);
    // private System.IO.StreamReader standardOutput
    // Size: 0x8
    // Offset: 0xA0
    System::IO::StreamReader* standardOutput;
    // Field size check
    static_assert(sizeof(System::IO::StreamReader*) == 0x8);
    // private System.IO.StreamWriter standardInput
    // Size: 0x8
    // Offset: 0xA8
    System::IO::StreamWriter* standardInput;
    // Field size check
    static_assert(sizeof(System::IO::StreamWriter*) == 0x8);
    // private System.IO.StreamReader standardError
    // Size: 0x8
    // Offset: 0xB0
    System::IO::StreamReader* standardError;
    // Field size check
    static_assert(sizeof(System::IO::StreamReader*) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0xB8
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: outputStreamReadMode
    char __padding25[0x3] = {};
    // private System.Diagnostics.Process/StreamReadMode outputStreamReadMode
    // Size: 0x4
    // Offset: 0xBC
    System::Diagnostics::Process::StreamReadMode outputStreamReadMode;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Process::StreamReadMode) == 0x4);
    // private System.Diagnostics.Process/StreamReadMode errorStreamReadMode
    // Size: 0x4
    // Offset: 0xC0
    System::Diagnostics::Process::StreamReadMode errorStreamReadMode;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Process::StreamReadMode) == 0x4);
    // private System.Diagnostics.Process/StreamReadMode inputStreamReadMode
    // Size: 0x4
    // Offset: 0xC4
    System::Diagnostics::Process::StreamReadMode inputStreamReadMode;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Process::StreamReadMode) == 0x4);
    // System.Diagnostics.AsyncStreamReader output
    // Size: 0x8
    // Offset: 0xC8
    System::Diagnostics::AsyncStreamReader* output;
    // Field size check
    static_assert(sizeof(System::Diagnostics::AsyncStreamReader*) == 0x8);
    // System.Diagnostics.AsyncStreamReader error
    // Size: 0x8
    // Offset: 0xD0
    System::Diagnostics::AsyncStreamReader* error;
    // Field size check
    static_assert(sizeof(System::Diagnostics::AsyncStreamReader*) == 0x8);
    // private System.String process_name
    // Size: 0x8
    // Offset: 0xD8
    ::Il2CppString* process_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Process
    Process(bool haveProcessId_ = {}, int processId_ = {}, bool haveProcessHandle_ = {}, Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle_ = {}, bool isRemoteMachine_ = {}, ::Il2CppString* machineName_ = {}, int m_processAccess_ = {}, System::Diagnostics::ProcessThreadCollection* threads_ = {}, System::Diagnostics::ProcessModuleCollection* modules_ = {}, bool haveWorkingSetLimits_ = {}, bool havePriorityClass_ = {}, bool watchForExit_ = {}, bool watchingForExit_ = {}, System::EventHandler* onExited_ = {}, bool exited_ = {}, int exitCode_ = {}, bool signaled_ = {}, bool haveExitTime_ = {}, bool raisedOnExited_ = {}, System::Threading::RegisteredWaitHandle* registeredWaitHandle_ = {}, System::Threading::WaitHandle* waitHandle_ = {}, System::ComponentModel::ISynchronizeInvoke* synchronizingObject_ = {}, System::IO::StreamReader* standardOutput_ = {}, System::IO::StreamWriter* standardInput_ = {}, System::IO::StreamReader* standardError_ = {}, bool disposed_ = {}, System::Diagnostics::Process::StreamReadMode outputStreamReadMode_ = {}, System::Diagnostics::Process::StreamReadMode errorStreamReadMode_ = {}, System::Diagnostics::Process::StreamReadMode inputStreamReadMode_ = {}, System::Diagnostics::AsyncStreamReader* output_ = {}, System::Diagnostics::AsyncStreamReader* error_ = {}, ::Il2CppString* process_name_ = {}) noexcept : haveProcessId{haveProcessId_}, processId{processId_}, haveProcessHandle{haveProcessHandle_}, m_processHandle{m_processHandle_}, isRemoteMachine{isRemoteMachine_}, machineName{machineName_}, m_processAccess{m_processAccess_}, threads{threads_}, modules{modules_}, haveWorkingSetLimits{haveWorkingSetLimits_}, havePriorityClass{havePriorityClass_}, watchForExit{watchForExit_}, watchingForExit{watchingForExit_}, onExited{onExited_}, exited{exited_}, exitCode{exitCode_}, signaled{signaled_}, haveExitTime{haveExitTime_}, raisedOnExited{raisedOnExited_}, registeredWaitHandle{registeredWaitHandle_}, waitHandle{waitHandle_}, synchronizingObject{synchronizingObject_}, standardOutput{standardOutput_}, standardInput{standardInput_}, standardError{standardError_}, disposed{disposed_}, outputStreamReadMode{outputStreamReadMode_}, errorStreamReadMode{errorStreamReadMode_}, inputStreamReadMode{inputStreamReadMode_}, output{output_}, error{error_}, process_name{process_name_} {}
    // private System.Void .ctor(System.String machineName, System.Boolean isRemoteMachine, System.Int32 processId, System.Diagnostics.ProcessInfo processInfo)
    // Offset: 0x1852690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Process* New_ctor(::Il2CppString* machineName, bool isRemoteMachine, int processId, System::Diagnostics::ProcessInfo* processInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::Process::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Process*, creationType>(machineName, isRemoteMachine, processId, processInfo)));
    }
    // private System.Boolean get_Associated()
    // Offset: 0x1852740
    bool get_Associated();
    // public System.Boolean get_HasExited()
    // Offset: 0x1852760
    bool get_HasExited();
    // private System.Diagnostics.ProcessThreadTimes GetProcessTimes()
    // Offset: 0x18531EC
    System::Diagnostics::ProcessThreadTimes* GetProcessTimes();
    // public System.Int32 get_Id()
    // Offset: 0x1853458
    int get_Id();
    // public System.ComponentModel.ISynchronizeInvoke get_SynchronizingObject()
    // Offset: 0x1853480
    System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject();
    // public System.TimeSpan get_TotalProcessorTime()
    // Offset: 0x1853604
    System::TimeSpan get_TotalProcessorTime();
    // private System.Void ReleaseProcessHandle(Microsoft.Win32.SafeHandles.SafeProcessHandle handle)
    // Offset: 0x1853118
    void ReleaseProcessHandle(Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);
    // public System.Void Close()
    // Offset: 0x18536B0
    void Close();
    // private System.Void EnsureState(System.Diagnostics.Process/State state)
    // Offset: 0x1852A3C
    void EnsureState(System::Diagnostics::Process::State state);
    // static public System.Diagnostics.Process GetCurrentProcess()
    // Offset: 0x1853900
    static System::Diagnostics::Process* GetCurrentProcess();
    // protected System.Void OnExited()
    // Offset: 0x185397C
    void OnExited();
    // private Microsoft.Win32.SafeHandles.SafeProcessHandle GetProcessHandle(System.Int32 access, System.Boolean throwIfExited)
    // Offset: 0x1852B7C
    Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int access, bool throwIfExited);
    // private Microsoft.Win32.SafeHandles.SafeProcessHandle GetProcessHandle(System.Int32 access)
    // Offset: 0x1853BE8
    Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(int access);
    // public System.Void Refresh()
    // Offset: 0x18538EC
    void Refresh();
    // public System.Void Kill()
    // Offset: 0x1853BF0
    void Kill();
    // private System.Void StopWatchingForExit()
    // Offset: 0x1853810
    void StopWatchingForExit();
    // static private System.String ProcessName_internal(System.IntPtr handle)
    // Offset: 0x1854008
    static ::Il2CppString* ProcessName_internal(System::IntPtr handle);
    // static private System.String ProcessName_internal(Microsoft.Win32.SafeHandles.SafeProcessHandle handle)
    // Offset: 0x185400C
    static ::Il2CppString* ProcessName_internal(Microsoft::Win32::SafeHandles::SafeProcessHandle* handle);
    // public System.String get_ProcessName()
    // Offset: 0x1853E48
    ::Il2CppString* get_ProcessName();
    // private System.Void RaiseOnExited()
    // Offset: 0x1853140
    void RaiseOnExited();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1853668
    // Implemented from: System.ComponentModel.Component
    // Base method: System.Void Component::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.String ToString()
    // Offset: 0x1853CEC
    // Implemented from: System.ComponentModel.Component
    // Base method: System.String Component::ToString()
    ::Il2CppString* ToString();
  }; // System.Diagnostics.Process
  #pragma pack(pop)
  static check_size<sizeof(Process), 216 + sizeof(::Il2CppString*)> __System_Diagnostics_ProcessSizeCheck;
  static_assert(sizeof(Process) == 0xE0);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Process*, "System.Diagnostics", "Process");
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Process::StreamReadMode, "System.Diagnostics", "Process/StreamReadMode");
