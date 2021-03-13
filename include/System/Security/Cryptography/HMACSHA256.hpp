// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HMAC
#include "System/Security/Cryptography/HMAC.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.HMACSHA256
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C9617C
  class HMACSHA256 : public System::Security::Cryptography::HMAC {
    public:
    // Creating value type constructor for type: HMACSHA256
    HMACSHA256() noexcept {}
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x17DD798
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMACSHA256* New_ctor(::Array<uint8_t>* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::HMACSHA256::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMACSHA256*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x17D567C
    // Implemented from: System.Security.Cryptography.HMAC
    // Base method: System.Void HMAC::.ctor()
    // Base method: System.Void KeyedHashAlgorithm::.ctor()
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMACSHA256* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::HMACSHA256::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMACSHA256*, creationType>()));
    }
  }; // System.Security.Cryptography.HMACSHA256
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::HMACSHA256*, "System.Security.Cryptography", "HMACSHA256");
