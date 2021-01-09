// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Timer
#include "System/Threading/Timer.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  // Autogenerated type: System.Threading.Timer/TimerComparer
  // [] Offset: FFFFFFFF
  class Timer::TimerComparer : public ::Il2CppObject/*, public System::Collections::IComparer*/ {
    public:
    // Creating value type constructor for type: TimerComparer
    TimerComparer() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IComparer
    operator System::Collections::IComparer() noexcept {
      return *reinterpret_cast<System::Collections::IComparer*>(this);
    }
    // public System.Int32 Compare(System.Object x, System.Object y)
    // Offset: 0x1D1F4A0
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object x, System.Object y)
    int Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* x, ::Il2CppObject* y);
    // public System.Void .ctor()
    // Offset: 0x1D1E75C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Timer::TimerComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Timer::TimerComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Timer::TimerComparer*, creationType>()));
    }
  }; // System.Threading.Timer/TimerComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Timer::TimerComparer*, "System.Threading", "Timer/TimerComparer");
#pragma pack(pop)
