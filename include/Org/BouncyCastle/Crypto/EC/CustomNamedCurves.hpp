// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::EC
namespace Org::BouncyCastle::Crypto::EC {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
  // Forward declaring type: IList
  class IList;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECPoint
  class X9ECPoint;
  // Forward declaring type: X9ECParametersHolder
  class X9ECParametersHolder;
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Endo
namespace Org::BouncyCastle::Math::EC::Endo {
  // Forward declaring type: GlvTypeBParameters
  class GlvTypeBParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.EC
namespace Org::BouncyCastle::Crypto::EC {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.EC.CustomNamedCurves
  // [] Offset: FFFFFFFF
  class CustomNamedCurves : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::Curve25519Holder
    class Curve25519Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP128R1Holder
    class SecP128R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP160K1Holder
    class SecP160K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP160R1Holder
    class SecP160R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP160R2Holder
    class SecP160R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP192K1Holder
    class SecP192K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP192R1Holder
    class SecP192R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP224K1Holder
    class SecP224K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP224R1Holder
    class SecP224R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP256K1Holder
    class SecP256K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP256R1Holder
    class SecP256R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP384R1Holder
    class SecP384R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecP521R1Holder
    class SecP521R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT113R1Holder
    class SecT113R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT113R2Holder
    class SecT113R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT131R1Holder
    class SecT131R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT131R2Holder
    class SecT131R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT163K1Holder
    class SecT163K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT163R1Holder
    class SecT163R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT163R2Holder
    class SecT163R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT193R1Holder
    class SecT193R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT193R2Holder
    class SecT193R2Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT233K1Holder
    class SecT233K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT233R1Holder
    class SecT233R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT239K1Holder
    class SecT239K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT283K1Holder
    class SecT283K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT283R1Holder
    class SecT283R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT409K1Holder
    class SecT409K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT409R1Holder
    class SecT409R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT571K1Holder
    class SecT571K1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SecT571R1Holder
    class SecT571R1Holder;
    // Nested type: Org::BouncyCastle::Crypto::EC::CustomNamedCurves::SM2P256V1Holder
    class SM2P256V1Holder;
    // Creating value type constructor for type: CustomNamedCurves
    CustomNamedCurves() noexcept {}
    // Get static field: static private readonly System.Collections.IDictionary nameToCurve
    static System::Collections::IDictionary* _get_nameToCurve();
    // Set static field: static private readonly System.Collections.IDictionary nameToCurve
    static void _set_nameToCurve(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary nameToOid
    static System::Collections::IDictionary* _get_nameToOid();
    // Set static field: static private readonly System.Collections.IDictionary nameToOid
    static void _set_nameToOid(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oidToCurve
    static System::Collections::IDictionary* _get_oidToCurve();
    // Set static field: static private readonly System.Collections.IDictionary oidToCurve
    static void _set_oidToCurve(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary oidToName
    static System::Collections::IDictionary* _get_oidToName();
    // Set static field: static private readonly System.Collections.IDictionary oidToName
    static void _set_oidToName(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IList names
    static System::Collections::IList* _get_names();
    // Set static field: static private readonly System.Collections.IList names
    static void _set_names(System::Collections::IList* value);
    // static private Org.BouncyCastle.Asn1.X9.X9ECPoint ConfigureBasepoint(Org.BouncyCastle.Math.EC.ECCurve curve, System.String encoding)
    // Offset: 0x172D820
    static Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECCurve* curve, ::Il2CppString* encoding);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve curve)
    // Offset: 0x172D910
    static Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve* curve);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurveGlv(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.Endo.GlvTypeBParameters p)
    // Offset: 0x172D914
    static Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurveGlv(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* p);
    // static private System.Void DefineCurve(System.String name, Org.BouncyCastle.Asn1.X9.X9ECParametersHolder holder)
    // Offset: 0x172D9C0
    static void DefineCurve(::Il2CppString* name, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);
    // static private System.Void DefineCurveWithOid(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid, Org.BouncyCastle.Asn1.X9.X9ECParametersHolder holder)
    // Offset: 0x172DB60
    static void DefineCurveWithOid(::Il2CppString* name, Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);
    // static private System.Void DefineCurveAlias(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x172DE80
    static void DefineCurveAlias(::Il2CppString* name, Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static private System.Void .cctor()
    // Offset: 0x172E0EC
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByName(System.String name)
    // Offset: 0x172ED14
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::Il2CppString* name);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x172EE74
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
  }; // Org.BouncyCastle.Crypto.EC.CustomNamedCurves
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::EC::CustomNamedCurves*, "Org.BouncyCastle.Crypto.EC", "CustomNamedCurves");
