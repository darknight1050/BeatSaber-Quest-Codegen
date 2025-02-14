// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.TestFixtureAttribute
#include "NUnit/Framework/TestFixtureAttribute.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48
  // [CompilerGeneratedAttribute] Offset: E03D90
  class TestFixtureAttribute::$BuildFrom$d__48 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>, public System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private NUnit.Framework.Internal.TestSuite <>2__current
    // Size: 0x8
    // Offset: 0x18
    NUnit::Framework::Internal::TestSuite* $$2__current;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestSuite*) == 0x8);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x20
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: typeInfo
    char __padding2[0x4] = {};
    // private NUnit.Framework.Interfaces.ITypeInfo typeInfo
    // Size: 0x8
    // Offset: 0x28
    NUnit::Framework::Interfaces::ITypeInfo* typeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // public NUnit.Framework.Interfaces.ITypeInfo <>3__typeInfo
    // Size: 0x8
    // Offset: 0x30
    NUnit::Framework::Interfaces::ITypeInfo* $$3__typeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // public NUnit.Framework.TestFixtureAttribute <>4__this
    // Size: 0x8
    // Offset: 0x38
    NUnit::Framework::TestFixtureAttribute* $$4__this;
    // Field size check
    static_assert(sizeof(NUnit::Framework::TestFixtureAttribute*) == 0x8);
    // Creating value type constructor for type: $BuildFrom$d__48
    $BuildFrom$d__48(int $$1__state_ = {}, NUnit::Framework::Internal::TestSuite* $$2__current_ = {}, int $$l__initialThreadId_ = {}, NUnit::Framework::Interfaces::ITypeInfo* typeInfo_ = {}, NUnit::Framework::Interfaces::ITypeInfo* $$3__typeInfo_ = {}, NUnit::Framework::TestFixtureAttribute* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, typeInfo{typeInfo_}, $$3__typeInfo{$$3__typeInfo_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>
    operator System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestSuite*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>
    operator System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x229D7C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFixtureAttribute::$BuildFrom$d__48* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFixtureAttribute::$BuildFrom$d__48*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x229D810
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x229D814
    bool MoveNext();
    // private NUnit.Framework.Internal.TestSuite System.Collections.Generic.IEnumerator<NUnit.Framework.Internal.TestSuite>.get_Current()
    // Offset: 0x229D884
    NUnit::Framework::Internal::TestSuite* System_Collections_Generic_IEnumerator$NUnit_Framework_Internal_TestSuite$_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x229D88C
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x229D8EC
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<NUnit.Framework.Internal.TestSuite> System.Collections.Generic.IEnumerable<NUnit.Framework.Internal.TestSuite>.GetEnumerator()
    // Offset: 0x229D8F4
    System::Collections::Generic::IEnumerator_1<NUnit::Framework::Internal::TestSuite*>* System_Collections_Generic_IEnumerable$NUnit_Framework_Internal_TestSuite$_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x229D9A4
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // NUnit.Framework.TestFixtureAttribute/<BuildFrom>d__48
  #pragma pack(pop)
  static check_size<sizeof(TestFixtureAttribute::$BuildFrom$d__48), 56 + sizeof(NUnit::Framework::TestFixtureAttribute*)> __NUnit_Framework_TestFixtureAttribute_$BuildFrom$d__48SizeCheck;
  static_assert(sizeof(TestFixtureAttribute::$BuildFrom$d__48) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestFixtureAttribute::$BuildFrom$d__48*, "NUnit.Framework", "TestFixtureAttribute/<BuildFrom>d__48");
