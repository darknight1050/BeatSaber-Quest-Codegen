// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreFormatter
  class ScoreFormatter : public ::CsObject {
    public:
    // Get static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
    static System::Globalization::NumberFormatInfo* _get__numberFormatInfo();
    // Set static field: static private readonly System.Globalization.NumberFormatInfo _numberFormatInfo
    static void _set__numberFormatInfo(System::Globalization::NumberFormatInfo* value);
    // static private System.Void .cctor()
    // Offset: 0xC170FC
    static void _cctor();
    // static public System.String Format(System.Int32 score)
    // Offset: 0xC0BE30
    static ::CsString* Format(int score);
    // public System.Void .ctor()
    // Offset: 0xC171EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ScoreFormatter* New_ctor();
  }; // ScoreFormatter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreFormatter*, "", "ScoreFormatter");
#pragma pack(pop)
