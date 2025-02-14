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
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserInfo
  class UserInfo;
}
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
  // Autogenerated type: OculusPlatformUserModel/<>c__DisplayClass2_0
  // [CompilerGeneratedAttribute] Offset: E11EAC
  class OculusPlatformUserModel::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public System.Threading.Tasks.TaskCompletionSource`1<UserInfo> tcs
    // Size: 0x8
    // Offset: 0x10
    System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo*>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo*>*) == 0x8);
    // public OculusPlatformUserModel <>4__this
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::OculusPlatformUserModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusPlatformUserModel*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(System::Threading::Tasks::TaskCompletionSource_1<GlobalNamespace::UserInfo*>* tcs_ = {}, GlobalNamespace::OculusPlatformUserModel* $$4__this_ = {}) noexcept : tcs{tcs_}, $$4__this{$$4__this_} {}
    // System.Void <GetUserInfo>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.User> message)
    // Offset: 0x11D3194
    void $GetUserInfo$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::User*>* message);
    // public System.Void .ctor()
    // Offset: 0x11D318C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformUserModel::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformUserModel::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // OculusPlatformUserModel/<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformUserModel::$$c__DisplayClass2_0), 24 + sizeof(GlobalNamespace::OculusPlatformUserModel*)> __GlobalNamespace_OculusPlatformUserModel_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(OculusPlatformUserModel::$$c__DisplayClass2_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass2_0*, "", "OculusPlatformUserModel/<>c__DisplayClass2_0");
