// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SFB.ExtensionFilter
#include "SFB/ExtensionFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: SFB
namespace SFB {
  // Forward declaring type: IStandaloneFileBrowser
  class IStandaloneFileBrowser;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: SFB
namespace SFB {
  // Size: 0x10
  // Autogenerated type: SFB.StandaloneFileBrowser
  // [] Offset: FFFFFFFF
  class StandaloneFileBrowser : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: StandaloneFileBrowser
    StandaloneFileBrowser() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDD3560
    // Get static field: static private readonly SFB.IStandaloneFileBrowser _platformWrapper
    static SFB::IStandaloneFileBrowser* _get__platformWrapper();
    // Set static field: static private readonly SFB.IStandaloneFileBrowser _platformWrapper
    static void _set__platformWrapper(SFB::IStandaloneFileBrowser* value);
    // static private System.Void .cctor()
    // Offset: 0xF36708
    static void _cctor();
    // static public System.String[] OpenFilePanel(System.String title, System.String directory, System.String extension, System.Boolean multiselect)
    // Offset: 0xF3670C
    static ::Array<::Il2CppString*>* OpenFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* extension, bool multiselect);
    // static public System.String[] OpenFilePanel(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect)
    // Offset: 0xF3688C
    static ::Array<::Il2CppString*>* OpenFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect);
    // static public System.Void OpenFilePanelAsync(System.String title, System.String directory, System.String extension, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0xF36990
    static void OpenFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* extension, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb);
    // static public System.Void OpenFilePanelAsync(System.String title, System.String directory, SFB.ExtensionFilter[] extensions, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0xF36B20
    static void OpenFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Array<SFB::ExtensionFilter>* extensions, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb);
    // static public System.String[] OpenFolderPanel(System.String title, System.String directory, System.Boolean multiselect)
    // Offset: 0xF36C30
    static ::Array<::Il2CppString*>* OpenFolderPanel(::Il2CppString* title, ::Il2CppString* directory, bool multiselect);
    // static public System.Void OpenFolderPanelAsync(System.String title, System.String directory, System.Boolean multiselect, System.Action`1<System.String[]> cb)
    // Offset: 0xF36D28
    static void OpenFolderPanelAsync(::Il2CppString* title, ::Il2CppString* directory, bool multiselect, System::Action_1<::Array<::Il2CppString*>*>* cb);
    // static public System.String SaveFilePanel(System.String title, System.String directory, System.String defaultName, System.String extension)
    // Offset: 0xF36E30
    static ::Il2CppString* SaveFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Il2CppString* extension);
    // static public System.String SaveFilePanel(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions)
    // Offset: 0xF36FB0
    static ::Il2CppString* SaveFilePanel(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions);
    // static public System.Void SaveFilePanelAsync(System.String title, System.String directory, System.String defaultName, System.String extension, System.Action`1<System.String> cb)
    // Offset: 0xF370B8
    static void SaveFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Il2CppString* extension, System::Action_1<::Il2CppString*>* cb);
    // static public System.Void SaveFilePanelAsync(System.String title, System.String directory, System.String defaultName, SFB.ExtensionFilter[] extensions, System.Action`1<System.String> cb)
    // Offset: 0xF37248
    static void SaveFilePanelAsync(::Il2CppString* title, ::Il2CppString* directory, ::Il2CppString* defaultName, ::Array<SFB::ExtensionFilter>* extensions, System::Action_1<::Il2CppString*>* cb);
    // public System.Void .ctor()
    // Offset: 0xF37358
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandaloneFileBrowser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("SFB::StandaloneFileBrowser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandaloneFileBrowser*, creationType>()));
    }
  }; // SFB.StandaloneFileBrowser
}
DEFINE_IL2CPP_ARG_TYPE(SFB::StandaloneFileBrowser*, "SFB", "StandaloneFileBrowser");
#pragma pack(pop)
