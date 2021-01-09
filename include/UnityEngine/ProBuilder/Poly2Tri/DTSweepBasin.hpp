// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Forward declaring type: AdvancingFrontNode
  class AdvancingFrontNode;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Size: 0x31
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
  // [] Offset: FFFFFFFF
  class DTSweepBasin : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode leftNode
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* leftNode;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode bottomNode
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* bottomNode;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public UnityEngine.ProBuilder.Poly2Tri.AdvancingFrontNode rightNode
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* rightNode;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*) == 0x8);
    // public System.Double width
    // Size: 0x8
    // Offset: 0x28
    double width;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Boolean leftHighest
    // Size: 0x1
    // Offset: 0x30
    bool leftHighest;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DTSweepBasin
    DTSweepBasin(UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* leftNode_ = {}, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* bottomNode_ = {}, UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* rightNode_ = {}, double width_ = {}, bool leftHighest_ = {}) noexcept : leftNode{leftNode_}, bottomNode{bottomNode_}, rightNode{rightNode_}, width{width_}, leftHighest{leftHighest_} {}
    // public System.Void .ctor()
    // Offset: 0x19AFBD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DTSweepBasin* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DTSweepBasin*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.DTSweepBasin
  static check_size<sizeof(DTSweepBasin), 48 + sizeof(bool)> __UnityEngine_ProBuilder_Poly2Tri_DTSweepBasinSizeCheck;
  static_assert(sizeof(DTSweepBasin) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::DTSweepBasin*, "UnityEngine.ProBuilder.Poly2Tri", "DTSweepBasin");
#pragma pack(pop)
