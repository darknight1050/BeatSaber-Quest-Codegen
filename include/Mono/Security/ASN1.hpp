// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.Object
#include "System/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Mono.Security
namespace Mono::Security {
  // Autogenerated type: Mono.Security.ASN1
  class ASN1 : public ::CsObject {
    public:
    // private System.Byte m_nTag
    // Offset: 0x10
    uint8_t m_nTag;
    // private System.Byte[] m_aValue
    // Offset: 0x18
    ::Array<uint8_t>* m_aValue;
    // private System.Collections.ArrayList elist
    // Offset: 0x20
    System::Collections::ArrayList* elist;
    // public System.Void .ctor(System.Byte tag)
    // Offset: 0x195F080
    static ASN1* New_ctor(uint8_t tag);
    // public System.Void .ctor(System.Byte tag, System.Byte[] data)
    // Offset: 0x195F0B8
    static ASN1* New_ctor(uint8_t tag, ::Array<uint8_t>* data);
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x195F0FC
    static ASN1* New_ctor(::Array<uint8_t>* data);
    // public System.Int32 get_Count()
    // Offset: 0x195F3C4
    int get_Count();
    // public System.Byte get_Tag()
    // Offset: 0x195F3E0
    uint8_t get_Tag();
    // public System.Byte[] get_Value()
    // Offset: 0x195F3E8
    ::Array<uint8_t>* get_Value();
    // public System.Void set_Value(System.Byte[] value)
    // Offset: 0x195F480
    void set_Value(::Array<uint8_t>* value);
    // public Mono.Security.ASN1 Add(Mono.Security.ASN1 asn1)
    // Offset: 0x195F528
    Mono::Security::ASN1* Add(Mono::Security::ASN1* asn1);
    // public System.Byte[] GetBytes()
    // Offset: 0x195F5D0
    ::Array<uint8_t>* GetBytes();
    // protected System.Void Decode(System.Byte[] asn1, System.Int32 anPos, System.Int32 anLength)
    // Offset: 0x195F28C
    void Decode(::Array<uint8_t>* asn1, int& anPos, int anLength);
    // protected System.Void DecodeTLV(System.Byte[] asn1, System.Int32 pos, System.Byte tag, System.Int32 length, System.Byte[] content)
    // Offset: 0x195FBF8
    void DecodeTLV(::Array<uint8_t>* asn1, int& pos, uint8_t& tag, int& length, ::Array<uint8_t>*& content);
    // public Mono.Security.ASN1 get_Item(System.Int32 index)
    // Offset: 0x195FD44
    Mono::Security::ASN1* get_Item(int index);
    // public override System.String ToString()
    // Offset: 0x195FE84
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::CsString* ToString();
  }; // Mono.Security.ASN1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::ASN1*, "Mono.Security", "ASN1");
#pragma pack(pop)
