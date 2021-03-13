// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusNetworkPlayerModel
#include "GlobalNamespace/OculusNetworkPlayerModel.hpp"
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
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusNetworkPlayerModel/<>c__DisplayClass61_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1BF44
  class OculusNetworkPlayerModel::$$c__DisplayClass61_0 : public ::Il2CppObject {
    public:
    // public OculusNetworkPlayerModel <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::OculusNetworkPlayerModel* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OculusNetworkPlayerModel*) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> tcs
    // Size: 0x8
    // Offset: 0x18
    System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCompletionSource_1<bool>*) == 0x8);
    // public System.UInt64 userId
    // Size: 0x8
    // Offset: 0x20
    uint64_t userId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass61_0
    $$c__DisplayClass61_0(GlobalNamespace::OculusNetworkPlayerModel* $$4__this_ = {}, System::Threading::Tasks::TaskCompletionSource_1<bool>* tcs_ = {}, uint64_t userId_ = {}) noexcept : $$4__this{$$4__this_}, tcs{tcs_}, userId{userId_} {}
    // System.Void <ShouldAcceptConnectionFromPlayer>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> result)
    // Offset: 0x10D5CC8
    void $ShouldAcceptConnectionFromPlayer$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result);
    // public System.Void .ctor()
    // Offset: 0x10D50EC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusNetworkPlayerModel::$$c__DisplayClass61_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass61_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusNetworkPlayerModel::$$c__DisplayClass61_0*, creationType>()));
    }
  }; // OculusNetworkPlayerModel/<>c__DisplayClass61_0
  #pragma pack(pop)
  static check_size<sizeof(OculusNetworkPlayerModel::$$c__DisplayClass61_0), 32 + sizeof(uint64_t)> __GlobalNamespace_OculusNetworkPlayerModel_$$c__DisplayClass61_0SizeCheck;
  static_assert(sizeof(OculusNetworkPlayerModel::$$c__DisplayClass61_0) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass61_0*, "", "OculusNetworkPlayerModel/<>c__DisplayClass61_0");
