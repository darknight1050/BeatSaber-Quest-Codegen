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
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.AssemblyHelper
  class AssemblyHelper : public ::CsObject {
    public:
    // static public System.String GetAssemblyPath(System.Reflection.Assembly assembly)
    // Offset: 0x105C36C
    static ::CsString* GetAssemblyPath(System::Reflection::Assembly* assembly);
    // static private System.Boolean IsFileUri(System.String uri)
    // Offset: 0x106C7A4
    static bool IsFileUri(::CsString* uri);
    // static public System.String GetAssemblyPathFromCodeBase(System.String codeBase)
    // Offset: 0x106C838
    static ::CsString* GetAssemblyPathFromCodeBase(::CsString* codeBase);
  }; // NUnit.Framework.Internal.AssemblyHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::AssemblyHelper*, "NUnit.Framework.Internal", "AssemblyHelper");
#pragma pack(pop)
