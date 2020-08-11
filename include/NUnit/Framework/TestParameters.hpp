// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.TestParameters
  class TestParameters : public ::CsObject {
    public:
    // Get static field: static private readonly System.IFormatProvider MODIFIED_INVARIANT_CULTURE
    static System::IFormatProvider* _get_MODIFIED_INVARIANT_CULTURE();
    // Set static field: static private readonly System.IFormatProvider MODIFIED_INVARIANT_CULTURE
    static void _set_MODIFIED_INVARIANT_CULTURE(System::IFormatProvider* value);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.String> _parameters
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::CsString*, ::CsString*>* parameters;
    // System.Void Add(System.String name, System.String value)
    // Offset: 0x18E285C
    void Add(::CsString* name, ::CsString* value);
    // static private System.IFormatProvider CreateModifiedInvariantCulture()
    // Offset: 0x18E28CC
    static System::IFormatProvider* CreateModifiedInvariantCulture();
    // static private System.Void .cctor()
    // Offset: 0x18E2A10
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x18E2514
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestParameters* New_ctor();
  }; // NUnit.Framework.TestParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::TestParameters*, "NUnit.Framework", "TestParameters");
#pragma pack(pop)
