// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_LinkInfo
  struct TMP_LinkInfo : public System::ValueType {
    public:
    // public TMPro.TMP_Text textComponent
    // Offset: 0x0
    TMPro::TMP_Text* textComponent;
    // public System.Int32 hashCode
    // Offset: 0x8
    int hashCode;
    // public System.Int32 linkIdFirstCharacterIndex
    // Offset: 0xC
    int linkIdFirstCharacterIndex;
    // public System.Int32 linkIdLength
    // Offset: 0x10
    int linkIdLength;
    // public System.Int32 linkTextfirstCharacterIndex
    // Offset: 0x14
    int linkTextfirstCharacterIndex;
    // public System.Int32 linkTextLength
    // Offset: 0x18
    int linkTextLength;
    // System.Char[] linkID
    // Offset: 0x20
    ::Array<::Il2CppChar>* linkID;
    // Creating value type constructor for type: TMP_LinkInfo
    TMP_LinkInfo(TMPro::TMP_Text* textComponent_ = {}, int hashCode_ = {}, int linkIdFirstCharacterIndex_ = {}, int linkIdLength_ = {}, int linkTextfirstCharacterIndex_ = {}, int linkTextLength_ = {}, ::Array<::Il2CppChar>* linkID_ = {}) : textComponent{textComponent_}, hashCode{hashCode_}, linkIdFirstCharacterIndex{linkIdFirstCharacterIndex_}, linkIdLength{linkIdLength_}, linkTextfirstCharacterIndex{linkTextfirstCharacterIndex_}, linkTextLength{linkTextLength_}, linkID{linkID_} {}
    // System.Void SetLinkID(System.Char[] text, System.Int32 startIndex, System.Int32 length)
    // Offset: 0x99200C
    void SetLinkID(::Array<::Il2CppChar>* text, int startIndex, int length);
    // public System.String GetLinkText()
    // Offset: 0x992014
    ::Il2CppString* GetLinkText();
    // public System.String GetLinkID()
    // Offset: 0x99201C
    ::Il2CppString* GetLinkID();
  }; // TMPro.TMP_LinkInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_LinkInfo, "TMPro", "TMP_LinkInfo");
#pragma pack(pop)
