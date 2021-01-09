// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Size: 0x12
  // Autogenerated type: Mono.Globalization.Unicode.Level2Map
  // [] Offset: FFFFFFFF
  class Level2Map : public ::Il2CppObject {
    public:
    // public System.Byte Source
    // Size: 0x1
    // Offset: 0x10
    uint8_t Source;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Replace
    // Size: 0x1
    // Offset: 0x11
    uint8_t Replace;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: Level2Map
    Level2Map(uint8_t Source_ = {}, uint8_t Replace_ = {}) noexcept : Source{Source_}, Replace{Replace_} {}
    // public System.Void .ctor(System.Byte source, System.Byte replace)
    // Offset: 0x1519138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Level2Map* New_ctor(uint8_t source, uint8_t replace) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Globalization::Unicode::Level2Map::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Level2Map*, creationType>(source, replace)));
    }
  }; // Mono.Globalization.Unicode.Level2Map
  static check_size<sizeof(Level2Map), 17 + sizeof(uint8_t)> __Mono_Globalization_Unicode_Level2MapSizeCheck;
  static_assert(sizeof(Level2Map) == 0x12);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::Level2Map*, "Mono.Globalization.Unicode", "Level2Map");
#pragma pack(pop)
