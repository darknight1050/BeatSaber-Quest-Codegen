// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.InternalStringComparer
  class InternalStringComparer : public System::Collections::Generic::EqualityComparer_1<::Il2CppString*> {
    public:
    // public System.Int32 GetHashCode(System.String obj)
    // Offset: 0x1294D28
    int GetHashCode(::Il2CppString* obj);
    // public System.Boolean Equals(System.String x, System.String y)
    // Offset: 0x1294D48
    bool Equals(::Il2CppString* x, ::Il2CppString* y);
    // System.Int32 IndexOf(System.String[] array, System.String value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0x1294D78
    int IndexOf(::Array<::Il2CppString*>* array, ::Il2CppString* value, int startIndex, int count);
    // public System.Void .ctor()
    // Offset: 0x1294DE0
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static InternalStringComparer* New_ctor();
  }; // System.Collections.Generic.InternalStringComparer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::InternalStringComparer*, "System.Collections.Generic", "InternalStringComparer");
#pragma pack(pop)
