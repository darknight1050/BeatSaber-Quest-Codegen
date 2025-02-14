// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.BerOctetString
#include "Org/BouncyCastle/Asn1/BerOctetString.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOctetString
  class DerOctetString;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.BerOctetString/ChunkEnumerator
  class BerOctetString::ChunkEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private readonly System.Byte[] octets
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* octets;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private readonly System.Int32 chunkSize
    // Size: 0x4
    // Offset: 0x18
    int chunkSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: chunkSize and: currentChunk
    char __padding1[0x4] = {};
    // private Org.BouncyCastle.Asn1.DerOctetString currentChunk
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerOctetString* currentChunk;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerOctetString*) == 0x8);
    // private System.Int32 nextChunkPos
    // Size: 0x4
    // Offset: 0x28
    int nextChunkPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ChunkEnumerator
    ChunkEnumerator(::Array<uint8_t>* octets_ = {}, int chunkSize_ = {}, Org::BouncyCastle::Asn1::DerOctetString* currentChunk_ = {}, int nextChunkPos_ = {}) noexcept : octets{octets_}, chunkSize{chunkSize_}, currentChunk{currentChunk_}, nextChunkPos{nextChunkPos_} {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // System.Void .ctor(System.Byte[] octets, System.Int32 chunkSize)
    // Offset: 0x16E145C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BerOctetString::ChunkEnumerator* New_ctor(::Array<uint8_t>* octets, int chunkSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BerOctetString::ChunkEnumerator*, creationType>(octets, chunkSize)));
    }
    // public System.Object get_Current()
    // Offset: 0x16E1838
    ::Il2CppObject* get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x16E18B0
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x16E19C8
    void Reset();
  }; // Org.BouncyCastle.Asn1.BerOctetString/ChunkEnumerator
  #pragma pack(pop)
  static check_size<sizeof(BerOctetString::ChunkEnumerator), 40 + sizeof(int)> __Org_BouncyCastle_Asn1_BerOctetString_ChunkEnumeratorSizeCheck;
  static_assert(sizeof(BerOctetString::ChunkEnumerator) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::BerOctetString::ChunkEnumerator*, "Org.BouncyCastle.Asn1", "BerOctetString/ChunkEnumerator");
