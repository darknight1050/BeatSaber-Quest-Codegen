// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusPlatformUserModel
#include "GlobalNamespace/OculusPlatformUserModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformUserModel/<>c__DisplayClass5_1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1C0F4
  class OculusPlatformUserModel::$$c__DisplayClass5_1 : public ::Il2CppObject {
    public:
    // public System.Int32 index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: index and: CS$$$8__locals1
    char __padding0[0x4] = {};
    // public OculusPlatformUserModel/<>c__DisplayClass5_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass5_1
    $$c__DisplayClass5_1(int index_ = {}, GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0* CS$$$8__locals1_ = {}) noexcept : index{index_}, CS$$$8__locals1{CS$$$8__locals1_} {}
    // System.Void <GetUserNamesForUserIds>b__1(Oculus.Platform.Message`1<Oculus.Platform.Models.User> result)
    // Offset: 0x10DB314
    void $GetUserNamesForUserIds$b__1(Oculus::Platform::Message_1<Oculus::Platform::Models::User*>* result);
    // public System.Void .ctor()
    // Offset: 0x10DB30C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformUserModel::$$c__DisplayClass5_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformUserModel::$$c__DisplayClass5_1*, creationType>()));
    }
  }; // OculusPlatformUserModel/<>c__DisplayClass5_1
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformUserModel::$$c__DisplayClass5_1), 24 + sizeof(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0*)> __GlobalNamespace_OculusPlatformUserModel_$$c__DisplayClass5_1SizeCheck;
  static_assert(sizeof(OculusPlatformUserModel::$$c__DisplayClass5_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_1*, "", "OculusPlatformUserModel/<>c__DisplayClass5_1");
