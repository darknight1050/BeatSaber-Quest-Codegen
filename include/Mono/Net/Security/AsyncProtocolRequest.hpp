// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
  // Forward declaring type: AsyncProtocolResult
  class AsyncProtocolResult;
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x38
  // Autogenerated type: Mono.Net.Security.AsyncProtocolRequest
  // [] Offset: FFFFFFFF
  class AsyncProtocolRequest : public ::Il2CppObject {
    public:
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$StartOperation$d__23
    struct $StartOperation$d__23;
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$ProcessOperation$d__24
    struct $ProcessOperation$d__24;
    // Nested type: Mono::Net::Security::AsyncProtocolRequest::$InnerRead$d__25
    struct $InnerRead$d__25;
    // [CompilerGeneratedAttribute] Offset: 0xD45ECC
    // private readonly Mono.Net.Security.MobileAuthenticatedStream <Parent>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Mono::Net::Security::MobileAuthenticatedStream* Parent;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::MobileAuthenticatedStream*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD45EDC
    // private readonly System.Boolean <RunSynchronously>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool RunSynchronously;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RunSynchronously and: UserResult
    char __padding1[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD45EEC
    // private System.Int32 <UserResult>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int UserResult;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 Started
    // Size: 0x4
    // Offset: 0x20
    int Started;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 RequestedSize
    // Size: 0x4
    // Offset: 0x24
    int RequestedSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 WriteRequested
    // Size: 0x4
    // Offset: 0x28
    int WriteRequested;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: WriteRequested and: locker
    char __padding5[0x4] = {};
    // private readonly System.Object locker
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: AsyncProtocolRequest
    AsyncProtocolRequest(Mono::Net::Security::MobileAuthenticatedStream* Parent_ = {}, bool RunSynchronously_ = {}, int UserResult_ = {}, int Started_ = {}, int RequestedSize_ = {}, int WriteRequested_ = {}, ::Il2CppObject* locker_ = {}) noexcept : Parent{Parent_}, RunSynchronously{RunSynchronously_}, UserResult{UserResult_}, Started{Started_}, RequestedSize{RequestedSize_}, WriteRequested{WriteRequested_}, locker{locker_} {}
    // public Mono.Net.Security.MobileAuthenticatedStream get_Parent()
    // Offset: 0x12642D8
    Mono::Net::Security::MobileAuthenticatedStream* get_Parent();
    // public System.Boolean get_RunSynchronously()
    // Offset: 0x12642E0
    bool get_RunSynchronously();
    // public System.String get_Name()
    // Offset: 0x12642E8
    ::Il2CppString* get_Name();
    // public System.Int32 get_UserResult()
    // Offset: 0x1264310
    int get_UserResult();
    // protected System.Void set_UserResult(System.Int32 value)
    // Offset: 0x1264318
    void set_UserResult(int value);
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync)
    // Offset: 0x1264018
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncProtocolRequest* New_ctor(Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::AsyncProtocolRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncProtocolRequest*, creationType>(parent, sync)));
    }
    // System.Void RequestRead(System.Int32 size)
    // Offset: 0x1264320
    void RequestRead(int size);
    // System.Void RequestWrite()
    // Offset: 0x12643C8
    void RequestWrite();
    // System.Threading.Tasks.Task`1<Mono.Net.Security.AsyncProtocolResult> StartOperation(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x12643D4
    System::Threading::Tasks::Task_1<Mono::Net::Security::AsyncProtocolResult*>* StartOperation(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task ProcessOperation(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1264514
    System::Threading::Tasks::Task* ProcessOperation(System::Threading::CancellationToken cancellationToken);
    // private System.Threading.Tasks.Task`1<System.Nullable`1<System.Int32>> InnerRead(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x126463C
    System::Threading::Tasks::Task_1<System::Nullable_1<int>>* InnerRead(System::Threading::CancellationToken cancellationToken);
    // protected Mono.Net.Security.AsyncOperationStatus Run(Mono.Net.Security.AsyncOperationStatus status)
    // Offset: 0xFFFFFFFF
    Mono::Net::Security::AsyncOperationStatus Run(Mono::Net::Security::AsyncOperationStatus status);
    // public override System.String ToString()
    // Offset: 0x1264774
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Mono.Net.Security.AsyncProtocolRequest
  static check_size<sizeof(AsyncProtocolRequest), 48 + sizeof(::Il2CppObject*)> __Mono_Net_Security_AsyncProtocolRequestSizeCheck;
  static_assert(sizeof(AsyncProtocolRequest) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncProtocolRequest*, "Mono.Net.Security", "AsyncProtocolRequest");
#pragma pack(pop)
