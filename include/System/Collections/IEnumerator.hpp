// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.IEnumerator
  class IEnumerator {
    public:
    // public System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    bool MoveNext();
    // public System.Object get_Current()
    // Offset: 0xFFFFFFFF
    ::CsObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void System_Collections_IEnumerator_Reset();
  }; // System.Collections.IEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::IEnumerator*, "System.Collections", "IEnumerator");
#pragma pack(pop)
