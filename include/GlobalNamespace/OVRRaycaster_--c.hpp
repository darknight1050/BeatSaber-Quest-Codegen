// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRRaycaster
#include "GlobalNamespace/OVRRaycaster.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRRaycaster/<>c
  class OVRRaycaster::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVRRaycaster/<>c <>9
    static GlobalNamespace::OVRRaycaster::$$c* _get_$$9();
    // Set static field: static public readonly OVRRaycaster/<>c <>9
    static void _set_$$9(GlobalNamespace::OVRRaycaster::$$c* value);
    // Get static field: static public System.Comparison`1<OVRRaycaster/RaycastHit> <>9__16_0
    static System::Comparison_1<GlobalNamespace::OVRRaycaster::RaycastHit>* _get_$$9__16_0();
    // Set static field: static public System.Comparison`1<OVRRaycaster/RaycastHit> <>9__16_0
    static void _set_$$9__16_0(System::Comparison_1<GlobalNamespace::OVRRaycaster::RaycastHit>* value);
    // static private System.Void .cctor()
    // Offset: 0xEA8C4C
    static void _cctor();
    // System.Int32 <GraphicRaycast>b__16_0(OVRRaycaster/RaycastHit g1, OVRRaycaster/RaycastHit g2)
    // Offset: 0xEA8CBC
    int $GraphicRaycast$b__16_0(GlobalNamespace::OVRRaycaster::RaycastHit g1, GlobalNamespace::OVRRaycaster::RaycastHit g2);
    // public System.Void .ctor()
    // Offset: 0xEA8CB4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRRaycaster::$$c* New_ctor();
  }; // OVRRaycaster/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRaycaster::$$c*, "", "OVRRaycaster/<>c");
#pragma pack(pop)
