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
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MessageEnd
  // [] Offset: FFFFFFFF
  class MessageEnd : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: MessageEnd
    MessageEnd() noexcept {}
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x145E0F4
    void Write_NEW(System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x145E114
    void Read_NEW(System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // public System.Void Dump()
    // Offset: 0x145E118
    void Dump();
    // public System.Void Dump(System.IO.Stream sout)
    // Offset: 0x145E11C
    void Dump(System::IO::Stream* sout);
    // System.Void .ctor()
    // Offset: 0x145E0EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MessageEnd* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::MessageEnd::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MessageEnd*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.MessageEnd
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MessageEnd*, "System.Runtime.Serialization.Formatters.Binary", "MessageEnd");
