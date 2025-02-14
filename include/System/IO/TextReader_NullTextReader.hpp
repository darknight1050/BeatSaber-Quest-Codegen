// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextReader
#include "System/IO/TextReader.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextReader/NullTextReader
  class TextReader::NullTextReader : public System::IO::TextReader {
    public:
    // Creating value type constructor for type: NullTextReader
    NullTextReader() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1800DD8
    // Implemented from: System.IO.TextReader
    // Base method: System.Void TextReader::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextReader::NullTextReader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::TextReader::NullTextReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextReader::NullTextReader*, creationType>()));
    }
    // public override System.Int32 Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x1801000
    // Implemented from: System.IO.TextReader
    // Base method: System.Int32 TextReader::Read(System.Char[] buffer, System.Int32 index, System.Int32 count)
    int Read(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.String ReadLine()
    // Offset: 0x1801008
    // Implemented from: System.IO.TextReader
    // Base method: System.String TextReader::ReadLine()
    ::Il2CppString* ReadLine();
  }; // System.IO.TextReader/NullTextReader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::TextReader::NullTextReader*, "System.IO", "TextReader/NullTextReader");
