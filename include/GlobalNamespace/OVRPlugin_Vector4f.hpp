// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Vector4f
  struct OVRPlugin::Vector4f : public System::ValueType {
    public:
    // public System.Single x
    // Offset: 0x0
    float x;
    // public System.Single y
    // Offset: 0x4
    float y;
    // public System.Single z
    // Offset: 0x8
    float z;
    // public System.Single w
    // Offset: 0xC
    float w;
    // Get static field: static public readonly OVRPlugin/Vector4f zero
    static GlobalNamespace::OVRPlugin::Vector4f _get_zero();
    // Set static field: static public readonly OVRPlugin/Vector4f zero
    static void _set_zero(GlobalNamespace::OVRPlugin::Vector4f value);
    // Creating value type constructor for type: Vector4f
    Vector4f(float x_ = {}, float y_ = {}, float z_ = {}, float w_ = {}) : x{x_}, y{y_}, z{z_}, w{w_} {}
    // static private System.Void .cctor()
    // Offset: 0xF349FC
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0xA36C40
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::CsString* ToString();
  }; // OVRPlugin/Vector4f
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Vector4f, "", "OVRPlugin/Vector4f");
#pragma pack(pop)
