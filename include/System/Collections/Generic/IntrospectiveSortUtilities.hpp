// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.IntrospectiveSortUtilities
  // [] Offset: FFFFFFFF
  class IntrospectiveSortUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IntrospectiveSortUtilities
    IntrospectiveSortUtilities() noexcept {}
    // static System.Int32 FloorLog2(System.Int32 n)
    // Offset: 0x161E128
    static int FloorLog2(int n);
    // static System.Void ThrowOrIgnoreBadComparer(System.Object comparer)
    // Offset: 0x161E288
    static void ThrowOrIgnoreBadComparer(::Il2CppObject* comparer);
  }; // System.Collections.Generic.IntrospectiveSortUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Generic::IntrospectiveSortUtilities*, "System.Collections.Generic", "IntrospectiveSortUtilities");
