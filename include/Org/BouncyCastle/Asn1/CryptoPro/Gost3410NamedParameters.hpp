// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Forward declaring type: Gost3410ParamSetParameters
  class Gost3410ParamSetParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters
  // [] Offset: FFFFFFFF
  class Gost3410NamedParameters : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Gost3410NamedParameters
    Gost3410NamedParameters() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary objIds
    static System::Collections::IDictionary* _get_objIds();
    // Set static field: static private readonly System.Collections.IDictionary objIds
    static void _set_objIds(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary parameters
    static System::Collections::IDictionary* _get_parameters();
    // Set static field: static private readonly System.Collections.IDictionary parameters
    static void _set_parameters(System::Collections::IDictionary* value);
    // Get static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProA
    static Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* _get_cryptoProA();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProA
    static void _set_cryptoProA(Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);
    // Get static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProB
    static Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* _get_cryptoProB();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProB
    static void _set_cryptoProB(Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);
    // Get static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProXchA
    static Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* _get_cryptoProXchA();
    // Set static field: static private readonly Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters cryptoProXchA
    static void _set_cryptoProXchA(Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* value);
    // static private System.Void .cctor()
    // Offset: 0x154AD84
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x154B428
    static Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters* GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
  }; // Org.BouncyCastle.Asn1.CryptoPro.Gost3410NamedParameters
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::CryptoPro::Gost3410NamedParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410NamedParameters");
