// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.NameValueHeaderValue
#include "System/Net/Http/Headers/NameValueHeaderValue.hpp"
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
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.NameValueWithParametersHeaderValue
  // [] Offset: FFFFFFFF
  class NameValueWithParametersHeaderValue : public System::Net::Http::Headers::NameValueHeaderValue {
    public:
    // private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    // Creating value type constructor for type: NameValueWithParametersHeaderValue
    NameValueWithParametersHeaderValue(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters_ = {}) noexcept : parameters{parameters_} {}
    // Creating conversion operator: operator System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*
    constexpr operator System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*() const noexcept {
      return parameters;
    }
    // protected System.Void .ctor(System.Net.Http.Headers.NameValueWithParametersHeaderValue source)
    // Offset: 0x13DEAB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueWithParametersHeaderValue* New_ctor(System::Net::Http::Headers::NameValueWithParametersHeaderValue* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::NameValueWithParametersHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueWithParametersHeaderValue*, creationType>(source)));
    }
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Parameters()
    // Offset: 0x13DEC48
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x13DECC4
    ::Il2CppObject* System_ICloneable_Clone_NEW();
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueWithParametersHeaderValue> result)
    // Offset: 0x13DEEE4
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueWithParametersHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.NameValueWithParametersHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x13DEF84
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::NameValueWithParametersHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // private System.Void .ctor()
    // Offset: 0x13DECBC
    // Implemented from: System.Net.Http.Headers.NameValueHeaderValue
    // Base method: System.Void NameValueHeaderValue::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameValueWithParametersHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::NameValueWithParametersHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameValueWithParametersHeaderValue*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x13DED24
    // Implemented from: System.Net.Http.Headers.NameValueHeaderValue
    // Base method: System.Boolean NameValueHeaderValue::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x13DEDEC
    // Implemented from: System.Net.Http.Headers.NameValueHeaderValue
    // Base method: System.Int32 NameValueHeaderValue::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x13DEE54
    // Implemented from: System.Net.Http.Headers.NameValueHeaderValue
    // Base method: System.String NameValueHeaderValue::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.NameValueWithParametersHeaderValue
  #pragma pack(pop)
  static check_size<sizeof(NameValueWithParametersHeaderValue), 32 + sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*)> __System_Net_Http_Headers_NameValueWithParametersHeaderValueSizeCheck;
  static_assert(sizeof(NameValueWithParametersHeaderValue) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::NameValueWithParametersHeaderValue*, "System.Net.Http.Headers", "NameValueWithParametersHeaderValue");
