// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Type namespace: UnityEngine.Assertions
namespace UnityEngine::Assertions {
  // Autogenerated type: UnityEngine.Assertions.AssertionException
  class AssertionException : public System::Exception {
    public:
    // private System.String m_UserMessage
    // Offset: 0x88
    ::CsString* m_UserMessage;
    // public System.Void .ctor(System.String message, System.String userMessage)
    // Offset: 0x12E95B8
    static AssertionException* New_ctor(::CsString* message, ::CsString* userMessage);
    // public override System.String get_Message()
    // Offset: 0x12E99FC
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::CsString* get_Message();
  }; // UnityEngine.Assertions.AssertionException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Assertions::AssertionException*, "UnityEngine.Assertions", "AssertionException");
#pragma pack(pop)
