// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker
#include "TMPro/SpriteAssetUtilities/TexturePacker.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker/SpriteData
#include "TMPro/SpriteAssetUtilities/TexturePacker_SpriteData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x18
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker/SpriteDataObject
  // [] Offset: FFFFFFFF
  class TexturePacker::SpriteDataObject : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<TMPro.SpriteAssetUtilities.TexturePacker/SpriteData> frames
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>* frames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*) == 0x8);
    // Creating value type constructor for type: SpriteDataObject
    SpriteDataObject(System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>* frames_ = {}) noexcept : frames{frames_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*
    constexpr operator System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*() const noexcept {
      return frames;
    }
    // public System.Void .ctor()
    // Offset: 0xF52414
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TexturePacker::SpriteDataObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::SpriteAssetUtilities::TexturePacker::SpriteDataObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TexturePacker::SpriteDataObject*, creationType>()));
    }
  }; // TMPro.SpriteAssetUtilities.TexturePacker/SpriteDataObject
  static check_size<sizeof(TexturePacker::SpriteDataObject), 16 + sizeof(System::Collections::Generic::List_1<TMPro::SpriteAssetUtilities::TexturePacker::SpriteData>*)> __TMPro_SpriteAssetUtilities_TexturePacker_SpriteDataObjectSizeCheck;
  static_assert(sizeof(TexturePacker::SpriteDataObject) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TexturePacker::SpriteDataObject*, "TMPro.SpriteAssetUtilities", "TexturePacker/SpriteDataObject");
#pragma pack(pop)
