// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadPoolWorkQueueThreadLocals
  class ThreadPoolWorkQueueThreadLocals;
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x24
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue
  // [] Offset: FFFFFFFF
  class ThreadPoolWorkQueue : public ::Il2CppObject {
    public:
    // Nested type: System::Threading::ThreadPoolWorkQueue::SparseArray_1<T>
    template<typename T>
    class SparseArray_1;
    // Nested type: System::Threading::ThreadPoolWorkQueue::WorkStealingQueue
    class WorkStealingQueue;
    // Nested type: System::Threading::ThreadPoolWorkQueue::QueueSegment
    class QueueSegment;
    // System.Threading.ThreadPoolWorkQueue/QueueSegment queueHead
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ThreadPoolWorkQueue::QueueSegment* queueHead;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadPoolWorkQueue::QueueSegment*) == 0x8);
    // System.Threading.ThreadPoolWorkQueue/QueueSegment queueTail
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ThreadPoolWorkQueue::QueueSegment* queueTail;
    // Field size check
    static_assert(sizeof(System::Threading::ThreadPoolWorkQueue::QueueSegment*) == 0x8);
    // private System.Int32 numOutstandingThreadRequests
    // Size: 0x4
    // Offset: 0x20
    int numOutstandingThreadRequests;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ThreadPoolWorkQueue
    ThreadPoolWorkQueue(System::Threading::ThreadPoolWorkQueue::QueueSegment* queueHead_ = {}, System::Threading::ThreadPoolWorkQueue::QueueSegment* queueTail_ = {}, int numOutstandingThreadRequests_ = {}) noexcept : queueHead{queueHead_}, queueTail{queueTail_}, numOutstandingThreadRequests{numOutstandingThreadRequests_} {}
    // Get static field: static System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Threading.ThreadPoolWorkQueue/WorkStealingQueue> allThreadQueues
    static System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* _get_allThreadQueues();
    // Set static field: static System.Threading.ThreadPoolWorkQueue/SparseArray`1<System.Threading.ThreadPoolWorkQueue/WorkStealingQueue> allThreadQueues
    static void _set_allThreadQueues(System::Threading::ThreadPoolWorkQueue::SparseArray_1<System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*>* value);
    // public System.Threading.ThreadPoolWorkQueueThreadLocals EnsureCurrentThreadHasQueue()
    // Offset: 0x1D1BFAC
    System::Threading::ThreadPoolWorkQueueThreadLocals* EnsureCurrentThreadHasQueue();
    // System.Void EnsureThreadRequested()
    // Offset: 0x1D1C15C
    void EnsureThreadRequested();
    // System.Void MarkThreadRequestSatisfied()
    // Offset: 0x1D1C214
    void MarkThreadRequestSatisfied();
    // public System.Void Enqueue(System.Threading.IThreadPoolWorkItem callback, System.Boolean forceGlobal)
    // Offset: 0x1D1BC54
    void Enqueue(System::Threading::IThreadPoolWorkItem* callback, bool forceGlobal);
    // System.Boolean LocalFindAndPop(System.Threading.IThreadPoolWorkItem callback)
    // Offset: 0x1D1BD80
    bool LocalFindAndPop(System::Threading::IThreadPoolWorkItem* callback);
    // public System.Void Dequeue(System.Threading.ThreadPoolWorkQueueThreadLocals tl, out System.Threading.IThreadPoolWorkItem callback, out System.Boolean missedSteal)
    // Offset: 0x1D1CA9C
    void Dequeue(System::Threading::ThreadPoolWorkQueueThreadLocals* tl, System::Threading::IThreadPoolWorkItem*& callback, bool& missedSteal);
    // static System.Boolean Dispatch()
    // Offset: 0x1D1D0E4
    static bool Dispatch();
    // static private System.Void .cctor()
    // Offset: 0x1D1D70C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1D1BEB8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueue*, creationType>()));
    }
  }; // System.Threading.ThreadPoolWorkQueue
  static check_size<sizeof(ThreadPoolWorkQueue), 32 + sizeof(int)> __System_Threading_ThreadPoolWorkQueueSizeCheck;
  static_assert(sizeof(ThreadPoolWorkQueue) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueue*, "System.Threading", "ThreadPoolWorkQueue");
#pragma pack(pop)
