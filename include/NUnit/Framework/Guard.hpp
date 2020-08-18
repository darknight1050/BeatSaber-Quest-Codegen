// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.Guard
  class Guard : public ::Il2CppObject {
    public:
    // static public System.Void ArgumentNotNull(System.Object value, System.String name)
    // Offset: 0xFDC4AC
    static void ArgumentNotNull(::Il2CppObject* value, ::Il2CppString* name);
    // static public System.Void ArgumentNotNullOrEmpty(System.String value, System.String name)
    // Offset: 0xFDC560
    static void ArgumentNotNullOrEmpty(::Il2CppString* value, ::Il2CppString* name);
    // static public System.Void ArgumentValid(System.Boolean condition, System.String message, System.String paramName)
    // Offset: 0xFDC640
    static void ArgumentValid(bool condition, ::Il2CppString* message, ::Il2CppString* paramName);
  }; // NUnit.Framework.Guard
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Guard*, "NUnit.Framework", "Guard");
#pragma pack(pop)
