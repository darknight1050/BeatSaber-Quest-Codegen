// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: TNode
  class TNode;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.IXmlNodeBuilder
  class IXmlNodeBuilder {
    public:
    // Creating value type constructor for type: IXmlNodeBuilder
    IXmlNodeBuilder() noexcept {}
    // public NUnit.Framework.Interfaces.TNode ToXml(System.Boolean recursive)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::TNode* ToXml(bool recursive);
    // public NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
  }; // NUnit.Framework.Interfaces.IXmlNodeBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::IXmlNodeBuilder*, "NUnit.Framework.Interfaces", "IXmlNodeBuilder");
