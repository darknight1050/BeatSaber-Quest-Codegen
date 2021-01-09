// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.AttributeTargets
#include "System/AttributeTargets.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x16
  // Autogenerated type: System.AttributeUsageAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D36E08
  // [AttributeUsageAttribute] Offset: D36E08
  class AttributeUsageAttribute : public System::Attribute {
    public:
    // System.AttributeTargets m_attributeTarget
    // Size: 0x4
    // Offset: 0x10
    System::AttributeTargets m_attributeTarget;
    // Field size check
    static_assert(sizeof(System::AttributeTargets) == 0x4);
    // System.Boolean m_allowMultiple
    // Size: 0x1
    // Offset: 0x14
    bool m_allowMultiple;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_inherited
    // Size: 0x1
    // Offset: 0x15
    bool m_inherited;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AttributeUsageAttribute
    AttributeUsageAttribute(System::AttributeTargets m_attributeTarget_ = {}, bool m_allowMultiple_ = {}, bool m_inherited_ = {}) noexcept : m_attributeTarget{m_attributeTarget_}, m_allowMultiple{m_allowMultiple_}, m_inherited{m_inherited_} {}
    // Get static field: static System.AttributeUsageAttribute Default
    static System::AttributeUsageAttribute* _get_Default();
    // Set static field: static System.AttributeUsageAttribute Default
    static void _set_Default(System::AttributeUsageAttribute* value);
    // public System.Void .ctor(System.AttributeTargets validOn)
    // Offset: 0x1CAAABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeUsageAttribute* New_ctor(System::AttributeTargets validOn) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::AttributeUsageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeUsageAttribute*, creationType>(validOn)));
    }
    // public System.Boolean get_AllowMultiple()
    // Offset: 0x1CAAAF8
    bool get_AllowMultiple();
    // public System.Void set_AllowMultiple(System.Boolean value)
    // Offset: 0x1CAAB00
    void set_AllowMultiple(bool value);
    // public System.Boolean get_Inherited()
    // Offset: 0x1CAAB0C
    bool get_Inherited();
    // public System.Void set_Inherited(System.Boolean value)
    // Offset: 0x1CAAB14
    void set_Inherited(bool value);
    // static private System.Void .cctor()
    // Offset: 0x1CAAB20
    static void _cctor();
  }; // System.AttributeUsageAttribute
  static check_size<sizeof(AttributeUsageAttribute), 21 + sizeof(bool)> __System_AttributeUsageAttributeSizeCheck;
  static_assert(sizeof(AttributeUsageAttribute) == 0x16);
}
DEFINE_IL2CPP_ARG_TYPE(System::AttributeUsageAttribute*, "System", "AttributeUsageAttribute");
#pragma pack(pop)
