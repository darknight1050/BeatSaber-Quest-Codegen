// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IAuthenticationModule
#include "System/Net/IAuthenticationModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: Authorization
  class Authorization;
  // Forward declaring type: WebRequest
  class WebRequest;
  // Forward declaring type: ICredentials
  class ICredentials;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.BasicClient
  class BasicClient : public ::Il2CppObject/*, public System::Net::IAuthenticationModule*/ {
    public:
    // Creating value type constructor for type: BasicClient
    BasicClient() noexcept {}
    // Creating interface conversion operator: operator System::Net::IAuthenticationModule
    operator System::Net::IAuthenticationModule() noexcept {
      return *reinterpret_cast<System::Net::IAuthenticationModule*>(this);
    }
    // public System.Net.Authorization Authenticate(System.String challenge, System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x1693B80
    System::Net::Authorization* Authenticate(::Il2CppString* challenge, System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // static private System.Byte[] GetBytes(System.String str)
    // Offset: 0x1693F94
    static ::Array<uint8_t>* GetBytes(::Il2CppString* str);
    // static private System.Net.Authorization InternalAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x1693C34
    static System::Net::Authorization* InternalAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.Net.Authorization PreAuthenticate(System.Net.WebRequest webRequest, System.Net.ICredentials credentials)
    // Offset: 0x169404C
    System::Net::Authorization* PreAuthenticate(System::Net::WebRequest* webRequest, System::Net::ICredentials* credentials);
    // public System.String get_AuthenticationType()
    // Offset: 0x1694058
    ::Il2CppString* get_AuthenticationType();
    // public System.Void .ctor()
    // Offset: 0x1692BD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::BasicClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicClient*, creationType>()));
    }
  }; // System.Net.BasicClient
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::BasicClient*, "System.Net", "BasicClient");
