// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.CustomAttributeData
#include "System/Reflection/CustomAttributeData.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.CustomAttributeData/LazyCAttrData
  class CustomAttributeData::LazyCAttrData : public ::Il2CppObject {
    public:
    // System.Reflection.Assembly assembly
    // Offset: 0x10
    System::Reflection::Assembly* assembly;
    // System.IntPtr data
    // Offset: 0x18
    System::IntPtr data;
    // System.UInt32 data_length
    // Offset: 0x20
    uint data_length;
    // public System.Void .ctor()
    // Offset: 0x12C1E80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CustomAttributeData::LazyCAttrData* New_ctor();
  }; // System.Reflection.CustomAttributeData/LazyCAttrData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeData::LazyCAttrData*, "System.Reflection", "CustomAttributeData/LazyCAttrData");
#pragma pack(pop)
