// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.ComInterfaceType
#include "System/Runtime/InteropServices/ComInterfaceType.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.InterfaceTypeAttribute
  class InterfaceTypeAttribute : public System::Attribute {
    public:
    // System.Runtime.InteropServices.ComInterfaceType _val
    // Offset: 0x10
    System::Runtime::InteropServices::ComInterfaceType val;
    // public System.Void .ctor(System.Runtime.InteropServices.ComInterfaceType interfaceType)
    // Offset: 0xFAD41C
    static InterfaceTypeAttribute* New_ctor(System::Runtime::InteropServices::ComInterfaceType interfaceType);
  }; // System.Runtime.InteropServices.InterfaceTypeAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::InterfaceTypeAttribute*, "System.Runtime.InteropServices", "InterfaceTypeAttribute");
#pragma pack(pop)
