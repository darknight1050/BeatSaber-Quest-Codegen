// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.LocalVariableInfo
  class LocalVariableInfo : public ::CsObject {
    public:
    // System.Type type
    // Offset: 0x10
    System::Type* type;
    // System.Boolean is_pinned
    // Offset: 0x18
    bool is_pinned;
    // System.UInt16 position
    // Offset: 0x1A
    uint16_t position;
    // protected System.Void .ctor()
    // Offset: 0x1353DD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LocalVariableInfo* New_ctor();
    // public override System.String ToString()
    // Offset: 0x1353DD4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
  }; // System.Reflection.LocalVariableInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::LocalVariableInfo*, "System.Reflection", "LocalVariableInfo");
#pragma pack(pop)
