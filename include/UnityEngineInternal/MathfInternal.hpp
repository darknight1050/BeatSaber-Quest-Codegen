// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngineInternal
namespace UnityEngineInternal {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngineInternal.MathfInternal
  // [] Offset: FFFFFFFF
  struct MathfInternal/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: MathfInternal
    constexpr MathfInternal() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get static field: static public System.Single FloatMinNormal
    static float _get_FloatMinNormal();
    // Set static field: static public System.Single FloatMinNormal
    static void _set_FloatMinNormal(float value);
    // Get static field: static public System.Single FloatMinDenormal
    static float _get_FloatMinDenormal();
    // Set static field: static public System.Single FloatMinDenormal
    static void _set_FloatMinDenormal(float value);
    // Get static field: static public System.Boolean IsFlushToZeroEnabled
    static bool _get_IsFlushToZeroEnabled();
    // Set static field: static public System.Boolean IsFlushToZeroEnabled
    static void _set_IsFlushToZeroEnabled(bool value);
    // static private System.Void .cctor()
    // Offset: 0x2186254
    static void _cctor();
  }; // UnityEngineInternal.MathfInternal
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::MathfInternal, "UnityEngineInternal", "MathfInternal");
