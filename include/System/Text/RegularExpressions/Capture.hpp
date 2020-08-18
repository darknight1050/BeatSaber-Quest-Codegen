// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.Capture
  class Capture : public ::Il2CppObject {
    public:
    // System.String _text
    // Offset: 0x10
    ::Il2CppString* text;
    // System.Int32 _index
    // Offset: 0x18
    int index;
    // System.Int32 _length
    // Offset: 0x1C
    int length;
    // System.Void .ctor(System.String text, System.Int32 i, System.Int32 l)
    // Offset: 0x117B928
    static Capture* New_ctor(::Il2CppString* text, int i, int l);
    // public System.Int32 get_Index()
    // Offset: 0x117B974
    int get_Index();
    // public System.Int32 get_Length()
    // Offset: 0x117B97C
    int get_Length();
    // public System.String get_Value()
    // Offset: 0x117B984
    ::Il2CppString* get_Value();
    // public override System.String ToString()
    // Offset: 0x117B9A8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // System.Void .ctor()
    // Offset: 0x117B9AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Capture* New_ctor();
  }; // System.Text.RegularExpressions.Capture
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::Capture*, "System.Text.RegularExpressions", "Capture");
#pragma pack(pop)
