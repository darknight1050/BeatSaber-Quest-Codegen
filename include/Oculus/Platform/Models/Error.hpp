// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Size: 0x20
  // Autogenerated type: Oculus.Platform.Models.Error
  // [] Offset: FFFFFFFF
  class Error : public ::Il2CppObject {
    public:
    // public readonly System.Int32 Code
    // Size: 0x4
    // Offset: 0x10
    int Code;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 HttpCode
    // Size: 0x4
    // Offset: 0x14
    int HttpCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.String Message
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Error
    Error(int Code_ = {}, int HttpCode_ = {}, ::Il2CppString* Message_ = {}) noexcept : Code{Code_}, HttpCode{HttpCode_}, Message{Message_} {}
    // public System.Void .ctor(System.Int32 code, System.String message, System.Int32 httpCode)
    // Offset: 0x11D3FA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Error* New_ctor(int code, ::Il2CppString* message, int httpCode) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::Error::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Error*, creationType>(code, message, httpCode)));
    }
  }; // Oculus.Platform.Models.Error
  static check_size<sizeof(Error), 24 + sizeof(::Il2CppString*)> __Oculus_Platform_Models_ErrorSizeCheck;
  static_assert(sizeof(Error) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Error*, "Oculus.Platform.Models", "Error");
#pragma pack(pop)
