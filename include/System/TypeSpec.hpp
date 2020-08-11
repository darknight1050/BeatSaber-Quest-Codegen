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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypeIdentifier
  class TypeIdentifier;
  // Forward declaring type: ModifierSpec
  class ModifierSpec;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.TypeSpec
  class TypeSpec : public ::CsObject {
    public:
    // Nested type: System::TypeSpec::DisplayNameFormat
    struct DisplayNameFormat;
    // private System.TypeIdentifier name
    // Offset: 0x10
    System::TypeIdentifier* name;
    // private System.String assembly_name
    // Offset: 0x18
    ::CsString* assembly_name;
    // private System.Collections.Generic.List`1<System.TypeIdentifier> nested
    // Offset: 0x20
    System::Collections::Generic::List_1<System::TypeIdentifier*>* nested;
    // private System.Collections.Generic.List`1<System.TypeSpec> generic_params
    // Offset: 0x28
    System::Collections::Generic::List_1<System::TypeSpec*>* generic_params;
    // private System.Collections.Generic.List`1<System.ModifierSpec> modifier_spec
    // Offset: 0x30
    System::Collections::Generic::List_1<System::ModifierSpec*>* modifier_spec;
    // private System.Boolean is_byref
    // Offset: 0x38
    bool is_byref;
    // private System.String display_fullname
    // Offset: 0x40
    ::CsString* display_fullname;
    // System.Boolean get_HasModifiers()
    // Offset: 0x17813FC
    bool get_HasModifiers();
    // private System.String GetDisplayFullName(System.TypeSpec/DisplayNameFormat flags)
    // Offset: 0x178140C
    ::CsString* GetDisplayFullName(System::TypeSpec::DisplayNameFormat flags);
    // private System.Text.StringBuilder GetModifierString(System.Text.StringBuilder sb)
    // Offset: 0x1781858
    System::Text::StringBuilder* GetModifierString(System::Text::StringBuilder* sb);
    // System.String get_DisplayFullName()
    // Offset: 0x1781810
    ::CsString* get_DisplayFullName();
    // static System.TypeSpec Parse(System.String typeName)
    // Offset: 0x17809AC
    static System::TypeSpec* Parse(::CsString* typeName);
    // static System.String UnescapeInternalName(System.String displayName)
    // Offset: 0x177FFDC
    static ::CsString* UnescapeInternalName(::CsString* displayName);
    // System.Type Resolve(System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly> assemblyResolver, System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type> typeResolver, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x1780A94
    System::Type* Resolve(System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>* assemblyResolver, System::Func_4<System::Reflection::Assembly*, ::CsString*, bool, System::Type*>* typeResolver, bool throwOnError, bool ignoreCase);
    // private System.Void AddName(System.String type_name)
    // Offset: 0x1782520
    void AddName(::CsString* type_name);
    // private System.Void AddModifier(System.ModifierSpec md)
    // Offset: 0x1782610
    void AddModifier(System::ModifierSpec* md);
    // static private System.Void SkipSpace(System.String name, System.Int32 pos)
    // Offset: 0x17826B4
    static void SkipSpace(::CsString* name, int& pos);
    // static private System.Void BoundCheck(System.Int32 idx, System.String s)
    // Offset: 0x178277C
    static void BoundCheck(int idx, ::CsString* s);
    // static private System.TypeIdentifier ParsedTypeIdentifier(System.String displayName)
    // Offset: 0x178260C
    static System::TypeIdentifier* ParsedTypeIdentifier(::CsString* displayName);
    // static private System.TypeSpec Parse(System.String name, System.Int32 p, System.Boolean is_recurse, System.Boolean allow_aqn)
    // Offset: 0x17819EC
    static System::TypeSpec* Parse(::CsString* name, int& p, bool is_recurse, bool allow_aqn);
    // public System.Void .ctor()
    // Offset: 0x1782824
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TypeSpec* New_ctor();
  }; // System.TypeSpec
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TypeSpec*, "System", "TypeSpec");
#pragma pack(pop)
