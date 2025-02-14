// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: BeatmapObjectExecutionRatingType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectExecutionRating
  class BeatmapObjectExecutionRating : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType
    struct BeatmapObjectExecutionRatingType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType
    struct BeatmapObjectExecutionRatingType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: BeatmapObjectExecutionRatingType
      constexpr BeatmapObjectExecutionRatingType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static constexpr const int Note = 0;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Note();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Note
      static void _set_Note(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static constexpr const int Bomb = 1;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Bomb();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Bomb
      static void _set_Bomb(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
      // static field const value: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static constexpr const int Obstacle = 2;
      // Get static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType _get_Obstacle();
      // Set static field: static public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType Obstacle
      static void _set_Obstacle(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
    }; // BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType
    #pragma pack(pop)
    static check_size<sizeof(BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType), 0 + sizeof(int)> __GlobalNamespace_BeatmapObjectExecutionRating_BeatmapObjectExecutionRatingTypeSizeCheck;
    static_assert(sizeof(BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE16074
    // private BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType <beatmapObjectRatingType>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType beatmapObjectRatingType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xE16084
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: BeatmapObjectExecutionRating
    BeatmapObjectExecutionRating(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType beatmapObjectRatingType_ = {}, float time_ = {}) noexcept : beatmapObjectRatingType{beatmapObjectRatingType_}, time{time_} {}
    // public BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType get_beatmapObjectRatingType()
    // Offset: 0x107C3B4
    GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType get_beatmapObjectRatingType();
    // public System.Void set_beatmapObjectRatingType(BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType value)
    // Offset: 0x107C3BC
    void set_beatmapObjectRatingType(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType value);
    // public System.Single get_time()
    // Offset: 0x107C3C4
    float get_time();
    // public System.Void set_time(System.Single value)
    // Offset: 0x107C3CC
    void set_time(float value);
    // public System.Void .ctor()
    // Offset: 0x107C3D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRating* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectExecutionRating::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRating*, creationType>()));
    }
  }; // BeatmapObjectExecutionRating
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectExecutionRating), 20 + sizeof(float)> __GlobalNamespace_BeatmapObjectExecutionRatingSizeCheck;
  static_assert(sizeof(BeatmapObjectExecutionRating) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRating*, "", "BeatmapObjectExecutionRating");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRating::BeatmapObjectExecutionRatingType, "", "BeatmapObjectExecutionRating/BeatmapObjectExecutionRatingType");
