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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyCompanyAttribute
  // [AttributeUsageAttribute] Offset: D7B820
  // [ComVisibleAttribute] Offset: D7B820
  class AssemblyCompanyAttribute : public System::Attribute {
    public:
    // private System.String m_company
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_company;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyCompanyAttribute
    AssemblyCompanyAttribute(::Il2CppString* m_company_ = {}) noexcept : m_company{m_company_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_company;
    }
    // public System.Void .ctor(System.String company)
    // Offset: 0x1C59768
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyCompanyAttribute* New_ctor(::Il2CppString* company) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyCompanyAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyCompanyAttribute*, creationType>(company)));
    }
  }; // System.Reflection.AssemblyCompanyAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyCompanyAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyCompanyAttributeSizeCheck;
  static_assert(sizeof(AssemblyCompanyAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyCompanyAttribute*, "System.Reflection", "AssemblyCompanyAttribute");
