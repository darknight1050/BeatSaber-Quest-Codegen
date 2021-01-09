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
  // Size: 0x14
  // Autogenerated type: System.Runtime.InteropServices.DispIdAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3B8C0
  // [AttributeUsageAttribute] Offset: D3B8C0
  class DispIdAttribute : public System::Attribute {
    public:
    // System.Int32 _val
    // Size: 0x4
    // Offset: 0x10
    int val;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: DispIdAttribute
    DispIdAttribute(int val_ = {}) noexcept : val{val_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return val;
    }
    // public System.Void .ctor(System.Int32 dispId)
    // Offset: 0x1164520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DispIdAttribute* New_ctor(int dispId) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::DispIdAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DispIdAttribute*, creationType>(dispId)));
    }
  }; // System.Runtime.InteropServices.DispIdAttribute
  static check_size<sizeof(DispIdAttribute), 16 + sizeof(int)> __System_Runtime_InteropServices_DispIdAttributeSizeCheck;
  static_assert(sizeof(DispIdAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::DispIdAttribute*, "System.Runtime.InteropServices", "DispIdAttribute");
#pragma pack(pop)
