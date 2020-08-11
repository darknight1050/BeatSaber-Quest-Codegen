// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidCollection
  class OidCollection;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.OidEnumerator
  class OidEnumerator : public ::CsObject, public System::Collections::IEnumerator {
    public:
    // private System.Security.Cryptography.OidCollection m_oids
    // Offset: 0x10
    System::Security::Cryptography::OidCollection* m_oids;
    // private System.Int32 m_current
    // Offset: 0x18
    int m_current;
    // System.Void .ctor(System.Security.Cryptography.OidCollection oids)
    // Offset: 0x1203914
    static OidEnumerator* New_ctor(System::Security::Cryptography::OidCollection* oids);
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x1203B4C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::CsObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x1203B6C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x1203BD4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Security.Cryptography.OidEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::OidEnumerator*, "System.Security.Cryptography", "OidEnumerator");
#pragma pack(pop)
