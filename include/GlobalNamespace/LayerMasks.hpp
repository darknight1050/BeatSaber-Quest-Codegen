// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LayerMasks
  class LayerMasks : public ::CsObject {
    public:
    // Get static field: static public readonly UnityEngine.LayerMask saberLayerMask
    static UnityEngine::LayerMask _get_saberLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask saberLayerMask
    static void _set_saberLayerMask(UnityEngine::LayerMask value);
    // Get static field: static public readonly UnityEngine.LayerMask noteLayerMask
    static UnityEngine::LayerMask _get_noteLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask noteLayerMask
    static void _set_noteLayerMask(UnityEngine::LayerMask value);
    // Get static field: static public readonly UnityEngine.LayerMask noteDebrisLayerMask
    static UnityEngine::LayerMask _get_noteDebrisLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask noteDebrisLayerMask
    static void _set_noteDebrisLayerMask(UnityEngine::LayerMask value);
    // Get static field: static public readonly UnityEngine.LayerMask cutEffectParticlesLayerMask
    static UnityEngine::LayerMask _get_cutEffectParticlesLayerMask();
    // Set static field: static public readonly UnityEngine.LayerMask cutEffectParticlesLayerMask
    static void _set_cutEffectParticlesLayerMask(UnityEngine::LayerMask value);
    // Get static field: static public readonly System.Int32 noteDebrisLayer
    static int _get_noteDebrisLayer();
    // Set static field: static public readonly System.Int32 noteDebrisLayer
    static void _set_noteDebrisLayer(int value);
    // Get static field: static public readonly System.Int32 cutEffectParticlesLayer
    static int _get_cutEffectParticlesLayer();
    // Set static field: static public readonly System.Int32 cutEffectParticlesLayer
    static void _set_cutEffectParticlesLayer(int value);
    // static private UnityEngine.LayerMask GetLayerMask(System.String layerName)
    // Offset: 0x1967A7C
    static UnityEngine::LayerMask GetLayerMask(::CsString* layerName);
    // static private UnityEngine.LayerMask GetLayerMask(System.Int32 layerNum)
    // Offset: 0x1967AB8
    static UnityEngine::LayerMask GetLayerMask(int layerNum);
    // static private System.Int32 GetLayer(System.String layerName)
    // Offset: 0x1967AEC
    static int GetLayer(::CsString* layerName);
    // static private System.Void .cctor()
    // Offset: 0x1967AFC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1967AF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LayerMasks* New_ctor();
  }; // LayerMasks
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LayerMasks*, "", "LayerMasks");
#pragma pack(pop)
