// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.CompilerServices.LoadHint
#include "System/Runtime/CompilerServices/LoadHint.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x14
  // Autogenerated type: System.Runtime.CompilerServices.DefaultDependencyAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D3B56C
  class DefaultDependencyAttribute : public System::Attribute {
    public:
    // private System.Runtime.CompilerServices.LoadHint loadHint
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::CompilerServices::LoadHint loadHint;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::LoadHint) == 0x4);
    // Creating value type constructor for type: DefaultDependencyAttribute
    DefaultDependencyAttribute(System::Runtime::CompilerServices::LoadHint loadHint_ = {}) noexcept : loadHint{loadHint_} {}
    // Creating conversion operator: operator System::Runtime::CompilerServices::LoadHint
    constexpr operator System::Runtime::CompilerServices::LoadHint() const noexcept {
      return loadHint;
    }
    // public System.Void .ctor(System.Runtime.CompilerServices.LoadHint loadHintArgument)
    // Offset: 0x1163150
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultDependencyAttribute* New_ctor(System::Runtime::CompilerServices::LoadHint loadHintArgument) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::DefaultDependencyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultDependencyAttribute*, creationType>(loadHintArgument)));
    }
  }; // System.Runtime.CompilerServices.DefaultDependencyAttribute
  static check_size<sizeof(DefaultDependencyAttribute), 16 + sizeof(System::Runtime::CompilerServices::LoadHint)> __System_Runtime_CompilerServices_DefaultDependencyAttributeSizeCheck;
  static_assert(sizeof(DefaultDependencyAttribute) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::DefaultDependencyAttribute*, "System.Runtime.CompilerServices", "DefaultDependencyAttribute");
#pragma pack(pop)
