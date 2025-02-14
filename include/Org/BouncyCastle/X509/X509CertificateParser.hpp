// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: Asn1InputStream
  class Asn1InputStream;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::X509
namespace Org::BouncyCastle::X509 {
  // Forward declaring type: PemParser
  class PemParser;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509CertificateStructure
  class X509CertificateStructure;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.X509.X509CertificateParser
  class X509CertificateParser : public ::Il2CppObject {
    public:
    // private Org.BouncyCastle.Asn1.Asn1Set sData
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Set* sData;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    // private System.Int32 sDataObjectCount
    // Size: 0x4
    // Offset: 0x18
    int sDataObjectCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: sDataObjectCount and: currentStream
    char __padding1[0x4] = {};
    // private System.IO.Stream currentStream
    // Size: 0x8
    // Offset: 0x20
    System::IO::Stream* currentStream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // Creating value type constructor for type: X509CertificateParser
    X509CertificateParser(Org::BouncyCastle::Asn1::Asn1Set* sData_ = {}, int sDataObjectCount_ = {}, System::IO::Stream* currentStream_ = {}) noexcept : sData{sData_}, sDataObjectCount{sDataObjectCount_}, currentStream{currentStream_} {}
    // Get static field: static private readonly Org.BouncyCastle.X509.PemParser PemCertParser
    static Org::BouncyCastle::X509::PemParser* _get_PemCertParser();
    // Set static field: static private readonly Org.BouncyCastle.X509.PemParser PemCertParser
    static void _set_PemCertParser(Org::BouncyCastle::X509::PemParser* value);
    // private Org.BouncyCastle.X509.X509Certificate ReadDerCertificate(Org.BouncyCastle.Asn1.Asn1InputStream dIn)
    // Offset: 0x1F75110
    Org::BouncyCastle::X509::X509Certificate* ReadDerCertificate(Org::BouncyCastle::Asn1::Asn1InputStream* dIn);
    // private Org.BouncyCastle.X509.X509Certificate GetCertificate()
    // Offset: 0x1F75314
    Org::BouncyCastle::X509::X509Certificate* GetCertificate();
    // private Org.BouncyCastle.X509.X509Certificate ReadPemCertificate(System.IO.Stream inStream)
    // Offset: 0x1F7540C
    Org::BouncyCastle::X509::X509Certificate* ReadPemCertificate(System::IO::Stream* inStream);
    // protected Org.BouncyCastle.X509.X509Certificate CreateX509Certificate(Org.BouncyCastle.Asn1.X509.X509CertificateStructure c)
    // Offset: 0x1F754C0
    Org::BouncyCastle::X509::X509Certificate* CreateX509Certificate(Org::BouncyCastle::Asn1::X509::X509CertificateStructure* c);
    // public Org.BouncyCastle.X509.X509Certificate ReadCertificate(System.Byte[] input)
    // Offset: 0x1F75520
    Org::BouncyCastle::X509::X509Certificate* ReadCertificate(::Array<uint8_t>* input);
    // public System.Collections.ICollection ReadCertificates(System.Byte[] input)
    // Offset: 0x1F75834
    System::Collections::ICollection* ReadCertificates(::Array<uint8_t>* input);
    // public Org.BouncyCastle.X509.X509Certificate ReadCertificate(System.IO.Stream inStream)
    // Offset: 0x1F75598
    Org::BouncyCastle::X509::X509Certificate* ReadCertificate(System::IO::Stream* inStream);
    // public System.Collections.ICollection ReadCertificates(System.IO.Stream inStream)
    // Offset: 0x1F758AC
    System::Collections::ICollection* ReadCertificates(System::IO::Stream* inStream);
    // static private System.Void .cctor()
    // Offset: 0x1F759CC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1F75A40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509CertificateParser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::X509::X509CertificateParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509CertificateParser*, creationType>()));
    }
  }; // Org.BouncyCastle.X509.X509CertificateParser
  #pragma pack(pop)
  static check_size<sizeof(X509CertificateParser), 32 + sizeof(System::IO::Stream*)> __Org_BouncyCastle_X509_X509CertificateParserSizeCheck;
  static_assert(sizeof(X509CertificateParser) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509CertificateParser*, "Org.BouncyCastle.X509", "X509CertificateParser");
