// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Constraints.MsgUtils
#include "NUnit/Framework/Constraints/MsgUtils.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ValueFormatter
  class ValueFormatter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x18
  // Autogenerated type: NUnit.Framework.Constraints.MsgUtils/<>c__DisplayClass20
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: DB30B4
  class MsgUtils::$$c__DisplayClass20 : public ::Il2CppObject {
    public:
    // public NUnit.Framework.Constraints.ValueFormatter next
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Constraints::ValueFormatter* next;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Constraints::ValueFormatter*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass20
    $$c__DisplayClass20(NUnit::Framework::Constraints::ValueFormatter* next_ = {}) noexcept : next{next_} {}
    // Creating conversion operator: operator NUnit::Framework::Constraints::ValueFormatter*
    constexpr operator NUnit::Framework::Constraints::ValueFormatter*() const noexcept {
      return next;
    }
    // public System.String <.cctor>b__2(System.Object val)
    // Offset: 0x13E1D28
    ::Il2CppString* $_cctor$b__2(::Il2CppObject* val);
    // public System.Void .ctor()
    // Offset: 0x13E16A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MsgUtils::$$c__DisplayClass20* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass20::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MsgUtils::$$c__DisplayClass20*, creationType>()));
    }
  }; // NUnit.Framework.Constraints.MsgUtils/<>c__DisplayClass20
  static check_size<sizeof(MsgUtils::$$c__DisplayClass20), 16 + sizeof(NUnit::Framework::Constraints::ValueFormatter*)> __NUnit_Framework_Constraints_MsgUtils_$$c__DisplayClass20SizeCheck;
  static_assert(sizeof(MsgUtils::$$c__DisplayClass20) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::MsgUtils::$$c__DisplayClass20*, "NUnit.Framework.Constraints", "MsgUtils/<>c__DisplayClass20");
#pragma pack(pop)
