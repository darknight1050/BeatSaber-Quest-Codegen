// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerStringBase
#include "Org/BouncyCastle/Asn1/DerStringBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
  // Skipping declaration: Asn1Object because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.DerNumericString
  // [] Offset: FFFFFFFF
  class DerNumericString : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // private readonly System.String str
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* str;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: DerNumericString
    DerNumericString(::Il2CppString* str_ = {}) noexcept : str{str_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return str;
    }
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x1541684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerNumericString* New_ctor(::Array<uint8_t>* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerNumericString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerNumericString*, creationType>(str)));
    }
    // public System.Void .ctor(System.String str, System.Boolean validate)
    // Offset: 0x154FEC4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerNumericString* New_ctor(::Il2CppString* str, bool validate) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerNumericString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerNumericString*, creationType>(str, validate)));
    }
    // public System.Byte[] GetOctets()
    // Offset: 0x1550088
    ::Array<uint8_t>* GetOctets();
    // static public System.Boolean IsNumericString(System.String str)
    // Offset: 0x154FFAC
    static bool IsNumericString(::Il2CppString* str);
    // public override System.String GetString()
    // Offset: 0x1550080
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString_NEW()
    ::Il2CppString* GetString();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1550094
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode_NEW(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x15500D0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals_NEW(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerNumericString
  #pragma pack(pop)
  static check_size<sizeof(DerNumericString), 16 + sizeof(::Il2CppString*)> __Org_BouncyCastle_Asn1_DerNumericStringSizeCheck;
  static_assert(sizeof(DerNumericString) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerNumericString*, "Org.BouncyCastle.Asn1", "DerNumericString");
