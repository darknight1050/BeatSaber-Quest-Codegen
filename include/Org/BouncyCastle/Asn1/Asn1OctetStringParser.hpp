// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: Org.BouncyCastle.Asn1.IAsn1Convertible
#include "Org/BouncyCastle/Asn1/IAsn1Convertible.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1OctetStringParser
  class Asn1OctetStringParser/*, public Org::BouncyCastle::Asn1::IAsn1Convertible*/ {
    public:
    // Creating value type constructor for type: Asn1OctetStringParser
    Asn1OctetStringParser() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Asn1::IAsn1Convertible
    operator Org::BouncyCastle::Asn1::IAsn1Convertible() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Asn1::IAsn1Convertible*>(this);
    }
    // public System.IO.Stream GetOctetStream()
    // Offset: 0xFFFFFFFF
    System::IO::Stream* GetOctetStream();
  }; // Org.BouncyCastle.Asn1.Asn1OctetStringParser
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1OctetStringParser*, "Org.BouncyCastle.Asn1", "Asn1OctetStringParser");
