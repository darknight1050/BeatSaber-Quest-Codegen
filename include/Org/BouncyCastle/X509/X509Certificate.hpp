// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.X509.X509ExtensionBase
#include "Org/BouncyCastle/X509/X509ExtensionBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509CertificateStructure
  class X509CertificateStructure;
  // Forward declaring type: BasicConstraints
  class BasicConstraints;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricKeyParameter
  class AsymmetricKeyParameter;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x50
  // Autogenerated type: Org.BouncyCastle.X509.X509Certificate
  // [] Offset: FFFFFFFF
  class X509Certificate : public Org::BouncyCastle::X509::X509ExtensionBase {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.X509CertificateStructure c
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509CertificateStructure*) == 0x8);
    // private readonly System.String sigAlgName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* sigAlgName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Byte[] sigAlgParams
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* sigAlgParams;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.BasicConstraints basicConstraints
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::BasicConstraints* basicConstraints;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::BasicConstraints*) == 0x8);
    // private readonly System.Boolean[] keyUsage
    // Size: 0x8
    // Offset: 0x30
    ::Array<bool>* keyUsage;
    // Field size check
    static_assert(sizeof(::Array<bool>*) == 0x8);
    // private readonly System.Object cacheLock
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* cacheLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private Org.BouncyCastle.Crypto.AsymmetricKeyParameter publicKeyValue
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKeyValue;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::AsymmetricKeyParameter*) == 0x8);
    // private System.Boolean hashValueSet
    // Size: 0x1
    // Offset: 0x48
    bool hashValueSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hashValueSet and: hashValue
    char __padding7[0x3] = {};
    // private System.Int32 hashValue
    // Size: 0x4
    // Offset: 0x4C
    int hashValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: X509Certificate
    X509Certificate(Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c_ = {}, ::Il2CppString* sigAlgName_ = {}, ::Array<uint8_t>* sigAlgParams_ = {}, Org::BouncyCastle::Asn1::X509::BasicConstraints* basicConstraints_ = {}, ::Array<bool>* keyUsage_ = {}, ::Il2CppObject* cacheLock_ = {}, Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKeyValue_ = {}, bool hashValueSet_ = {}, int hashValue_ = {}) noexcept : c{c_}, sigAlgName{sigAlgName_}, sigAlgParams{sigAlgParams_}, basicConstraints{basicConstraints_}, keyUsage{keyUsage_}, cacheLock{cacheLock_}, publicKeyValue{publicKeyValue_}, hashValueSet{hashValueSet_}, hashValue{hashValue_} {}
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.X509CertificateStructure c)
    // Offset: 0x18C10CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate* New_ctor(Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509Certificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate*, creationType>(c)));
    }
    // public System.Int32 get_Version()
    // Offset: 0x18C18E0
    int get_Version();
    // public Org.BouncyCastle.Math.BigInteger get_SerialNumber()
    // Offset: 0x18C18FC
    Org::BouncyCastle::Math::BigInteger* get_SerialNumber();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_IssuerDN()
    // Offset: 0x18C1928
    Org::BouncyCastle::Asn1::X509::X509Name* get_IssuerDN();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_SubjectDN()
    // Offset: 0x18C1944
    Org::BouncyCastle::Asn1::X509::X509Name* get_SubjectDN();
    // public System.DateTime get_NotBefore()
    // Offset: 0x18C1960
    System::DateTime get_NotBefore();
    // public System.DateTime get_NotAfter()
    // Offset: 0x18C198C
    System::DateTime get_NotAfter();
    // public System.Byte[] GetSignature()
    // Offset: 0x18C19B8
    ::Array<uint8_t>* GetSignature();
    // public System.String get_SigAlgName()
    // Offset: 0x18C19D4
    ::Il2CppString* get_SigAlgName();
    // public Org.BouncyCastle.Crypto.AsymmetricKeyParameter GetPublicKey()
    // Offset: 0x18C1A2C
    Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetPublicKey();
    // public System.Byte[] GetEncoded()
    // Offset: 0x18C1B14
    ::Array<uint8_t>* GetEncoded();
    // protected override Org.BouncyCastle.Asn1.X509.X509Extensions GetX509Extensions()
    // Offset: 0x18C19DC
    // Implemented from: Org.BouncyCastle.X509.X509ExtensionBase
    // Base method: Org.BouncyCastle.Asn1.X509.X509Extensions X509ExtensionBase::GetX509Extensions()
    Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x18C1B30
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x18C1C58
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x18C1CC0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // Org.BouncyCastle.X509.X509Certificate
  static check_size<sizeof(X509Certificate), 76 + sizeof(int)> __Org_BouncyCastle_X509_X509CertificateSizeCheck;
  static_assert(sizeof(X509Certificate) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509Certificate*, "Org.BouncyCastle.X509", "X509Certificate");
#pragma pack(pop)
