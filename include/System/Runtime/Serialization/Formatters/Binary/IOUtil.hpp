// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: MessageEnum
  struct MessageEnum;
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.IOUtil
  class IOUtil : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: IOUtil
    IOUtil() noexcept {}
    // static System.Boolean FlagTest(System.Runtime.Serialization.Formatters.Binary.MessageEnum flag, System.Runtime.Serialization.Formatters.Binary.MessageEnum target)
    // Offset: 0x15F0628
    static bool FlagTest(System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, System::Runtime::Serialization::Formatters::Binary::MessageEnum target);
    // static System.Void WriteStringWithCode(System.String value, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x15F05C8
    static void WriteStringWithCode(::Il2CppString* value, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // static System.Void WriteWithCode(System.Type type, System.Object value, System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x15F0634
    static void WriteWithCode(System::Type* type, ::Il2CppObject* value, System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
  }; // System.Runtime.Serialization.Formatters.Binary.IOUtil
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::IOUtil*, "System.Runtime.Serialization.Formatters.Binary", "IOUtil");
