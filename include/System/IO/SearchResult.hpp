// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Microsoft.Win32.Win32Native
#include "Microsoft/Win32/Win32Native.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.SearchResult
  class SearchResult : public ::CsObject {
    public:
    // private System.String fullPath
    // Offset: 0x10
    ::CsString* fullPath;
    // private System.String userPath
    // Offset: 0x18
    ::CsString* userPath;
    // private Microsoft.Win32.Win32Native/WIN32_FIND_DATA findData
    // Offset: 0x20
    Microsoft::Win32::Win32Native::WIN32_FIND_DATA* findData;
    // System.Void .ctor(System.String fullPath, System.String userPath, Microsoft.Win32.Win32Native/WIN32_FIND_DATA findData)
    // Offset: 0xFF1430
    static SearchResult* New_ctor(::CsString* fullPath, ::CsString* userPath, Microsoft::Win32::Win32Native::WIN32_FIND_DATA* findData);
    // System.String get_UserPath()
    // Offset: 0xFF1494
    ::CsString* get_UserPath();
    // Microsoft.Win32.Win32Native/WIN32_FIND_DATA get_FindData()
    // Offset: 0xFF149C
    Microsoft::Win32::Win32Native::WIN32_FIND_DATA* get_FindData();
  }; // System.IO.SearchResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::SearchResult*, "System.IO", "SearchResult");
#pragma pack(pop)
