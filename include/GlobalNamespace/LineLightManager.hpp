// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LineLightManager
  class LineLightManager : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Vector4[] _points
    // Offset: 0x18
    ::Array<UnityEngine::Vector4>* points;
    // private UnityEngine.Vector4[] _dirs
    // Offset: 0x20
    ::Array<UnityEngine::Vector4>* dirs;
    // private UnityEngine.Vector4[] _colors
    // Offset: 0x28
    ::Array<UnityEngine::Vector4>* colors;
    // static field const value: static private System.Int32 kMaxNumberOfLights
    static constexpr const int kMaxNumberOfLights = 8;
    // Get static field: static private System.Int32 kMaxNumberOfLights
    static int _get_kMaxNumberOfLights();
    // Set static field: static private System.Int32 kMaxNumberOfLights
    static void _set_kMaxNumberOfLights(int value);
    // Get static field: static private readonly System.Int32 _activeLineLightsCountID
    static int _get__activeLineLightsCountID();
    // Set static field: static private readonly System.Int32 _activeLineLightsCountID
    static void _set__activeLineLightsCountID(int value);
    // Get static field: static private readonly System.Int32 _lineLightPointsID
    static int _get__lineLightPointsID();
    // Set static field: static private readonly System.Int32 _lineLightPointsID
    static void _set__lineLightPointsID(int value);
    // Get static field: static private readonly System.Int32 _lineLightDirsID
    static int _get__lineLightDirsID();
    // Set static field: static private readonly System.Int32 _lineLightDirsID
    static void _set__lineLightDirsID(int value);
    // Get static field: static private readonly System.Int32 _lineLightColorsID
    static int _get__lineLightColorsID();
    // Set static field: static private readonly System.Int32 _lineLightColorsID
    static void _set__lineLightColorsID(int value);
    // protected System.Void Update()
    // Offset: 0x1782D3C
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1783068
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LineLightManager* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x178310C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // LineLightManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LineLightManager*, "", "LineLightManager");
#pragma pack(pop)
