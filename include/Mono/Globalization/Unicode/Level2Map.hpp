// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: Mono.Globalization.Unicode
namespace Mono::Globalization::Unicode {
  // Autogenerated type: Mono.Globalization.Unicode.Level2Map
  class Level2Map : public ::CsObject {
    public:
    // public System.Byte Source
    // Offset: 0x10
    uint8_t Source;
    // public System.Byte Replace
    // Offset: 0x11
    uint8_t Replace;
    // public System.Void .ctor(System.Byte source, System.Byte replace)
    // Offset: 0x1099D8C
    static Level2Map* New_ctor(uint8_t source, uint8_t replace);
  }; // Mono.Globalization.Unicode.Level2Map
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Globalization::Unicode::Level2Map*, "Mono.Globalization.Unicode", "Level2Map");
#pragma pack(pop)
