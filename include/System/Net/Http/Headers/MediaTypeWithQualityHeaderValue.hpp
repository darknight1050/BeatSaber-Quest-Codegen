// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.MediaTypeHeaderValue
#include "System/Net/Http/Headers/MediaTypeHeaderValue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Skipping declaration: Token because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Http.Headers.MediaTypeWithQualityHeaderValue
  // [] Offset: FFFFFFFF
  class MediaTypeWithQualityHeaderValue : public System::Net::Http::Headers::MediaTypeHeaderValue {
    public:
    // Creating value type constructor for type: MediaTypeWithQualityHeaderValue
    MediaTypeWithQualityHeaderValue() noexcept {}
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.MediaTypeWithQualityHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x13DE3F0
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.MediaTypeWithQualityHeaderValue> result)
    // Offset: 0x13DE554
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*>*& result);
    // private System.Void .ctor()
    // Offset: 0x13DE3E8
    // Implemented from: System.Net.Http.Headers.MediaTypeHeaderValue
    // Base method: System.Void MediaTypeHeaderValue::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaTypeWithQualityHeaderValue* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::MediaTypeWithQualityHeaderValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaTypeWithQualityHeaderValue*, creationType>()));
    }
  }; // System.Net.Http.Headers.MediaTypeWithQualityHeaderValue
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::MediaTypeWithQualityHeaderValue*, "System.Net.Http.Headers", "MediaTypeWithQualityHeaderValue");
