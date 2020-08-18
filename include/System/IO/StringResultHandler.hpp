// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.SearchResultHandler`1
#include "System/IO/SearchResultHandler_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchResult
  class SearchResult;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.StringResultHandler
  class StringResultHandler : public System::IO::SearchResultHandler_1<::Il2CppString*> {
    public:
    // private System.Boolean _includeFiles
    // Offset: 0x10
    bool includeFiles;
    // private System.Boolean _includeDirs
    // Offset: 0x11
    bool includeDirs;
    // System.Void .ctor(System.Boolean includeFiles, System.Boolean includeDirs)
    // Offset: 0xF68848
    static StringResultHandler* New_ctor(bool includeFiles, bool includeDirs);
    // System.String CreateObject(System.IO.SearchResult result)
    // Offset: 0xF6892C
    ::Il2CppString* CreateObject(System::IO::SearchResult* result);
    // override System.Boolean IsResultIncluded(System.IO.SearchResult result)
    // Offset: 0xF688BC
    // Implemented from: System.IO.SearchResultHandler`1
    // Base method: System.Boolean SearchResultHandler`1::IsResultIncluded(System.IO.SearchResult result)
    bool IsResultIncluded(System::IO::SearchResult* result);
  }; // System.IO.StringResultHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::StringResultHandler*, "System.IO", "StringResultHandler");
#pragma pack(pop)
