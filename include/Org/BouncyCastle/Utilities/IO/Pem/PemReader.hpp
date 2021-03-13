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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextReader
  class TextReader;
}
// Forward declaring namespace: Org::BouncyCastle::Utilities::IO::Pem
namespace Org::BouncyCastle::Utilities::IO::Pem {
  // Forward declaring type: PemObject
  class PemObject;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Utilities.IO.Pem
namespace Org::BouncyCastle::Utilities::IO::Pem {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Utilities.IO.Pem.PemReader
  // [] Offset: FFFFFFFF
  class PemReader : public ::Il2CppObject {
    public:
    // private readonly System.IO.TextReader reader
    // Size: 0x8
    // Offset: 0x10
    System::IO::TextReader* reader;
    // Field size check
    static_assert(sizeof(System::IO::TextReader*) == 0x8);
    // Creating value type constructor for type: PemReader
    PemReader(System::IO::TextReader* reader_ = {}) noexcept : reader{reader_} {}
    // Creating conversion operator: operator System::IO::TextReader*
    constexpr operator System::IO::TextReader*() const noexcept {
      return reader;
    }
    // public System.Void .ctor(System.IO.TextReader reader)
    // Offset: 0x1E2B9BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PemReader* New_ctor(System::IO::TextReader* reader) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Utilities::IO::Pem::PemReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PemReader*, creationType>(reader)));
    }
    // public Org.BouncyCastle.Utilities.IO.Pem.PemObject ReadPemObject()
    // Offset: 0x1E2BA58
    Org::BouncyCastle::Utilities::IO::Pem::PemObject* ReadPemObject();
    // private Org.BouncyCastle.Utilities.IO.Pem.PemObject LoadObject(System.String type)
    // Offset: 0x1E2BCCC
    Org::BouncyCastle::Utilities::IO::Pem::PemObject* LoadObject(::Il2CppString* type);
  }; // Org.BouncyCastle.Utilities.IO.Pem.PemReader
  #pragma pack(pop)
  static check_size<sizeof(PemReader), 16 + sizeof(System::IO::TextReader*)> __Org_BouncyCastle_Utilities_IO_Pem_PemReaderSizeCheck;
  static_assert(sizeof(PemReader) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::IO::Pem::PemReader*, "Org.BouncyCastle.Utilities.IO.Pem", "PemReader");
