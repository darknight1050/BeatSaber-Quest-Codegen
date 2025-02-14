// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: TriangulationPoint
  class TriangulationPoint;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
  class DTSweepPointComparator : public ::Il2CppObject/*, public System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*/ {
    public:
    // Creating value type constructor for type: DTSweepPointComparator
    DTSweepPointComparator() noexcept {}
    // Creating interface conversion operator: operator System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>
    operator System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IComparer_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*>*>(this);
    }
    // public System.Int32 Compare(UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p1, UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint p2)
    // Offset: 0x2381498
    int Compare(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p1, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* p2);
    // public System.Void .ctor()
    // Offset: 0x2380D44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DTSweepPointComparator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DTSweepPointComparator*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepPointComparator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepPointComparator*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepPointComparator");
