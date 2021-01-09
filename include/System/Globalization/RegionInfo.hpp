// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// WARNING Layout: Sequential may not be correctly taken into account!
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x60
  // Autogenerated type: System.Globalization.RegionInfo
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D39808
  class RegionInfo : public ::Il2CppObject {
    public:
    // private System.Int32 regionId
    // Size: 0x4
    // Offset: 0x10
    int regionId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: regionId and: iso2Name
    char __padding0[0x4] = {};
    // private System.String iso2Name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* iso2Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String iso3Name
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* iso3Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String win3Name
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* win3Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String englishName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* englishName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String nativeName
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* nativeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String currencySymbol
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* currencySymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String isoCurrencySymbol
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* isoCurrencySymbol;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String currencyEnglishName
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* currencyEnglishName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String currencyNativeName
    // Size: 0x8
    // Offset: 0x58
    ::Il2CppString* currencyNativeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RegionInfo
    RegionInfo(int regionId_ = {}, ::Il2CppString* iso2Name_ = {}, ::Il2CppString* iso3Name_ = {}, ::Il2CppString* win3Name_ = {}, ::Il2CppString* englishName_ = {}, ::Il2CppString* nativeName_ = {}, ::Il2CppString* currencySymbol_ = {}, ::Il2CppString* isoCurrencySymbol_ = {}, ::Il2CppString* currencyEnglishName_ = {}, ::Il2CppString* currencyNativeName_ = {}) noexcept : regionId{regionId_}, iso2Name{iso2Name_}, iso3Name{iso3Name_}, win3Name{win3Name_}, englishName{englishName_}, nativeName{nativeName_}, currencySymbol{currencySymbol_}, isoCurrencySymbol{isoCurrencySymbol_}, currencyEnglishName{currencyEnglishName_}, currencyNativeName{currencyNativeName_} {}
    // Get static field: static private System.Globalization.RegionInfo currentRegion
    static System::Globalization::RegionInfo* _get_currentRegion();
    // Set static field: static private System.Globalization.RegionInfo currentRegion
    static void _set_currentRegion(System::Globalization::RegionInfo* value);
    // static public System.Globalization.RegionInfo get_CurrentRegion()
    // Offset: 0x1427E8C
    static System::Globalization::RegionInfo* get_CurrentRegion();
    // public System.Void .ctor(System.Int32 culture)
    // Offset: 0x142810C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegionInfo* New_ctor(int culture) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::RegionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegionInfo*, creationType>(culture)));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x14282EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegionInfo* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::RegionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegionInfo*, creationType>(name)));
    }
    // private System.Void .ctor(System.Globalization.CultureInfo ci)
    // Offset: 0x1427F5C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegionInfo* New_ctor(System::Globalization::CultureInfo* ci) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::RegionInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegionInfo*, creationType>(ci)));
    }
    // private System.Boolean GetByTerritory(System.Globalization.CultureInfo ci)
    // Offset: 0x142821C
    bool GetByTerritory(System::Globalization::CultureInfo* ci);
    // private System.Boolean construct_internal_region_from_name(System.String name)
    // Offset: 0x1428430
    bool construct_internal_region_from_name(::Il2CppString* name);
    // public System.String get_CurrencyEnglishName()
    // Offset: 0x1428434
    ::Il2CppString* get_CurrencyEnglishName();
    // public System.String get_CurrencySymbol()
    // Offset: 0x142843C
    ::Il2CppString* get_CurrencySymbol();
    // public System.String get_DisplayName()
    // Offset: 0x1428444
    ::Il2CppString* get_DisplayName();
    // public System.String get_EnglishName()
    // Offset: 0x142844C
    ::Il2CppString* get_EnglishName();
    // public System.Int32 get_GeoId()
    // Offset: 0x1428454
    int get_GeoId();
    // public System.Boolean get_IsMetric()
    // Offset: 0x142845C
    bool get_IsMetric();
    // public System.String get_ISOCurrencySymbol()
    // Offset: 0x14284E4
    ::Il2CppString* get_ISOCurrencySymbol();
    // public System.String get_NativeName()
    // Offset: 0x14284EC
    ::Il2CppString* get_NativeName();
    // public System.String get_CurrencyNativeName()
    // Offset: 0x14284F4
    ::Il2CppString* get_CurrencyNativeName();
    // public System.String get_Name()
    // Offset: 0x14284FC
    ::Il2CppString* get_Name();
    // public System.String get_ThreeLetterISORegionName()
    // Offset: 0x1428504
    ::Il2CppString* get_ThreeLetterISORegionName();
    // public System.String get_ThreeLetterWindowsRegionName()
    // Offset: 0x142850C
    ::Il2CppString* get_ThreeLetterWindowsRegionName();
    // public System.String get_TwoLetterISORegionName()
    // Offset: 0x1428514
    ::Il2CppString* get_TwoLetterISORegionName();
    // static System.Void ClearCachedData()
    // Offset: 0x1428638
    static void ClearCachedData();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x142851C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x14285F8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1428628
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Globalization.RegionInfo
  static check_size<sizeof(RegionInfo), 88 + sizeof(::Il2CppString*)> __System_Globalization_RegionInfoSizeCheck;
  static_assert(sizeof(RegionInfo) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::RegionInfo*, "System.Globalization", "RegionInfo");
#pragma pack(pop)
