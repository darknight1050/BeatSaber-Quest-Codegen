// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: BookmarksFoldersModel
#include "GlobalNamespace/BookmarksFoldersModel.hpp"
// Including type: System.Environment/SpecialFolder
#include "System/Environment_SpecialFolder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BookmarksFoldersModel/<>c
  class BookmarksFoldersModel::$$c : public ::CsObject {
    public:
    // Get static field: static public readonly BookmarksFoldersModel/<>c <>9
    static GlobalNamespace::BookmarksFoldersModel::$$c* _get_$$9();
    // Set static field: static public readonly BookmarksFoldersModel/<>c <>9
    static void _set_$$9(GlobalNamespace::BookmarksFoldersModel::$$c* value);
    // Get static field: static public System.Func`2<System.Environment/SpecialFolder,System.String> <>9__3_0
    static System::Func_2<System::Environment::SpecialFolder, ::CsString*>* _get_$$9__3_0();
    // Set static field: static public System.Func`2<System.Environment/SpecialFolder,System.String> <>9__3_0
    static void _set_$$9__3_0(System::Func_2<System::Environment::SpecialFolder, ::CsString*>* value);
    // static private System.Void .cctor()
    // Offset: 0xB5E518
    static void _cctor();
    // System.String <get_bookmarksFolders>b__3_0(System.Environment/SpecialFolder specialFolder)
    // Offset: 0xB5E588
    ::CsString* $get_bookmarksFolders$b__3_0(System::Environment::SpecialFolder specialFolder);
    // public System.Void .ctor()
    // Offset: 0xB5E580
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BookmarksFoldersModel::$$c* New_ctor();
  }; // BookmarksFoldersModel/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BookmarksFoldersModel::$$c*, "", "BookmarksFoldersModel/<>c");
#pragma pack(pop)
