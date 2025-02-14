// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.Gost28147Mac
  class Gost28147Mac : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private System.Int32 bufOff
    // Size: 0x4
    // Offset: 0x10
    int bufOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: bufOff and: buf
    char __padding0[0x4] = {};
    // private System.Byte[] buf
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* buf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] mac
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* mac;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Boolean firstStep
    // Size: 0x1
    // Offset: 0x28
    bool firstStep;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: firstStep and: workingKey
    char __padding3[0x7] = {};
    // private System.Int32[] workingKey
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* workingKey;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Byte[] macIV
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* macIV;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] S
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* S;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Gost28147Mac
    Gost28147Mac(int bufOff_ = {}, ::Array<uint8_t>* buf_ = {}, ::Array<uint8_t>* mac_ = {}, bool firstStep_ = {}, ::Array<int>* workingKey_ = {}, ::Array<uint8_t>* macIV_ = {}, ::Array<uint8_t>* S_ = {}) noexcept : bufOff{bufOff_}, buf{buf_}, mac{mac_}, firstStep{firstStep_}, workingKey{workingKey_}, macIV{macIV_}, S{S_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // static private System.Int32[] GenerateWorkingKey(System.Byte[] userKey)
    // Offset: 0x18AC9CC
    static ::Array<int>* GenerateWorkingKey(::Array<uint8_t>* userKey);
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x18ACB50
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x18ACE00
    int GetMacSize();
    // private System.Int32 gost28147_mainStep(System.Int32 n1, System.Int32 key)
    // Offset: 0x18ACE08
    int gost28147_mainStep(int n1, int key);
    // private System.Void gost28147MacFunc(System.Int32[] workingKey, System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18ACEFC
    void gost28147MacFunc(::Array<int>* workingKey, ::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // static private System.Int32 bytesToint(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x18ACAD0
    static int bytesToint(::Array<uint8_t>* input, int inOff);
    // static private System.Void intTobytes(System.Int32 num, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18ACFEC
    static void intTobytes(int num, ::Array<uint8_t>* output, int outOff);
    // static private System.Byte[] CM5func(System.Byte[] buf, System.Int32 bufOff, System.Byte[] mac)
    // Offset: 0x18AD078
    static ::Array<uint8_t>* CM5func(::Array<uint8_t>* buf, int bufOff, ::Array<uint8_t>* mac);
    // public System.Void Update(System.Byte input)
    // Offset: 0x18AD16C
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x18AD294
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x18AD4A4
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x18ACDBC
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x18AC918
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost28147Mac* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Macs::Gost28147Mac::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost28147Mac*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Macs.Gost28147Mac
  #pragma pack(pop)
  static check_size<sizeof(Gost28147Mac), 64 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Macs_Gost28147MacSizeCheck;
  static_assert(sizeof(Gost28147Mac) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::Gost28147Mac*, "Org.BouncyCastle.Crypto.Macs", "Gost28147Mac");
