// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Polyglot.LocalizationImporter
#include "Polyglot/LocalizationImporter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: Localization
  class Localization;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LocalizationImporter/<>c__DisplayClass8_0
  // [CompilerGeneratedAttribute] Offset: DFA568
  class LocalizationImporter::$$c__DisplayClass8_0 : public ::Il2CppObject {
    public:
    // public Polyglot.Localization settings
    // Size: 0x8
    // Offset: 0x10
    Polyglot::Localization* settings;
    // Field size check
    static_assert(sizeof(Polyglot::Localization*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass8_0
    $$c__DisplayClass8_0(Polyglot::Localization* settings_ = {}) noexcept : settings{settings_} {}
    // Creating conversion operator: operator Polyglot::Localization*
    constexpr operator Polyglot::Localization*() const noexcept {
      return settings;
    }
    // System.Void <DownloadCustomSheet>b__0(System.String s)
    // Offset: 0x2336990
    void $DownloadCustomSheet$b__0(::Il2CppString* s);
    // public System.Void .ctor()
    // Offset: 0x2335FC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizationImporter::$$c__DisplayClass8_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LocalizationImporter::$$c__DisplayClass8_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizationImporter::$$c__DisplayClass8_0*, creationType>()));
    }
  }; // Polyglot.LocalizationImporter/<>c__DisplayClass8_0
  #pragma pack(pop)
  static check_size<sizeof(LocalizationImporter::$$c__DisplayClass8_0), 16 + sizeof(Polyglot::Localization*)> __Polyglot_LocalizationImporter_$$c__DisplayClass8_0SizeCheck;
  static_assert(sizeof(LocalizationImporter::$$c__DisplayClass8_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LocalizationImporter::$$c__DisplayClass8_0*, "Polyglot", "LocalizationImporter/<>c__DisplayClass8_0");
