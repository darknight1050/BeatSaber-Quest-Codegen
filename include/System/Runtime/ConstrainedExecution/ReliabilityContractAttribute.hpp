// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.ConstrainedExecution.Consistency
#include "System/Runtime/ConstrainedExecution/Consistency.hpp"
// Including type: System.Runtime.ConstrainedExecution.Cer
#include "System/Runtime/ConstrainedExecution/Cer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.ConstrainedExecution
namespace System::Runtime::ConstrainedExecution {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: C970E8
  class ReliabilityContractAttribute : public System::Attribute {
    public:
    // private System.Runtime.ConstrainedExecution.Consistency _consistency
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::ConstrainedExecution::Consistency consistency;
    // Field size check
    static_assert(sizeof(System::Runtime::ConstrainedExecution::Consistency) == 0x4);
    // private System.Runtime.ConstrainedExecution.Cer _cer
    // Size: 0x4
    // Offset: 0x14
    System::Runtime::ConstrainedExecution::Cer cer;
    // Field size check
    static_assert(sizeof(System::Runtime::ConstrainedExecution::Cer) == 0x4);
    // Creating value type constructor for type: ReliabilityContractAttribute
    ReliabilityContractAttribute(System::Runtime::ConstrainedExecution::Consistency consistency_ = {}, System::Runtime::ConstrainedExecution::Cer cer_ = {}) noexcept : consistency{consistency_}, cer{cer_} {}
    // public System.Void .ctor(System.Runtime.ConstrainedExecution.Consistency consistencyGuarantee, System.Runtime.ConstrainedExecution.Cer cer)
    // Offset: 0x12FFEE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReliabilityContractAttribute* New_ctor(System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee, System::Runtime::ConstrainedExecution::Cer cer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::ConstrainedExecution::ReliabilityContractAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReliabilityContractAttribute*, creationType>(consistencyGuarantee, cer)));
    }
  }; // System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
  #pragma pack(pop)
  static check_size<sizeof(ReliabilityContractAttribute), 20 + sizeof(System::Runtime::ConstrainedExecution::Cer)> __System_Runtime_ConstrainedExecution_ReliabilityContractAttributeSizeCheck;
  static_assert(sizeof(ReliabilityContractAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::ReliabilityContractAttribute*, "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute");
