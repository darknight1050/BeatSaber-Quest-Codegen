// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Filters.CategoryFilter
#include "NUnit/Framework/Internal/Filters/CategoryFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Filters
namespace UnityEngine::TestRunner::NUnitExtensions::Filters {
  // Size: 0x19
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Filters.CategoryFilterExtended
  // [] Offset: FFFFFFFF
  class CategoryFilterExtended : public NUnit::Framework::Internal::Filters::CategoryFilter {
    public:
    // Creating value type constructor for type: CategoryFilterExtended
    CategoryFilterExtended() noexcept {}
    // Get static field: static public System.String k_DefaultCategory
    static ::Il2CppString* _get_k_DefaultCategory();
    // Set static field: static public System.String k_DefaultCategory
    static void _set_k_DefaultCategory(::Il2CppString* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x117E32C
    // Implemented from: NUnit.Framework.Internal.Filters.CategoryFilter
    // Base method: System.Void CategoryFilter::.ctor(System.String name)
    // Base method: System.Void ValueMatchFilter::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CategoryFilterExtended* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CategoryFilterExtended*, creationType>(name)));
    }
    // public override System.Boolean Match(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0x117E334
    // Implemented from: NUnit.Framework.Internal.Filters.CategoryFilter
    // Base method: System.Boolean CategoryFilter::Match(NUnit.Framework.Interfaces.ITest test)
    bool Match(NUnit::Framework::Interfaces::ITest* test);
    // static private System.Void .cctor()
    // Offset: 0x117E7D8
    // Implemented from: NUnit.Framework.Internal.TestFilter
    // Base method: System.Void TestFilter::.cctor()
    static void _cctor();
  }; // UnityEngine.TestRunner.NUnitExtensions.Filters.CategoryFilterExtended
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Filters::CategoryFilterExtended*, "UnityEngine.TestRunner.NUnitExtensions.Filters", "CategoryFilterExtended");
#pragma pack(pop)
