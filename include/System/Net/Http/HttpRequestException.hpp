// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net.Http
namespace System::Net::Http {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.HttpRequestException
  // [] Offset: FFFFFFFF
  class HttpRequestException : public System::Exception {
    public:
    // Creating value type constructor for type: HttpRequestException
    HttpRequestException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x13E8958
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpRequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x13E84D4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpRequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x13E792C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpRequestException* New_ctor(::Il2CppString* message, System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::HttpRequestException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpRequestException*, creationType>(message, inner)));
    }
  }; // System.Net.Http.HttpRequestException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpRequestException*, "System.Net.Http", "HttpRequestException");
