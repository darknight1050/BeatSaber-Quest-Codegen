// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Globalization.CompareOptions
#include "System/Globalization/CompareOptions.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
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
  // Autogenerated type: System.Globalization.CompareInfo
  class CompareInfo : public ::CsObject, public System::Runtime::Serialization::IDeserializationCallback {
    public:
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
    // private System.String m_name
    // Offset: 0x10
    ::CsString* m_name;
    // private System.String m_sortName
    // Offset: 0x18
    ::CsString* m_sortName;
    // private System.Int32 win32LCID
    // Offset: 0x20
    int win32LCID;
    // private System.Int32 culture
    // Offset: 0x24
    int culture;
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
    // private System.Globalization.SortVersion m_SortVersion
    // Offset: 0x28
    System::Globalization::SortVersion* m_SortVersion;
    // private Mono.Globalization.Unicode.SimpleCollator collator
    // Offset: 0x30
    Mono::Globalization::Unicode::SimpleCollator* collator;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> collators
    static System::Collections::Generic::Dictionary_2<::CsString*, Mono::Globalization::Unicode::SimpleCollator*>* _get_collators();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,Mono.Globalization.Unicode.SimpleCollator> collators
    static void _set_collators(System::Collections::Generic::Dictionary_2<::CsString*, Mono::Globalization::Unicode::SimpleCollator*>* value);
    // Get static field: static private System.Boolean managedCollation
    static bool _get_managedCollation();
    // Set static field: static private System.Boolean managedCollation
    static void _set_managedCollation(bool value);
    // Get static field: static private System.Boolean managedCollationChecked
    static bool _get_managedCollationChecked();
    // Set static field: static private System.Boolean managedCollationChecked
    static void _set_managedCollationChecked(bool value);
    // System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0xD95A0C
    static CompareInfo* New_ctor(System::Globalization::CultureInfo* culture);
    // static public System.Globalization.CompareInfo GetCompareInfo(System.String name)
    // Offset: 0xD95A58
    static System::Globalization::CompareInfo* GetCompareInfo(::CsString* name);
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xD95B14
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized()
    // Offset: 0xD95B20
    void OnDeserialized();
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xD95C04
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0xD95C08
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // public System.String get_Name()
    // Offset: 0xD95CA8
    ::CsString* get_Name();
    // public System.Int32 Compare(System.String string1, System.String string2)
    // Offset: 0xD95D30
    int Compare(::CsString* string1, ::CsString* string2);
    // public System.Int32 Compare(System.String string1, System.String string2, System.Globalization.CompareOptions options)
    // Offset: 0xD95D40
    int Compare(::CsString* string1, ::CsString* string2, System::Globalization::CompareOptions options);
    // public System.Int32 Compare(System.String string1, System.Int32 offset1, System.Int32 length1, System.String string2, System.Int32 offset2, System.Int32 length2, System.Globalization.CompareOptions options)
    // Offset: 0xD95F64
    int Compare(::CsString* string1, int offset1, int length1, ::CsString* string2, int offset2, int length2, System::Globalization::CompareOptions options);
    // static private System.Int32 CompareOrdinal(System.String string1, System.Int32 offset1, System.Int32 length1, System.String string2, System.Int32 offset2, System.Int32 length2)
    // Offset: 0xD9624C
    static int CompareOrdinal(::CsString* string1, int offset1, int length1, ::CsString* string2, int offset2, int length2);
    // public System.Boolean IsPrefix(System.String source, System.String prefix, System.Globalization.CompareOptions options)
    // Offset: 0xD962A0
    bool IsPrefix(::CsString* source, ::CsString* prefix, System::Globalization::CompareOptions options);
    // public System.Boolean IsSuffix(System.String source, System.String suffix, System.Globalization.CompareOptions options)
    // Offset: 0xD96838
    bool IsSuffix(::CsString* source, ::CsString* suffix, System::Globalization::CompareOptions options);
    // public System.Int32 IndexOf(System.String source, System.String value, System.Int32 startIndex, System.Int32 count, System.Globalization.CompareOptions options)
    // Offset: 0xD96A44
    int IndexOf(::CsString* source, ::CsString* value, int startIndex, int count, System::Globalization::CompareOptions options);
    // public System.Int32 LastIndexOf(System.String source, System.String value, System.Int32 startIndex, System.Int32 count, System.Globalization.CompareOptions options)
    // Offset: 0xD96D58
    int LastIndexOf(::CsString* source, ::CsString* value, int startIndex, int count, System::Globalization::CompareOptions options);
    // public System.Globalization.SortKey GetSortKey(System.String source, System.Globalization.CompareOptions options)
    // Offset: 0xD96FD4
    System::Globalization::SortKey* GetSortKey(::CsString* source, System::Globalization::CompareOptions options);
    // private System.Globalization.SortKey CreateSortKey(System.String source, System.Globalization.CompareOptions options)
    // Offset: 0xD96FD8
    System::Globalization::SortKey* CreateSortKey(::CsString* source, System::Globalization::CompareOptions options);
    // System.Int32 GetHashCodeOfString(System.String source, System.Globalization.CompareOptions options)
    // Offset: 0xD972C0
    int GetHashCodeOfString(::CsString* source, System::Globalization::CompareOptions options);
    // System.Int32 GetHashCodeOfString(System.String source, System.Globalization.CompareOptions options, System.Boolean forceRandomizedHashing, System.Int64 additionalEntropy)
    // Offset: 0xD972C8
    int GetHashCodeOfString(::CsString* source, System::Globalization::CompareOptions options, bool forceRandomizedHashing, int64_t additionalEntropy);
    // static private System.Boolean get_UseManagedCollation()
    // Offset: 0xD964B0
    static bool get_UseManagedCollation();
    // private Mono.Globalization.Unicode.SimpleCollator GetCollator()
    // Offset: 0xD965C4
    Mono::Globalization::Unicode::SimpleCollator* GetCollator();
    // private System.Globalization.SortKey CreateSortKeyCore(System.String source, System.Globalization.CompareOptions options)
    // Offset: 0xD970EC
    System::Globalization::SortKey* CreateSortKeyCore(::CsString* source, System::Globalization::CompareOptions options);
    // private System.Int32 internal_index_switch(System.String s1, System.Int32 sindex, System.Int32 count, System.String s2, System.Globalization.CompareOptions opt, System.Boolean first)
    // Offset: 0xD96C74
    int internal_index_switch(::CsString* s1, int sindex, int count, ::CsString* s2, System::Globalization::CompareOptions opt, bool first);
    // private System.Int32 internal_compare_switch(System.String str1, System.Int32 offset1, System.Int32 length1, System.String str2, System.Int32 offset2, System.Int32 length2, System.Globalization.CompareOptions options)
    // Offset: 0xD95EB4
    int internal_compare_switch(::CsString* str1, int offset1, int length1, ::CsString* str2, int offset2, int length2, System::Globalization::CompareOptions options);
    // private System.Int32 internal_compare_managed(System.String str1, System.Int32 offset1, System.Int32 length1, System.String str2, System.Int32 offset2, System.Int32 length2, System.Globalization.CompareOptions options)
    // Offset: 0xD974E8
    int internal_compare_managed(::CsString* str1, int offset1, int length1, ::CsString* str2, int offset2, int length2, System::Globalization::CompareOptions options);
    // private System.Int32 internal_index_managed(System.String s1, System.Int32 sindex, System.Int32 count, System.String s2, System.Globalization.CompareOptions opt, System.Boolean first)
    // Offset: 0xD97468
    int internal_index_managed(::CsString* s1, int sindex, int count, ::CsString* s2, System::Globalization::CompareOptions opt, bool first);
    // private System.Void assign_sortkey(System.Object key, System.String source, System.Globalization.CompareOptions options)
    // Offset: 0xD9745C
    void assign_sortkey(::CsObject* key, ::CsString* source, System::Globalization::CompareOptions options);
    // private System.Int32 internal_compare(System.String str1, System.Int32 offset1, System.Int32 length1, System.String str2, System.Int32 offset2, System.Int32 length2, System.Globalization.CompareOptions options)
    // Offset: 0xD974E4
    int internal_compare(::CsString* str1, int offset1, int length1, ::CsString* str2, int offset2, int length2, System::Globalization::CompareOptions options);
    // private System.Int32 internal_index(System.String source, System.Int32 sindex, System.Int32 count, System.String value, System.Globalization.CompareOptions options, System.Boolean first)
    // Offset: 0xD97460
    int internal_index(::CsString* source, int sindex, int count, ::CsString* value, System::Globalization::CompareOptions options, bool first);
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0xD95CA4
    // Implemented from: System.Runtime.Serialization.IDeserializationCallback
    // Base method: System.Void IDeserializationCallback::OnDeserialization(System.Object sender)
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::CsObject* sender);
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0xD971C0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::CsObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0xD97294
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0xD973F4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
    // System.Void .ctor()
    // Offset: 0xD97560
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CompareInfo* New_ctor();
  }; // System.Globalization.CompareInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CompareInfo*, "System.Globalization", "CompareInfo");
#pragma pack(pop)
