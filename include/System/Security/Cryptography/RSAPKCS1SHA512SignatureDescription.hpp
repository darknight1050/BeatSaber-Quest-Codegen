// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.RSAPKCS1SignatureDescription
#include "System/Security/Cryptography/RSAPKCS1SignatureDescription.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x38
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SHA512SignatureDescription
  // [] Offset: FFFFFFFF
  class RSAPKCS1SHA512SignatureDescription : public System::Security::Cryptography::RSAPKCS1SignatureDescription {
    public:
    // Creating value type constructor for type: RSAPKCS1SHA512SignatureDescription
    RSAPKCS1SHA512SignatureDescription() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x169F8F4
    // Implemented from: System.Security.Cryptography.SignatureDescription
    // Base method: System.Void SignatureDescription::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SHA512SignatureDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SHA512SignatureDescription*, creationType>()));
    }
  }; // System.Security.Cryptography.RSAPKCS1SHA512SignatureDescription
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SHA512SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SHA512SignatureDescription");
#pragma pack(pop)
