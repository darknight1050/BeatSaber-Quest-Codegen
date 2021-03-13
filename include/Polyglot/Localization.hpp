// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Polyglot.Language
#include "Polyglot/Language.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: LocalizationDocument
  class LocalizationDocument;
  // Forward declaring type: LocalizationAsset
  class LocalizationAsset;
  // Forward declaring type: LanguageDirection
  struct LanguageDirection;
  // Forward declaring type: ILocalize
  class ILocalize;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SystemLanguage
  struct SystemLanguage;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.Localization
  // [] Offset: FFFFFFFF
  class Localization : public UnityEngine::ScriptableObject {
    public:
    // private Polyglot.LocalizationDocument customDocument
    // Size: 0x8
    // Offset: 0x18
    Polyglot::LocalizationDocument* customDocument;
    // Field size check
    static_assert(sizeof(Polyglot::LocalizationDocument*) == 0x8);
    // [TooltipAttribute] Offset: 0xD0CAF0
    // private System.Collections.Generic.List`1<Polyglot.LocalizationAsset> inputFiles
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* inputFiles;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>*) == 0x8);
    // [HeaderAttribute] Offset: 0xD0CB3C
    // [TooltipAttribute] Offset: 0xD0CB3C
    // private System.Collections.Generic.List`1<Polyglot.Language> supportedLanguages
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<Polyglot::Language>* supportedLanguages;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Polyglot::Language>*) == 0x8);
    // [TooltipAttribute] Offset: 0xD0CBAC
    // private Polyglot.Language selectedLanguage
    // Size: 0x4
    // Offset: 0x30
    Polyglot::Language selectedLanguage;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // [TooltipAttribute] Offset: 0xD0CBF8
    // private Polyglot.Language fallbackLanguage
    // Size: 0x4
    // Offset: 0x34
    Polyglot::Language fallbackLanguage;
    // Field size check
    static_assert(sizeof(Polyglot::Language) == 0x4);
    // [HeaderAttribute] Offset: 0xD0CC44
    // [TooltipAttribute] Offset: 0xD0CC44
    // public UnityEngine.Events.UnityEvent Localize
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Events::UnityEvent* Localize;
    // Field size check
    static_assert(sizeof(UnityEngine::Events::UnityEvent*) == 0x8);
    // Creating value type constructor for type: Localization
    Localization(Polyglot::LocalizationDocument* customDocument_ = {}, System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* inputFiles_ = {}, System::Collections::Generic::List_1<Polyglot::Language>* supportedLanguages_ = {}, Polyglot::Language selectedLanguage_ = {}, Polyglot::Language fallbackLanguage_ = {}, UnityEngine::Events::UnityEvent* Localize_ = {}) noexcept : customDocument{customDocument_}, inputFiles{inputFiles_}, supportedLanguages{supportedLanguages_}, selectedLanguage{selectedLanguage_}, fallbackLanguage{fallbackLanguage_}, Localize{Localize_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String KeyNotFound
    static constexpr const char* KeyNotFound = "[{0}]";
    // Get static field: static private System.String KeyNotFound
    static ::Il2CppString* _get_KeyNotFound();
    // Set static field: static private System.String KeyNotFound
    static void _set_KeyNotFound(::Il2CppString* value);
    // Get static field: static private Polyglot.Localization instance
    static Polyglot::Localization* _get_instance();
    // Set static field: static private Polyglot.Localization instance
    static void _set_instance(Polyglot::Localization* value);
    // public Polyglot.LocalizationDocument get_CustomDocument()
    // Offset: 0x20F3F78
    Polyglot::LocalizationDocument* get_CustomDocument();
    // public System.Collections.Generic.List`1<Polyglot.LocalizationAsset> get_InputFiles()
    // Offset: 0x20F3F80
    System::Collections::Generic::List_1<Polyglot::LocalizationAsset*>* get_InputFiles();
    // static public Polyglot.Localization get_Instance()
    // Offset: 0x20F34A4
    static Polyglot::Localization* get_Instance();
    // static public System.Void set_Instance(Polyglot.Localization value)
    // Offset: 0x20F4038
    static void set_Instance(Polyglot::Localization* value);
    // static private System.Boolean get_HasInstance()
    // Offset: 0x20F3F88
    static bool get_HasInstance();
    // public System.Collections.Generic.List`1<Polyglot.Language> get_SupportedLanguages()
    // Offset: 0x20F408C
    System::Collections::Generic::List_1<Polyglot::Language>* get_SupportedLanguages();
    // public Polyglot.LanguageDirection get_SelectedLanguageDirection()
    // Offset: 0x20F4094
    Polyglot::LanguageDirection get_SelectedLanguageDirection();
    // private Polyglot.LanguageDirection GetLanguageDirection(Polyglot.Language language)
    // Offset: 0x20F40A8
    Polyglot::LanguageDirection GetLanguageDirection(Polyglot::Language language);
    // public System.Int32 get_SelectedLanguageIndex()
    // Offset: 0x20F3784
    int get_SelectedLanguageIndex();
    // public Polyglot.Language get_SelectedLanguage()
    // Offset: 0x20F40C4
    Polyglot::Language get_SelectedLanguage();
    // public System.Void set_SelectedLanguage(Polyglot.Language value)
    // Offset: 0x20F40CC
    void set_SelectedLanguage(Polyglot::Language value);
    // private System.Boolean IsLanguageSupported(Polyglot.Language language)
    // Offset: 0x20F41B4
    bool IsLanguageSupported(Polyglot::Language language);
    // public System.Void InvokeOnLocalize()
    // Offset: 0x20F4234
    void InvokeOnLocalize();
    // public System.Collections.Generic.List`1<System.String> get_EnglishLanguageNames()
    // Offset: 0x20F3710
    System::Collections::Generic::List_1<::Il2CppString*>* get_EnglishLanguageNames();
    // public System.Collections.Generic.List`1<System.String> get_LocalizedLanguageNames()
    // Offset: 0x20F44E4
    System::Collections::Generic::List_1<::Il2CppString*>* get_LocalizedLanguageNames();
    // public System.String get_EnglishLanguageName()
    // Offset: 0x20F4558
    ::Il2CppString* get_EnglishLanguageName();
    // public System.String get_LocalizedLanguageName()
    // Offset: 0x20F45D0
    ::Il2CppString* get_LocalizedLanguageName();
    // public System.Void SelectLanguage(System.Int32 selected)
    // Offset: 0x20F4618
    void SelectLanguage(int selected);
    // public System.Void SelectLanguage(Polyglot.Language selected)
    // Offset: 0x20F46A0
    void SelectLanguage(Polyglot::Language selected);
    // public Polyglot.Language ConvertSystemLanguage(UnityEngine.SystemLanguage selected)
    // Offset: 0x20F46A4
    Polyglot::Language ConvertSystemLanguage(UnityEngine::SystemLanguage selected);
    // public System.Void AddOnLocalizeEvent(Polyglot.ILocalize localize)
    // Offset: 0x20F3530
    void AddOnLocalizeEvent(Polyglot::ILocalize* localize);
    // public System.Void RemoveOnLocalizeEvent(Polyglot.ILocalize localize)
    // Offset: 0x20F46E0
    void RemoveOnLocalizeEvent(Polyglot::ILocalize* localize);
    // static public System.String Get(System.String key)
    // Offset: 0x20F45A0
    static ::Il2CppString* Get(::Il2CppString* key);
    // static public System.String Get(System.String key, Polyglot.Language language)
    // Offset: 0x20F47CC
    static ::Il2CppString* Get(::Il2CppString* key, Polyglot::Language language);
    // static public System.Boolean KeyExist(System.String key)
    // Offset: 0x20F4BE0
    static bool KeyExist(::Il2CppString* key);
    // static public System.Collections.Generic.List`1<System.String> GetKeys()
    // Offset: 0x20F4C94
    static System::Collections::Generic::List_1<::Il2CppString*>* GetKeys();
    // static public System.String GetFormat(System.String key, params System.Object[] arguments)
    // Offset: 0x20F4D7C
    static ::Il2CppString* GetFormat(::Il2CppString* key, ::Array<::Il2CppObject*>* arguments);
    // Creating initializer_list -> params proxy for: System.String GetFormat(System.String key, params System.Object[] arguments)
    static ::Il2CppString* GetFormat(::Il2CppString* key, std::initializer_list<::Il2CppObject*> arguments);
    // Creating TArgs -> initializer_list proxy for: System.String GetFormat(System.String key, params System.Object[] arguments)
    template<class ...TParams>
    static ::Il2CppString* GetFormat(::Il2CppString* key, TParams&&... arguments) {
      return GetFormat(key, {arguments...});
    }
    // public System.Boolean InputFilesContains(Polyglot.LocalizationDocument doc)
    // Offset: 0x20F4DD4
    bool InputFilesContains(Polyglot::LocalizationDocument* doc);
    // public System.Void .ctor()
    // Offset: 0x20F4F38
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Localization* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::Localization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Localization*, creationType>()));
    }
  }; // Polyglot.Localization
  #pragma pack(pop)
  static check_size<sizeof(Localization), 56 + sizeof(UnityEngine::Events::UnityEvent*)> __Polyglot_LocalizationSizeCheck;
  static_assert(sizeof(Localization) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::Localization*, "Polyglot", "Localization");
