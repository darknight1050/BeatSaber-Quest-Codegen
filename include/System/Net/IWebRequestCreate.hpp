// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IWebRequestCreate
  // [] Offset: FFFFFFFF
  class IWebRequestCreate {
    public:
    // Creating value type constructor for type: IWebRequestCreate
    IWebRequestCreate() noexcept {}
    // public System.Net.WebRequest Create(System.Uri uri)
    // Offset: 0xFFFFFFFF
    System::Net::WebRequest* Create_NEW(System::Uri* uri);
  }; // System.Net.IWebRequestCreate
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::IWebRequestCreate*, "System.Net", "IWebRequestCreate");
