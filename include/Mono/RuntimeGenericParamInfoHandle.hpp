// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: GenericParameterAttributes
  struct GenericParameterAttributes;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeGenericParamInfoHandle
  struct RuntimeGenericParamInfoHandle/*, public System::ValueType*/ {
    public:
    // private Mono.RuntimeStructs/GenericParamInfo* value
    // Size: 0x8
    // Offset: 0x0
    Mono::RuntimeStructs::GenericParamInfo* value;
    // Field size check
    static_assert(sizeof(Mono::RuntimeStructs::GenericParamInfo*) == 0x8);
    // Creating value type constructor for type: RuntimeGenericParamInfoHandle
    constexpr RuntimeGenericParamInfoHandle(Mono::RuntimeStructs::GenericParamInfo* value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator Mono::RuntimeStructs::GenericParamInfo*
    constexpr operator Mono::RuntimeStructs::GenericParamInfo*() const noexcept {
      return value;
    }
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xF02C74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    RuntimeGenericParamInfoHandle(System::IntPtr ptr) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::RuntimeGenericParamInfoHandle::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ptr)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, ptr);
    }
    // System.Type[] get_Constraints()
    // Offset: 0xF02CA0
    ::Array<System::Type*>* get_Constraints();
    // System.Reflection.GenericParameterAttributes get_Attributes()
    // Offset: 0xF02CA8
    System::Reflection::GenericParameterAttributes get_Attributes();
    // private System.Type[] GetConstraints()
    // Offset: 0xF02CC4
    ::Array<System::Type*>* GetConstraints();
    // private System.Int32 GetConstraintsCount()
    // Offset: 0xF02CCC
    int GetConstraintsCount();
  }; // Mono.RuntimeGenericParamInfoHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeGenericParamInfoHandle), 0 + sizeof(Mono::RuntimeStructs::GenericParamInfo*)> __Mono_RuntimeGenericParamInfoHandleSizeCheck;
  static_assert(sizeof(RuntimeGenericParamInfoHandle) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeGenericParamInfoHandle, "Mono", "RuntimeGenericParamInfoHandle");
