// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.ValidationHelper
  class ValidationHelper : public ::Il2CppObject {
    public:
    // Get static field: static public System.String[] EmptyArray
    static ::Array<::Il2CppString*>* _get_EmptyArray();
    // Set static field: static public System.String[] EmptyArray
    static void _set_EmptyArray(::Array<::Il2CppString*>* value);
    // Get static field: static readonly System.Char[] InvalidMethodChars
    static ::Array<::Il2CppChar>* _get_InvalidMethodChars();
    // Set static field: static readonly System.Char[] InvalidMethodChars
    static void _set_InvalidMethodChars(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] InvalidParamChars
    static ::Array<::Il2CppChar>* _get_InvalidParamChars();
    // Set static field: static readonly System.Char[] InvalidParamChars
    static void _set_InvalidParamChars(::Array<::Il2CppChar>* value);
    // static public System.Boolean ValidateTcpPort(System.Int32 port)
    // Offset: 0x1175954
    static bool ValidateTcpPort(int port);
    // static private System.Void .cctor()
    // Offset: 0x1175E04
    static void _cctor();
  }; // System.Net.ValidationHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ValidationHelper*, "System.Net", "ValidationHelper");
#pragma pack(pop)
