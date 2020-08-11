// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ResolveEventArgs
  class ResolveEventArgs : public System::EventArgs {
    public:
    // private System.String m_Name
    // Offset: 0x10
    ::CsString* m_Name;
    // private System.Reflection.Assembly m_Requesting
    // Offset: 0x18
    System::Reflection::Assembly* m_Requesting;
    // public System.Void .ctor(System.String name)
    // Offset: 0x1142530
    static ResolveEventArgs* New_ctor(::CsString* name);
    // public System.Void .ctor(System.String name, System.Reflection.Assembly requestingAssembly)
    // Offset: 0x11425B4
    static ResolveEventArgs* New_ctor(::CsString* name, System::Reflection::Assembly* requestingAssembly);
  }; // System.ResolveEventArgs
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ResolveEventArgs*, "System", "ResolveEventArgs");
#pragma pack(pop)
