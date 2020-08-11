// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Autogenerated type: NUnit.Framework.Guard
  class Guard : public ::CsObject {
    public:
    // static public System.Void ArgumentNotNull(System.Object value, System.String name)
    // Offset: 0x106A7A4
    static void ArgumentNotNull(::CsObject* value, ::CsString* name);
    // static public System.Void ArgumentNotNullOrEmpty(System.String value, System.String name)
    // Offset: 0x106A858
    static void ArgumentNotNullOrEmpty(::CsString* value, ::CsString* name);
    // static public System.Void ArgumentValid(System.Boolean condition, System.String message, System.String paramName)
    // Offset: 0x106A938
    static void ArgumentValid(bool condition, ::CsString* message, ::CsString* paramName);
  }; // NUnit.Framework.Guard
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Guard*, "NUnit.Framework", "Guard");
#pragma pack(pop)
