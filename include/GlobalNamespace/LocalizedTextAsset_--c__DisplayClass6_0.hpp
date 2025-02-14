// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalizedTextAsset
#include "GlobalNamespace/LocalizedTextAsset.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: LocalizedTextAsset/<>c__DisplayClass6_0
  // [CompilerGeneratedAttribute] Offset: E129BC
  class LocalizedTextAsset::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public Polyglot.Language language
    // Size: 0x4
    // Offset: 0x10
    Polyglot::Language language;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass6_0
    $$c__DisplayClass6_0(Polyglot::Language language_ = {}) noexcept : language{language_} {}
    // Creating conversion operator: operator Polyglot::Language
    constexpr operator Polyglot::Language() const noexcept {
      return language;
    }
    // System.Boolean <get_localizedText>b__1(LocalizedTextAsset/TextInfo t)
    // Offset: 0x10D4EA8
    bool $get_localizedText$b__1(GlobalNamespace::LocalizedTextAsset::TextInfo* t);
    // public System.Void .ctor()
    // Offset: 0x10D4E0C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextAsset::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalizedTextAsset::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextAsset::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // LocalizedTextAsset/<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(LocalizedTextAsset::$$c__DisplayClass6_0), 16 + sizeof(Polyglot::Language)> __GlobalNamespace_LocalizedTextAsset_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(LocalizedTextAsset::$$c__DisplayClass6_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedTextAsset::$$c__DisplayClass6_0*, "", "LocalizedTextAsset/<>c__DisplayClass6_0");
