// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Iterator`1
#include "System/IO/Iterator_1.hpp"
// Including type: System.IO.Directory
#include "System/IO/Directory.hpp"
// Including type: System.IO.SearchOption
#include "System/IO/SearchOption.hpp"
// Including type: Microsoft.Win32.Win32Native
#include "Microsoft/Win32/Win32Native.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SearchResultHandler`1<TSource>
  template<typename TSource>
  class SearchResultHandler_1;
  // Forward declaring type: SearchResult
  class SearchResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeFindHandle
  class SafeFindHandle;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.FileSystemEnumerableIterator`1
  template<typename TSource>
  class FileSystemEnumerableIterator_1 : public System::IO::Iterator_1<TSource> {
    public:
    // private System.IO.SearchResultHandler`1<TSource> _resultHandler
    // Offset: 0x0
    System::IO::SearchResultHandler_1<TSource>* resultHandler;
    // private System.Collections.Generic.List`1<System.IO.Directory/SearchData> searchStack
    // Offset: 0x0
    System::Collections::Generic::List_1<System::IO::Directory::SearchData*>* searchStack;
    // private System.IO.Directory/SearchData searchData
    // Offset: 0x0
    System::IO::Directory::SearchData* searchData;
    // private System.String searchCriteria
    // Offset: 0x0
    ::CsString* searchCriteria;
    // private Microsoft.Win32.SafeHandles.SafeFindHandle _hnd
    // Offset: 0x0
    Microsoft::Win32::SafeHandles::SafeFindHandle* hnd;
    // private System.Boolean needsParentPathDiscoveryDemand
    // Offset: 0x0
    bool needsParentPathDiscoveryDemand;
    // private System.Boolean empty
    // Offset: 0x0
    bool empty;
    // private System.String userPath
    // Offset: 0x0
    ::CsString* userPath;
    // private System.IO.SearchOption searchOption
    // Offset: 0x0
    System::IO::SearchOption searchOption;
    // private System.String fullPath
    // Offset: 0x0
    ::CsString* fullPath;
    // private System.String normalizedSearchPath
    // Offset: 0x0
    ::CsString* normalizedSearchPath;
    // private System.Boolean _checkHost
    // Offset: 0x0
    bool checkHost;
    // System.Void .ctor(System.String path, System.String originalUserPath, System.String searchPattern, System.IO.SearchOption searchOption, System.IO.SearchResultHandler`1<TSource> resultHandler, System.Boolean checkHost)
    // Offset: 0xFFFFFFFF
    static FileSystemEnumerableIterator_1<TSource>* New_ctor(::CsString* path, ::CsString* originalUserPath, ::CsString* searchPattern, System::IO::SearchOption searchOption, System::IO::SearchResultHandler_1<TSource>* resultHandler, bool checkHost) {
      return (FileSystemEnumerableIterator_1<TSource>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FileSystemEnumerableIterator_1<TSource>*>::get(), path, originalUserPath, searchPattern, searchOption, resultHandler, checkHost));
    }
    // private System.Void CommonInit()
    // Offset: 0xFFFFFFFF
    void CommonInit() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CommonInit"));
    }
    // private System.Void .ctor(System.String fullPath, System.String normalizedSearchPath, System.String searchCriteria, System.String userPath, System.IO.SearchOption searchOption, System.IO.SearchResultHandler`1<TSource> resultHandler, System.Boolean checkHost)
    // Offset: 0xFFFFFFFF
    static FileSystemEnumerableIterator_1<TSource>* New_ctor(::CsString* fullPath, ::CsString* normalizedSearchPath, ::CsString* searchCriteria, ::CsString* userPath, System::IO::SearchOption searchOption, System::IO::SearchResultHandler_1<TSource>* resultHandler, bool checkHost) {
      return (FileSystemEnumerableIterator_1<TSource>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FileSystemEnumerableIterator_1<TSource>*>::get(), fullPath, normalizedSearchPath, searchCriteria, userPath, searchOption, resultHandler, checkHost));
    }
    // private System.IO.SearchResult CreateSearchResult(System.IO.Directory/SearchData localSearchData, Microsoft.Win32.Win32Native/WIN32_FIND_DATA findData)
    // Offset: 0xFFFFFFFF
    System::IO::SearchResult* CreateSearchResult(System::IO::Directory::SearchData* localSearchData, Microsoft::Win32::Win32Native::WIN32_FIND_DATA* findData) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::SearchResult*>(this, "CreateSearchResult", localSearchData, findData));
    }
    // private System.Void HandleError(System.Int32 hr, System.String path)
    // Offset: 0xFFFFFFFF
    void HandleError(int hr, ::CsString* path) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandleError", hr, path));
    }
    // private System.Void AddSearchableDirsToStack(System.IO.Directory/SearchData localSearchData)
    // Offset: 0xFFFFFFFF
    void AddSearchableDirsToStack(System::IO::Directory::SearchData* localSearchData) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddSearchableDirsToStack", localSearchData));
    }
    // System.Void DoDemand(System.String fullPathToDemand)
    // Offset: 0xFFFFFFFF
    void DoDemand(::CsString* fullPathToDemand) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "DoDemand", fullPathToDemand));
    }
    // static private System.String NormalizeSearchPattern(System.String searchPattern)
    // Offset: 0xFFFFFFFF
    static ::CsString* NormalizeSearchPattern(::CsString* searchPattern) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FileSystemEnumerableIterator_1<TSource>*>::get(), "NormalizeSearchPattern", searchPattern));
    }
    // static private System.String GetNormalizedSearchCriteria(System.String fullSearchString, System.String fullPathMod)
    // Offset: 0xFFFFFFFF
    static ::CsString* GetNormalizedSearchCriteria(::CsString* fullSearchString, ::CsString* fullPathMod) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FileSystemEnumerableIterator_1<TSource>*>::get(), "GetNormalizedSearchCriteria", fullSearchString, fullPathMod));
    }
    // static private System.String GetFullSearchString(System.String fullPath, System.String searchPattern)
    // Offset: 0xFFFFFFFF
    static ::CsString* GetFullSearchString(::CsString* fullPath, ::CsString* searchPattern) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::CsString*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FileSystemEnumerableIterator_1<TSource>*>::get(), "GetFullSearchString", fullPath, searchPattern));
    }
    // protected override System.IO.Iterator`1<TSource> Clone()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IO.Iterator`1
    // Base method: System.IO.Iterator`1<TSource> Iterator`1::Clone()
    System::IO::Iterator_1<TSource>* Clone() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IO::Iterator_1<TSource>*>(this, "Clone"));
    }
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IO.Iterator`1
    // Base method: System.Void Iterator`1::Dispose(System.Boolean disposing)
    void Dispose(bool disposing) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Dispose", disposing));
    }
    // public override System.Boolean MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IO.Iterator`1
    // Base method: System.Boolean Iterator`1::MoveNext()
    bool MoveNext() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
    }
  }; // System.IO.FileSystemEnumerableIterator`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::IO::FileSystemEnumerableIterator_1, "System.IO", "FileSystemEnumerableIterator`1");
#pragma pack(pop)
