// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "System/Security/Cryptography/AsymmetricSignatureDeformatter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  // Autogenerated type: System.Security.Cryptography.DSASignatureDeformatter
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3A3A4
  class DSASignatureDeformatter : public System::Security::Cryptography::AsymmetricSignatureDeformatter {
    public:
    // private System.Security.Cryptography.DSA _dsaKey
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::DSA* dsaKey;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::DSA*) == 0x8);
    // private System.String _oid
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* oid;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DSASignatureDeformatter
    DSASignatureDeformatter(System::Security::Cryptography::DSA* dsaKey_ = {}, ::Il2CppString* oid_ = {}) noexcept : dsaKey{dsaKey_}, oid{oid_} {}
    // public System.Void .ctor(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x16965AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureDeformatter* New_ctor(System::Security::Cryptography::AsymmetricAlgorithm* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DSASignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureDeformatter*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x1696510
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DSASignatureDeformatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::DSASignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DSASignatureDeformatter*, creationType>()));
    }
    // public override System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x1696688
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    void SetKey(System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public override System.Void SetHashAlgorithm(System.String strName)
    // Offset: 0x169675C
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::SetHashAlgorithm(System.String strName)
    void SetHashAlgorithm(::Il2CppString* strName);
    // public override System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0x1696830
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Boolean AsymmetricSignatureDeformatter::VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    bool VerifySignature(::Array<uint8_t>* rgbHash, ::Array<uint8_t>* rgbSignature);
  }; // System.Security.Cryptography.DSASignatureDeformatter
  static check_size<sizeof(DSASignatureDeformatter), 24 + sizeof(::Il2CppString*)> __System_Security_Cryptography_DSASignatureDeformatterSizeCheck;
  static_assert(sizeof(DSASignatureDeformatter) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::DSASignatureDeformatter*, "System.Security.Cryptography", "DSASignatureDeformatter");
#pragma pack(pop)
