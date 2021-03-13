// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Asn1Object
  // [] Offset: FFFFFFFF
  class Asn1Object : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Creating value type constructor for type: Asn1Object
    Asn1Object() noexcept {}
    // static public Org.BouncyCastle.Asn1.Asn1Object FromByteArray(System.Byte[] data)
    // Offset: 0x154195C
    static Org::BouncyCastle::Asn1::Asn1Object* FromByteArray(::Array<uint8_t>* data);
    // static public Org.BouncyCastle.Asn1.Asn1Object FromStream(System.IO.Stream inStr)
    // Offset: 0x1541B40
    static Org::BouncyCastle::Asn1::Asn1Object* FromStream(System::IO::Stream* inStr);
    // System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0xFFFFFFFF
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0xFFFFFFFF
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
    // protected System.Int32 Asn1GetHashCode()
    // Offset: 0xFFFFFFFF
    int Asn1GetHashCode();
    // System.Boolean CallAsn1Equals(Org.BouncyCastle.Asn1.Asn1Object obj)
    // Offset: 0x153D6A8
    bool CallAsn1Equals(Org::BouncyCastle::Asn1::Asn1Object* obj);
    // System.Int32 CallAsn1GetHashCode()
    // Offset: 0x153D578
    int CallAsn1GetHashCode();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1541C68
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object_NEW()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
    // protected System.Void .ctor()
    // Offset: 0x154190C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: System.Void Asn1Encodable::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Asn1Object* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::Asn1Object::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Asn1Object*, creationType>()));
    }
  }; // Org.BouncyCastle.Asn1.Asn1Object
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::Asn1Object*, "Org.BouncyCastle.Asn1", "Asn1Object");
