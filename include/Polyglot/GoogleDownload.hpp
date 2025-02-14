// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Polyglot
namespace Polyglot {
  // Forward declaring type: GoogleDriveDownloadFormat
  struct GoogleDriveDownloadFormat;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.GoogleDownload
  class GoogleDownload : public ::Il2CppObject {
    public:
    // Nested type: Polyglot::GoogleDownload::$DownloadSheet$d__0
    class $DownloadSheet$d__0;
    // Creating value type constructor for type: GoogleDownload
    GoogleDownload() noexcept {}
    // static public System.Collections.IEnumerator DownloadSheet(System.String docsId, System.String sheetId, System.Action`1<System.String> done, Polyglot.GoogleDriveDownloadFormat format, System.Func`2<System.Single,System.Boolean> progressbar)
    // Offset: 0x2333220
    static System::Collections::IEnumerator* DownloadSheet(::Il2CppString* docsId, ::Il2CppString* sheetId, System::Action_1<::Il2CppString*>* done, Polyglot::GoogleDriveDownloadFormat format, System::Func_2<float, bool>* progressbar);
  }; // Polyglot.GoogleDownload
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::GoogleDownload*, "Polyglot", "GoogleDownload");
