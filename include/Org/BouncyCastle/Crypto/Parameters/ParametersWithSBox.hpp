// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ICipherParameters
#include "Org/BouncyCastle/Crypto/ICipherParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
  // [] Offset: FFFFFFFF
  class ParametersWithSBox : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ICipherParameters*/ {
    public:
    // private Org.BouncyCastle.Crypto.ICipherParameters parameters
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::ICipherParameters* parameters;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::ICipherParameters*) == 0x8);
    // private System.Byte[] sBox
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* sBox;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: ParametersWithSBox
    ParametersWithSBox(Org::BouncyCastle::Crypto::ICipherParameters* parameters_ = {}, ::Array<uint8_t>* sBox_ = {}) noexcept : parameters{parameters_}, sBox{sBox_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ICipherParameters
    operator Org::BouncyCastle::Crypto::ICipherParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ICipherParameters*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.ICipherParameters parameters, System.Byte[] sBox)
    // Offset: 0x1048F40
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametersWithSBox* New_ctor(Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::Array<uint8_t>* sBox) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametersWithSBox*, creationType>(parameters, sBox)));
    }
    // public System.Byte[] GetSBox()
    // Offset: 0x1048F90
    ::Array<uint8_t>* GetSBox();
    // public Org.BouncyCastle.Crypto.ICipherParameters get_Parameters()
    // Offset: 0x1048F98
    Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();
  }; // Org.BouncyCastle.Crypto.Parameters.ParametersWithSBox
  static check_size<sizeof(ParametersWithSBox), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_ParametersWithSBoxSizeCheck;
  static_assert(sizeof(ParametersWithSBox) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ParametersWithSBox*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithSBox");
#pragma pack(pop)
