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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.InAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C978B0
  // [AttributeUsageAttribute] Offset: C978B0
  class InAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: InAttribute
    InAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1300E78
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::InAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InAttribute*, creationType>()));
    }
  }; // System.Runtime.InteropServices.InAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::InAttribute*, "System.Runtime.InteropServices", "InAttribute");
