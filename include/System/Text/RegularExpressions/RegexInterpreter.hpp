// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Text.RegularExpressions.RegexRunner
#include "System/Text/RegularExpressions/RegexRunner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: RegexPrefix
  class RegexPrefix;
  // Forward declaring type: RegexBoyerMoore
  class RegexBoyerMoore;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0xC8
  // Autogenerated type: System.Text.RegularExpressions.RegexInterpreter
  // [] Offset: FFFFFFFF
  class RegexInterpreter : public System::Text::RegularExpressions::RegexRunner {
    public:
    // System.Int32 runoperator
    // Size: 0x4
    // Offset: 0x80
    int runoperator;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runoperator and: runcodes
    char __padding0[0x4] = {};
    // System.Int32[] runcodes
    // Size: 0x8
    // Offset: 0x88
    ::Array<int>* runcodes;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // System.Int32 runcodepos
    // Size: 0x4
    // Offset: 0x90
    int runcodepos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: runcodepos and: runstrings
    char __padding2[0x4] = {};
    // System.String[] runstrings
    // Size: 0x8
    // Offset: 0x98
    ::Array<::Il2CppString*>* runstrings;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Text.RegularExpressions.RegexCode runcode
    // Size: 0x8
    // Offset: 0xA0
    System::Text::RegularExpressions::RegexCode* runcode;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexCode*) == 0x8);
    // System.Text.RegularExpressions.RegexPrefix runfcPrefix
    // Size: 0x8
    // Offset: 0xA8
    System::Text::RegularExpressions::RegexPrefix* runfcPrefix;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexPrefix*) == 0x8);
    // System.Text.RegularExpressions.RegexBoyerMoore runbmPrefix
    // Size: 0x8
    // Offset: 0xB0
    System::Text::RegularExpressions::RegexBoyerMoore* runbmPrefix;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexBoyerMoore*) == 0x8);
    // System.Int32 runanchors
    // Size: 0x4
    // Offset: 0xB8
    int runanchors;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean runrtl
    // Size: 0x1
    // Offset: 0xBC
    bool runrtl;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean runci
    // Size: 0x1
    // Offset: 0xBD
    bool runci;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: runci and: runculture
    char __padding9[0x2] = {};
    // System.Globalization.CultureInfo runculture
    // Size: 0x8
    // Offset: 0xC0
    System::Globalization::CultureInfo* runculture;
    // Field size check
    static_assert(sizeof(System::Globalization::CultureInfo*) == 0x8);
    // Creating value type constructor for type: RegexInterpreter
    RegexInterpreter(int runoperator_ = {}, ::Array<int>* runcodes_ = {}, int runcodepos_ = {}, ::Array<::Il2CppString*>* runstrings_ = {}, System::Text::RegularExpressions::RegexCode* runcode_ = {}, System::Text::RegularExpressions::RegexPrefix* runfcPrefix_ = {}, System::Text::RegularExpressions::RegexBoyerMoore* runbmPrefix_ = {}, int runanchors_ = {}, bool runrtl_ = {}, bool runci_ = {}, System::Globalization::CultureInfo* runculture_ = {}) noexcept : runoperator{runoperator_}, runcodes{runcodes_}, runcodepos{runcodepos_}, runstrings{runstrings_}, runcode{runcode_}, runfcPrefix{runfcPrefix_}, runbmPrefix{runbmPrefix_}, runanchors{runanchors_}, runrtl{runrtl_}, runci{runci_}, runculture{runculture_} {}
    // System.Void .ctor(System.Text.RegularExpressions.RegexCode code, System.Globalization.CultureInfo culture)
    // Offset: 0x1546060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexInterpreter* New_ctor(System::Text::RegularExpressions::RegexCode* code, System::Globalization::CultureInfo* culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::RegexInterpreter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexInterpreter*, creationType>(code, culture)));
    }
    // private System.Void Advance()
    // Offset: 0x1546128
    void Advance();
    // private System.Void Advance(System.Int32 i)
    // Offset: 0x1546130
    void Advance(int i);
    // private System.Void Goto(System.Int32 newpos)
    // Offset: 0x15461B8
    void Goto(int newpos);
    // private System.Void Textto(System.Int32 newpos)
    // Offset: 0x1546290
    void Textto(int newpos);
    // private System.Void Trackto(System.Int32 newpos)
    // Offset: 0x1546298
    void Trackto(int newpos);
    // private System.Int32 Textstart()
    // Offset: 0x15462BC
    int Textstart();
    // private System.Int32 Textpos()
    // Offset: 0x15462C4
    int Textpos();
    // private System.Int32 Trackpos()
    // Offset: 0x15462CC
    int Trackpos();
    // private System.Void TrackPush()
    // Offset: 0x15462F0
    void TrackPush();
    // private System.Void TrackPush(System.Int32 I1)
    // Offset: 0x154633C
    void TrackPush(int I1);
    // private System.Void TrackPush(System.Int32 I1, System.Int32 I2)
    // Offset: 0x15463B0
    void TrackPush(int I1, int I2);
    // private System.Void TrackPush(System.Int32 I1, System.Int32 I2, System.Int32 I3)
    // Offset: 0x154644C
    void TrackPush(int I1, int I2, int I3);
    // private System.Void TrackPush2(System.Int32 I1)
    // Offset: 0x1546510
    void TrackPush2(int I1);
    // private System.Void TrackPush2(System.Int32 I1, System.Int32 I2)
    // Offset: 0x1546588
    void TrackPush2(int I1, int I2);
    // private System.Void Backtrack()
    // Offset: 0x1546628
    void Backtrack();
    // private System.Void SetOperator(System.Int32 op)
    // Offset: 0x1546198
    void SetOperator(int op);
    // private System.Void TrackPop()
    // Offset: 0x154671C
    void TrackPop();
    // private System.Void TrackPop(System.Int32 framesize)
    // Offset: 0x154672C
    void TrackPop(int framesize);
    // private System.Int32 TrackPeek()
    // Offset: 0x154673C
    int TrackPeek();
    // private System.Int32 TrackPeek(System.Int32 i)
    // Offset: 0x1546780
    int TrackPeek(int i);
    // private System.Void StackPush(System.Int32 I1)
    // Offset: 0x15467C8
    void StackPush(int I1);
    // private System.Void StackPush(System.Int32 I1, System.Int32 I2)
    // Offset: 0x1546810
    void StackPush(int I1, int I2);
    // private System.Void StackPop()
    // Offset: 0x1546880
    void StackPop();
    // private System.Void StackPop(System.Int32 framesize)
    // Offset: 0x1546890
    void StackPop(int framesize);
    // private System.Int32 StackPeek()
    // Offset: 0x15468A0
    int StackPeek();
    // private System.Int32 StackPeek(System.Int32 i)
    // Offset: 0x15468E4
    int StackPeek(int i);
    // private System.Int32 Operator()
    // Offset: 0x154692C
    int Operator();
    // private System.Int32 Operand(System.Int32 i)
    // Offset: 0x1546934
    int Operand(int i);
    // private System.Int32 Leftchars()
    // Offset: 0x154697C
    int Leftchars();
    // private System.Int32 Rightchars()
    // Offset: 0x154698C
    int Rightchars();
    // private System.Int32 Bump()
    // Offset: 0x154699C
    int Bump();
    // private System.Int32 Forwardchars()
    // Offset: 0x15469B0
    int Forwardchars();
    // private System.Char Forwardcharnext()
    // Offset: 0x15469DC
    ::Il2CppChar Forwardcharnext();
    // private System.Boolean Stringmatch(System.String str)
    // Offset: 0x1546A9C
    bool Stringmatch(::Il2CppString* str);
    // private System.Boolean Refmatch(System.Int32 index, System.Int32 len)
    // Offset: 0x1546C40
    bool Refmatch(int index, int len);
    // private System.Void Backwardnext()
    // Offset: 0x1546DF0
    void Backwardnext();
    // private System.Char CharAt(System.Int32 j)
    // Offset: 0x1546E20
    ::Il2CppChar CharAt(int j);
    // protected override System.Void InitTrackCount()
    // Offset: 0x1546108
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Void RegexRunner::InitTrackCount()
    void InitTrackCount();
    // protected override System.Boolean FindFirstChar()
    // Offset: 0x1546E3C
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Boolean RegexRunner::FindFirstChar()
    bool FindFirstChar();
    // protected override System.Void Go()
    // Offset: 0x15471B4
    // Implemented from: System.Text.RegularExpressions.RegexRunner
    // Base method: System.Void RegexRunner::Go()
    void Go();
  }; // System.Text.RegularExpressions.RegexInterpreter
  static check_size<sizeof(RegexInterpreter), 192 + sizeof(System::Globalization::CultureInfo*)> __System_Text_RegularExpressions_RegexInterpreterSizeCheck;
  static_assert(sizeof(RegexInterpreter) == 0xC8);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexInterpreter*, "System.Text.RegularExpressions", "RegexInterpreter");
#pragma pack(pop)
