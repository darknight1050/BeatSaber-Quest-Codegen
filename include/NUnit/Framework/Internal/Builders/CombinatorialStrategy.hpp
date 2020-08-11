// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: NUnit.Framework.Interfaces.ICombiningStrategy
#include "NUnit/Framework/Interfaces/ICombiningStrategy.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestCaseData
  class ITestCaseData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Internal.Builders
namespace NUnit::Framework::Internal::Builders {
  // Autogenerated type: NUnit.Framework.Internal.Builders.CombinatorialStrategy
  class CombinatorialStrategy : public ::CsObject, public NUnit::Framework::Interfaces::ICombiningStrategy {
    public:
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestCaseData> GetTestCases(System.Collections.IEnumerable[] sources)
    // Offset: 0x106C928
    // Implemented from: NUnit.Framework.Interfaces.ICombiningStrategy
    // Base method: System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.ITestCaseData> ICombiningStrategy::GetTestCases(System.Collections.IEnumerable[] sources)
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::ITestCaseData*>* GetTestCases(::Array<System::Collections::IEnumerable*>* sources);
    // public System.Void .ctor()
    // Offset: 0x105E0B0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CombinatorialStrategy* New_ctor();
  }; // NUnit.Framework.Internal.Builders.CombinatorialStrategy
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Builders::CombinatorialStrategy*, "NUnit.Framework.Internal.Builders", "CombinatorialStrategy");
#pragma pack(pop)
