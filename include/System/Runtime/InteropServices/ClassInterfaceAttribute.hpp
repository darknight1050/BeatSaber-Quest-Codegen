// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.ClassInterfaceType
#include "System/Runtime/InteropServices/ClassInterfaceType.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.ClassInterfaceAttribute
  class ClassInterfaceAttribute : public System::Attribute {
    public:
    // System.Runtime.InteropServices.ClassInterfaceType _val
    // Offset: 0x10
    System::Runtime::InteropServices::ClassInterfaceType val;
    // public System.Void .ctor(System.Runtime.InteropServices.ClassInterfaceType classInterfaceType)
    // Offset: 0x10C5AD0
    static ClassInterfaceAttribute* New_ctor(System::Runtime::InteropServices::ClassInterfaceType classInterfaceType);
  }; // System.Runtime.InteropServices.ClassInterfaceAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::ClassInterfaceAttribute*, "System.Runtime.InteropServices", "ClassInterfaceAttribute");
#pragma pack(pop)
