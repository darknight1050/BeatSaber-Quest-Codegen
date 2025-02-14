// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MonoCustomAttrs
#include "System/MonoCustomAttrs.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AttributeUsageAttribute
  class AttributeUsageAttribute;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoCustomAttrs/AttributeInfo
  class MonoCustomAttrs::AttributeInfo : public ::Il2CppObject {
    public:
    // private System.AttributeUsageAttribute _usage
    // Size: 0x8
    // Offset: 0x10
    System::AttributeUsageAttribute* usage;
    // Field size check
    static_assert(sizeof(System::AttributeUsageAttribute*) == 0x8);
    // private System.Int32 _inheritanceLevel
    // Size: 0x4
    // Offset: 0x18
    int inheritanceLevel;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AttributeInfo
    AttributeInfo(System::AttributeUsageAttribute* usage_ = {}, int inheritanceLevel_ = {}) noexcept : usage{usage_}, inheritanceLevel{inheritanceLevel_} {}
    // public System.Void .ctor(System.AttributeUsageAttribute usage, System.Int32 inheritanceLevel)
    // Offset: 0x180C340
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoCustomAttrs::AttributeInfo* New_ctor(System::AttributeUsageAttribute* usage, int inheritanceLevel) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MonoCustomAttrs::AttributeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoCustomAttrs::AttributeInfo*, creationType>(usage, inheritanceLevel)));
    }
    // public System.AttributeUsageAttribute get_Usage()
    // Offset: 0x180CFBC
    System::AttributeUsageAttribute* get_Usage();
    // public System.Int32 get_InheritanceLevel()
    // Offset: 0x180CFC4
    int get_InheritanceLevel();
  }; // System.MonoCustomAttrs/AttributeInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoCustomAttrs::AttributeInfo), 24 + sizeof(int)> __System_MonoCustomAttrs_AttributeInfoSizeCheck;
  static_assert(sizeof(MonoCustomAttrs::AttributeInfo) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::MonoCustomAttrs::AttributeInfo*, "System", "MonoCustomAttrs/AttributeInfo");
