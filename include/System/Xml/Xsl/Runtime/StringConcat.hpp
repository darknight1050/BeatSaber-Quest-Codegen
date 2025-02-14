// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Xml.Xsl.Runtime
namespace System::Xml::Xsl::Runtime {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Xml.Xsl.Runtime.StringConcat
  // [EditorBrowsableAttribute] Offset: D86DC4
  struct StringConcat/*, public System::ValueType*/ {
    public:
    // private System.String s1
    // Size: 0x8
    // Offset: 0x0
    ::Il2CppString* s1;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String s2
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* s2;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String s3
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* s3;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String s4
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* s4;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String delimiter
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* delimiter;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> strList
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<::Il2CppString*>* strList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Int32 idxStr
    // Size: 0x4
    // Offset: 0x30
    int idxStr;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StringConcat
    constexpr StringConcat(::Il2CppString* s1_ = {}, ::Il2CppString* s2_ = {}, ::Il2CppString* s3_ = {}, ::Il2CppString* s4_ = {}, ::Il2CppString* delimiter_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* strList_ = {}, int idxStr_ = {}) noexcept : s1{s1_}, s2{s2_}, s3{s3_}, s4{s4_}, delimiter{delimiter_}, strList{strList_}, idxStr{idxStr_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void Clear()
    // Offset: 0xF220B8
    void Clear();
    // System.Int32 get_Count()
    // Offset: 0xF220C4
    int get_Count();
    // public System.String GetResult()
    // Offset: 0xF220CC
    ::Il2CppString* GetResult();
    // System.Void ConcatNoDelimiter(System.String s)
    // Offset: 0xF220D4
    void ConcatNoDelimiter(::Il2CppString* s);
  }; // System.Xml.Xsl.Runtime.StringConcat
  #pragma pack(pop)
  static check_size<sizeof(StringConcat), 48 + sizeof(int)> __System_Xml_Xsl_Runtime_StringConcatSizeCheck;
  static_assert(sizeof(StringConcat) == 0x34);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::Xsl::Runtime::StringConcat, "System.Xml.Xsl.Runtime", "StringConcat");
