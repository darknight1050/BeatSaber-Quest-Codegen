// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.X509NameEntryConverter
  class X509NameEntryConverter : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: X509NameEntryConverter
    X509NameEntryConverter() noexcept {}
    // public Org.BouncyCastle.Asn1.Asn1Object GetConvertedValue(Org.BouncyCastle.Asn1.DerObjectIdentifier oid, System.String value)
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Asn1::Asn1Object* GetConvertedValue(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Il2CppString* value);
  }; // Org.BouncyCastle.Asn1.X509.X509NameEntryConverter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::X509NameEntryConverter*, "Org.BouncyCastle.Asn1.X509", "X509NameEntryConverter");
