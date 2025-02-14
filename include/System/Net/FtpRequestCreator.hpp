// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.IWebRequestCreate
#include "System/Net/IWebRequestCreate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpRequestCreator
  class FtpRequestCreator : public ::Il2CppObject/*, public System::Net::IWebRequestCreate*/ {
    public:
    // Creating value type constructor for type: FtpRequestCreator
    FtpRequestCreator() noexcept {}
    // Creating interface conversion operator: operator System::Net::IWebRequestCreate
    operator System::Net::IWebRequestCreate() noexcept {
      return *reinterpret_cast<System::Net::IWebRequestCreate*>(this);
    }
    // public System.Net.WebRequest Create(System.Uri uri)
    // Offset: 0x16A8BF8
    System::Net::WebRequest* Create(System::Uri* uri);
    // public System.Void .ctor()
    // Offset: 0x16A8D34
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FtpRequestCreator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::FtpRequestCreator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FtpRequestCreator*, creationType>()));
    }
  }; // System.Net.FtpRequestCreator
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpRequestCreator*, "System.Net", "FtpRequestCreator");
