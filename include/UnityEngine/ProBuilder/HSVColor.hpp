// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.HSVColor
  class HSVColor : public ::Il2CppObject {
    public:
    // public System.Single h
    // Offset: 0x10
    float h;
    // public System.Single s
    // Offset: 0x14
    float s;
    // public System.Single v
    // Offset: 0x18
    float v;
    // public System.Void .ctor(System.Single h, System.Single s, System.Single v)
    // Offset: 0xEF51E8
    static HSVColor* New_ctor(float h, float s, float v);
    // public System.Void .ctor(System.Single h, System.Single s, System.Single v, System.Single sv_modifier)
    // Offset: 0xEF5230
    static HSVColor* New_ctor(float h, float s, float v, float sv_modifier);
    // static public UnityEngine.ProBuilder.HSVColor FromRGB(UnityEngine.Color col)
    // Offset: 0xEF5284
    static UnityEngine::ProBuilder::HSVColor* FromRGB(UnityEngine::Color col);
    // public System.Single SqrDistance(UnityEngine.ProBuilder.HSVColor InColor)
    // Offset: 0xEF53D4
    float SqrDistance(UnityEngine::ProBuilder::HSVColor* InColor);
    // public override System.String ToString()
    // Offset: 0xEF5314
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.HSVColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HSVColor*, "UnityEngine.ProBuilder", "HSVColor");
#pragma pack(pop)
