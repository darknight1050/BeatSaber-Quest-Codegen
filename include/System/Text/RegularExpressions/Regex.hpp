// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Text.RegularExpressions.RegexOptions
#include "System/Text/RegularExpressions/RegexOptions.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexRunnerFactory
  class RegexRunnerFactory;
  // Forward declaring type: ExclusiveReference
  class ExclusiveReference;
  // Forward declaring type: SharedReference
  class SharedReference;
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: CachedCodeEntry
  class CachedCodeEntry;
  // Forward declaring type: Match
  class Match;
  // Forward declaring type: MatchEvaluator
  class MatchEvaluator;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.Regex
  class Regex : public System::Runtime::Serialization::ISerializable, public ::Il2CppObject {
    public:
    // protected internal System.String pattern
    // Offset: 0x10
    ::Il2CppString* pattern;
    // protected internal System.Text.RegularExpressions.RegexRunnerFactory factory
    // Offset: 0x18
    System::Text::RegularExpressions::RegexRunnerFactory* factory;
    // protected internal System.Text.RegularExpressions.RegexOptions roptions
    // Offset: 0x20
    System::Text::RegularExpressions::RegexOptions roptions;
    // protected internal System.TimeSpan internalMatchTimeout
    // Offset: 0x28
    System::TimeSpan internalMatchTimeout;
    // protected internal System.Collections.Hashtable caps
    // Offset: 0x30
    System::Collections::Hashtable* caps;
    // protected internal System.Collections.Hashtable capnames
    // Offset: 0x38
    System::Collections::Hashtable* capnames;
    // protected internal System.String[] capslist
    // Offset: 0x40
    ::Array<::Il2CppString*>* capslist;
    // protected internal System.Int32 capsize
    // Offset: 0x48
    int capsize;
    // System.Text.RegularExpressions.ExclusiveReference runnerref
    // Offset: 0x50
    System::Text::RegularExpressions::ExclusiveReference* runnerref;
    // System.Text.RegularExpressions.SharedReference replref
    // Offset: 0x58
    System::Text::RegularExpressions::SharedReference* replref;
    // System.Text.RegularExpressions.RegexCode code
    // Offset: 0x60
    System::Text::RegularExpressions::RegexCode* code;
    // System.Boolean refsInitialized
    // Offset: 0x68
    bool refsInitialized;
    // Get static field: static private readonly System.TimeSpan MaximumMatchTimeout
    static System::TimeSpan _get_MaximumMatchTimeout();
    // Set static field: static private readonly System.TimeSpan MaximumMatchTimeout
    static void _set_MaximumMatchTimeout(System::TimeSpan value);
    // Get static field: static public readonly System.TimeSpan InfiniteMatchTimeout
    static System::TimeSpan _get_InfiniteMatchTimeout();
    // Set static field: static public readonly System.TimeSpan InfiniteMatchTimeout
    static void _set_InfiniteMatchTimeout(System::TimeSpan value);
    // Get static field: static readonly System.TimeSpan FallbackDefaultMatchTimeout
    static System::TimeSpan _get_FallbackDefaultMatchTimeout();
    // Set static field: static readonly System.TimeSpan FallbackDefaultMatchTimeout
    static void _set_FallbackDefaultMatchTimeout(System::TimeSpan value);
    // Get static field: static readonly System.TimeSpan DefaultMatchTimeout
    static System::TimeSpan _get_DefaultMatchTimeout();
    // Set static field: static readonly System.TimeSpan DefaultMatchTimeout
    static void _set_DefaultMatchTimeout(System::TimeSpan value);
    // Get static field: static System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> livecode
    static System::Collections::Generic::LinkedList_1<System::Text::RegularExpressions::CachedCodeEntry*>* _get_livecode();
    // Set static field: static System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> livecode
    static void _set_livecode(System::Collections::Generic::LinkedList_1<System::Text::RegularExpressions::CachedCodeEntry*>* value);
    // Get static field: static System.Int32 cacheSize
    static int _get_cacheSize();
    // Set static field: static System.Int32 cacheSize
    static void _set_cacheSize(int value);
    // public System.Void .ctor(System.String pattern)
    // Offset: 0x117D91C
    static Regex* New_ctor(::Il2CppString* pattern);
    // public System.Void .ctor(System.String pattern, System.Text.RegularExpressions.RegexOptions options)
    // Offset: 0x117DE34
    static Regex* New_ctor(::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options);
    // private System.Void .ctor(System.String pattern, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout, System.Boolean useCache)
    // Offset: 0x117D9A4
    static Regex* New_ctor(::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout, bool useCache);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x117E74C
    static Regex* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static protected internal System.Void ValidateMatchTimeout(System.TimeSpan matchTimeout)
    // Offset: 0x117DEC0
    static void ValidateMatchTimeout(System::TimeSpan matchTimeout);
    // static private System.TimeSpan InitDefaultMatchTimeout()
    // Offset: 0x117E97C
    static System::TimeSpan InitDefaultMatchTimeout();
    // public System.Text.RegularExpressions.RegexOptions get_Options()
    // Offset: 0x117EBD4
    System::Text::RegularExpressions::RegexOptions get_Options();
    // public System.TimeSpan get_MatchTimeout()
    // Offset: 0x117EBDC
    System::TimeSpan get_MatchTimeout();
    // public System.Boolean get_RightToLeft()
    // Offset: 0x117EBE4
    bool get_RightToLeft();
    // public System.String GroupNameFromNumber(System.Int32 i)
    // Offset: 0x117C118
    ::Il2CppString* GroupNameFromNumber(int i);
    // static public System.Boolean IsMatch(System.String input, System.String pattern)
    // Offset: 0x117EC04
    static bool IsMatch(::Il2CppString* input, ::Il2CppString* pattern);
    // static public System.Boolean IsMatch(System.String input, System.String pattern, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout)
    // Offset: 0x117EC88
    static bool IsMatch(::Il2CppString* input, ::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout);
    // public System.Boolean IsMatch(System.String input)
    // Offset: 0x117ED1C
    bool IsMatch(::Il2CppString* input);
    // public System.Boolean IsMatch(System.String input, System.Int32 startat)
    // Offset: 0x117EDC4
    bool IsMatch(::Il2CppString* input, int startat);
    // static public System.Text.RegularExpressions.Match Match(System.String input, System.String pattern)
    // Offset: 0x117EE7C
    static System::Text::RegularExpressions::Match* Match(::Il2CppString* input, ::Il2CppString* pattern);
    // static public System.Text.RegularExpressions.Match Match(System.String input, System.String pattern, System.Text.RegularExpressions.RegexOptions options, System.TimeSpan matchTimeout)
    // Offset: 0x117EF00
    static System::Text::RegularExpressions::Match* Match(::Il2CppString* input, ::Il2CppString* pattern, System::Text::RegularExpressions::RegexOptions options, System::TimeSpan matchTimeout);
    // public System.Text.RegularExpressions.Match Match(System.String input)
    // Offset: 0x117EF94
    System::Text::RegularExpressions::Match* Match(::Il2CppString* input);
    // public System.Text.RegularExpressions.Match Match(System.String input, System.Int32 startat)
    // Offset: 0x117F03C
    System::Text::RegularExpressions::Match* Match(::Il2CppString* input, int startat);
    // public System.String Replace(System.String input, System.Text.RegularExpressions.MatchEvaluator evaluator)
    // Offset: 0x117F0E8
    ::Il2CppString* Replace(::Il2CppString* input, System::Text::RegularExpressions::MatchEvaluator* evaluator);
    // public System.String Replace(System.String input, System.Text.RegularExpressions.MatchEvaluator evaluator, System.Int32 count, System.Int32 startat)
    // Offset: 0x117F19C
    ::Il2CppString* Replace(::Il2CppString* input, System::Text::RegularExpressions::MatchEvaluator* evaluator, int count, int startat);
    // protected System.Void InitializeReferences()
    // Offset: 0x117E268
    void InitializeReferences();
    // System.Text.RegularExpressions.Match Run(System.Boolean quick, System.Int32 prevlen, System.String input, System.Int32 beginning, System.Int32 length, System.Int32 startat)
    // Offset: 0x117C8C0
    System::Text::RegularExpressions::Match* Run(bool quick, int prevlen, ::Il2CppString* input, int beginning, int length, int startat);
    // static private System.Text.RegularExpressions.CachedCodeEntry LookupCachedAndUpdate(System.String key)
    // Offset: 0x117E030
    static System::Text::RegularExpressions::CachedCodeEntry* LookupCachedAndUpdate(::Il2CppString* key);
    // private System.Text.RegularExpressions.CachedCodeEntry CacheCode(System.String key)
    // Offset: 0x117E35C
    System::Text::RegularExpressions::CachedCodeEntry* CacheCode(::Il2CppString* key);
    // protected System.Boolean UseOptionR()
    // Offset: 0x117EBF0
    bool UseOptionR();
    // System.Boolean UseOptionInvariant()
    // Offset: 0x117F254
    bool UseOptionInvariant();
    // static private System.Void .cctor()
    // Offset: 0x117F300
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x117D8A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Regex* New_ctor();
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x117E8A8
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo si, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* si, System::Runtime::Serialization::StreamingContext context);
    // public override System.String ToString()
    // Offset: 0x117EBFC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Text.RegularExpressions.Regex
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Regex*, "System.Text.RegularExpressions", "Regex");
#pragma pack(pop)
