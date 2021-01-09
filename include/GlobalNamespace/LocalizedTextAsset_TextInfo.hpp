// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalizedTextAsset
#include "GlobalNamespace/LocalizedTextAsset.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  // Autogenerated type: LocalizedTextAsset/TextInfo
  // [] Offset: FFFFFFFF
  class LocalizedTextAsset::TextInfo : public ::Il2CppObject {
    public:
    // public Polyglot.Language language
    // Size: 0x4
    // Offset: 0x10
    Polyglot::Language language;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // Padding between fields: language and: localizedText
    char __padding0[0x4] = {};
    // public UnityEngine.TextAsset localizedText
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::TextAsset* localizedText;
    // Field size check
    static_assert(sizeof(UnityEngine::TextAsset*) == 0x8);
    // Creating value type constructor for type: TextInfo
    TextInfo(Polyglot::Language language_ = {}, UnityEngine::TextAsset* localizedText_ = {}) noexcept : language{language_}, localizedText{localizedText_} {}
    // public System.Void .ctor()
    // Offset: 0x1A6BE8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalizedTextAsset::TextInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalizedTextAsset::TextInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalizedTextAsset::TextInfo*, creationType>()));
    }
  }; // LocalizedTextAsset/TextInfo
  static check_size<sizeof(LocalizedTextAsset::TextInfo), 24 + sizeof(UnityEngine::TextAsset*)> __GlobalNamespace_LocalizedTextAsset_TextInfoSizeCheck;
  static_assert(sizeof(LocalizedTextAsset::TextInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalizedTextAsset::TextInfo*, "", "LocalizedTextAsset/TextInfo");
#pragma pack(pop)
