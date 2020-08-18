// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_Style
  class TMP_Style : public ::Il2CppObject {
    public:
    // private System.String m_Name
    // Offset: 0x10
    ::Il2CppString* m_Name;
    // private System.Int32 m_HashCode
    // Offset: 0x18
    int m_HashCode;
    // private System.String m_OpeningDefinition
    // Offset: 0x20
    ::Il2CppString* m_OpeningDefinition;
    // private System.String m_ClosingDefinition
    // Offset: 0x28
    ::Il2CppString* m_ClosingDefinition;
    // private System.Int32[] m_OpeningTagArray
    // Offset: 0x30
    ::Array<int>* m_OpeningTagArray;
    // private System.Int32[] m_ClosingTagArray
    // Offset: 0x38
    ::Array<int>* m_ClosingTagArray;
    // public System.String get_name()
    // Offset: 0xB768F8
    ::Il2CppString* get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0xB76900
    void set_name(::Il2CppString* value);
    // public System.Int32 get_hashCode()
    // Offset: 0xB76950
    int get_hashCode();
    // public System.Void set_hashCode(System.Int32 value)
    // Offset: 0xB76958
    void set_hashCode(int value);
    // public System.String get_styleOpeningDefinition()
    // Offset: 0xB7696C
    ::Il2CppString* get_styleOpeningDefinition();
    // public System.String get_styleClosingDefinition()
    // Offset: 0xB76974
    ::Il2CppString* get_styleClosingDefinition();
    // public System.Int32[] get_styleOpeningTagArray()
    // Offset: 0xB7697C
    ::Array<int>* get_styleOpeningTagArray();
    // public System.Int32[] get_styleClosingTagArray()
    // Offset: 0xB76984
    ::Array<int>* get_styleClosingTagArray();
    // public System.Void RefreshStyle()
    // Offset: 0xB7698C
    void RefreshStyle();
    // public System.Void .ctor()
    // Offset: 0xB76B1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_Style* New_ctor();
  }; // TMPro.TMP_Style
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Style*, "TMPro", "TMP_Style");
#pragma pack(pop)
