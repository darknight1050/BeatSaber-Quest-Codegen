// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Parameters.KeyParameter
#include "Org/BouncyCastle/Crypto/Parameters/KeyParameter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DesParameters
  // [] Offset: FFFFFFFF
  class DesParameters : public Org::BouncyCastle::Crypto::Parameters::KeyParameter {
    public:
    // Creating value type constructor for type: DesParameters
    DesParameters() noexcept {}
    // Get static field: static private readonly System.Byte[] DES_weak_keys
    static ::Array<uint8_t>* _get_DES_weak_keys();
    // Set static field: static private readonly System.Byte[] DES_weak_keys
    static void _set_DES_weak_keys(::Array<uint8_t>* value);
    // static public System.Boolean IsWeakKey(System.Byte[] key, System.Int32 offset)
    // Offset: 0x115F1CC
    static bool IsWeakKey(::Array<uint8_t>* key, int offset);
    // static public System.Boolean IsWeakKey(System.Byte[] key)
    // Offset: 0x115F404
    static bool IsWeakKey(::Array<uint8_t>* key);
    // static public System.Byte SetOddParity(System.Byte b)
    // Offset: 0x115F684
    static uint8_t SetOddParity(uint8_t b);
    // static public System.Void SetOddParity(System.Byte[] bytes)
    // Offset: 0x115F6A4
    static void SetOddParity(::Array<uint8_t>* bytes);
    // static private System.Void .cctor()
    // Offset: 0x115F780
    static void _cctor();
    // public System.Void .ctor(System.Byte[] key)
    // Offset: 0x115F06C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.KeyParameter
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesParameters* New_ctor(::Array<uint8_t>* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DesParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesParameters*, creationType>(key)));
    }
    // public System.Void .ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    // Offset: 0x115F46C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.KeyParameter
    // Base method: System.Void KeyParameter::.ctor(System.Byte[] key, System.Int32 keyOff, System.Int32 keyLen)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DesParameters* New_ctor(::Array<uint8_t>* key, int keyOff, int keyLen) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DesParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DesParameters*, creationType>(key, keyOff, keyLen)));
    }
  }; // Org.BouncyCastle.Crypto.Parameters.DesParameters
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DesParameters*, "Org.BouncyCastle.Crypto.Parameters", "DesParameters");
