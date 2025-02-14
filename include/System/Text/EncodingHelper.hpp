// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncodingHelper
  class EncodingHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EncodingHelper
    EncodingHelper() noexcept {}
    // Get static field: static private System.Text.Encoding utf8EncodingWithoutMarkers
    static System::Text::Encoding* _get_utf8EncodingWithoutMarkers();
    // Set static field: static private System.Text.Encoding utf8EncodingWithoutMarkers
    static void _set_utf8EncodingWithoutMarkers(System::Text::Encoding* value);
    // Get static field: static private readonly System.Object lockobj
    static ::Il2CppObject* _get_lockobj();
    // Set static field: static private readonly System.Object lockobj
    static void _set_lockobj(::Il2CppObject* value);
    // Get static field: static private System.Reflection.Assembly i18nAssembly
    static System::Reflection::Assembly* _get_i18nAssembly();
    // Set static field: static private System.Reflection.Assembly i18nAssembly
    static void _set_i18nAssembly(System::Reflection::Assembly* value);
    // Get static field: static private System.Boolean i18nDisabled
    static bool _get_i18nDisabled();
    // Set static field: static private System.Boolean i18nDisabled
    static void _set_i18nDisabled(bool value);
    // static System.Text.Encoding get_UTF8Unmarked()
    // Offset: 0x1CDD95C
    static System::Text::Encoding* get_UTF8Unmarked();
    // static System.String InternalCodePage(ref System.Int32 code_page)
    // Offset: 0x1CDDB94
    static ::Il2CppString* InternalCodePage(int& code_page);
    // static System.Text.Encoding GetDefaultEncoding()
    // Offset: 0x1CDC0B4
    static System::Text::Encoding* GetDefaultEncoding();
    // static System.Object InvokeI18N(System.String name, params System.Object[] args)
    // Offset: 0x1CDA5D4
    static ::Il2CppObject* InvokeI18N(::Il2CppString* name, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object InvokeI18N(System.String name, params System.Object[] args)
    static ::Il2CppObject* InvokeI18N(::Il2CppString* name, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object InvokeI18N(System.String name, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppObject* InvokeI18N(::Il2CppString* name, TParams&&... args) {
      return InvokeI18N(name, {args...});
    }
    // static private System.Void .cctor()
    // Offset: 0x1CDDB98
    static void _cctor();
  }; // System.Text.EncodingHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncodingHelper*, "System.Text", "EncodingHelper");
