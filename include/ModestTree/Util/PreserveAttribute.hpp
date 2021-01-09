// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // Size: 0x10
  // Autogenerated type: ModestTree.Util.PreserveAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D91E0C
  class PreserveAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: PreserveAttribute
    PreserveAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x10E74B4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreserveAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::PreserveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreserveAttribute*, creationType>()));
    }
  }; // ModestTree.Util.PreserveAttribute
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::Util::PreserveAttribute*, "ModestTree.Util", "PreserveAttribute");
#pragma pack(pop)
