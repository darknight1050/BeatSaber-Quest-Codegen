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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  // Autogenerated type: MenuDestination
  // [] Offset: FFFFFFFF
  class MenuDestination : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MenuDestination
    MenuDestination() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x1A71E84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuDestination* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuDestination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuDestination*, creationType>()));
    }
  }; // MenuDestination
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuDestination*, "", "MenuDestination");
#pragma pack(pop)
