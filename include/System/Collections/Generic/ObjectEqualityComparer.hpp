// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEqualityComparer
#include "System/Collections/IEqualityComparer.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.ObjectEqualityComparer
  class ObjectEqualityComparer : public System::Collections::IEqualityComparer, public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Collections.Generic.ObjectEqualityComparer Default
    static System::Collections::Generic::ObjectEqualityComparer* _get_Default();
    // Set static field: static readonly System.Collections.Generic.ObjectEqualityComparer Default
    static void _set_Default(System::Collections::Generic::ObjectEqualityComparer* value);
    // static private System.Void .cctor()
    // Offset: 0x1295078
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1295020
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ObjectEqualityComparer* New_ctor();
    // private System.Int32 System.Collections.IEqualityComparer.GetHashCode(System.Object obj)
    // Offset: 0x1295028
    // Implemented from: System.Collections.IEqualityComparer
    // Base method: System.Int32 IEqualityComparer::GetHashCode(System.Object obj)
    int System_Collections_IEqualityComparer_GetHashCode(::Il2CppObject* obj);
    // private System.Boolean System.Collections.IEqualityComparer.Equals(System.Object x, System.Object y)
    // Offset: 0x1295048
    // Implemented from: System.Collections.IEqualityComparer
    // Base method: System.Boolean IEqualityComparer::Equals(System.Object x, System.Object y)
    bool System_Collections_IEqualityComparer_Equals(::Il2CppObject* x, ::Il2CppObject* y);
  }; // System.Collections.Generic.ObjectEqualityComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::ObjectEqualityComparer*, "System.Collections.Generic", "ObjectEqualityComparer");
#pragma pack(pop)
