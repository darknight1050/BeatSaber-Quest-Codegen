// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Directory/SearchData
#include "System/IO/Directory_SearchData.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.IO.Directory/SearchData..ctor
System::IO::Directory::SearchData* System::IO::Directory::SearchData::New_ctor(::CsString* fullPath, ::CsString* userPath, System::IO::SearchOption searchOption) {
  return (Directory::SearchData*)THROW_UNLESS(il2cpp_utils::New("System.IO", "Directory/SearchData", fullPath, userPath, searchOption));
}
