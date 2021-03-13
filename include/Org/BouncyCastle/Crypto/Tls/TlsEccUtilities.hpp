// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
  // Forward declaring type: ECPublicKeyParameters
  class ECPublicKeyParameters;
  // Forward declaring type: ECPrivateKeyParameters
  class ECPrivateKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: AsymmetricCipherKeyPair
  class AsymmetricCipherKeyPair;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Tls
namespace Org::BouncyCastle::Crypto::Tls {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
  // [] Offset: FFFFFFFF
  class TlsEccUtilities : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: TlsEccUtilities
    TlsEccUtilities() noexcept {}
    // Get static field: static private readonly System.String[] CurveNames
    static ::Array<::Il2CppString*>* _get_CurveNames();
    // Set static field: static private readonly System.String[] CurveNames
    static void _set_CurveNames(::Array<::Il2CppString*>* value);
    // static public System.String GetNameOfNamedCurve(System.Int32 namedCurve)
    // Offset: 0x1170A28
    static ::Il2CppString* GetNameOfNamedCurve(int namedCurve);
    // static public Org.BouncyCastle.Crypto.Parameters.ECDomainParameters GetParametersForNamedCurve(System.Int32 namedCurve)
    // Offset: 0x1170B7C
    static Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* GetParametersForNamedCurve(int namedCurve);
    // static public System.Boolean IsSupportedNamedCurve(System.Int32 namedCurve)
    // Offset: 0x1170AEC
    static bool IsSupportedNamedCurve(int namedCurve);
    // static public System.Boolean IsCompressionPreferred(System.Byte[] ecPointFormats, System.Byte compressionFormat)
    // Offset: 0x1170C9C
    static bool IsCompressionPreferred(::Array<uint8_t>* ecPointFormats, uint8_t compressionFormat);
    // static public System.Byte[] SerializeECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECPoint point)
    // Offset: 0x1170CFC
    static ::Array<uint8_t>* SerializeECPoint(::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Math::EC::ECPoint* point);
    // static public Org.BouncyCastle.Math.EC.ECPoint DeserializeECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECCurve curve, System.Byte[] encoding)
    // Offset: 0x1170DF0
    static Org::BouncyCastle::Math::EC::ECPoint* DeserializeECPoint(::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Math::EC::ECCurve* curve, ::Array<uint8_t>* encoding);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters DeserializeECPublicKey(System.Byte[] ecPointFormats, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters curve_params, System.Byte[] encoding)
    // Offset: 0x1170F60
    static Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* DeserializeECPublicKey(::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* curve_params, ::Array<uint8_t>* encoding);
    // static public Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair GenerateECKeyPair(Org.BouncyCastle.Security.SecureRandom random, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams)
    // Offset: 0x117110C
    static Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateECKeyPair(Org::BouncyCastle::Security::SecureRandom* random, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters GenerateEphemeralClientKeyExchange(Org.BouncyCastle.Security.SecureRandom random, System.Byte[] ecPointFormats, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters ecParams, System.IO.Stream output)
    // Offset: 0x11711B4
    static Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* GenerateEphemeralClientKeyExchange(Org::BouncyCastle::Security::SecureRandom* random, ::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* ecParams, System::IO::Stream* output);
    // static public Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters ValidateECPublicKey(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters key)
    // Offset: 0x1171380
    static Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* ValidateECPublicKey(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* key);
    // static public System.Void WriteECPoint(System.Byte[] ecPointFormats, Org.BouncyCastle.Math.EC.ECPoint point, System.IO.Stream output)
    // Offset: 0x11712D4
    static void WriteECPoint(::Array<uint8_t>* ecPointFormats, Org::BouncyCastle::Math::EC::ECPoint* point, System::IO::Stream* output);
    // static private System.Void .cctor()
    // Offset: 0x1171430
    static void _cctor();
  }; // Org.BouncyCastle.Crypto.Tls.TlsEccUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Tls::TlsEccUtilities*, "Org.BouncyCastle.Crypto.Tls", "TlsEccUtilities");
