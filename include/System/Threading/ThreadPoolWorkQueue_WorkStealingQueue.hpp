// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
// Including type: System.Threading.SpinLock
#include "System/Threading/SpinLock.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: IThreadPoolWorkItem
  class IThreadPoolWorkItem;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue/WorkStealingQueue
  class ThreadPoolWorkQueue::WorkStealingQueue : public ::Il2CppObject {
    public:
    // System.Threading.IThreadPoolWorkItem[] m_array
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Threading::IThreadPoolWorkItem*>* m_array;
    // Field size check
    static_assert(sizeof(::Array<System::Threading::IThreadPoolWorkItem*>*) == 0x8);
    // private System.Int32 m_mask
    // Size: 0x4
    // Offset: 0x18
    int m_mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_headIndex
    // Size: 0x4
    // Offset: 0x1C
    int m_headIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_tailIndex
    // Size: 0x4
    // Offset: 0x20
    int m_tailIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.SpinLock m_foreignLock
    // Size: 0x4
    // Offset: 0x24
    System::Threading::SpinLock m_foreignLock;
    // Field size check
    static_assert(sizeof(System::Threading::SpinLock) == 0x4);
    // Creating value type constructor for type: WorkStealingQueue
    WorkStealingQueue(::Array<System::Threading::IThreadPoolWorkItem*>* m_array_ = {}, int m_mask_ = {}, int m_headIndex_ = {}, int m_tailIndex_ = {}, System::Threading::SpinLock m_foreignLock_ = {}) noexcept : m_array{m_array_}, m_mask{m_mask_}, m_headIndex{m_headIndex_}, m_tailIndex{m_tailIndex_}, m_foreignLock{m_foreignLock_} {}
    // public System.Void LocalPush(System.Threading.IThreadPoolWorkItem obj)
    // Offset: 0x187AB38
    void LocalPush(System::Threading::IThreadPoolWorkItem* obj);
    // public System.Boolean LocalFindAndPop(System.Threading.IThreadPoolWorkItem obj)
    // Offset: 0x187B044
    bool LocalFindAndPop(System::Threading::IThreadPoolWorkItem* obj);
    // public System.Boolean LocalPop(out System.Threading.IThreadPoolWorkItem obj)
    // Offset: 0x187B4DC
    bool LocalPop(System::Threading::IThreadPoolWorkItem*& obj);
    // public System.Boolean TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref System.Boolean missedSteal)
    // Offset: 0x187B8C8
    bool TrySteal(System::Threading::IThreadPoolWorkItem*& obj, bool& missedSteal);
    // private System.Boolean TrySteal(out System.Threading.IThreadPoolWorkItem obj, ref System.Boolean missedSteal, System.Int32 millisecondsTimeout)
    // Offset: 0x187BF8C
    bool TrySteal(System::Threading::IThreadPoolWorkItem*& obj, bool& missedSteal, int millisecondsTimeout);
    // public System.Void .ctor()
    // Offset: 0x187C20C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueue::WorkStealingQueue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::WorkStealingQueue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueue::WorkStealingQueue*, creationType>()));
    }
  }; // System.Threading.ThreadPoolWorkQueue/WorkStealingQueue
  #pragma pack(pop)
  static check_size<sizeof(ThreadPoolWorkQueue::WorkStealingQueue), 36 + sizeof(System::Threading::SpinLock)> __System_Threading_ThreadPoolWorkQueue_WorkStealingQueueSizeCheck;
  static_assert(sizeof(ThreadPoolWorkQueue::WorkStealingQueue) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ThreadPoolWorkQueue::WorkStealingQueue*, "System.Threading", "ThreadPoolWorkQueue/WorkStealingQueue");
