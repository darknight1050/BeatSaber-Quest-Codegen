// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x24
  // Autogenerated type: System.Threading.ManualResetEventSlim
  // [] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: D398B8
  // [ComVisibleAttribute] Offset: D398B8
  class ManualResetEventSlim : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private System.Object m_lock
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* m_lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent m_eventObj
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ManualResetEvent* m_eventObj;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Int32 m_combinedState
    // Size: 0x4
    // Offset: 0x20
    int m_combinedState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ManualResetEventSlim
    ManualResetEventSlim(::Il2CppObject* m_lock_ = {}, System::Threading::ManualResetEvent* m_eventObj_ = {}, int m_combinedState_ = {}) noexcept : m_lock{m_lock_}, m_eventObj{m_eventObj_}, m_combinedState{m_combinedState_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // static field const value: static private System.Int32 DEFAULT_SPIN_SP
    static constexpr const int DEFAULT_SPIN_SP = 1;
    // Get static field: static private System.Int32 DEFAULT_SPIN_SP
    static int _get_DEFAULT_SPIN_SP();
    // Set static field: static private System.Int32 DEFAULT_SPIN_SP
    static void _set_DEFAULT_SPIN_SP(int value);
    // static field const value: static private System.Int32 DEFAULT_SPIN_MP
    static constexpr const int DEFAULT_SPIN_MP = 10;
    // Get static field: static private System.Int32 DEFAULT_SPIN_MP
    static int _get_DEFAULT_SPIN_MP();
    // Set static field: static private System.Int32 DEFAULT_SPIN_MP
    static void _set_DEFAULT_SPIN_MP(int value);
    // static field const value: static private System.Int32 SignalledState_BitMask
    static constexpr const int SignalledState_BitMask = -2147483648;
    // Get static field: static private System.Int32 SignalledState_BitMask
    static int _get_SignalledState_BitMask();
    // Set static field: static private System.Int32 SignalledState_BitMask
    static void _set_SignalledState_BitMask(int value);
    // static field const value: static private System.Int32 SignalledState_ShiftCount
    static constexpr const int SignalledState_ShiftCount = 31;
    // Get static field: static private System.Int32 SignalledState_ShiftCount
    static int _get_SignalledState_ShiftCount();
    // Set static field: static private System.Int32 SignalledState_ShiftCount
    static void _set_SignalledState_ShiftCount(int value);
    // static field const value: static private System.Int32 Dispose_BitMask
    static constexpr const int Dispose_BitMask = 1073741824;
    // Get static field: static private System.Int32 Dispose_BitMask
    static int _get_Dispose_BitMask();
    // Set static field: static private System.Int32 Dispose_BitMask
    static void _set_Dispose_BitMask(int value);
    // static field const value: static private System.Int32 SpinCountState_BitMask
    static constexpr const int SpinCountState_BitMask = 1073217536;
    // Get static field: static private System.Int32 SpinCountState_BitMask
    static int _get_SpinCountState_BitMask();
    // Set static field: static private System.Int32 SpinCountState_BitMask
    static void _set_SpinCountState_BitMask(int value);
    // static field const value: static private System.Int32 SpinCountState_ShiftCount
    static constexpr const int SpinCountState_ShiftCount = 19;
    // Get static field: static private System.Int32 SpinCountState_ShiftCount
    static int _get_SpinCountState_ShiftCount();
    // Set static field: static private System.Int32 SpinCountState_ShiftCount
    static void _set_SpinCountState_ShiftCount(int value);
    // static field const value: static private System.Int32 SpinCountState_MaxValue
    static constexpr const int SpinCountState_MaxValue = 2047;
    // Get static field: static private System.Int32 SpinCountState_MaxValue
    static int _get_SpinCountState_MaxValue();
    // Set static field: static private System.Int32 SpinCountState_MaxValue
    static void _set_SpinCountState_MaxValue(int value);
    // static field const value: static private System.Int32 NumWaitersState_BitMask
    static constexpr const int NumWaitersState_BitMask = 524287;
    // Get static field: static private System.Int32 NumWaitersState_BitMask
    static int _get_NumWaitersState_BitMask();
    // Set static field: static private System.Int32 NumWaitersState_BitMask
    static void _set_NumWaitersState_BitMask(int value);
    // static field const value: static private System.Int32 NumWaitersState_ShiftCount
    static constexpr const int NumWaitersState_ShiftCount = 0;
    // Get static field: static private System.Int32 NumWaitersState_ShiftCount
    static int _get_NumWaitersState_ShiftCount();
    // Set static field: static private System.Int32 NumWaitersState_ShiftCount
    static void _set_NumWaitersState_ShiftCount(int value);
    // static field const value: static private System.Int32 NumWaitersState_MaxValue
    static constexpr const int NumWaitersState_MaxValue = 524287;
    // Get static field: static private System.Int32 NumWaitersState_MaxValue
    static int _get_NumWaitersState_MaxValue();
    // Set static field: static private System.Int32 NumWaitersState_MaxValue
    static void _set_NumWaitersState_MaxValue(int value);
    // Get static field: static private System.Action`1<System.Object> s_cancellationTokenCallback
    static System::Action_1<::Il2CppObject*>* _get_s_cancellationTokenCallback();
    // Set static field: static private System.Action`1<System.Object> s_cancellationTokenCallback
    static void _set_s_cancellationTokenCallback(System::Action_1<::Il2CppObject*>* value);
    // public System.Threading.WaitHandle get_WaitHandle()
    // Offset: 0x16B678C
    System::Threading::WaitHandle* get_WaitHandle();
    // public System.Boolean get_IsSet()
    // Offset: 0x16B69D0
    bool get_IsSet();
    // private System.Void set_IsSet(System.Boolean value)
    // Offset: 0x16B6A44
    void set_IsSet(bool value);
    // public System.Int32 get_SpinCount()
    // Offset: 0x16B6B08
    int get_SpinCount();
    // private System.Void set_SpinCount(System.Int32 value)
    // Offset: 0x16B6B80
    void set_SpinCount(int value);
    // private System.Int32 get_Waiters()
    // Offset: 0x16B6BC0
    int get_Waiters();
    // private System.Void set_Waiters(System.Int32 value)
    // Offset: 0x16B6C2C
    void set_Waiters(int value);
    // public System.Void .ctor(System.Boolean initialState)
    // Offset: 0x16B6D10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManualResetEventSlim* New_ctor(bool initialState) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ManualResetEventSlim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManualResetEventSlim*, creationType>(initialState)));
    }
    // public System.Void .ctor(System.Boolean initialState, System.Int32 spinCount)
    // Offset: 0x16B6DBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManualResetEventSlim* New_ctor(bool initialState, int spinCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ManualResetEventSlim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManualResetEventSlim*, creationType>(initialState, spinCount)));
    }
    // private System.Void Initialize(System.Boolean initialState, System.Int32 spinCount)
    // Offset: 0x16B6D44
    void Initialize(bool initialState, int spinCount);
    // private System.Void EnsureLockObjectCreated()
    // Offset: 0x16B6F00
    void EnsureLockObjectCreated();
    // private System.Boolean LazyInitializeEvent()
    // Offset: 0x16B6868
    bool LazyInitializeEvent();
    // public System.Void Set()
    // Offset: 0x16B6FA8
    void Set();
    // private System.Void Set(System.Boolean duringCancellation)
    // Offset: 0x16B6FB0
    void Set(bool duringCancellation);
    // public System.Boolean Wait(System.Int32 millisecondsTimeout, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x16B71DC
    bool Wait(int millisecondsTimeout, System::Threading::CancellationToken cancellationToken);
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x16B7720
    void Dispose(bool disposing);
    // private System.Void ThrowIfDisposed()
    // Offset: 0x16B67CC
    void ThrowIfDisposed();
    // static private System.Void CancellationTokenCallback(System.Object obj)
    // Offset: 0x16B7808
    static void CancellationTokenCallback(::Il2CppObject* obj);
    // private System.Void UpdateStateAtomically(System.Int32 newBits, System.Int32 updateBitsMask)
    // Offset: 0x16B6A68
    void UpdateStateAtomically(int newBits, int updateBitsMask);
    // static private System.Int32 ExtractStatePortionAndShiftRight(System.Int32 state, System.Int32 mask, System.Int32 rightBitShiftCount)
    // Offset: 0x16B6B74
    static int ExtractStatePortionAndShiftRight(int state, int mask, int rightBitShiftCount);
    // static private System.Int32 ExtractStatePortion(System.Int32 state, System.Int32 mask)
    // Offset: 0x16B6A3C
    static int ExtractStatePortion(int state, int mask);
    // static private System.Void .cctor()
    // Offset: 0x16B790C
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0x16B76A4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Threading.ManualResetEventSlim
  static check_size<sizeof(ManualResetEventSlim), 32 + sizeof(int)> __System_Threading_ManualResetEventSlimSizeCheck;
  static_assert(sizeof(ManualResetEventSlim) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ManualResetEventSlim*, "System.Threading", "ManualResetEventSlim");
#pragma pack(pop)
