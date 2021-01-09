// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DsaParameters
  class DsaParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
  // [] Offset: FFFFFFFF
  class DsaKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    // private readonly Org.BouncyCastle.Crypto.Parameters.DsaParameters parameters
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::Parameters::DsaParameters*) == 0x8);
    // Creating value type constructor for type: DsaKeyParameters
    DsaKeyParameters(Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // protected System.Void .ctor(System.Boolean isPrivate, Org.BouncyCastle.Crypto.Parameters.DsaParameters parameters)
    // Offset: 0x1044DDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DsaKeyParameters* New_ctor(bool isPrivate, Org::BouncyCastle::Crypto::Parameters::DsaParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DsaKeyParameters*, creationType>(isPrivate, parameters)));
    }
    // public Org.BouncyCastle.Crypto.Parameters.DsaParameters get_Parameters()
    // Offset: 0x1044E14
    Org::BouncyCastle::Crypto::Parameters::DsaParameters* get_Parameters();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters other)
    // Offset: 0x1044ECC
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1044E1C
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Boolean AsymmetricKeyParameter::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1044F24
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Int32 AsymmetricKeyParameter::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DsaKeyParameters
  static check_size<sizeof(DsaKeyParameters), 24 + sizeof(Org::BouncyCastle::Crypto::Parameters::DsaParameters*)> __Org_BouncyCastle_Crypto_Parameters_DsaKeyParametersSizeCheck;
  static_assert(sizeof(DsaKeyParameters) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DsaKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DsaKeyParameters");
#pragma pack(pop)
