// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.DispIdAttribute
  class DispIdAttribute : public System::Attribute {
    public:
    // System.Int32 _val
    // Offset: 0x10
    int val;
    // public System.Void .ctor(System.Int32 dispId)
    // Offset: 0x1150ED8
    static DispIdAttribute* New_ctor(int dispId);
  }; // System.Runtime.InteropServices.DispIdAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::DispIdAttribute*, "System.Runtime.InteropServices", "DispIdAttribute");
#pragma pack(pop)
