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
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.RegionInfo
  class RegionInfo : public ::Il2CppObject {
    public:
    // private System.Int32 regionId
    // Offset: 0x10
    int regionId;
    // private System.String iso2Name
    // Offset: 0x18
    ::Il2CppString* iso2Name;
    // private System.String iso3Name
    // Offset: 0x20
    ::Il2CppString* iso3Name;
    // private System.String win3Name
    // Offset: 0x28
    ::Il2CppString* win3Name;
    // private System.String englishName
    // Offset: 0x30
    ::Il2CppString* englishName;
    // private System.String nativeName
    // Offset: 0x38
    ::Il2CppString* nativeName;
    // private System.String currencySymbol
    // Offset: 0x40
    ::Il2CppString* currencySymbol;
    // private System.String isoCurrencySymbol
    // Offset: 0x48
    ::Il2CppString* isoCurrencySymbol;
    // private System.String currencyEnglishName
    // Offset: 0x50
    ::Il2CppString* currencyEnglishName;
    // private System.String currencyNativeName
    // Offset: 0x58
    ::Il2CppString* currencyNativeName;
    // Get static field: static private System.Globalization.RegionInfo currentRegion
    static System::Globalization::RegionInfo* _get_currentRegion();
    // Set static field: static private System.Globalization.RegionInfo currentRegion
    static void _set_currentRegion(System::Globalization::RegionInfo* value);
    // static public System.Globalization.RegionInfo get_CurrentRegion()
    // Offset: 0x1082380
    static System::Globalization::RegionInfo* get_CurrentRegion();
    // public System.Void .ctor(System.Int32 culture)
    // Offset: 0x1082600
    static RegionInfo* New_ctor(int culture);
    // public System.Void .ctor(System.String name)
    // Offset: 0x10827E0
    static RegionInfo* New_ctor(::Il2CppString* name);
    // private System.Void .ctor(System.Globalization.CultureInfo ci)
    // Offset: 0x1082450
    static RegionInfo* New_ctor(System::Globalization::CultureInfo* ci);
    // private System.Boolean GetByTerritory(System.Globalization.CultureInfo ci)
    // Offset: 0x1082710
    bool GetByTerritory(System::Globalization::CultureInfo* ci);
    // private System.Boolean construct_internal_region_from_name(System.String name)
    // Offset: 0x1082924
    bool construct_internal_region_from_name(::Il2CppString* name);
    // public System.String get_CurrencyEnglishName()
    // Offset: 0x1082928
    ::Il2CppString* get_CurrencyEnglishName();
    // public System.String get_CurrencySymbol()
    // Offset: 0x1082930
    ::Il2CppString* get_CurrencySymbol();
    // public System.String get_DisplayName()
    // Offset: 0x1082938
    ::Il2CppString* get_DisplayName();
    // public System.String get_EnglishName()
    // Offset: 0x1082940
    ::Il2CppString* get_EnglishName();
    // public System.Int32 get_GeoId()
    // Offset: 0x1082948
    int get_GeoId();
    // public System.Boolean get_IsMetric()
    // Offset: 0x1082950
    bool get_IsMetric();
    // public System.String get_ISOCurrencySymbol()
    // Offset: 0x10829D8
    ::Il2CppString* get_ISOCurrencySymbol();
    // public System.String get_NativeName()
    // Offset: 0x10829E0
    ::Il2CppString* get_NativeName();
    // public System.String get_CurrencyNativeName()
    // Offset: 0x10829E8
    ::Il2CppString* get_CurrencyNativeName();
    // public System.String get_Name()
    // Offset: 0x10829F0
    ::Il2CppString* get_Name();
    // public System.String get_ThreeLetterISORegionName()
    // Offset: 0x10829F8
    ::Il2CppString* get_ThreeLetterISORegionName();
    // public System.String get_ThreeLetterWindowsRegionName()
    // Offset: 0x1082A00
    ::Il2CppString* get_ThreeLetterWindowsRegionName();
    // public System.String get_TwoLetterISORegionName()
    // Offset: 0x1082A08
    ::Il2CppString* get_TwoLetterISORegionName();
    // static System.Void ClearCachedData()
    // Offset: 0x1082B2C
    static void ClearCachedData();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1082A10
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1082AEC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1082B1C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Globalization.RegionInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::RegionInfo*, "System.Globalization", "RegionInfo");
#pragma pack(pop)
