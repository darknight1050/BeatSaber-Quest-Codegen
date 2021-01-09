// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SignatureDescription
#include "System/Security/Cryptography/SignatureDescription.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x30
  // Autogenerated type: System.Security.Cryptography.DSASignatureDescription
  // [] Offset: FFFFFFFF
  class DSASignatureDescription : public System::Security::Cryptography::SignatureDescription {
    public:
    // Creating value type constructor for type: DSASignatureDescription
    DSASignatureDescription() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1696944
    // Implemented from: System.Security.Cryptography.SignatureDescription
    // Base method: System.Void SignatureDescription::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureDescription* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DSASignatureDescription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureDescription*, creationType>()));
    }
  }; // System.Security.Cryptography.DSASignatureDescription
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSASignatureDescription*, "System.Security.Cryptography", "DSASignatureDescription");
#pragma pack(pop)
