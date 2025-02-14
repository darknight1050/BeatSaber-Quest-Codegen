// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DiffieHellmanUtility
#include "GlobalNamespace/DiffieHellmanUtility.hpp"
// Including type: IDiffieHellmanKeyPair
#include "GlobalNamespace/IDiffieHellmanKeyPair.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Agreement
namespace Org::BouncyCastle::Crypto::Agreement {
  // Forward declaring type: DHBasicAgreement
  class DHBasicAgreement;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHPrivateKeyParameters
  class DHPrivateKeyParameters;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DiffieHellmanUtility/DiffieHellmanKeyPair
  class DiffieHellmanUtility::DiffieHellmanKeyPair : public ::Il2CppObject/*, public GlobalNamespace::IDiffieHellmanKeyPair*/ {
    public:
    // Nested type: GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // private readonly Org.BouncyCastle.Crypto.Agreement.DHBasicAgreement _dhBasicAgreement
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* dhBasicAgreement;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement*) == 0x8);
    // private readonly System.Byte[] _publicKey
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* publicKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: DiffieHellmanKeyPair
    DiffieHellmanKeyPair(Org::BouncyCastle::Crypto::Agreement::DHBasicAgreement* dhBasicAgreement_ = {}, ::Array<uint8_t>* publicKey_ = {}) noexcept : dhBasicAgreement{dhBasicAgreement_}, publicKey{publicKey_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IDiffieHellmanKeyPair
    operator GlobalNamespace::IDiffieHellmanKeyPair() noexcept {
      return *reinterpret_cast<GlobalNamespace::IDiffieHellmanKeyPair*>(this);
    }
    // public System.Byte[] get_publicKey()
    // Offset: 0x130E6C0
    ::Array<uint8_t>* get_publicKey();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters privateKeyParameters, System.Byte[] publicKey)
    // Offset: 0x130E178
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiffieHellmanUtility::DiffieHellmanKeyPair* New_ctor(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* privateKeyParameters, ::Array<uint8_t>* publicKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiffieHellmanUtility::DiffieHellmanKeyPair*, creationType>(privateKeyParameters, publicKey)));
    }
    // public System.Threading.Tasks.Task`1<System.Byte[]> GetPreMasterSecretAsync(System.Byte[] clientPublicKey)
    // Offset: 0x130E6C8
    System::Threading::Tasks::Task_1<::Array<uint8_t>*>* GetPreMasterSecretAsync(::Array<uint8_t>* clientPublicKey);
    // public System.Byte[] GetPreMasterSecret(System.Byte[] clientPublicKey)
    // Offset: 0x130E7A8
    ::Array<uint8_t>* GetPreMasterSecret(::Array<uint8_t>* clientPublicKey);
  }; // DiffieHellmanUtility/DiffieHellmanKeyPair
  #pragma pack(pop)
  static check_size<sizeof(DiffieHellmanUtility::DiffieHellmanKeyPair), 24 + sizeof(::Array<uint8_t>*)> __GlobalNamespace_DiffieHellmanUtility_DiffieHellmanKeyPairSizeCheck;
  static_assert(sizeof(DiffieHellmanUtility::DiffieHellmanKeyPair) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DiffieHellmanUtility::DiffieHellmanKeyPair*, "", "DiffieHellmanUtility/DiffieHellmanKeyPair");
