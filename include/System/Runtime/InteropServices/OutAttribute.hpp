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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  // Autogenerated type: System.Runtime.InteropServices.OutAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D3BBA0
  // [ComVisibleAttribute] Offset: D3BBA0
  class OutAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: OutAttribute
    OutAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1165D1C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OutAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::OutAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OutAttribute*, creationType>()));
    }
  }; // System.Runtime.InteropServices.OutAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::OutAttribute*, "System.Runtime.InteropServices", "OutAttribute");
#pragma pack(pop)
