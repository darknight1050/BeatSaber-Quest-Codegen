// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IWebRequestCreate
#include "System/Net/IWebRequestCreate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x10
  // Autogenerated type: System.Net.HttpRequestCreator
  // [] Offset: FFFFFFFF
  class HttpRequestCreator : public ::Il2CppObject/*, public System::Net::IWebRequestCreate*/ {
    public:
    // Creating value type constructor for type: HttpRequestCreator
    HttpRequestCreator() noexcept {}
    // Creating interface conversion operator: operator System::Net::IWebRequestCreate
    operator System::Net::IWebRequestCreate() noexcept {
      return *reinterpret_cast<System::Net::IWebRequestCreate*>(this);
    }
    // System.Void .ctor()
    // Offset: 0x12B4678
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestCreator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpRequestCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestCreator*, creationType>()));
    }
    // public System.Net.WebRequest Create(System.Uri uri)
    // Offset: 0x12B4680
    // Implemented from: System.Net.IWebRequestCreate
    // Base method: System.Net.WebRequest IWebRequestCreate::Create(System.Uri uri)
    System::Net::WebRequest* Create(System::Uri* uri);
  }; // System.Net.HttpRequestCreator
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpRequestCreator*, "System.Net", "HttpRequestCreator");
#pragma pack(pop)
