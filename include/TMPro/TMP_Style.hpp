// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_Style
  // [] Offset: FFFFFFFF
  class TMP_Style : public ::Il2CppObject {
    public:
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 m_HashCode
    // Size: 0x4
    // Offset: 0x18
    int m_HashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_HashCode and: m_OpeningDefinition
    char __padding1[0x4] = {};
    // private System.String m_OpeningDefinition
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* m_OpeningDefinition;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String m_ClosingDefinition
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* m_ClosingDefinition;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32[] m_OpeningTagArray
    // Size: 0x8
    // Offset: 0x30
    ::Array<int>* m_OpeningTagArray;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] m_ClosingTagArray
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* m_ClosingTagArray;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: TMP_Style
    TMP_Style(::Il2CppString* m_Name_ = {}, int m_HashCode_ = {}, ::Il2CppString* m_OpeningDefinition_ = {}, ::Il2CppString* m_ClosingDefinition_ = {}, ::Array<int>* m_OpeningTagArray_ = {}, ::Array<int>* m_ClosingTagArray_ = {}) noexcept : m_Name{m_Name_}, m_HashCode{m_HashCode_}, m_OpeningDefinition{m_OpeningDefinition_}, m_ClosingDefinition{m_ClosingDefinition_}, m_OpeningTagArray{m_OpeningTagArray_}, m_ClosingTagArray{m_ClosingTagArray_} {}
    // public System.String get_name()
    // Offset: 0xFB91C8
    ::Il2CppString* get_name();
    // public System.Void set_name(System.String value)
    // Offset: 0xFB91D0
    void set_name(::Il2CppString* value);
    // public System.Int32 get_hashCode()
    // Offset: 0xFB920C
    int get_hashCode();
    // public System.Void set_hashCode(System.Int32 value)
    // Offset: 0xFB9214
    void set_hashCode(int value);
    // public System.String get_styleOpeningDefinition()
    // Offset: 0xFB9228
    ::Il2CppString* get_styleOpeningDefinition();
    // public System.String get_styleClosingDefinition()
    // Offset: 0xFB9230
    ::Il2CppString* get_styleClosingDefinition();
    // public System.Int32[] get_styleOpeningTagArray()
    // Offset: 0xFB9238
    ::Array<int>* get_styleOpeningTagArray();
    // public System.Int32[] get_styleClosingTagArray()
    // Offset: 0xFB9240
    ::Array<int>* get_styleClosingTagArray();
    // public System.Void RefreshStyle()
    // Offset: 0xFB9248
    void RefreshStyle();
    // public System.Void .ctor()
    // Offset: 0xFB93B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_Style* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_Style::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_Style*, creationType>()));
    }
  }; // TMPro.TMP_Style
  #pragma pack(pop)
  static check_size<sizeof(TMP_Style), 56 + sizeof(::Array<int>*)> __TMPro_TMP_StyleSizeCheck;
  static_assert(sizeof(TMP_Style) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Style*, "TMPro", "TMP_Style");
