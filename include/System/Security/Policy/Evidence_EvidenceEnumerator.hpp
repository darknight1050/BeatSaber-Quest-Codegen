// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Policy.Evidence
#include "System/Security/Policy/Evidence.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Type namespace: System.Security.Policy
namespace System::Security::Policy {
  // Autogenerated type: System.Security.Policy.Evidence/EvidenceEnumerator
  class Evidence::EvidenceEnumerator : public System::Collections::IEnumerator, public ::Il2CppObject {
    public:
    // private System.Collections.IEnumerator currentEnum
    // Offset: 0x10
    System::Collections::IEnumerator* currentEnum;
    // private System.Collections.IEnumerator hostEnum
    // Offset: 0x18
    System::Collections::IEnumerator* hostEnum;
    // private System.Collections.IEnumerator assemblyEnum
    // Offset: 0x20
    System::Collections::IEnumerator* assemblyEnum;
    // public System.Void .ctor(System.Collections.IEnumerator hostenum, System.Collections.IEnumerator assemblyenum)
    // Offset: 0xD49038
    static Evidence::EvidenceEnumerator* New_ctor(System::Collections::IEnumerator* hostenum, System::Collections::IEnumerator* assemblyenum);
    // public System.Boolean MoveNext()
    // Offset: 0xD4909C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0xD49200
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // public System.Object get_Current()
    // Offset: 0xD49358
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // System.Security.Policy.Evidence/EvidenceEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Policy::Evidence::EvidenceEnumerator*, "System.Security.Policy", "Evidence/EvidenceEnumerator");
#pragma pack(pop)
