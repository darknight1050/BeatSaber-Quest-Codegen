// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Filters.CompositeFilter
#include "NUnit/Framework/Internal/Filters/CompositeFilter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Skipping declaration: ITestFilter because it is already included!
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Filters
namespace NUnit::Framework::Internal::Filters {
  // Autogenerated type: NUnit.Framework.Internal.Filters.AndFilter
  class AndFilter : public NUnit::Framework::Internal::Filters::CompositeFilter {
    public:
    // public System.Void .ctor()
    // Offset: 0xFE76FC
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor()
    // Base method: System.Void TestFilter::.ctor()
    // Base method: System.Void Object::.ctor()
    static AndFilter* New_ctor();
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITestFilter[] filters)
    // Offset: 0xFE779C
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Void CompositeFilter::.ctor(NUnit.Framework.Interfaces.ITestFilter[] filters)
    static AndFilter* New_ctor(::Array<NUnit::Framework::Interfaces::ITestFilter*>* filters);
    // public override System.Boolean Pass(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFE784C
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Pass(NUnit.Framework.Interfaces.ITest test)
    bool Pass(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFE7B88
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // public override System.Boolean IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xFE7E8C
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.Boolean CompositeFilter::IsExplicitMatch(NUnit.Framework.Interfaces.ITest test)
    bool IsExplicitMatch(NUnit::Framework::Interfaces::ITest* test);
    // protected override System.String get_ElementName()
    // Offset: 0xFE8190
    // Implemented from: NUnit.Framework.Internal.Filters.CompositeFilter
    // Base method: System.String CompositeFilter::get_ElementName()
    ::Il2CppString* get_ElementName();
  }; // NUnit.Framework.Internal.Filters.AndFilter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Filters::AndFilter*, "NUnit.Framework.Internal.Filters", "AndFilter");
#pragma pack(pop)
