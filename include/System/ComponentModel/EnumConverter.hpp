// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ComponentModel.TypeConverter
#include "System/ComponentModel/TypeConverter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.EnumConverter
  class EnumConverter : public System::ComponentModel::TypeConverter {
    public:
    // private System.ComponentModel.TypeConverter/StandardValuesCollection values
    // Offset: 0x10
    System::ComponentModel::TypeConverter::StandardValuesCollection* values;
    // private System.Type type
    // Offset: 0x18
    System::Type* type;
    // public System.Void .ctor(System.Type type)
    // Offset: 0xF46614
    static EnumConverter* New_ctor(System::Type* type);
  }; // System.ComponentModel.EnumConverter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EnumConverter*, "System.ComponentModel", "EnumConverter");
#pragma pack(pop)
