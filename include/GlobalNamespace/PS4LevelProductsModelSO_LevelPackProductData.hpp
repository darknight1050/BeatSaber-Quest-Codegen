// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: PS4LevelProductsModelSO
#include "GlobalNamespace/PS4LevelProductsModelSO.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PS4LevelProductsModelSO/LevelPackProductData
  class PS4LevelProductsModelSO::LevelPackProductData : public ::CsObject {
    public:
    // private System.String _productLabel
    // Offset: 0x10
    ::CsString* productLabel;
    // private System.String _categoryLabel
    // Offset: 0x18
    ::CsString* categoryLabel;
    // private System.String _packId
    // Offset: 0x20
    ::CsString* packId;
    // private System.Single _packLevelPriceDiscountMul
    // Offset: 0x28
    float packLevelPriceDiscountMul;
    // private PS4LevelProductsModelSO/LevelProductData[] _levelProductsData
    // Offset: 0x30
    ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>* levelProductsData;
    // public System.String get_productLabel()
    // Offset: 0xBBC9AC
    ::CsString* get_productLabel();
    // public System.String get_categoryLabel()
    // Offset: 0xBBC9B4
    ::CsString* get_categoryLabel();
    // public System.String get_levelPackId()
    // Offset: 0xBBC9BC
    ::CsString* get_levelPackId();
    // public System.Single get_packLevelPriceDiscountMul()
    // Offset: 0xBBC9C4
    float get_packLevelPriceDiscountMul();
    // public PS4LevelProductsModelSO/LevelProductData[] get_levelProductsData()
    // Offset: 0xBBC9CC
    ::Array<GlobalNamespace::PS4LevelProductsModelSO::LevelProductData*>* get_levelProductsData();
    // public System.Void .ctor()
    // Offset: 0xBBC9D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PS4LevelProductsModelSO::LevelPackProductData* New_ctor();
  }; // PS4LevelProductsModelSO/LevelPackProductData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4LevelProductsModelSO::LevelPackProductData*, "", "PS4LevelProductsModelSO/LevelPackProductData");
#pragma pack(pop)
