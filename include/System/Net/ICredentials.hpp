// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: NetworkCredential
  class NetworkCredential;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ICredentials
  class ICredentials {
    public:
    // Creating value type constructor for type: ICredentials
    ICredentials() noexcept {}
    // public System.Net.NetworkCredential GetCredential(System.Uri uri, System.String authType)
    // Offset: 0xFFFFFFFF
    System::Net::NetworkCredential* GetCredential(System::Uri* uri, ::Il2CppString* authType);
  }; // System.Net.ICredentials
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::ICredentials*, "System.Net", "ICredentials");
