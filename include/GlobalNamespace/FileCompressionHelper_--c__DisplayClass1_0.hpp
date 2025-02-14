// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FileCompressionHelper
#include "GlobalNamespace/FileCompressionHelper.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FileCompressionHelper/<>c__DisplayClass1_0
  // [CompilerGeneratedAttribute] Offset: DE329C
  class FileCompressionHelper::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public System.Boolean success
    // Size: 0x1
    // Offset: 0x10
    bool success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: success and: sourceArchiveFileName
    char __padding0[0x7] = {};
    // public System.String sourceArchiveFileName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* sourceArchiveFileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String destinationDirectoryName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* destinationDirectoryName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Action`1<System.Boolean> finishCallback
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<bool>* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass1_0
    $$c__DisplayClass1_0(bool success_ = {}, ::Il2CppString* sourceArchiveFileName_ = {}, ::Il2CppString* destinationDirectoryName_ = {}, System::Action_1<bool>* finishCallback_ = {}) noexcept : success{success_}, sourceArchiveFileName{sourceArchiveFileName_}, destinationDirectoryName{destinationDirectoryName_}, finishCallback{finishCallback_} {}
    // System.Void <ExtractZipToDirectoryAsync>b__0()
    // Offset: 0x1228DD0
    void $ExtractZipToDirectoryAsync$b__0();
    // System.Void <ExtractZipToDirectoryAsync>b__1()
    // Offset: 0x1228DDC
    void $ExtractZipToDirectoryAsync$b__1();
    // public System.Void .ctor()
    // Offset: 0x1228C10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileCompressionHelper::$$c__DisplayClass1_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FileCompressionHelper::$$c__DisplayClass1_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileCompressionHelper::$$c__DisplayClass1_0*, creationType>()));
    }
  }; // FileCompressionHelper/<>c__DisplayClass1_0
  #pragma pack(pop)
  static check_size<sizeof(FileCompressionHelper::$$c__DisplayClass1_0), 40 + sizeof(System::Action_1<bool>*)> __GlobalNamespace_FileCompressionHelper_$$c__DisplayClass1_0SizeCheck;
  static_assert(sizeof(FileCompressionHelper::$$c__DisplayClass1_0) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileCompressionHelper::$$c__DisplayClass1_0*, "", "FileCompressionHelper/<>c__DisplayClass1_0");
