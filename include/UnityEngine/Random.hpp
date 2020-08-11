// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Random
  class Random : public ::CsObject {
    public:
    // static public System.Void InitState(System.Int32 seed)
    // Offset: 0x1406D38
    static void InitState(int seed);
    // static public System.Single Range(System.Single min, System.Single max)
    // Offset: 0x1406D78
    static float Range(float min, float max);
    // static public System.Int32 Range(System.Int32 min, System.Int32 max)
    // Offset: 0x1406DC4
    static int Range(int min, int max);
    // static private System.Int32 RandomRangeInt(System.Int32 min, System.Int32 max)
    // Offset: 0x1406E14
    static int RandomRangeInt(int min, int max);
    // static public System.Single get_value()
    // Offset: 0x1406E64
    static float get_value();
    // static public UnityEngine.Vector3 get_insideUnitSphere()
    // Offset: 0x1406E98
    static UnityEngine::Vector3 get_insideUnitSphere();
    // static public UnityEngine.Vector3 get_onUnitSphere()
    // Offset: 0x1406F30
    static UnityEngine::Vector3 get_onUnitSphere();
    // static private System.Void get_insideUnitSphere_Injected(UnityEngine.Vector3 ret)
    // Offset: 0x1406EF0
    static void get_insideUnitSphere_Injected(UnityEngine::Vector3& ret);
    // static private System.Void get_onUnitSphere_Injected(UnityEngine.Vector3 ret)
    // Offset: 0x1406F88
    static void get_onUnitSphere_Injected(UnityEngine::Vector3& ret);
  }; // UnityEngine.Random
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Random*, "UnityEngine", "Random");
#pragma pack(pop)
