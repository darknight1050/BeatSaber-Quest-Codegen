// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: InstancingValuesTester
#include "GlobalNamespace/InstancingValuesTester.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: InstancingValuesTester/PropertyNameFloatValuePair
  class InstancingValuesTester::PropertyNameFloatValuePair : public ::CsObject {
    public:
    // public System.String propertyName
    // Offset: 0x10
    ::CsString* propertyName;
    // public System.Single value
    // Offset: 0x18
    float value;
    // public System.Void .ctor()
    // Offset: 0x1810BA8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InstancingValuesTester::PropertyNameFloatValuePair* New_ctor();
  }; // InstancingValuesTester/PropertyNameFloatValuePair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InstancingValuesTester::PropertyNameFloatValuePair*, "", "InstancingValuesTester/PropertyNameFloatValuePair");
#pragma pack(pop)
