// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: NameValueHeaderValue
  class NameValueHeaderValue;
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.TransferCodingHeaderValue
  class TransferCodingHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // System.String value
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* value;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    // Creating value type constructor for type: TransferCodingHeaderValue
    TransferCodingHeaderValue(::Il2CppString* value_ = {}, System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters_ = {}) noexcept : value{value_}, parameters{parameters_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // protected System.Void .ctor(System.Net.Http.Headers.TransferCodingHeaderValue source)
    // Offset: 0x1581604
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransferCodingHeaderValue* New_ctor(System::Net::Http::Headers::TransferCodingHeaderValue* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::TransferCodingHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransferCodingHeaderValue*, creationType>(source)));
    }
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Parameters()
    // Offset: 0x15817C4
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();
    // public System.String get_Value()
    // Offset: 0x1581840
    ::Il2CppString* get_Value();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x1581848
    ::Il2CppObject* System_ICloneable_Clone();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.TransferCodingHeaderValue> result)
    // Offset: 0x1581A64
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::TransferCodingHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.TransferCodingHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x1581B04
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::TransferCodingHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // System.Void .ctor()
    // Offset: 0x1581838
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransferCodingHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::TransferCodingHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransferCodingHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x15818A8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1581978
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1581A04
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.TransferCodingHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(TransferCodingHeaderValue), 24 + sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*)> __System_Net_Http_Headers_TransferCodingHeaderValueSizeCheck;
  static_assert(sizeof(TransferCodingHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::TransferCodingHeaderValue*, "System.Net.Http.Headers", "TransferCodingHeaderValue");
