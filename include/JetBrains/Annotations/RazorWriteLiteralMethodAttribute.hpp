// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.RazorWriteLiteralMethodAttribute
  // [AttributeUsageAttribute] Offset: DCC1F0
  class RazorWriteLiteralMethodAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: RazorWriteLiteralMethodAttribute
    RazorWriteLiteralMethodAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23C0324
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RazorWriteLiteralMethodAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::RazorWriteLiteralMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RazorWriteLiteralMethodAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.RazorWriteLiteralMethodAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::RazorWriteLiteralMethodAttribute*, "JetBrains.Annotations", "RazorWriteLiteralMethodAttribute");
