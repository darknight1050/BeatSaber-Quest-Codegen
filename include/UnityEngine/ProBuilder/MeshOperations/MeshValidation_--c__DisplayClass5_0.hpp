// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.MeshValidation
#include "UnityEngine/ProBuilder/MeshOperations/MeshValidation.hpp"
// Including type: UnityEngine.ProBuilder.Triangle
#include "UnityEngine/ProBuilder/Triangle.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass5_0
  class MeshValidation::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.ProBuilder.Triangle triangle
    // Offset: 0x10
    UnityEngine::ProBuilder::Triangle triangle;
    // public System.Func`2<UnityEngine.ProBuilder.Triangle,System.Boolean> <>9__0
    // Offset: 0x20
    System::Func_2<UnityEngine::ProBuilder::Triangle, bool>* $$9__0;
    // System.Boolean <CollectFaceGroups>b__0(UnityEngine.ProBuilder.Triangle x)
    // Offset: 0xF7E4F8
    bool $CollectFaceGroups$b__0(UnityEngine::ProBuilder::Triangle x);
    // public System.Void .ctor()
    // Offset: 0xF7D204
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MeshValidation::$$c__DisplayClass5_0* New_ctor();
  }; // UnityEngine.ProBuilder.MeshOperations.MeshValidation/<>c__DisplayClass5_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshValidation::$$c__DisplayClass5_0*, "UnityEngine.ProBuilder.MeshOperations", "MeshValidation/<>c__DisplayClass5_0");
#pragma pack(pop)
