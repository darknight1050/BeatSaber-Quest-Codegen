// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ConditionalSpriteSwitcher
  class ConditionalSpriteSwitcher;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: DateConditionalSpriteSwitcher
  class DateConditionalSpriteSwitcher : public UnityEngine::MonoBehaviour {
    public:
    // private System.Int32 _day
    // Size: 0x4
    // Offset: 0x18
    int day;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _month
    // Size: 0x4
    // Offset: 0x1C
    int month;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SpaceAttribute] Offset: 0xE20650
    // private UnityEngine.Sprite _falseSprite
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Sprite* falseSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _trueSprite
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* trueSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // [SpaceAttribute] Offset: 0xE20698
    // private ConditionalSpriteSwitcher _conditionalSpriteSwitcher
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ConditionalSpriteSwitcher* conditionalSpriteSwitcher;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ConditionalSpriteSwitcher*) == 0x8);
    // Creating value type constructor for type: DateConditionalSpriteSwitcher
    DateConditionalSpriteSwitcher(int day_ = {}, int month_ = {}, UnityEngine::Sprite* falseSprite_ = {}, UnityEngine::Sprite* trueSprite_ = {}, GlobalNamespace::ConditionalSpriteSwitcher* conditionalSpriteSwitcher_ = {}) noexcept : day{day_}, month{month_}, falseSprite{falseSprite_}, trueSprite{trueSprite_}, conditionalSpriteSwitcher{conditionalSpriteSwitcher_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x109EDD0
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x109EEA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateConditionalSpriteSwitcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DateConditionalSpriteSwitcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateConditionalSpriteSwitcher*, creationType>()));
    }
  }; // DateConditionalSpriteSwitcher
  #pragma pack(pop)
  static check_size<sizeof(DateConditionalSpriteSwitcher), 48 + sizeof(GlobalNamespace::ConditionalSpriteSwitcher*)> __GlobalNamespace_DateConditionalSpriteSwitcherSizeCheck;
  static_assert(sizeof(DateConditionalSpriteSwitcher) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DateConditionalSpriteSwitcher*, "", "DateConditionalSpriteSwitcher");
