// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.HashAlgorithm
#include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x25
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RIPEMD160
  // [ComVisibleAttribute] Offset: D7DA7C
  class RIPEMD160 : public System::Security::Cryptography::HashAlgorithm {
    public:
    // Creating value type constructor for type: RIPEMD160
    RIPEMD160() noexcept {}
    // static public System.Security.Cryptography.RIPEMD160 Create()
    // Offset: 0x1957934
    static System::Security::Cryptography::RIPEMD160* Create();
    // protected System.Void .ctor()
    // Offset: 0x1957908
    // Implemented from: System.Security.Cryptography.HashAlgorithm
    // Base method: System.Void HashAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RIPEMD160* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RIPEMD160::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RIPEMD160*, creationType>()));
    }
  }; // System.Security.Cryptography.RIPEMD160
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RIPEMD160*, "System.Security.Cryptography", "RIPEMD160");
