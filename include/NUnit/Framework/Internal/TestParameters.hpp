// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.ITestData
#include "NUnit/Framework/Interfaces/ITestData.hpp"
// Including type: NUnit.Framework.Interfaces.IApplyToTest
#include "NUnit/Framework/Interfaces/IApplyToTest.hpp"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IPropertyBag
  class IPropertyBag;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Test
  class Test;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestParameters
  // [] Offset: FFFFFFFF
  class TestParameters : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::ITestData, public NUnit::Framework::Interfaces::IApplyToTest*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD0F890
    // [DebuggerBrowsableAttribute] Offset: 0xD0F890
    // private NUnit.Framework.Interfaces.RunState <RunState>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    NUnit::Framework::Interfaces::RunState RunState;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::RunState) == 0x4);
    // Padding between fields: RunState and: Arguments
    char __padding0[0x4] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD0F8CC
    // [DebuggerBrowsableAttribute] Offset: 0xD0F8CC
    // private System.Object[] <Arguments>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppObject*>* Arguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xD0F908
    // [CompilerGeneratedAttribute] Offset: 0xD0F908
    // private System.String <TestName>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* TestName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD0F944
    // [DebuggerBrowsableAttribute] Offset: 0xD0F944
    // private NUnit.Framework.Interfaces.IPropertyBag <Properties>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::IPropertyBag* Properties;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IPropertyBag*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xD0F980
    // [CompilerGeneratedAttribute] Offset: 0xD0F980
    // private System.Object[] <OriginalArguments>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppObject*>* OriginalArguments;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppObject*>*) == 0x8);
    // Creating value type constructor for type: TestParameters
    TestParameters(NUnit::Framework::Interfaces::RunState RunState_ = {}, ::Array<::Il2CppObject*>* Arguments_ = {}, ::Il2CppString* TestName_ = {}, NUnit::Framework::Interfaces::IPropertyBag* Properties_ = {}, ::Array<::Il2CppObject*>* OriginalArguments_ = {}) noexcept : RunState{RunState_}, Arguments{Arguments_}, TestName{TestName_}, Properties{Properties_}, OriginalArguments{OriginalArguments_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::ITestData
    operator NUnit::Framework::Interfaces::ITestData() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::ITestData*>(this);
    }
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IApplyToTest
    operator NUnit::Framework::Interfaces::IApplyToTest() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IApplyToTest*>(this);
    }
    // public System.Void .ctor(System.Object[] args)
    // Offset: 0x2095380
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestParameters* New_ctor(::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestParameters*, creationType>(args)));
    }
    // private System.Void InitializeAguments(System.Object[] args)
    // Offset: 0x209888C
    void InitializeAguments(::Array<::Il2CppObject*>* args);
    // public NUnit.Framework.Interfaces.RunState get_RunState()
    // Offset: 0x2098910
    NUnit::Framework::Interfaces::RunState get_RunState_NEW();
    // public System.Void set_RunState(NUnit.Framework.Interfaces.RunState value)
    // Offset: 0x2098918
    void set_RunState(NUnit::Framework::Interfaces::RunState value);
    // public System.Object[] get_Arguments()
    // Offset: 0x2098920
    ::Array<::Il2CppObject*>* get_Arguments_NEW();
    // System.Void set_Arguments(System.Object[] value)
    // Offset: 0x2098928
    void set_Arguments(::Array<::Il2CppObject*>* value);
    // public System.String get_TestName()
    // Offset: 0x2098930
    ::Il2CppString* get_TestName_NEW();
    // public NUnit.Framework.Interfaces.IPropertyBag get_Properties()
    // Offset: 0x2098938
    NUnit::Framework::Interfaces::IPropertyBag* get_Properties_NEW();
    // private System.Void set_Properties(NUnit.Framework.Interfaces.IPropertyBag value)
    // Offset: 0x2098940
    void set_Properties(NUnit::Framework::Interfaces::IPropertyBag* value);
    // public System.Void ApplyToTest(NUnit.Framework.Internal.Test test)
    // Offset: 0x2098948
    void ApplyToTest_NEW(NUnit::Framework::Internal::Test* test);
    // public System.Object[] get_OriginalArguments()
    // Offset: 0x2098FE4
    ::Array<::Il2CppObject*>* get_OriginalArguments();
    // private System.Void set_OriginalArguments(System.Object[] value)
    // Offset: 0x2098FEC
    void set_OriginalArguments(::Array<::Il2CppObject*>* value);
    // public System.Void .ctor()
    // Offset: 0x209530C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestParameters* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestParameters*, creationType>()));
    }
  }; // NUnit.Framework.Internal.TestParameters
  #pragma pack(pop)
  static check_size<sizeof(TestParameters), 48 + sizeof(::Array<::Il2CppObject*>*)> __NUnit_Framework_Internal_TestParametersSizeCheck;
  static_assert(sizeof(TestParameters) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestParameters*, "NUnit.Framework.Internal", "TestParameters");
