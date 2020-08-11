// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.HumanTrait
  class HumanTrait : public ::CsObject {
    public:
    // static public System.Int32 get_MuscleCount()
    // Offset: 0x1926EBC
    static int get_MuscleCount();
    // static System.Int32 GetBoneIndexFromMono(System.Int32 humanId)
    // Offset: 0x1926630
    static int GetBoneIndexFromMono(int humanId);
    // static public System.String[] get_MuscleName()
    // Offset: 0x1927370
    static ::Array<::CsString*>* get_MuscleName();
  }; // UnityEngine.HumanTrait
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HumanTrait*, "UnityEngine", "HumanTrait");
#pragma pack(pop)
