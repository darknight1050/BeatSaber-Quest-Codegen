// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: InstancingValuesTester
#include "GlobalNamespace/InstancingValuesTester.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: InstancingValuesTester/PropertyNameColorValuePair
  class InstancingValuesTester::PropertyNameColorValuePair : public ::CsObject {
    public:
    // public System.String propertyName
    // Offset: 0x10
    ::CsString* propertyName;
    // public UnityEngine.Color color
    // Offset: 0x18
    UnityEngine::Color color;
    // public System.Void .ctor()
    // Offset: 0x1810BA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InstancingValuesTester::PropertyNameColorValuePair* New_ctor();
  }; // InstancingValuesTester/PropertyNameColorValuePair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstancingValuesTester::PropertyNameColorValuePair*, "", "InstancingValuesTester/PropertyNameColorValuePair");
#pragma pack(pop)
