// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.SpinWait
  struct SpinWait : public System::ValueType {
    public:
    // private System.Int32 m_count
    // Offset: 0x0
    int m_count;
    // Creating value type constructor for type: SpinWait
    SpinWait(int m_count_ = {}) : m_count{m_count_} {}
    // public System.Boolean get_NextSpinWillYield()
    // Offset: 0x9936E8
    bool get_NextSpinWillYield();
    // public System.Void SpinOnce()
    // Offset: 0x993718
    void SpinOnce();
  }; // System.Threading.SpinWait
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::SpinWait, "System.Threading", "SpinWait");
#pragma pack(pop)
