// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarPartCollection`1<T>
  template<typename T>
  class AvatarPartCollection_1;
  // Forward declaring type: AvatarMeshPartSO
  class AvatarMeshPartSO;
  // Forward declaring type: AvatarSpritePartSO
  class AvatarSpritePartSO;
  // Forward declaring type: SkinColorSO
  class SkinColorSO;
  // Forward declaring type: AvatarPartsModelSO
  class AvatarPartsModelSO;
  // Forward declaring type: SkinColorSetSO
  class SkinColorSetSO;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: AvatarPartsModel
  // [] Offset: FFFFFFFF
  class AvatarPartsModel : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD221C4
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <headTopCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* headTopCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD221D4
    // private readonly AvatarPartCollection`1<AvatarSpritePartSO> <eyesCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* eyesCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD221E4
    // private readonly AvatarPartCollection`1<AvatarSpritePartSO> <mouthCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* mouthCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD221F4
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <glassesCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* glassesCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD22204
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <facialHairCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* facialHairCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD22214
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <handsCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* handsCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD22224
    // private readonly AvatarPartCollection`1<AvatarMeshPartSO> <clothesCollection>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* clothesCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD22234
    // private readonly SkinColorSO[] <skinColors>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::SkinColorSO*>* skinColors;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SkinColorSO*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Int32> _indexById
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* indexById;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*) == 0x8);
    // Creating value type constructor for type: AvatarPartsModel
    AvatarPartsModel(GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* headTopCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* eyesCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* mouthCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* glassesCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* facialHairCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* handsCollection_ = {}, GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* clothesCollection_ = {}, ::Array<GlobalNamespace::SkinColorSO*>* skinColors_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* indexById_ = {}) noexcept : headTopCollection{headTopCollection_}, eyesCollection{eyesCollection_}, mouthCollection{mouthCollection_}, glassesCollection{glassesCollection_}, facialHairCollection{facialHairCollection_}, handsCollection{handsCollection_}, clothesCollection{clothesCollection_}, skinColors{skinColors_}, indexById{indexById_} {}
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_headTopCollection()
    // Offset: 0x10020EC
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_headTopCollection();
    // public AvatarPartCollection`1<AvatarSpritePartSO> get_eyesCollection()
    // Offset: 0x10020F4
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* get_eyesCollection();
    // public AvatarPartCollection`1<AvatarSpritePartSO> get_mouthCollection()
    // Offset: 0x10020FC
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarSpritePartSO*>* get_mouthCollection();
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_glassesCollection()
    // Offset: 0x1002104
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_glassesCollection();
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_facialHairCollection()
    // Offset: 0x100210C
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_facialHairCollection();
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_handsCollection()
    // Offset: 0x1002114
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_handsCollection();
    // public AvatarPartCollection`1<AvatarMeshPartSO> get_clothesCollection()
    // Offset: 0x100211C
    GlobalNamespace::AvatarPartCollection_1<GlobalNamespace::AvatarMeshPartSO*>* get_clothesCollection();
    // public SkinColorSO[] get_skinColors()
    // Offset: 0x1002124
    ::Array<GlobalNamespace::SkinColorSO*>* get_skinColors();
    // public System.Void .ctor(AvatarPartsModelSO avatarPartData, SkinColorSetSO skinColorSet)
    // Offset: 0x100212C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarPartsModel* New_ctor(GlobalNamespace::AvatarPartsModelSO* avatarPartData, GlobalNamespace::SkinColorSetSO* skinColorSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarPartsModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarPartsModel*, creationType>(avatarPartData, skinColorSet)));
    }
    // public System.Int32 GetColorIndexById(System.String id)
    // Offset: 0x100233C
    int GetColorIndexById(::Il2CppString* id);
    // public SkinColorSO GetSkinColorById(System.String id)
    // Offset: 0x10023C8
    GlobalNamespace::SkinColorSO* GetSkinColorById(::Il2CppString* id);
    // public SkinColorSO GetRandomColor()
    // Offset: 0x10014A0
    GlobalNamespace::SkinColorSO* GetRandomColor();
  }; // AvatarPartsModel
  #pragma pack(pop)
  static check_size<sizeof(AvatarPartsModel), 80 + sizeof(System::Collections::Generic::Dictionary_2<::Il2CppString*, int>*)> __GlobalNamespace_AvatarPartsModelSizeCheck;
  static_assert(sizeof(AvatarPartsModel) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarPartsModel*, "", "AvatarPartsModel");
