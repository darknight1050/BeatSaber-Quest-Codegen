// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: SortVersion
  class SortVersion;
  // Forward declaring type: CultureInfo
  class CultureInfo;
  // Forward declaring type: SortKey
  class SortKey;
}
// Forward declaring namespace: Mono::Globalization::Unicode
namespace Mono::Globalization::Unicode {
  // Forward declaring type: SimpleCollator
  class SimpleCollator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.CompareInfo
  // [ComVisibleAttribute] Offset: D7CBC8
  class CompareInfo : public ::Il2CppObject/*, public System::Runtime::Serialization::IDeserializationCallback*/ {
    public:
    // [OptionalFieldAttribute] Offset: 0xD81524
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_sortName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* m_sortName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xD8155C
    // private System.Int32 win32LCID
    // Size: 0x4
    // Offset: 0x20
    int win32LCID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 culture
    // Size: 0x4
    // Offset: 0x24
    int culture;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xD81594
    // private System.Globalization.SortVersion m_SortVersion
    // Size: 0x8
    // Offset: 0x28
    System::Globalization::SortVersion* m_SortVersion;
    // Field size check
    static_assert(sizeof(System::Globalization::SortVersion*) == 0x8);
    // private Mono.Globalization.Unicode.SimpleCollator collator
    // Size: 0x8
    // Offset: 0x30
    Mono::Globalization::Unicode::SimpleCollator* collator;
    // Field size check
    static_assert(sizeof(Mono::Globalization::Unicode::SimpleCollator*) == 0x8);
    // Creating value type constructor for type: CompareInfo
    CompareInfo(::Il2CppString* m_name_ = {}, ::Il2CppString* m_sortName_ = {}, int win32LCID_ = {}, int culture_ = {}, System::Globalization::SortVersion* m_SortVersion_ = {}, Mono::Globalization::Unicode::SimpleCollator* collator_ = {}) noexcept : m_name{m_name_}, m_sortName{m_sortName_}, win32LCID{win32LCID_}, culture{culture_}, m_SortVersion{m_SortVersion_}, collator{collator_} {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::IDeserializationCallback
    operator System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // static field const value: static private System.Globalization.CompareOptions ValidIndexMaskOffFlags
    static constexpr const int ValidIndexMaskOffFlags = -32;
    // Get static field: static private System.Globalization.CompareOptions ValidIndexMaskOffFlags
    static System::Globalization::CompareOptions _get_ValidIndexMaskOffFlags();
    // Set static field: static private System.Globalization.CompareOptions ValidIndexMaskOffFlags
    static void _set_ValidIndexMaskOffFlags(System::Globalization::CompareOptions value);
    // static field const value: static private System.Globalization.CompareOptions ValidCompareMaskOffFlags
    static constexpr const int ValidCompareMaskOffFlags = -536870944;
    // Get static field: static private System.Globalization.CompareOptions ValidCompareMaskOffFlags
    static System::Globalization::CompareOptions _get_ValidCompareMaskOffFlags();
    // Set static field: static private System.Globalization.CompareOptions ValidCompareMaskOffFlags
    static void _set_ValidCompareMaskOffFlags(System::Globalization::CompareOptions value);
    // static field const value: static private System.Globalization.CompareOptions ValidHashCodeOfStringMaskOffFlags
    static constexpr const int ValidHashCodeOfStringMaskOffFlags = -32;
    // Get static field: static private System.Globalization.CompareOptions ValidHashCodeOfStringMaskOffFlags
    static System::Globalization::CompareOptions _get_ValidHashCodeOfStringMaskOffFlags();
    // Set static field: static private System.Globalization.CompareOptions ValidHashCodeOfStringMaskOffFlags
    static void _set_ValidHashCodeOfStringMaskOffFlags(System::Globalization::CompareOptions value);
    // static field const value: static private System.Int32 LINGUISTIC_IGNORECASE
    static constexpr const int LINGUISTIC_IGNORECASE = 16;
    // Get static field: static private System.Int32 LINGUISTIC_IGNORECASE
    static int _get_LINGUISTIC_IGNORECASE();
    // Set static field: static private System.Int32 LINGUISTIC_IGNORECASE
    static void _set_LINGUISTIC_IGNORECASE(int value);
    // static field const value: static private System.Int32 NORM_IGNORECASE
    static constexpr const int NORM_IGNORECASE = 1;
    // Get static field: static private System.Int32 NORM_IGNORECASE
    static int _get_NORM_IGNORECASE();
    // Set static field: static private System.Int32 NORM_IGNORECASE
    static void _set_NORM_IGNORECASE(int value);
    // static field const value: static private System.Int32 NORM_IGNOREKANATYPE
    static constexpr const int NORM_IGNOREKANATYPE = 65536;
    // Get static field: static private System.Int32 NORM_IGNOREKANATYPE
    static int _get_NORM_IGNOREKANATYPE();
    // Set static field: static private System.Int32 NORM_IGNOREKANATYPE
    static void _set_NORM_IGNOREKANATYPE(int value);
    // static field const value: static private System.Int32 LINGUISTIC_IGNOREDIACRITIC
    static constexpr const int LINGUISTIC_IGNOREDIACRITIC = 32;
    // Get static field: static private System.Int32 LINGUISTIC_IGNOREDIACRITIC
    static int _get_LINGUISTIC_IGNOREDIACRITIC();
    // Set static field: static private System.Int32 LINGUISTIC_IGNOREDIACRITIC
    static void _set_LINGUISTIC_IGNOREDIACRITIC(int value);
    // static field const value: static private System.Int32 NORM_IGNORENONSPACE
    static constexpr const int NORM_IGNORENONSPACE = 2;
    // Get static field: static private System.Int32 NORM_IGNORENONSPACE
    static int _get_NORM_IGNORENONSPACE();
    // Set static field: static private System.Int32 NORM_IGNORENONSPACE
    static void _set_NORM_IGNORENONSPACE(int value);
    // static field const value: static private System.Int32 NORM_IGNORESYMBOLS
    static constexpr const int NORM_IGNORESYMBOLS = 4;
    // Get static field: static private System.Int32 NORM_IGNORESYMBOLS
    static int _get_NORM_IGNORESYMBOLS();
    // Set static field: static private System.Int32 NORM_IGNORESYMBOLS
    static void _set_NORM_IGNORESYMBOLS(int value);
    // static field const value: static private System.Int32 NORM_IGNOREWIDTH
    static constexpr const int NORM_IGNOREWIDTH = 131072;
    // Get static field: static private System.Int32 NORM_IGNOREWIDTH
    static int _get_NORM_IGNOREWIDTH();
    // Set static field: static private System.Int32 NORM_IGNOREWIDTH
    static void _set_NORM_IGNOREWIDTH(int value);
    // static field const value: static private System.Int32 SORT_STRINGSORT
    static constexpr const int SORT_STRINGSORT = 4096;
    // Get static field: static private System.Int32 SORT_STRINGSORT
    static int _get_SORT_STRINGSORT();
    // Set static field: static private System.Int32 SORT_STRINGSORT
    static void _set_SORT_STRINGSORT(int value);
    // static field const value: static private System.Int32 COMPARE_OPTIONS_ORDINAL
    static constexpr const int COMPARE_OPTIONS_ORDINAL = 1073741824;
    // Get static field: static private System.Int32 COMPARE_OPTIONS_ORDINAL
    static int _get_COMPARE_OPTIONS_ORDINAL();
    // Set static field: static private System.Int32 COMPARE_OPTIONS_ORDINAL
    static void _set_COMPARE_OPTIONS_ORDINAL(int value);
    // static field const value: static System.Int32 NORM_LINGUISTIC_CASING
    static constexpr const int NORM_LINGUISTIC_CASING = 134217728;
    // Get static field: static System.Int32 NORM_LINGUISTIC_CASING
    static int _get_NORM_LINGUISTIC_CASING();
    // Set static field: static System.Int32 NORM_LINGUISTIC_CASING
    static void _set_NORM_LINGUISTIC_CASING(int value);
    // static field const value: static private System.Int32 RESERVED_FIND_ASCII_STRING
    static constexpr const int RESERVED_FIND_ASCII_STRING = 536870912;
    // Get static field: static private System.Int32 RESERVED_FIND_ASCII_STRING
    static int _get_RESERVED_FIND_ASCII_STRING();
    // Set static field: static private System.Int32 RESERVED_FIND_ASCII_STRING
    static void _set_RESERVED_FIND_ASCII_STRING(int value);
    // static field const value: static private System.Int32 SORT_VERSION_WHIDBEY
    static constexpr const int SORT_VERSION_WHIDBEY = 4096;
    // Get static field: static private System.Int32 SORT_VERSION_WHIDBEY
    static int _get_SORT_VERSION_WHIDBEY();
    // Set static field: static private System.Int32 SORT_VERSION_WHIDBEY
    static void _set_SORT_VERSION_WHIDBEY(int value);
    // static field const value: static private System.Int32 SORT_VERSION_V4
    static constexpr const int SORT_VERSION_V4 = 393473;
    // Get static field: static private System.Int32 SORT_VERSION_V4
    static int _get_SORT_VERSION_V4();
    // Set static field: static private System.Int32 SORT_VERSION_V4
    static void _set_SORT_VERSION_V4(int value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> collators
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, Mono::Globalization::Unicode::SimpleCollator*>* _get_collators();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> collators
    static void _set_collators(System::Collections::Generic::Dictionary_2<::Il2CppString*, Mono::Globalization::Unicode::SimpleCollator*>* value);
    // Get static field: static private System.Boolean managedCollation
    static bool _get_managedCollation();
    // Set static field: static private System.Boolean managedCollation
    static void _set_managedCollation(bool value);
    // Get static field: static private System.Boolean managedCollationChecked
    static bool _get_managedCollationChecked();
    // Set static field: static private System.Boolean managedCollationChecked
    static void _set_managedCollationChecked(bool value);
    // System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x179A5BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompareInfo* New_ctor(System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CompareInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompareInfo*, creationType>(culture)));
    }
    // static public System.Globalization.CompareInfo GetCompareInfo(System.String name)
    // Offset: 0x179A5FC
    static System::Globalization::CompareInfo* GetCompareInfo(::Il2CppString* name);
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x179A6B4
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized()
    // Offset: 0x179A6BC
    void OnDeserialized();
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x179A974
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x179A978
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x179AA10
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // public System.String get_Name()
    // Offset: 0x179AA14
    ::Il2CppString* get_Name();
    // public System.Int32 Compare(System.String string1, System.String string2)
    // Offset: 0x179AA9C
    int Compare(::Il2CppString* string1, ::Il2CppString* string2);
    // public System.Int32 Compare(System.String string1, System.String string2, System.Globalization.CompareOptions options)
    // Offset: 0x179AAAC
    int Compare(::Il2CppString* string1, ::Il2CppString* string2, System::Globalization::CompareOptions options);
    // public System.Int32 Compare(System.String string1, System.Int32 offset1, System.Int32 length1, System.String string2, System.Int32 offset2, System.Int32 length2, System.Globalization.CompareOptions options)
    // Offset: 0x179ACD0
    int Compare(::Il2CppString* string1, int offset1, int length1, ::Il2CppString* string2, int offset2, int length2, System::Globalization::CompareOptions options);
    // static private System.Int32 CompareOrdinal(System.String string1, System.Int32 offset1, System.Int32 length1, System.String string2, System.Int32 offset2, System.Int32 length2)
    // Offset: 0x179AFB8
    static int CompareOrdinal(::Il2CppString* string1, int offset1, int length1, ::Il2CppString* string2, int offset2, int length2);
    // public System.Boolean IsPrefix(System.String source, System.String prefix, System.Globalization.CompareOptions options)
    // Offset: 0x179B00C
    bool IsPrefix(::Il2CppString* source, ::Il2CppString* prefix, System::Globalization::CompareOptions options);
    // public System.Boolean IsSuffix(System.String source, System.String suffix, System.Globalization.CompareOptions options)
    // Offset: 0x179B584
    bool IsSuffix(::Il2CppString* source, ::Il2CppString* suffix, System::Globalization::CompareOptions options);
    // public System.Int32 IndexOf(System.String source, System.String value, System.Globalization.CompareOptions options)
    // Offset: 0x179B790
    int IndexOf(::Il2CppString* source, ::Il2CppString* value, System::Globalization::CompareOptions options);
    // public System.Int32 IndexOf(System.String source, System.String value, System.Int32 startIndex, System.Int32 count, System.Globalization.CompareOptions options)
    // Offset: 0x179B84C
    int IndexOf(::Il2CppString* source, ::Il2CppString* value, int startIndex, int count, System::Globalization::CompareOptions options);
    // public System.Int32 LastIndexOf(System.String source, System.String value, System.Int32 startIndex, System.Int32 count, System.Globalization.CompareOptions options)
    // Offset: 0x179BB60
    int LastIndexOf(::Il2CppString* source, ::Il2CppString* value, int startIndex, int count, System::Globalization::CompareOptions options);
    // public System.Globalization.SortKey GetSortKey(System.String source, System.Globalization.CompareOptions options)
    // Offset: 0x179BDDC
    System::Globalization::SortKey* GetSortKey(::Il2CppString* source, System::Globalization::CompareOptions options);
    // private System.Globalization.SortKey CreateSortKey(System.String source, System.Globalization.CompareOptions options)
    // Offset: 0x179BDE0
    System::Globalization::SortKey* CreateSortKey(::Il2CppString* source, System::Globalization::CompareOptions options);
    // System.Int32 GetHashCodeOfString(System.String source, System.Globalization.CompareOptions options)
    // Offset: 0x179C0C8
    int GetHashCodeOfString(::Il2CppString* source, System::Globalization::CompareOptions options);
    // System.Int32 GetHashCodeOfString(System.String source, System.Globalization.CompareOptions options, System.Boolean forceRandomizedHashing, System.Int64 additionalEntropy)
    // Offset: 0x179C0D0
    int GetHashCodeOfString(::Il2CppString* source, System::Globalization::CompareOptions options, bool forceRandomizedHashing, int64_t additionalEntropy);
    // static private System.Boolean get_UseManagedCollation()
    // Offset: 0x179B21C
    static bool get_UseManagedCollation();
    // private Mono.Globalization.Unicode.SimpleCollator GetCollator()
    // Offset: 0x179B330
    Mono::Globalization::Unicode::SimpleCollator* GetCollator();
    // private System.Globalization.SortKey CreateSortKeyCore(System.String source, System.Globalization.CompareOptions options)
    // Offset: 0x179BEF4
    System::Globalization::SortKey* CreateSortKeyCore(::Il2CppString* source, System::Globalization::CompareOptions options);
    // private System.Int32 internal_index_switch(System.String s1, System.Int32 sindex, System.Int32 count, System.String s2, System.Globalization.CompareOptions opt, System.Boolean first)
    // Offset: 0x179BA7C
    int internal_index_switch(::Il2CppString* s1, int sindex, int count, ::Il2CppString* s2, System::Globalization::CompareOptions opt, bool first);
    // private System.Int32 internal_compare_switch(System.String str1, System.Int32 offset1, System.Int32 length1, System.String str2, System.Int32 offset2, System.Int32 length2, System.Globalization.CompareOptions options)
    // Offset: 0x179AC20
    int internal_compare_switch(::Il2CppString* str1, int offset1, int length1, ::Il2CppString* str2, int offset2, int length2, System::Globalization::CompareOptions options);
    // private System.Int32 internal_compare_managed(System.String str1, System.Int32 offset1, System.Int32 length1, System.String str2, System.Int32 offset2, System.Int32 length2, System.Globalization.CompareOptions options)
    // Offset: 0x179C2F0
    int internal_compare_managed(::Il2CppString* str1, int offset1, int length1, ::Il2CppString* str2, int offset2, int length2, System::Globalization::CompareOptions options);
    // private System.Int32 internal_index_managed(System.String s1, System.Int32 sindex, System.Int32 count, System.String s2, System.Globalization.CompareOptions opt, System.Boolean first)
    // Offset: 0x179C270
    int internal_index_managed(::Il2CppString* s1, int sindex, int count, ::Il2CppString* s2, System::Globalization::CompareOptions opt, bool first);
    // private System.Void assign_sortkey(System.Object key, System.String source, System.Globalization.CompareOptions options)
    // Offset: 0x179C264
    void assign_sortkey(::Il2CppObject* key, ::Il2CppString* source, System::Globalization::CompareOptions options);
    // private System.Int32 internal_compare(System.String str1, System.Int32 offset1, System.Int32 length1, System.String str2, System.Int32 offset2, System.Int32 length2, System.Globalization.CompareOptions options)
    // Offset: 0x179C2EC
    int internal_compare(::Il2CppString* str1, int offset1, int length1, ::Il2CppString* str2, int offset2, int length2, System::Globalization::CompareOptions options);
    // private System.Int32 internal_index(System.String source, System.Int32 sindex, System.Int32 count, System.String value, System.Globalization.CompareOptions options, System.Boolean first)
    // Offset: 0x179C268
    int internal_index(::Il2CppString* source, int sindex, int count, ::Il2CppString* value, System::Globalization::CompareOptions options, bool first);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x179BFC8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x179C09C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x179C1FC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // System.Void .ctor()
    // Offset: 0x179C368
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompareInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::CompareInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompareInfo*, creationType>()));
    }
  }; // System.Globalization.CompareInfo
  #pragma pack(pop)
  static check_size<sizeof(CompareInfo), 48 + sizeof(Mono::Globalization::Unicode::SimpleCollator*)> __System_Globalization_CompareInfoSizeCheck;
  static_assert(sizeof(CompareInfo) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CompareInfo*, "System.Globalization", "CompareInfo");
