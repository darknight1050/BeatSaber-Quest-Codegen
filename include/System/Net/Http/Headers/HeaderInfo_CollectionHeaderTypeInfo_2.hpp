// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Http.Headers.HeaderInfo
#include "System/Net/Http/Headers/HeaderInfo.hpp"
// Including type: System.Net.Http.Headers.HeaderInfo/HeaderTypeInfo`2
#include "System/Net/Http/Headers/HeaderInfo_HeaderTypeInfo_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: TryParseListDelegate`1<T>
  template<typename T>
  class TryParseListDelegate_1;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.Http.Headers.HeaderInfo/CollectionHeaderTypeInfo`2
  template<typename T, typename U>
  class HeaderInfo::CollectionHeaderTypeInfo_2 : public System::Net::Http::Headers::HeaderInfo::HeaderTypeInfo_2<T, U> {
    public:
    // private readonly System.Int32 minimalCount
    // Size: 0x4
    // Offset: 0x0
    int minimalCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.String separator
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* separator;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.Net.Http.Headers.TryParseListDelegate`1<T> parser
    // Size: 0x8
    // Offset: 0x0
    System::Net::Http::Headers::TryParseListDelegate_1<T>* parser;
    // Field size check
    static_assert(sizeof(System::Net::Http::Headers::TryParseListDelegate_1<T>*) == 0x8);
    // Creating value type constructor for type: CollectionHeaderTypeInfo_2
    CollectionHeaderTypeInfo_2(int minimalCount_ = {}, ::Il2CppString* separator_ = {}, System::Net::Http::Headers::TryParseListDelegate_1<T>* parser_ = {}) noexcept : minimalCount{minimalCount_}, separator{separator_}, parser{parser_} {}
    // Deleting conversion operator: operator System::Net::Http::Headers::TryParseDelegate_1<T>*
    constexpr operator System::Net::Http::Headers::TryParseDelegate_1<T>*() const noexcept = delete;
    // public System.Void .ctor(System.String name, System.Net.Http.Headers.TryParseListDelegate`1<T> parser, System.Net.Http.Headers.HttpHeaderKind headerKind, System.Int32 minimalCount, System.String separator)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HeaderInfo::CollectionHeaderTypeInfo_2<T, U>* New_ctor(::Il2CppString* name, System::Net::Http::Headers::TryParseListDelegate_1<T>* parser, System::Net::Http::Headers::HttpHeaderKind headerKind, int minimalCount, ::Il2CppString* separator) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::CollectionHeaderTypeInfo_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HeaderInfo::CollectionHeaderTypeInfo_2<T, U>*, creationType>(name, parser, headerKind, minimalCount, separator)));
    }
    // public override System.String get_Separator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Net.Http.Headers.HeaderInfo
    // Base method: System.String HeaderInfo::get_Separator()
    ::Il2CppString* get_Separator() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::CollectionHeaderTypeInfo_2::get_Separator");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Separator", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
    }
    // public override System.Boolean TryParse(System.String value, out System.Object result)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Net.Http.Headers.HeaderInfo/HeaderTypeInfo`2
    // Base method: System.Boolean HeaderTypeInfo_2::TryParse(System.String value, out System.Object result)
    bool TryParse(::Il2CppString* value, ::Il2CppObject*& result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::Http::Headers::HeaderInfo::CollectionHeaderTypeInfo_2::TryParse");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryParse", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*&>()})));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, value, result);
    }
  }; // System.Net.Http.Headers.HeaderInfo/CollectionHeaderTypeInfo`2
  // Could not write size check! Type: System.Net.Http.Headers.HeaderInfo/CollectionHeaderTypeInfo`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::HeaderInfo::CollectionHeaderTypeInfo_2, "System.Net.Http.Headers", "HeaderInfo/CollectionHeaderTypeInfo`2");
