// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride
#include "GlobalNamespace/MasterServerQuickPlaySetupData_QuickPlaySongPacksOverride.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack
  // [] Offset: FFFFFFFF
  class MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack : public ::Il2CppObject {
    public:
    // public System.String serializedName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* serializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 order
    // Size: 0x4
    // Offset: 0x18
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: order and: localizedNames
    char __padding1[0x4] = {};
    // public MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName[] localizedNames
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*>* localizedNames;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> packIds
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::List_1<::Il2CppString*>* packIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: LocalizedCustomPack
    LocalizedCustomPack(::Il2CppString* serializedName_ = {}, int order_ = {}, ::Array<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*>* localizedNames_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* packIds_ = {}) noexcept : serializedName{serializedName_}, order{order_}, localizedNames{localizedNames_}, packIds{packIds_} {}
    // public System.Void .ctor()
    // Offset: 0x10B9218
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*, creationType>()));
    }
  }; // MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack
  #pragma pack(pop)
  static check_size<sizeof(MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack), 40 + sizeof(System::Collections::Generic::List_1<::Il2CppString*>*)> __GlobalNamespace_MasterServerQuickPlaySetupData_QuickPlaySongPacksOverride_LocalizedCustomPackSizeCheck;
  static_assert(sizeof(MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*, "", "MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack");
