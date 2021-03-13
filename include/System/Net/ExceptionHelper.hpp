// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: NotImplementedException
  class NotImplementedException;
  // Forward declaring type: NotSupportedException
  class NotSupportedException;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebException
  class WebException;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ExceptionHelper
  // [] Offset: FFFFFFFF
  class ExceptionHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ExceptionHelper
    ExceptionHelper() noexcept {}
    // static System.NotImplementedException get_MethodNotImplementedException()
    // Offset: 0x14CF3D8
    static System::NotImplementedException* get_MethodNotImplementedException();
    // static System.NotImplementedException get_PropertyNotImplementedException()
    // Offset: 0x14CF318
    static System::NotImplementedException* get_PropertyNotImplementedException();
    // static System.NotSupportedException get_PropertyNotSupportedException()
    // Offset: 0x14D2430
    static System::NotSupportedException* get_PropertyNotSupportedException();
    // static System.Net.WebException get_RequestAbortedException()
    // Offset: 0x14D24AC
    static System::Net::WebException* get_RequestAbortedException();
  }; // System.Net.ExceptionHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ExceptionHelper*, "System.Net", "ExceptionHelper");
