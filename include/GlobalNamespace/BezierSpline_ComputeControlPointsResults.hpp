// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BezierSpline
#include "GlobalNamespace/BezierSpline.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BezierSpline/ComputeControlPointsResults
  // [] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct BezierSpline::ComputeControlPointsResults/*, public System::ValueType*/ {
    public:
    // public readonly System.Single[] p1
    // Size: 0x8
    // Offset: 0x0
    ::Array<float>* p1;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // public readonly System.Single[] p2
    // Size: 0x8
    // Offset: 0x8
    ::Array<float>* p2;
    // Field size check
    static_assert(sizeof(::Array<float>*) == 0x8);
    // Creating value type constructor for type: ComputeControlPointsResults
    constexpr ComputeControlPointsResults(::Array<float>* p1_ = {}, ::Array<float>* p2_ = {}) noexcept : p1{p1_}, p2{p2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Single[] p1, System.Single[] p2)
    // Offset: 0xDDD040
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  ComputeControlPointsResults(::Array<float>* p1, ::Array<float>* p2)
  }; // BezierSpline/ComputeControlPointsResults
  #pragma pack(pop)
  static check_size<sizeof(BezierSpline::ComputeControlPointsResults), 8 + sizeof(::Array<float>*)> __GlobalNamespace_BezierSpline_ComputeControlPointsResultsSizeCheck;
  static_assert(sizeof(BezierSpline::ComputeControlPointsResults) == 0x10);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BezierSpline::ComputeControlPointsResults, "", "BezierSpline/ComputeControlPointsResults");
