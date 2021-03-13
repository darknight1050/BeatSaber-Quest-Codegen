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
  // Autogenerated type: Org.BouncyCastle.Asn1.DerUniversalString
  // [] Offset: FFFFFFFF
  class DerUniversalString : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // private readonly System.Byte[] str
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* str;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: DerUniversalString
    DerUniversalString(::Array<uint8_t>* str_ = {}) noexcept : str{str_} {}
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return str;
    }
    // Get static field: static private readonly System.Char[] table
    static ::Array<::Il2CppChar>* _get_table();
    // Set static field: static private readonly System.Char[] table
    static void _set_table(::Array<::Il2CppChar>* value);
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x1541720
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerUniversalString* New_ctor(::Array<uint8_t>* str) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerUniversalString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerUniversalString*, creationType>(str)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1551E88
    static void _cctor();
    // public override System.String GetString()
    // Offset: 0x1551C20
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString_NEW()
    ::Il2CppString* GetString();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x1551D8C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode_NEW(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1551DB0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals_NEW(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerUniversalString
  #pragma pack(pop)
  static check_size<sizeof(DerUniversalString), 16 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Asn1_DerUniversalStringSizeCheck;
  static_assert(sizeof(DerUniversalString) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerUniversalString*, "Org.BouncyCastle.Asn1", "DerUniversalString");
