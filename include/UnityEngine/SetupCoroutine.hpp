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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SetupCoroutine
  class SetupCoroutine : public ::CsObject {
    public:
    // static public System.Void InvokeMoveNext(System.Collections.IEnumerator enumerator, System.IntPtr returnValueAddress)
    // Offset: 0x1376C58
    static void InvokeMoveNext(System::Collections::IEnumerator* enumerator, System::IntPtr returnValueAddress);
    // static public System.Object InvokeMember(System.Object behaviour, System.String name, System.Object variable)
    // Offset: 0x1376D88
    static ::CsObject* InvokeMember(::CsObject* behaviour, ::CsString* name, ::CsObject* variable);
  }; // UnityEngine.SetupCoroutine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SetupCoroutine*, "UnityEngine", "SetupCoroutine");
#pragma pack(pop)
