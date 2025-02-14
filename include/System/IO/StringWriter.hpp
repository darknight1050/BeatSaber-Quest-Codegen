// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
  // Forward declaring type: UnicodeEncoding
  class UnicodeEncoding;
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StringWriter
  // [ComVisibleAttribute] Offset: D7C9A0
  class StringWriter : public System::IO::TextWriter {
    public:
    // private System.Text.StringBuilder _sb
    // Size: 0x8
    // Offset: 0x28
    System::Text::StringBuilder* sb;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Boolean _isOpen
    // Size: 0x1
    // Offset: 0x30
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: StringWriter
    StringWriter(System::Text::StringBuilder* sb_ = {}, bool isOpen_ = {}) noexcept : sb{sb_}, isOpen{isOpen_} {}
    // Get static field: static private System.Text.UnicodeEncoding m_encoding
    static System::Text::UnicodeEncoding* _get_m_encoding();
    // Set static field: static private System.Text.UnicodeEncoding m_encoding
    static void _set_m_encoding(System::Text::UnicodeEncoding* value);
    // public System.Void .ctor(System.Text.StringBuilder sb)
    // Offset: 0x18001D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(System::Text::StringBuilder* sb) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(sb)));
    }
    // public System.Void .ctor(System.Text.StringBuilder sb, System.IFormatProvider formatProvider)
    // Offset: 0x180007C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(System::Text::StringBuilder* sb, System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(sb, formatProvider)));
    }
    // public System.Void .ctor()
    // Offset: 0x17FFFEC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>()));
    }
    // public System.Void .ctor(System.IFormatProvider formatProvider)
    // Offset: 0x1800164
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor(System.IFormatProvider formatProvider)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringWriter* New_ctor(System::IFormatProvider* formatProvider) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StringWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringWriter*, creationType>(formatProvider)));
    }
    // public override System.Void Close()
    // Offset: 0x18002F0
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1800300
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x180030C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
    // public override System.Void Write(System.Char value)
    // Offset: 0x18003AC
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x180045C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x180061C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::Il2CppString* value);
    // public override System.String ToString()
    // Offset: 0x1800654
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.IO.StringWriter
  #pragma pack(pop)
  static check_size<sizeof(StringWriter), 48 + sizeof(bool)> __System_IO_StringWriterSizeCheck;
  static_assert(sizeof(StringWriter) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::StringWriter*, "System.IO", "StringWriter");
