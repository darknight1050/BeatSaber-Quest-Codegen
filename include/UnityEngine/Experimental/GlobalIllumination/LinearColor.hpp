// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LinearColor
  struct LinearColor : public System::ValueType {
    public:
    // private System.Single m_red
    // Offset: 0x0
    float m_red;
    // private System.Single m_green
    // Offset: 0x4
    float m_green;
    // private System.Single m_blue
    // Offset: 0x8
    float m_blue;
    // private System.Single m_intensity
    // Offset: 0xC
    float m_intensity;
    // Creating value type constructor for type: LinearColor
    LinearColor(float m_red_ = {}, float m_green_ = {}, float m_blue_ = {}, float m_intensity_ = {}) : m_red{m_red_}, m_green{m_green_}, m_blue{m_blue_}, m_intensity{m_intensity_} {}
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor Convert(UnityEngine.Color color, System.Single intensity)
    // Offset: 0x126B100
    static UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(UnityEngine::Color color, float intensity);
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor Black()
    // Offset: 0x126C6D8
    static UnityEngine::Experimental::GlobalIllumination::LinearColor Black();
  }; // UnityEngine.Experimental.GlobalIllumination.LinearColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LinearColor, "UnityEngine.Experimental.GlobalIllumination", "LinearColor");
#pragma pack(pop)
