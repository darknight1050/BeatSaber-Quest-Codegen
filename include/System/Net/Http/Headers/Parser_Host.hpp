// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.Parser
#include "System/Net/Http/Headers/Parser.hpp"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.Parser/Host
  // [] Offset: FFFFFFFF
  class Parser::Host : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Host
    Host() noexcept {}
    // static public System.Boolean TryParse(System.String input, out System.String result)
    // Offset: 0x13DF4C8
    static bool TryParse(::Il2CppString* input, ::Il2CppString*& result);
  }; // System.Net.Http.Headers.Parser/Host
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Parser::Host*, "System.Net.Http.Headers", "Parser/Host");
