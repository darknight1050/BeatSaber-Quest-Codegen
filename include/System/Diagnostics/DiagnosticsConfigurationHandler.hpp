// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Configuration.IConfigurationSectionHandler
#include "System/Configuration/IConfigurationSectionHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlNode
  class XmlNode;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.DiagnosticsConfigurationHandler
  class DiagnosticsConfigurationHandler : public ::CsObject, public System::Configuration::IConfigurationSectionHandler {
    public:
    // public System.Object Create(System.Object parent, System.Object configContext, System.Xml.XmlNode section)
    // Offset: 0xF48BC4
    ::CsObject* Create(::CsObject* parent, ::CsObject* configContext, System::Xml::XmlNode* section);
    // public System.Void .ctor()
    // Offset: 0xF48B84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DiagnosticsConfigurationHandler* New_ctor();
  }; // System.Diagnostics.DiagnosticsConfigurationHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DiagnosticsConfigurationHandler*, "System.Diagnostics", "DiagnosticsConfigurationHandler");
#pragma pack(pop)
