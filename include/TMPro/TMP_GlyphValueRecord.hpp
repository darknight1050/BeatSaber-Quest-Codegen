// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.GlyphValueRecord_Legacy
#include "TMPro/GlyphValueRecord_Legacy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.TMP_GlyphValueRecord
  struct TMP_GlyphValueRecord/*, public System::ValueType*/ {
    public:
    // private System.Single m_XPlacement
    // Size: 0x4
    // Offset: 0x0
    float m_XPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_YPlacement
    // Size: 0x4
    // Offset: 0x4
    float m_YPlacement;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_XAdvance
    // Size: 0x4
    // Offset: 0x8
    float m_XAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_YAdvance
    // Size: 0x4
    // Offset: 0xC
    float m_YAdvance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TMP_GlyphValueRecord
    constexpr TMP_GlyphValueRecord(float m_XPlacement_ = {}, float m_YPlacement_ = {}, float m_XAdvance_ = {}, float m_YAdvance_ = {}) noexcept : m_XPlacement{m_XPlacement_}, m_YPlacement{m_YPlacement_}, m_XAdvance{m_XAdvance_}, m_YAdvance{m_YAdvance_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Single get_xPlacement()
    // Offset: 0xEE4C40
    float get_xPlacement();
    // public System.Void set_xPlacement(System.Single value)
    // Offset: 0xEE4C48
    void set_xPlacement(float value);
    // public System.Single get_yPlacement()
    // Offset: 0xEE4C50
    float get_yPlacement();
    // public System.Void set_yPlacement(System.Single value)
    // Offset: 0xEE4C58
    void set_yPlacement(float value);
    // public System.Single get_xAdvance()
    // Offset: 0xEE4C60
    float get_xAdvance();
    // public System.Void set_xAdvance(System.Single value)
    // Offset: 0xEE4C68
    void set_xAdvance(float value);
    // public System.Single get_yAdvance()
    // Offset: 0xEE4C70
    float get_yAdvance();
    // public System.Void set_yAdvance(System.Single value)
    // Offset: 0xEE4C78
    void set_yAdvance(float value);
    // public System.Void .ctor(System.Single xPlacement, System.Single yPlacement, System.Single xAdvance, System.Single yAdvance)
    // Offset: 0xEE4C80
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  TMP_GlyphValueRecord(float xPlacement, float yPlacement, float xAdvance, float yAdvance)
    // System.Void .ctor(TMPro.GlyphValueRecord_Legacy valueRecord)
    // Offset: 0xEE4C8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TMP_GlyphValueRecord(TMPro::GlyphValueRecord_Legacy valueRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_GlyphValueRecord::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(valueRecord)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, valueRecord);
    }
    // System.Void .ctor(UnityEngine.TextCore.LowLevel.GlyphValueRecord valueRecord)
    // Offset: 0xEE4C98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    TMP_GlyphValueRecord(UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord) {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_GlyphValueRecord::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(valueRecord)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, valueRecord);
    }
  }; // TMPro.TMP_GlyphValueRecord
  #pragma pack(pop)
  static check_size<sizeof(TMP_GlyphValueRecord), 12 + sizeof(float)> __TMPro_TMP_GlyphValueRecordSizeCheck;
  static_assert(sizeof(TMP_GlyphValueRecord) == 0x10);
  // static public TMPro.TMP_GlyphValueRecord op_Addition(TMPro.TMP_GlyphValueRecord a, TMPro.TMP_GlyphValueRecord b)
  // Offset: 0x1118A30
  TMPro::TMP_GlyphValueRecord operator+(const TMPro::TMP_GlyphValueRecord& a, const TMPro::TMP_GlyphValueRecord& b);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_GlyphValueRecord, "TMPro", "TMP_GlyphValueRecord");
