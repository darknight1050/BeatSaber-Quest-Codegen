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
  // Autogenerated type: JetBrains.Annotations.AspMvcViewAttribute
  // [AttributeUsageAttribute] Offset: DCBE88
  class AspMvcViewAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: AspMvcViewAttribute
    AspMvcViewAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x23BFC14
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AspMvcViewAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::AspMvcViewAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AspMvcViewAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.AspMvcViewAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspMvcViewAttribute*, "JetBrains.Annotations", "AspMvcViewAttribute");
