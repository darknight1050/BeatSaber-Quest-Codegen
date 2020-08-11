// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.TokenType
#include "System/TokenType.hpp"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.TokenHashValue
  class TokenHashValue : public ::CsObject {
    public:
    // System.String tokenString
    // Offset: 0x10
    ::CsString* tokenString;
    // System.TokenType tokenType
    // Offset: 0x18
    System::TokenType tokenType;
    // System.Int32 tokenValue
    // Offset: 0x1C
    int tokenValue;
    // System.Void .ctor(System.String tokenString, System.TokenType tokenType, System.Int32 tokenValue)
    // Offset: 0x1113230
    static TokenHashValue* New_ctor(::CsString* tokenString, System::TokenType tokenType, int tokenValue);
  }; // System.Globalization.TokenHashValue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::TokenHashValue*, "System.Globalization", "TokenHashValue");
#pragma pack(pop)
