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
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchOption
  struct SearchOption;
  // Forward declaring type: DirectoryInfo
  class DirectoryInfo;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.Directory
  class Directory : public ::CsObject {
    public:
    // Nested type: System::IO::Directory::SearchData
    class SearchData;
    // static public System.String[] GetFiles(System.String path)
    // Offset: 0x111A010
    static ::Array<::CsString*>* GetFiles(::CsString* path);
    // static public System.String[] GetFiles(System.String path, System.String searchPattern)
    // Offset: 0x111A0D0
    static ::Array<::CsString*>* GetFiles(::CsString* path, ::CsString* searchPattern);
    // static private System.String[] InternalGetFiles(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x111A0B4
    static ::Array<::CsString*>* InternalGetFiles(::CsString* path, ::CsString* searchPattern, System::IO::SearchOption searchOption);
    // static public System.String[] GetDirectories(System.String path)
    // Offset: 0x111A270
    static ::Array<::CsString*>* GetDirectories(::CsString* path);
    // static public System.String[] GetDirectories(System.String path, System.String searchPattern)
    // Offset: 0x111A330
    static ::Array<::CsString*>* GetDirectories(::CsString* path, ::CsString* searchPattern);
    // static private System.String[] InternalGetDirectories(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x111A314
    static ::Array<::CsString*>* InternalGetDirectories(::CsString* path, ::CsString* searchPattern, System::IO::SearchOption searchOption);
    // static public System.String[] GetFileSystemEntries(System.String path, System.String searchPattern)
    // Offset: 0x111A3F8
    static ::Array<::CsString*>* GetFileSystemEntries(::CsString* path, ::CsString* searchPattern);
    // static private System.String[] InternalGetFileSystemEntries(System.String path, System.String searchPattern, System.IO.SearchOption searchOption)
    // Offset: 0x111A4C0
    static ::Array<::CsString*>* InternalGetFileSystemEntries(::CsString* path, ::CsString* searchPattern, System::IO::SearchOption searchOption);
    // static System.String[] InternalGetFileDirectoryNames(System.String path, System.String userPathOriginal, System.String searchPattern, System.Boolean includeFiles, System.Boolean includeDirs, System.IO.SearchOption searchOption, System.Boolean checkHost)
    // Offset: 0x111A198
    static ::Array<::CsString*>* InternalGetFileDirectoryNames(::CsString* path, ::CsString* userPathOriginal, ::CsString* searchPattern, bool includeFiles, bool includeDirs, System::IO::SearchOption searchOption, bool checkHost);
    // static public System.IO.DirectoryInfo CreateDirectory(System.String path)
    // Offset: 0x111A5B0
    static System::IO::DirectoryInfo* CreateDirectory(::CsString* path);
    // static private System.IO.DirectoryInfo CreateDirectoriesInternal(System.String path)
    // Offset: 0x111A89C
    static System::IO::DirectoryInfo* CreateDirectoriesInternal(::CsString* path);
    // static public System.Void Delete(System.String path)
    // Offset: 0x111B300
    static void Delete(::CsString* path);
    // static private System.Void RecursiveDelete(System.String path)
    // Offset: 0x111B6E0
    static void RecursiveDelete(::CsString* path);
    // static public System.Void Delete(System.String path, System.Boolean recursive)
    // Offset: 0x111BA98
    static void Delete(::CsString* path, bool recursive);
    // static public System.Boolean Exists(System.String path)
    // Offset: 0x111BB30
    static bool Exists(::CsString* path);
    // static public System.String GetCurrentDirectory()
    // Offset: 0x111BD04
    static ::CsString* GetCurrentDirectory();
    // static System.String InsecureGetCurrentDirectory()
    // Offset: 0x111BD1C
    static ::CsString* InsecureGetCurrentDirectory();
    // static public System.String[] GetLogicalDrives()
    // Offset: 0x111BEC8
    static ::Array<::CsString*>* GetLogicalDrives();
    // static System.String GetDemandDir(System.String fullPath, System.Boolean thisDirOnly)
    // Offset: 0x111BED0
    static ::CsString* GetDemandDir(::CsString* fullPath, bool thisDirOnly);
  }; // System.IO.Directory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::Directory*, "System.IO", "Directory");
#pragma pack(pop)
