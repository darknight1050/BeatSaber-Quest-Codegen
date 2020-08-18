// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Autogenerated type: JetBrains.Annotations.AspChildControlTypeAttribute
  class AspChildControlTypeAttribute : public System::Attribute {
    public:
    // private System.String <TagName>k__BackingField
    // Offset: 0x10
    ::Il2CppString* TagName;
    // private System.Type <ControlType>k__BackingField
    // Offset: 0x18
    System::Type* ControlType;
    // public System.Void .ctor(System.String tagName, System.Type controlType)
    // Offset: 0x18B3BCC
    static AspChildControlTypeAttribute* New_ctor(::Il2CppString* tagName, System::Type* controlType);
    // public System.String get_TagName()
    // Offset: 0x18B3C1C
    ::Il2CppString* get_TagName();
    // private System.Void set_TagName(System.String value)
    // Offset: 0x18B3C24
    void set_TagName(::Il2CppString* value);
    // public System.Type get_ControlType()
    // Offset: 0x18B3C2C
    System::Type* get_ControlType();
    // private System.Void set_ControlType(System.Type value)
    // Offset: 0x18B3C34
    void set_ControlType(System::Type* value);
  }; // JetBrains.Annotations.AspChildControlTypeAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::AspChildControlTypeAttribute*, "JetBrains.Annotations", "AspChildControlTypeAttribute");
#pragma pack(pop)
