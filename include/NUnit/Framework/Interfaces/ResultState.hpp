// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.TestStatus
#include "NUnit/Framework/Interfaces/TestStatus.hpp"
// Including type: NUnit.Framework.Interfaces.FailureSite
#include "NUnit/Framework/Interfaces/FailureSite.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ResultState
  class ResultState : public ::Il2CppObject {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xE04C80
    // [CompilerGeneratedAttribute] Offset: 0xE04C80
    // private NUnit.Framework.Interfaces.TestStatus <Status>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    NUnit::Framework::Interfaces::TestStatus Status;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::TestStatus) == 0x4);
    // Padding between fields: Status and: Label
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xE04CBC
    // [DebuggerBrowsableAttribute] Offset: 0xE04CBC
    // private System.String <Label>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Label;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xE04CF8
    // [CompilerGeneratedAttribute] Offset: 0xE04CF8
    // private NUnit.Framework.Interfaces.FailureSite <Site>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    NUnit::Framework::Interfaces::FailureSite Site;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::FailureSite) == 0x4);
    // Creating value type constructor for type: ResultState
    ResultState(NUnit::Framework::Interfaces::TestStatus Status_ = {}, ::Il2CppString* Label_ = {}, NUnit::Framework::Interfaces::FailureSite Site_ = {}) noexcept : Status{Status_}, Label{Label_}, Site{Site_} {}
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Inconclusive
    static NUnit::Framework::Interfaces::ResultState* _get_Inconclusive();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Inconclusive
    static void _set_Inconclusive(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Skipped
    static NUnit::Framework::Interfaces::ResultState* _get_Skipped();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Skipped
    static void _set_Skipped(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Ignored
    static NUnit::Framework::Interfaces::ResultState* _get_Ignored();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Ignored
    static void _set_Ignored(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Explicit
    static NUnit::Framework::Interfaces::ResultState* _get_Explicit();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Explicit
    static void _set_Explicit(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Success
    static NUnit::Framework::Interfaces::ResultState* _get_Success();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Success
    static void _set_Success(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Failure
    static NUnit::Framework::Interfaces::ResultState* _get_Failure();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Failure
    static void _set_Failure(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Error
    static NUnit::Framework::Interfaces::ResultState* _get_Error();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Error
    static void _set_Error(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState Cancelled
    static NUnit::Framework::Interfaces::ResultState* _get_Cancelled();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState Cancelled
    static void _set_Cancelled(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState NotRunnable
    static NUnit::Framework::Interfaces::ResultState* _get_NotRunnable();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState NotRunnable
    static void _set_NotRunnable(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState ChildFailure
    static NUnit::Framework::Interfaces::ResultState* _get_ChildFailure();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState ChildFailure
    static void _set_ChildFailure(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState SetUpFailure
    static NUnit::Framework::Interfaces::ResultState* _get_SetUpFailure();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState SetUpFailure
    static void _set_SetUpFailure(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState SetUpError
    static NUnit::Framework::Interfaces::ResultState* _get_SetUpError();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState SetUpError
    static void _set_SetUpError(NUnit::Framework::Interfaces::ResultState* value);
    // Get static field: static public readonly NUnit.Framework.Interfaces.ResultState TearDownError
    static NUnit::Framework::Interfaces::ResultState* _get_TearDownError();
    // Set static field: static public readonly NUnit.Framework.Interfaces.ResultState TearDownError
    static void _set_TearDownError(NUnit::Framework::Interfaces::ResultState* value);
    // public System.Void .ctor(NUnit.Framework.Interfaces.TestStatus status)
    // Offset: 0x1716D7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultState* New_ctor(NUnit::Framework::Interfaces::TestStatus status) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::ResultState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultState*, creationType>(status)));
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.TestStatus status, System.String label)
    // Offset: 0x1716E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultState* New_ctor(NUnit::Framework::Interfaces::TestStatus status, ::Il2CppString* label) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::ResultState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultState*, creationType>(status, label)));
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.TestStatus status, System.String label, NUnit.Framework.Interfaces.FailureSite site)
    // Offset: 0x1716DE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultState* New_ctor(NUnit::Framework::Interfaces::TestStatus status, ::Il2CppString* label, NUnit::Framework::Interfaces::FailureSite site) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::ResultState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultState*, creationType>(status, label, site)));
    }
    // public NUnit.Framework.Interfaces.TestStatus get_Status()
    // Offset: 0x1716E7C
    NUnit::Framework::Interfaces::TestStatus get_Status();
    // private System.Void set_Status(NUnit.Framework.Interfaces.TestStatus value)
    // Offset: 0x1716E84
    void set_Status(NUnit::Framework::Interfaces::TestStatus value);
    // public System.String get_Label()
    // Offset: 0x1716E8C
    ::Il2CppString* get_Label();
    // private System.Void set_Label(System.String value)
    // Offset: 0x1716E94
    void set_Label(::Il2CppString* value);
    // public NUnit.Framework.Interfaces.FailureSite get_Site()
    // Offset: 0x1716E9C
    NUnit::Framework::Interfaces::FailureSite get_Site();
    // private System.Void set_Site(NUnit.Framework.Interfaces.FailureSite value)
    // Offset: 0x1716EA4
    void set_Site(NUnit::Framework::Interfaces::FailureSite value);
    // public NUnit.Framework.Interfaces.ResultState WithSite(NUnit.Framework.Interfaces.FailureSite site)
    // Offset: 0x1716EAC
    NUnit::Framework::Interfaces::ResultState* WithSite(NUnit::Framework::Interfaces::FailureSite site);
    // static private System.Void .cctor()
    // Offset: 0x1717260
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1716F28
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17170B4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x17170FC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Interfaces.ResultState
  #pragma pack(pop)
  static check_size<sizeof(ResultState), 32 + sizeof(NUnit::Framework::Interfaces::FailureSite)> __NUnit_Framework_Interfaces_ResultStateSizeCheck;
  static_assert(sizeof(ResultState) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ResultState*, "NUnit.Framework.Interfaces", "ResultState");
