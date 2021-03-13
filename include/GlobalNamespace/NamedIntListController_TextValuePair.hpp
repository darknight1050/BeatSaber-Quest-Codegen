// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NamedIntListController
#include "GlobalNamespace/NamedIntListController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: NamedIntListController/TextValuePair
  // [] Offset: FFFFFFFF
  class NamedIntListController::TextValuePair : public ::Il2CppObject {
    public:
    // public System.String localizationKey
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* localizationKey;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 value
    // Size: 0x4
    // Offset: 0x18
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TextValuePair
    TextValuePair(::Il2CppString* localizationKey_ = {}, int value_ = {}) noexcept : localizationKey{localizationKey_}, value{value_} {}
    // public System.String get_localizedText()
    // Offset: 0xF20544
    ::Il2CppString* get_localizedText();
    // public System.Void .ctor()
    // Offset: 0xF20558
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NamedIntListController::TextValuePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NamedIntListController::TextValuePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NamedIntListController::TextValuePair*, creationType>()));
    }
  }; // NamedIntListController/TextValuePair
  #pragma pack(pop)
  static check_size<sizeof(NamedIntListController::TextValuePair), 24 + sizeof(int)> __GlobalNamespace_NamedIntListController_TextValuePairSizeCheck;
  static_assert(sizeof(NamedIntListController::TextValuePair) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedIntListController::TextValuePair*, "", "NamedIntListController/TextValuePair");
