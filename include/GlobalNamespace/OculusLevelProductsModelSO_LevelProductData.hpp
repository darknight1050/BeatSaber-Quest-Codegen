// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusLevelProductsModelSO
#include "GlobalNamespace/OculusLevelProductsModelSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusLevelProductsModelSO/LevelProductData
  class OculusLevelProductsModelSO::LevelProductData : public ::Il2CppObject {
    public:
    // private System.String _levelId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* levelId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _sku
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* sku;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _assetFile
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* assetFile;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: LevelProductData
    LevelProductData(::Il2CppString* levelId_ = {}, ::Il2CppString* sku_ = {}, ::Il2CppString* assetFile_ = {}) noexcept : levelId{levelId_}, sku{sku_}, assetFile{assetFile_} {}
    // public System.String get_sku()
    // Offset: 0x11CBA50
    ::Il2CppString* get_sku();
    // public System.String get_levelId()
    // Offset: 0x11CBA58
    ::Il2CppString* get_levelId();
    // public System.String get_assetFile()
    // Offset: 0x11CBA60
    ::Il2CppString* get_assetFile();
    // public System.Void .ctor()
    // Offset: 0x11CBA68
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusLevelProductsModelSO::LevelProductData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusLevelProductsModelSO::LevelProductData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusLevelProductsModelSO::LevelProductData*, creationType>()));
    }
  }; // OculusLevelProductsModelSO/LevelProductData
  #pragma pack(pop)
  static check_size<sizeof(OculusLevelProductsModelSO::LevelProductData), 32 + sizeof(::Il2CppString*)> __GlobalNamespace_OculusLevelProductsModelSO_LevelProductDataSizeCheck;
  static_assert(sizeof(OculusLevelProductsModelSO::LevelProductData) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusLevelProductsModelSO::LevelProductData*, "", "OculusLevelProductsModelSO/LevelProductData");
