// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Utilities.IO.FilterStream
#include "Org/BouncyCastle/Utilities/IO/FilterStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Encodable
  class Asn1Encodable;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x30
  // Autogenerated type: Org.BouncyCastle.Asn1.DerOutputStream
  // [] Offset: FFFFFFFF
  class DerOutputStream : public Org::BouncyCastle::Utilities::IO::FilterStream {
    public:
    // Creating value type constructor for type: DerOutputStream
    DerOutputStream() noexcept {}
    // private System.Void WriteLength(System.Int32 length)
    // Offset: 0x1384CF8
    void WriteLength(int length);
    // System.Void WriteEncoded(System.Int32 tag, System.Byte[] bytes)
    // Offset: 0x1380248
    void WriteEncoded(int tag, ::Array<uint8_t>* bytes);
    // System.Void WriteEncoded(System.Int32 tag, System.Byte first, System.Byte[] bytes)
    // Offset: 0x1378D14
    void WriteEncoded(int tag, uint8_t first, ::Array<uint8_t>* bytes);
    // System.Void WriteTag(System.Int32 flags, System.Int32 tagNo)
    // Offset: 0x137AD74
    void WriteTag(int flags, int tagNo);
    // System.Void WriteEncoded(System.Int32 flags, System.Int32 tagNo, System.Byte[] bytes)
    // Offset: 0x137FB38
    void WriteEncoded(int flags, int tagNo, ::Array<uint8_t>* bytes);
    // protected System.Void WriteNull()
    // Offset: 0x1384DA8
    void WriteNull();
    // public System.Void WriteObject(Org.BouncyCastle.Asn1.Asn1Encodable obj)
    // Offset: 0x1384DEC
    void WriteObject(Org::BouncyCastle::Asn1::Asn1Encodable* obj);
    // public System.Void WriteObject(Org.BouncyCastle.Asn1.Asn1Object obj)
    // Offset: 0x1384E6C
    void WriteObject(Org::BouncyCastle::Asn1::Asn1Object* obj);
    // public System.Void .ctor(System.IO.Stream os)
    // Offset: 0x13702A4
    // Implemented from: Org.BouncyCastle.Utilities.IO.FilterStream
    // Base method: System.Void FilterStream::.ctor(System.IO.Stream os)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DerOutputStream* New_ctor(System::IO::Stream* os) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::DerOutputStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DerOutputStream*, creationType>(os)));
    }
  }; // Org.BouncyCastle.Asn1.DerOutputStream
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerOutputStream*, "Org.BouncyCastle.Asn1", "DerOutputStream");
#pragma pack(pop)
