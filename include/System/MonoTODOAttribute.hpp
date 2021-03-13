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
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.MonoTODOAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: C926FC
  class MonoTODOAttribute : public System::Attribute {
    public:
    // private System.String comment
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* comment;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MonoTODOAttribute
    MonoTODOAttribute(::Il2CppString* comment_ = {}) noexcept : comment{comment_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return comment;
    }
    // public System.Void .ctor(System.String comment)
    // Offset: 0x169A7A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTODOAttribute* New_ctor(::Il2CppString* comment) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MonoTODOAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTODOAttribute*, creationType>(comment)));
    }
    // public System.Void .ctor()
    // Offset: 0x169A7DC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTODOAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::MonoTODOAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTODOAttribute*, creationType>()));
    }
  }; // System.MonoTODOAttribute
  #pragma pack(pop)
  static check_size<sizeof(MonoTODOAttribute), 16 + sizeof(::Il2CppString*)> __System_MonoTODOAttributeSizeCheck;
  static_assert(sizeof(MonoTODOAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::MonoTODOAttribute*, "System", "MonoTODOAttribute");
