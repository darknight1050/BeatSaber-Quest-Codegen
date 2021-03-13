// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Tweening
namespace Tweening {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Tweening.EaseType
  // [] Offset: FFFFFFFF
  struct EaseType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EaseType
    constexpr EaseType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Tweening.EaseType None
    static constexpr const int None = 0;
    // Get static field: static public Tweening.EaseType None
    static Tweening::EaseType _get_None();
    // Set static field: static public Tweening.EaseType None
    static void _set_None(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType Linear
    static constexpr const int Linear = 1;
    // Get static field: static public Tweening.EaseType Linear
    static Tweening::EaseType _get_Linear();
    // Set static field: static public Tweening.EaseType Linear
    static void _set_Linear(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InSine
    static constexpr const int InSine = 2;
    // Get static field: static public Tweening.EaseType InSine
    static Tweening::EaseType _get_InSine();
    // Set static field: static public Tweening.EaseType InSine
    static void _set_InSine(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutSine
    static constexpr const int OutSine = 3;
    // Get static field: static public Tweening.EaseType OutSine
    static Tweening::EaseType _get_OutSine();
    // Set static field: static public Tweening.EaseType OutSine
    static void _set_OutSine(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutSine
    static constexpr const int InOutSine = 4;
    // Get static field: static public Tweening.EaseType InOutSine
    static Tweening::EaseType _get_InOutSine();
    // Set static field: static public Tweening.EaseType InOutSine
    static void _set_InOutSine(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InQuad
    static constexpr const int InQuad = 5;
    // Get static field: static public Tweening.EaseType InQuad
    static Tweening::EaseType _get_InQuad();
    // Set static field: static public Tweening.EaseType InQuad
    static void _set_InQuad(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutQuad
    static constexpr const int OutQuad = 6;
    // Get static field: static public Tweening.EaseType OutQuad
    static Tweening::EaseType _get_OutQuad();
    // Set static field: static public Tweening.EaseType OutQuad
    static void _set_OutQuad(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutQuad
    static constexpr const int InOutQuad = 7;
    // Get static field: static public Tweening.EaseType InOutQuad
    static Tweening::EaseType _get_InOutQuad();
    // Set static field: static public Tweening.EaseType InOutQuad
    static void _set_InOutQuad(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InCubic
    static constexpr const int InCubic = 8;
    // Get static field: static public Tweening.EaseType InCubic
    static Tweening::EaseType _get_InCubic();
    // Set static field: static public Tweening.EaseType InCubic
    static void _set_InCubic(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutCubic
    static constexpr const int OutCubic = 9;
    // Get static field: static public Tweening.EaseType OutCubic
    static Tweening::EaseType _get_OutCubic();
    // Set static field: static public Tweening.EaseType OutCubic
    static void _set_OutCubic(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutCubic
    static constexpr const int InOutCubic = 10;
    // Get static field: static public Tweening.EaseType InOutCubic
    static Tweening::EaseType _get_InOutCubic();
    // Set static field: static public Tweening.EaseType InOutCubic
    static void _set_InOutCubic(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InQuart
    static constexpr const int InQuart = 11;
    // Get static field: static public Tweening.EaseType InQuart
    static Tweening::EaseType _get_InQuart();
    // Set static field: static public Tweening.EaseType InQuart
    static void _set_InQuart(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutQuart
    static constexpr const int OutQuart = 12;
    // Get static field: static public Tweening.EaseType OutQuart
    static Tweening::EaseType _get_OutQuart();
    // Set static field: static public Tweening.EaseType OutQuart
    static void _set_OutQuart(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutQuart
    static constexpr const int InOutQuart = 13;
    // Get static field: static public Tweening.EaseType InOutQuart
    static Tweening::EaseType _get_InOutQuart();
    // Set static field: static public Tweening.EaseType InOutQuart
    static void _set_InOutQuart(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InQuint
    static constexpr const int InQuint = 14;
    // Get static field: static public Tweening.EaseType InQuint
    static Tweening::EaseType _get_InQuint();
    // Set static field: static public Tweening.EaseType InQuint
    static void _set_InQuint(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutQuint
    static constexpr const int OutQuint = 15;
    // Get static field: static public Tweening.EaseType OutQuint
    static Tweening::EaseType _get_OutQuint();
    // Set static field: static public Tweening.EaseType OutQuint
    static void _set_OutQuint(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutQuint
    static constexpr const int InOutQuint = 16;
    // Get static field: static public Tweening.EaseType InOutQuint
    static Tweening::EaseType _get_InOutQuint();
    // Set static field: static public Tweening.EaseType InOutQuint
    static void _set_InOutQuint(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InExpo
    static constexpr const int InExpo = 17;
    // Get static field: static public Tweening.EaseType InExpo
    static Tweening::EaseType _get_InExpo();
    // Set static field: static public Tweening.EaseType InExpo
    static void _set_InExpo(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutExpo
    static constexpr const int OutExpo = 18;
    // Get static field: static public Tweening.EaseType OutExpo
    static Tweening::EaseType _get_OutExpo();
    // Set static field: static public Tweening.EaseType OutExpo
    static void _set_OutExpo(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutExpo
    static constexpr const int InOutExpo = 19;
    // Get static field: static public Tweening.EaseType InOutExpo
    static Tweening::EaseType _get_InOutExpo();
    // Set static field: static public Tweening.EaseType InOutExpo
    static void _set_InOutExpo(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InCirc
    static constexpr const int InCirc = 20;
    // Get static field: static public Tweening.EaseType InCirc
    static Tweening::EaseType _get_InCirc();
    // Set static field: static public Tweening.EaseType InCirc
    static void _set_InCirc(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutCirc
    static constexpr const int OutCirc = 21;
    // Get static field: static public Tweening.EaseType OutCirc
    static Tweening::EaseType _get_OutCirc();
    // Set static field: static public Tweening.EaseType OutCirc
    static void _set_OutCirc(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutCirc
    static constexpr const int InOutCirc = 22;
    // Get static field: static public Tweening.EaseType InOutCirc
    static Tweening::EaseType _get_InOutCirc();
    // Set static field: static public Tweening.EaseType InOutCirc
    static void _set_InOutCirc(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InBack
    static constexpr const int InBack = 23;
    // Get static field: static public Tweening.EaseType InBack
    static Tweening::EaseType _get_InBack();
    // Set static field: static public Tweening.EaseType InBack
    static void _set_InBack(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutBack
    static constexpr const int OutBack = 24;
    // Get static field: static public Tweening.EaseType OutBack
    static Tweening::EaseType _get_OutBack();
    // Set static field: static public Tweening.EaseType OutBack
    static void _set_OutBack(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutBack
    static constexpr const int InOutBack = 25;
    // Get static field: static public Tweening.EaseType InOutBack
    static Tweening::EaseType _get_InOutBack();
    // Set static field: static public Tweening.EaseType InOutBack
    static void _set_InOutBack(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InElastic
    static constexpr const int InElastic = 26;
    // Get static field: static public Tweening.EaseType InElastic
    static Tweening::EaseType _get_InElastic();
    // Set static field: static public Tweening.EaseType InElastic
    static void _set_InElastic(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutElastic
    static constexpr const int OutElastic = 27;
    // Get static field: static public Tweening.EaseType OutElastic
    static Tweening::EaseType _get_OutElastic();
    // Set static field: static public Tweening.EaseType OutElastic
    static void _set_OutElastic(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutElastic
    static constexpr const int InOutElastic = 28;
    // Get static field: static public Tweening.EaseType InOutElastic
    static Tweening::EaseType _get_InOutElastic();
    // Set static field: static public Tweening.EaseType InOutElastic
    static void _set_InOutElastic(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InBounce
    static constexpr const int InBounce = 29;
    // Get static field: static public Tweening.EaseType InBounce
    static Tweening::EaseType _get_InBounce();
    // Set static field: static public Tweening.EaseType InBounce
    static void _set_InBounce(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType OutBounce
    static constexpr const int OutBounce = 30;
    // Get static field: static public Tweening.EaseType OutBounce
    static Tweening::EaseType _get_OutBounce();
    // Set static field: static public Tweening.EaseType OutBounce
    static void _set_OutBounce(Tweening::EaseType value);
    // static field const value: static public Tweening.EaseType InOutBounce
    static constexpr const int InOutBounce = 31;
    // Get static field: static public Tweening.EaseType InOutBounce
    static Tweening::EaseType _get_InOutBounce();
    // Set static field: static public Tweening.EaseType InOutBounce
    static void _set_InOutBounce(Tweening::EaseType value);
  }; // Tweening.EaseType
  #pragma pack(pop)
  static check_size<sizeof(EaseType), 0 + sizeof(int)> __Tweening_EaseTypeSizeCheck;
  static_assert(sizeof(EaseType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Tweening::EaseType, "Tweening", "EaseType");
