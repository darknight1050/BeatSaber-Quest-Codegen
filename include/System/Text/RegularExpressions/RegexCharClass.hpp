// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
  // Forward declaring type: UnicodeCategory
  struct UnicodeCategory;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x30
  // Autogenerated type: System.Text.RegularExpressions.RegexCharClass
  // [] Offset: FFFFFFFF
  class RegexCharClass : public ::Il2CppObject {
    public:
    // Nested type: System::Text::RegularExpressions::RegexCharClass::LowerCaseMapping
    struct LowerCaseMapping;
    // Nested type: System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer
    class SingleRangeComparer;
    // Nested type: System::Text::RegularExpressions::RegexCharClass::SingleRange
    class SingleRange;
    // Size: 0xC
    // Autogenerated type: System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
    // [] Offset: FFFFFFFF
    struct LowerCaseMapping/*, public System::ValueType*/ {
      public:
      // System.Char _chMin
      // Size: 0x2
      // Offset: 0x0
      ::Il2CppChar chMin;
      // Field size check
      static_assert(sizeof(::Il2CppChar) == 0x2);
      // System.Char _chMax
      // Size: 0x2
      // Offset: 0x2
      ::Il2CppChar chMax;
      // Field size check
      static_assert(sizeof(::Il2CppChar) == 0x2);
      // System.Int32 _lcOp
      // Size: 0x4
      // Offset: 0x4
      int lcOp;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // System.Int32 _data
      // Size: 0x4
      // Offset: 0x8
      int data;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: LowerCaseMapping
      constexpr LowerCaseMapping(::Il2CppChar chMin_ = {}, ::Il2CppChar chMax_ = {}, int lcOp_ = {}, int data_ = {}) noexcept : chMin{chMin_}, chMax{chMax_}, lcOp{lcOp_}, data{data_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // System.Void .ctor(System.Char chMin, System.Char chMax, System.Int32 lcOp, System.Int32 data)
      // Offset: 0xCA26E0
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  LowerCaseMapping(::Il2CppChar chMin, ::Il2CppChar chMax, int lcOp, int data)
    }; // System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping
    static check_size<sizeof(RegexCharClass::LowerCaseMapping), 8 + sizeof(int)> __System_Text_RegularExpressions_RegexCharClass_LowerCaseMappingSizeCheck;
    static_assert(sizeof(RegexCharClass::LowerCaseMapping) == 0xC);
    // private System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange> _rangelist
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>* rangelist;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>*) == 0x8);
    // private System.Text.StringBuilder _categories
    // Size: 0x8
    // Offset: 0x18
    System::Text::StringBuilder* categories;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.Boolean _canonical
    // Size: 0x1
    // Offset: 0x20
    bool canonical;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _negate
    // Size: 0x1
    // Offset: 0x21
    bool negate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: negate and: subtractor
    char __padding3[0x6] = {};
    // private System.Text.RegularExpressions.RegexCharClass _subtractor
    // Size: 0x8
    // Offset: 0x28
    System::Text::RegularExpressions::RegexCharClass* subtractor;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexCharClass*) == 0x8);
    // Creating value type constructor for type: RegexCharClass
    RegexCharClass(System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>* rangelist_ = {}, System::Text::StringBuilder* categories_ = {}, bool canonical_ = {}, bool negate_ = {}, System::Text::RegularExpressions::RegexCharClass* subtractor_ = {}) noexcept : rangelist{rangelist_}, categories{categories_}, canonical{canonical_}, negate{negate_}, subtractor{subtractor_} {}
    // Get static field: static private readonly System.String InternalRegexIgnoreCase
    static ::Il2CppString* _get_InternalRegexIgnoreCase();
    // Set static field: static private readonly System.String InternalRegexIgnoreCase
    static void _set_InternalRegexIgnoreCase(::Il2CppString* value);
    // Get static field: static private readonly System.String Space
    static ::Il2CppString* _get_Space();
    // Set static field: static private readonly System.String Space
    static void _set_Space(::Il2CppString* value);
    // Get static field: static private readonly System.String NotSpace
    static ::Il2CppString* _get_NotSpace();
    // Set static field: static private readonly System.String NotSpace
    static void _set_NotSpace(::Il2CppString* value);
    // Get static field: static private readonly System.String Word
    static ::Il2CppString* _get_Word();
    // Set static field: static private readonly System.String Word
    static void _set_Word(::Il2CppString* value);
    // Get static field: static private readonly System.String NotWord
    static ::Il2CppString* _get_NotWord();
    // Set static field: static private readonly System.String NotWord
    static void _set_NotWord(::Il2CppString* value);
    // Get static field: static readonly System.String SpaceClass
    static ::Il2CppString* _get_SpaceClass();
    // Set static field: static readonly System.String SpaceClass
    static void _set_SpaceClass(::Il2CppString* value);
    // Get static field: static readonly System.String NotSpaceClass
    static ::Il2CppString* _get_NotSpaceClass();
    // Set static field: static readonly System.String NotSpaceClass
    static void _set_NotSpaceClass(::Il2CppString* value);
    // Get static field: static readonly System.String WordClass
    static ::Il2CppString* _get_WordClass();
    // Set static field: static readonly System.String WordClass
    static void _set_WordClass(::Il2CppString* value);
    // Get static field: static readonly System.String NotWordClass
    static ::Il2CppString* _get_NotWordClass();
    // Set static field: static readonly System.String NotWordClass
    static void _set_NotWordClass(::Il2CppString* value);
    // Get static field: static readonly System.String DigitClass
    static ::Il2CppString* _get_DigitClass();
    // Set static field: static readonly System.String DigitClass
    static void _set_DigitClass(::Il2CppString* value);
    // Get static field: static readonly System.String NotDigitClass
    static ::Il2CppString* _get_NotDigitClass();
    // Set static field: static readonly System.String NotDigitClass
    static void _set_NotDigitClass(::Il2CppString* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> _definedCategories
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* _get__definedCategories();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> _definedCategories
    static void _set__definedCategories(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* value);
    // Get static field: static private readonly System.String[,] _propTable
    static ::Array<::Il2CppString*>* _get__propTable();
    // Set static field: static private readonly System.String[,] _propTable
    static void _set__propTable(::Array<::Il2CppString*>* value);
    // Get static field: static private readonly System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping[] _lcTable
    static ::Array<System::Text::RegularExpressions::RegexCharClass::LowerCaseMapping>* _get__lcTable();
    // Set static field: static private readonly System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping[] _lcTable
    static void _set__lcTable(::Array<System::Text::RegularExpressions::RegexCharClass::LowerCaseMapping>* value);
    // static private System.Void .cctor()
    // Offset: 0x147106C
    static void _cctor();
    // private System.Void .ctor(System.Boolean negate, System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange> ranges, System.Text.StringBuilder categories, System.Text.RegularExpressions.RegexCharClass subtraction)
    // Offset: 0x1476A90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexCharClass* New_ctor(bool negate, System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>* ranges, System::Text::StringBuilder* categories, System::Text::RegularExpressions::RegexCharClass* subtraction) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexCharClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexCharClass*, creationType>(negate, ranges, categories, subtraction)));
    }
    // System.Boolean get_CanMerge()
    // Offset: 0x1476B10
    bool get_CanMerge();
    // System.Void set_Negate(System.Boolean value)
    // Offset: 0x1476B30
    void set_Negate(bool value);
    // System.Void AddChar(System.Char c)
    // Offset: 0x1476B3C
    void AddChar(::Il2CppChar c);
    // System.Void AddCharClass(System.Text.RegularExpressions.RegexCharClass cc)
    // Offset: 0x1476C20
    void AddCharClass(System::Text::RegularExpressions::RegexCharClass* cc);
    // private System.Void AddSet(System.String set)
    // Offset: 0x1476E2C
    void AddSet(::Il2CppString* set);
    // System.Void AddSubtraction(System.Text.RegularExpressions.RegexCharClass sub)
    // Offset: 0x1477028
    void AddSubtraction(System::Text::RegularExpressions::RegexCharClass* sub);
    // System.Void AddRange(System.Char first, System.Char last)
    // Offset: 0x1476B44
    void AddRange(::Il2CppChar first, ::Il2CppChar last);
    // System.Void AddCategoryFromName(System.String categoryName, System.Boolean invert, System.Boolean caseInsensitive, System.String pattern)
    // Offset: 0x1477030
    void AddCategoryFromName(::Il2CppString* categoryName, bool invert, bool caseInsensitive, ::Il2CppString* pattern);
    // private System.Void AddCategory(System.String category)
    // Offset: 0x1477544
    void AddCategory(::Il2CppString* category);
    // System.Void AddLowercase(System.Globalization.CultureInfo culture)
    // Offset: 0x1477560
    void AddLowercase(System::Globalization::CultureInfo* culture);
    // private System.Void AddLowercaseRange(System.Char chMin, System.Char chMax, System.Globalization.CultureInfo culture)
    // Offset: 0x147766C
    void AddLowercaseRange(::Il2CppChar chMin, ::Il2CppChar chMax, System::Globalization::CultureInfo* culture);
    // System.Void AddWord(System.Boolean ecma, System.Boolean negate)
    // Offset: 0x14778CC
    void AddWord(bool ecma, bool negate);
    // System.Void AddSpace(System.Boolean ecma, System.Boolean negate)
    // Offset: 0x14779C8
    void AddSpace(bool ecma, bool negate);
    // System.Void AddDigit(System.Boolean ecma, System.Boolean negate, System.String pattern)
    // Offset: 0x1477AC4
    void AddDigit(bool ecma, bool negate, ::Il2CppString* pattern);
    // static System.Char SingletonChar(System.String set)
    // Offset: 0x1477B74
    static ::Il2CppChar SingletonChar(::Il2CppString* set);
    // static System.Boolean IsMergeable(System.String charClass)
    // Offset: 0x1477B90
    static bool IsMergeable(::Il2CppString* charClass);
    // static System.Boolean IsEmpty(System.String charClass)
    // Offset: 0x1477CD4
    static bool IsEmpty(::Il2CppString* charClass);
    // static System.Boolean IsSingleton(System.String set)
    // Offset: 0x1477D9C
    static bool IsSingleton(::Il2CppString* set);
    // static System.Boolean IsSingletonInverse(System.String set)
    // Offset: 0x1477EB8
    static bool IsSingletonInverse(::Il2CppString* set);
    // static private System.Boolean IsSubtraction(System.String charClass)
    // Offset: 0x1477C70
    static bool IsSubtraction(::Il2CppString* charClass);
    // static System.Boolean IsNegated(System.String set)
    // Offset: 0x1477C44
    static bool IsNegated(::Il2CppString* set);
    // static System.Boolean IsECMAWordChar(System.Char ch)
    // Offset: 0x1477FD8
    static bool IsECMAWordChar(::Il2CppChar ch);
    // static System.Boolean IsWordChar(System.Char ch)
    // Offset: 0x14780C0
    static bool IsWordChar(::Il2CppChar ch);
    // static System.Boolean CharInClass(System.Char ch, System.String set)
    // Offset: 0x1478048
    static bool CharInClass(::Il2CppChar ch, ::Il2CppString* set);
    // static System.Boolean CharInClassRecursive(System.Char ch, System.String set, System.Int32 start)
    // Offset: 0x1478154
    static bool CharInClassRecursive(::Il2CppChar ch, ::Il2CppString* set, int start);
    // static private System.Boolean CharInClassInternal(System.Char ch, System.String set, System.Int32 start, System.Int32 mySetLength, System.Int32 myCategoryLength)
    // Offset: 0x147829C
    static bool CharInClassInternal(::Il2CppChar ch, ::Il2CppString* set, int start, int mySetLength, int myCategoryLength);
    // static private System.Boolean CharInCategory(System.Char ch, System.String set, System.Int32 start, System.Int32 mySetLength, System.Int32 myCategoryLength)
    // Offset: 0x14783BC
    static bool CharInCategory(::Il2CppChar ch, ::Il2CppString* set, int start, int mySetLength, int myCategoryLength);
    // static private System.Boolean CharInCategoryGroup(System.Char ch, System.Globalization.UnicodeCategory chcategory, System.String category, ref System.Int32 i)
    // Offset: 0x1478574
    static bool CharInCategoryGroup(::Il2CppChar ch, System::Globalization::UnicodeCategory chcategory, ::Il2CppString* category, int& i);
    // static private System.String NegateCategory(System.String category)
    // Offset: 0x14768FC
    static ::Il2CppString* NegateCategory(::Il2CppString* category);
    // static System.Text.RegularExpressions.RegexCharClass Parse(System.String charClass)
    // Offset: 0x1478648
    static System::Text::RegularExpressions::RegexCharClass* Parse(::Il2CppString* charClass);
    // static private System.Text.RegularExpressions.RegexCharClass ParseRecursive(System.String charClass, System.Int32 start)
    // Offset: 0x14786B0
    static System::Text::RegularExpressions::RegexCharClass* ParseRecursive(::Il2CppString* charClass, int start);
    // private System.Int32 RangeCount()
    // Offset: 0x1476D64
    int RangeCount();
    // System.String ToStringClass()
    // Offset: 0x14788DC
    ::Il2CppString* ToStringClass();
    // private System.Text.RegularExpressions.RegexCharClass/SingleRange GetRangeAt(System.Int32 i)
    // Offset: 0x1476DB4
    System::Text::RegularExpressions::RegexCharClass::SingleRange* GetRangeAt(int i);
    // private System.Void Canonicalize()
    // Offset: 0x1478A9C
    void Canonicalize();
    // static private System.String SetFromProperty(System.String capname, System.Boolean invert, System.String pattern)
    // Offset: 0x1477238
    static ::Il2CppString* SetFromProperty(::Il2CppString* capname, bool invert, ::Il2CppString* pattern);
    // System.Void .ctor()
    // Offset: 0x14769DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexCharClass* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexCharClass::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexCharClass*, creationType>()));
    }
  }; // System.Text.RegularExpressions.RegexCharClass
  static check_size<sizeof(RegexCharClass), 40 + sizeof(System::Text::RegularExpressions::RegexCharClass*)> __System_Text_RegularExpressions_RegexCharClassSizeCheck;
  static_assert(sizeof(RegexCharClass) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexCharClass*, "System.Text.RegularExpressions", "RegexCharClass");
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexCharClass::LowerCaseMapping, "System.Text.RegularExpressions", "RegexCharClass/LowerCaseMapping");
#pragma pack(pop)
