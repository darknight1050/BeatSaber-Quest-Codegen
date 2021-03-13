// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.TypeAttributes
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: C948C8
  struct TypeAttributes/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TypeAttributes
    constexpr TypeAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.TypeAttributes VisibilityMask
    static constexpr const int VisibilityMask = 7;
    // Get static field: static public System.Reflection.TypeAttributes VisibilityMask
    static System::Reflection::TypeAttributes _get_VisibilityMask();
    // Set static field: static public System.Reflection.TypeAttributes VisibilityMask
    static void _set_VisibilityMask(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes NotPublic
    static constexpr const int NotPublic = 0;
    // Get static field: static public System.Reflection.TypeAttributes NotPublic
    static System::Reflection::TypeAttributes _get_NotPublic();
    // Set static field: static public System.Reflection.TypeAttributes NotPublic
    static void _set_NotPublic(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes Public
    static constexpr const int Public = 1;
    // Get static field: static public System.Reflection.TypeAttributes Public
    static System::Reflection::TypeAttributes _get_Public();
    // Set static field: static public System.Reflection.TypeAttributes Public
    static void _set_Public(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes NestedPublic
    static constexpr const int NestedPublic = 2;
    // Get static field: static public System.Reflection.TypeAttributes NestedPublic
    static System::Reflection::TypeAttributes _get_NestedPublic();
    // Set static field: static public System.Reflection.TypeAttributes NestedPublic
    static void _set_NestedPublic(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes NestedPrivate
    static constexpr const int NestedPrivate = 3;
    // Get static field: static public System.Reflection.TypeAttributes NestedPrivate
    static System::Reflection::TypeAttributes _get_NestedPrivate();
    // Set static field: static public System.Reflection.TypeAttributes NestedPrivate
    static void _set_NestedPrivate(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes NestedFamily
    static constexpr const int NestedFamily = 4;
    // Get static field: static public System.Reflection.TypeAttributes NestedFamily
    static System::Reflection::TypeAttributes _get_NestedFamily();
    // Set static field: static public System.Reflection.TypeAttributes NestedFamily
    static void _set_NestedFamily(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes NestedAssembly
    static constexpr const int NestedAssembly = 5;
    // Get static field: static public System.Reflection.TypeAttributes NestedAssembly
    static System::Reflection::TypeAttributes _get_NestedAssembly();
    // Set static field: static public System.Reflection.TypeAttributes NestedAssembly
    static void _set_NestedAssembly(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes NestedFamANDAssem
    static constexpr const int NestedFamANDAssem = 6;
    // Get static field: static public System.Reflection.TypeAttributes NestedFamANDAssem
    static System::Reflection::TypeAttributes _get_NestedFamANDAssem();
    // Set static field: static public System.Reflection.TypeAttributes NestedFamANDAssem
    static void _set_NestedFamANDAssem(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes NestedFamORAssem
    static constexpr const int NestedFamORAssem = 7;
    // Get static field: static public System.Reflection.TypeAttributes NestedFamORAssem
    static System::Reflection::TypeAttributes _get_NestedFamORAssem();
    // Set static field: static public System.Reflection.TypeAttributes NestedFamORAssem
    static void _set_NestedFamORAssem(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes LayoutMask
    static constexpr const int LayoutMask = 24;
    // Get static field: static public System.Reflection.TypeAttributes LayoutMask
    static System::Reflection::TypeAttributes _get_LayoutMask();
    // Set static field: static public System.Reflection.TypeAttributes LayoutMask
    static void _set_LayoutMask(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes AutoLayout
    static constexpr const int AutoLayout = 0;
    // Get static field: static public System.Reflection.TypeAttributes AutoLayout
    static System::Reflection::TypeAttributes _get_AutoLayout();
    // Set static field: static public System.Reflection.TypeAttributes AutoLayout
    static void _set_AutoLayout(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes SequentialLayout
    static constexpr const int SequentialLayout = 8;
    // Get static field: static public System.Reflection.TypeAttributes SequentialLayout
    static System::Reflection::TypeAttributes _get_SequentialLayout();
    // Set static field: static public System.Reflection.TypeAttributes SequentialLayout
    static void _set_SequentialLayout(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes ExplicitLayout
    static constexpr const int ExplicitLayout = 16;
    // Get static field: static public System.Reflection.TypeAttributes ExplicitLayout
    static System::Reflection::TypeAttributes _get_ExplicitLayout();
    // Set static field: static public System.Reflection.TypeAttributes ExplicitLayout
    static void _set_ExplicitLayout(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes ClassSemanticsMask
    static constexpr const int ClassSemanticsMask = 32;
    // Get static field: static public System.Reflection.TypeAttributes ClassSemanticsMask
    static System::Reflection::TypeAttributes _get_ClassSemanticsMask();
    // Set static field: static public System.Reflection.TypeAttributes ClassSemanticsMask
    static void _set_ClassSemanticsMask(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes Class
    static constexpr const int Class = 0;
    // Get static field: static public System.Reflection.TypeAttributes Class
    static System::Reflection::TypeAttributes _get_Class();
    // Set static field: static public System.Reflection.TypeAttributes Class
    static void _set_Class(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes Interface
    static constexpr const int Interface = 32;
    // Get static field: static public System.Reflection.TypeAttributes Interface
    static System::Reflection::TypeAttributes _get_Interface();
    // Set static field: static public System.Reflection.TypeAttributes Interface
    static void _set_Interface(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes Abstract
    static constexpr const int Abstract = 128;
    // Get static field: static public System.Reflection.TypeAttributes Abstract
    static System::Reflection::TypeAttributes _get_Abstract();
    // Set static field: static public System.Reflection.TypeAttributes Abstract
    static void _set_Abstract(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes Sealed
    static constexpr const int Sealed = 256;
    // Get static field: static public System.Reflection.TypeAttributes Sealed
    static System::Reflection::TypeAttributes _get_Sealed();
    // Set static field: static public System.Reflection.TypeAttributes Sealed
    static void _set_Sealed(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes SpecialName
    static constexpr const int SpecialName = 1024;
    // Get static field: static public System.Reflection.TypeAttributes SpecialName
    static System::Reflection::TypeAttributes _get_SpecialName();
    // Set static field: static public System.Reflection.TypeAttributes SpecialName
    static void _set_SpecialName(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes Import
    static constexpr const int Import = 4096;
    // Get static field: static public System.Reflection.TypeAttributes Import
    static System::Reflection::TypeAttributes _get_Import();
    // Set static field: static public System.Reflection.TypeAttributes Import
    static void _set_Import(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes Serializable
    static constexpr const int Serializable = 8192;
    // Get static field: static public System.Reflection.TypeAttributes Serializable
    static System::Reflection::TypeAttributes _get_Serializable();
    // Set static field: static public System.Reflection.TypeAttributes Serializable
    static void _set_Serializable(System::Reflection::TypeAttributes value);
    // [ComVisibleAttribute] Offset: 0xC99C6C
    // static field const value: static public System.Reflection.TypeAttributes WindowsRuntime
    static constexpr const int WindowsRuntime = 16384;
    // Get static field: static public System.Reflection.TypeAttributes WindowsRuntime
    static System::Reflection::TypeAttributes _get_WindowsRuntime();
    // Set static field: static public System.Reflection.TypeAttributes WindowsRuntime
    static void _set_WindowsRuntime(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes StringFormatMask
    static constexpr const int StringFormatMask = 196608;
    // Get static field: static public System.Reflection.TypeAttributes StringFormatMask
    static System::Reflection::TypeAttributes _get_StringFormatMask();
    // Set static field: static public System.Reflection.TypeAttributes StringFormatMask
    static void _set_StringFormatMask(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes AnsiClass
    static constexpr const int AnsiClass = 0;
    // Get static field: static public System.Reflection.TypeAttributes AnsiClass
    static System::Reflection::TypeAttributes _get_AnsiClass();
    // Set static field: static public System.Reflection.TypeAttributes AnsiClass
    static void _set_AnsiClass(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes UnicodeClass
    static constexpr const int UnicodeClass = 65536;
    // Get static field: static public System.Reflection.TypeAttributes UnicodeClass
    static System::Reflection::TypeAttributes _get_UnicodeClass();
    // Set static field: static public System.Reflection.TypeAttributes UnicodeClass
    static void _set_UnicodeClass(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes AutoClass
    static constexpr const int AutoClass = 131072;
    // Get static field: static public System.Reflection.TypeAttributes AutoClass
    static System::Reflection::TypeAttributes _get_AutoClass();
    // Set static field: static public System.Reflection.TypeAttributes AutoClass
    static void _set_AutoClass(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes CustomFormatClass
    static constexpr const int CustomFormatClass = 196608;
    // Get static field: static public System.Reflection.TypeAttributes CustomFormatClass
    static System::Reflection::TypeAttributes _get_CustomFormatClass();
    // Set static field: static public System.Reflection.TypeAttributes CustomFormatClass
    static void _set_CustomFormatClass(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes CustomFormatMask
    static constexpr const int CustomFormatMask = 12582912;
    // Get static field: static public System.Reflection.TypeAttributes CustomFormatMask
    static System::Reflection::TypeAttributes _get_CustomFormatMask();
    // Set static field: static public System.Reflection.TypeAttributes CustomFormatMask
    static void _set_CustomFormatMask(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes BeforeFieldInit
    static constexpr const int BeforeFieldInit = 1048576;
    // Get static field: static public System.Reflection.TypeAttributes BeforeFieldInit
    static System::Reflection::TypeAttributes _get_BeforeFieldInit();
    // Set static field: static public System.Reflection.TypeAttributes BeforeFieldInit
    static void _set_BeforeFieldInit(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes ReservedMask
    static constexpr const int ReservedMask = 264192;
    // Get static field: static public System.Reflection.TypeAttributes ReservedMask
    static System::Reflection::TypeAttributes _get_ReservedMask();
    // Set static field: static public System.Reflection.TypeAttributes ReservedMask
    static void _set_ReservedMask(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes RTSpecialName
    static constexpr const int RTSpecialName = 2048;
    // Get static field: static public System.Reflection.TypeAttributes RTSpecialName
    static System::Reflection::TypeAttributes _get_RTSpecialName();
    // Set static field: static public System.Reflection.TypeAttributes RTSpecialName
    static void _set_RTSpecialName(System::Reflection::TypeAttributes value);
    // static field const value: static public System.Reflection.TypeAttributes HasSecurity
    static constexpr const int HasSecurity = 262144;
    // Get static field: static public System.Reflection.TypeAttributes HasSecurity
    static System::Reflection::TypeAttributes _get_HasSecurity();
    // Set static field: static public System.Reflection.TypeAttributes HasSecurity
    static void _set_HasSecurity(System::Reflection::TypeAttributes value);
  }; // System.Reflection.TypeAttributes
  #pragma pack(pop)
  static check_size<sizeof(TypeAttributes), 0 + sizeof(int)> __System_Reflection_TypeAttributesSizeCheck;
  static_assert(sizeof(TypeAttributes) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::TypeAttributes, "System.Reflection", "TypeAttributes");
