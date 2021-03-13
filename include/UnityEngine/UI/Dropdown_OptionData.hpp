// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
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
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Dropdown/OptionData
  // [] Offset: FFFFFFFF
  class Dropdown::OptionData : public ::Il2CppObject {
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
    // Offset: 0x1750B24
    ::Il2CppString* get_text();
    // public System.Void set_text(System.String value)
    // Offset: 0x1750B2C
    void set_text(::Il2CppString* value);
    // public UnityEngine.Sprite get_image()
    // Offset: 0x1750B34
    UnityEngine::Sprite* get_image();
    // public System.Void set_image(UnityEngine.Sprite value)
    // Offset: 0x1750B3C
    void set_image(UnityEngine::Sprite* value);
    // public System.Void .ctor(System.String text)
    // Offset: 0x1750B4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(::Il2CppString* text) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(text)));
    }
    // public System.Void .ctor(UnityEngine.Sprite image)
    // Offset: 0x1750B78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(image)));
    }
    // public System.Void .ctor(System.String text, UnityEngine.Sprite image)
    // Offset: 0x1750BA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor(::Il2CppString* text, UnityEngine::Sprite* image) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>(text, image)));
    }
    // public System.Void .ctor()
    // Offset: 0x1750B44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::OptionData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::OptionData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::OptionData*, creationType>()));
    }
  }; // UnityEngine.UI.Dropdown/OptionData
  #pragma pack(pop)
  static check_size<sizeof(Dropdown::OptionData), 24 + sizeof(UnityEngine::Sprite*)> __UnityEngine_UI_Dropdown_OptionDataSizeCheck;
  static_assert(sizeof(Dropdown::OptionData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown::OptionData*, "UnityEngine.UI", "Dropdown/OptionData");
