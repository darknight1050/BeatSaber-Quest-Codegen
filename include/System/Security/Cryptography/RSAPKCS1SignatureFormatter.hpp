// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.AsymmetricSignatureFormatter
#include "System/Security/Cryptography/AsymmetricSignatureFormatter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SignatureFormatter
  // [ComVisibleAttribute] Offset: D7DC20
  class RSAPKCS1SignatureFormatter : public System::Security::Cryptography::AsymmetricSignatureFormatter {
    public:
    // Creating value type constructor for type: RSAPKCS1SignatureFormatter
    RSAPKCS1SignatureFormatter() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1ACA90C
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureFormatter
    // Base method: System.Void AsymmetricSignatureFormatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RSAPKCS1SignatureFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureFormatter*, creationType>()));
    }
  }; // System.Security.Cryptography.RSAPKCS1SignatureFormatter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SignatureFormatter*, "System.Security.Cryptography", "RSAPKCS1SignatureFormatter");
