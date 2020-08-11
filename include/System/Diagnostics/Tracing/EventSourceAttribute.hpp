// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.EventSourceAttribute
  class EventSourceAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::CsString* Name;
    // private System.String <Guid>k__BackingField
    // Offset: 0x18
    ::CsString* Guid;
    // private System.String <LocalizationResources>k__BackingField
    // Offset: 0x20
    ::CsString* LocalizationResources;
    // public System.String get_Name()
    // Offset: 0xD7EDDC
    ::CsString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0xD7EDE4
    void set_Name(::CsString* value);
    // public System.String get_Guid()
    // Offset: 0xD7EDEC
    ::CsString* get_Guid();
    // public System.Void set_Guid(System.String value)
    // Offset: 0xD7EDF4
    void set_Guid(::CsString* value);
    // public System.String get_LocalizationResources()
    // Offset: 0xD7EDFC
    ::CsString* get_LocalizationResources();
    // public System.Void .ctor()
    // Offset: 0xD7EE04
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static EventSourceAttribute* New_ctor();
  }; // System.Diagnostics.Tracing.EventSourceAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSourceAttribute*, "System.Diagnostics.Tracing", "EventSourceAttribute");
#pragma pack(pop)
