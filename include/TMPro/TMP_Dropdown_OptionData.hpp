// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_Dropdown
#include "TMPro/TMP_Dropdown.hpp"
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
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Dropdown/OptionData
  // [] Offset: FFFFFFFF
  class TMP_Dropdown::OptionData : public ::Il2CppObject {
    public:
    // private System.String m_Text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Sprite m_Image
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* m_Image;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: OptionData
    OptionData(::Il2CppString* m_Text_ = {}, UnityEngine::Sprite* m_Image_ = {}) noexcept : m_Text{m_Text_}, m_Image{m_Image_} {}
    // public System.String get_text()
    // Offset: 0xF86644
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0xF8664C
    void set_text(::Il2CppString* value);
    // public UnityEngine.Sprite get_image()
    // Offset: 0xF86654
    UnityEngine::Sprite* get_image();
    // public System.Void set_image(UnityEngine.Sprite value)
    // Offset: 0xF8665C
    void set_image(UnityEngine::Sprite* value);
    // public System.Void .ctor(System.String text)
    // Offset: 0xF8439C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionData* New_ctor(::Il2CppString* text) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionData*, creationType>(text)));
    }
    // public System.Void .ctor(UnityEngine.Sprite image)
    // Offset: 0xF844B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionData* New_ctor(UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionData*, creationType>(image)));
    }
    // public System.Void .ctor(System.String text, UnityEngine.Sprite image)
    // Offset: 0xF86664
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionData* New_ctor(::Il2CppString* text, UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionData*, creationType>(text, image)));
    }
    // public System.Void .ctor()
    // Offset: 0xF83814
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Dropdown::OptionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Dropdown::OptionData*, creationType>()));
    }
  }; // TMPro.TMP_Dropdown/OptionData
  #pragma pack(pop)
  static check_size<sizeof(TMP_Dropdown::OptionData), 24 + sizeof(UnityEngine::Sprite*)> __TMPro_TMP_Dropdown_OptionDataSizeCheck;
  static_assert(sizeof(TMP_Dropdown::OptionData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Dropdown::OptionData*, "TMPro", "TMP_Dropdown/OptionData");
