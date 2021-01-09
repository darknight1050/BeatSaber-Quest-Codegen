// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
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
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  // Autogenerated type: System.Net.Http.Headers.ContentDispositionHeaderValue
  // [] Offset: FFFFFFFF
  class ContentDispositionHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.String dispositionType
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* dispositionType;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.Net.Http.Headers.NameValueHeaderValue> parameters
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*) == 0x8);
    // Creating value type constructor for type: ContentDispositionHeaderValue
    ContentDispositionHeaderValue(::Il2CppString* dispositionType_ = {}, System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>* parameters_ = {}) noexcept : dispositionType{dispositionType_}, parameters{parameters_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // protected System.Void .ctor(System.Net.Http.Headers.ContentDispositionHeaderValue source)
    // Offset: 0x11FE9FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentDispositionHeaderValue* New_ctor(System::Net::Http::Headers::ContentDispositionHeaderValue* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ContentDispositionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentDispositionHeaderValue*, creationType>(source)));
    }
    // public System.Collections.Generic.ICollection`1<System.Net.Http.Headers.NameValueHeaderValue> get_Parameters()
    // Offset: 0x11FEBFC
    System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.ContentDispositionHeaderValue parsedValue)
    // Offset: 0x11FEEDC
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::ContentDispositionHeaderValue*& parsedValue);
    // private System.Void .ctor()
    // Offset: 0x11FE9F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContentDispositionHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::ContentDispositionHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContentDispositionHeaderValue*, creationType>()));
    }
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x11FECC8
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11FED28
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x11FEDF8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x11FEE7C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.ContentDispositionHeaderValue
  static check_size<sizeof(ContentDispositionHeaderValue), 24 + sizeof(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue*>*)> __System_Net_Http_Headers_ContentDispositionHeaderValueSizeCheck;
  static_assert(sizeof(ContentDispositionHeaderValue) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::ContentDispositionHeaderValue*, "System.Net.Http.Headers", "ContentDispositionHeaderValue");
#pragma pack(pop)
