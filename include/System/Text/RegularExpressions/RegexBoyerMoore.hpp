// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexBoyerMoore
  class RegexBoyerMoore : public ::Il2CppObject {
    public:
    // System.Int32[] _positive
    // Offset: 0x10
    ::Array<int>* positive;
    // System.Int32[] _negativeASCII
    // Offset: 0x18
    ::Array<int>* negativeASCII;
    // System.Int32[][] _negativeUnicode
    // Offset: 0x20
    ::Array<::Array<int>*>* negativeUnicode;
    // System.String _pattern
    // Offset: 0x28
    ::Il2CppString* pattern;
    // System.Int32 _lowASCII
    // Offset: 0x30
    int lowASCII;
    // System.Int32 _highASCII
    // Offset: 0x34
    int highASCII;
    // System.Boolean _rightToLeft
    // Offset: 0x38
    bool rightToLeft;
    // System.Boolean _caseInsensitive
    // Offset: 0x39
    bool caseInsensitive;
    // System.Globalization.CultureInfo _culture
    // Offset: 0x40
    System::Globalization::CultureInfo* culture;
    // System.Void .ctor(System.String pattern, System.Boolean caseInsensitive, System.Boolean rightToLeft, System.Globalization.CultureInfo culture)
    // Offset: 0x117F41C
    static RegexBoyerMoore* New_ctor(::Il2CppString* pattern, bool caseInsensitive, bool rightToLeft, System::Globalization::CultureInfo* culture);
    // private System.Boolean MatchPattern(System.String text, System.Int32 index)
    // Offset: 0x117F96C
    bool MatchPattern(::Il2CppString* text, int index);
    // System.Boolean IsMatch(System.String text, System.Int32 index, System.Int32 beglimit, System.Int32 endlimit)
    // Offset: 0x117FA94
    bool IsMatch(::Il2CppString* text, int index, int beglimit, int endlimit);
    // System.Int32 Scan(System.String text, System.Int32 index, System.Int32 beglimit, System.Int32 endlimit)
    // Offset: 0x117FB04
    int Scan(::Il2CppString* text, int index, int beglimit, int endlimit);
    // public override System.String ToString()
    // Offset: 0x117FE48
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Text.RegularExpressions.RegexBoyerMoore
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexBoyerMoore*, "System.Text.RegularExpressions", "RegexBoyerMoore");
#pragma pack(pop)
