// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelFilterModel
#include "GlobalNamespace/BeatmapLevelFilterModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
  // Skipping declaration: AdditionalContentModel because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BeatmapLevelFilterModel/<GetAllBeatmapLevelsAsync>d__2
  // [CompilerGeneratedAttribute] Offset: E11B2C
  struct BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<IPreviewBeatmapLevel>> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*> $$t__builder;
    // public IBeatmapLevelPack[] beatmapLevelPacks
    // Size: 0x8
    // Offset: 0x20
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // public SongPackMask songPackMask
    // Size: 0x10
    // Offset: 0x28
    GlobalNamespace::SongPackMask songPackMask;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // public System.Boolean onlyOwned
    // Size: 0x1
    // Offset: 0x38
    bool onlyOwned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public AdditionalContentModel additionalContentModel
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AdditionalContentModel*) == 0x8);
    // public System.Threading.CancellationToken cancellationToken
    // Size: 0x8
    // Offset: 0x48
    System::Threading::CancellationToken cancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Collections.Generic.List`1<IPreviewBeatmapLevel> <levels>5__2
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>* $levels$5__2;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private IBeatmapLevelPack[] <>7__wrap2
    // Size: 0x8
    // Offset: 0x58
    ::Array<GlobalNamespace::IBeatmapLevelPack*>* $$7__wrap2;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IBeatmapLevelPack*>*) == 0x8);
    // private System.Int32 <>7__wrap3
    // Size: 0x4
    // Offset: 0x60
    int $$7__wrap3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private IPreviewBeatmapLevel[] <>7__wrap4
    // Size: 0x8
    // Offset: 0x68
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* $$7__wrap4;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::IPreviewBeatmapLevel*>*) == 0x8);
    // private System.Int32 <>7__wrap5
    // Size: 0x4
    // Offset: 0x70
    int $$7__wrap5;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private IPreviewBeatmapLevel <beatmapLevel>5__7
    // Size: 0x8
    // Offset: 0x78
    GlobalNamespace::IPreviewBeatmapLevel* $beatmapLevel$5__7;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IPreviewBeatmapLevel*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x80
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // Creating value type constructor for type: $GetAllBeatmapLevelsAsync$d__2
    constexpr $GetAllBeatmapLevelsAsync$d__2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>*> $$t__builder_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* beatmapLevelPacks_ = {}, GlobalNamespace::SongPackMask songPackMask_ = {}, bool onlyOwned_ = {}, GlobalNamespace::AdditionalContentModel* additionalContentModel_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Collections::Generic::List_1<GlobalNamespace::IPreviewBeatmapLevel*>* $levels$5__2_ = {}, ::Array<GlobalNamespace::IBeatmapLevelPack*>* $$7__wrap2_ = {}, int $$7__wrap3_ = {}, ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* $$7__wrap4_ = {}, int $$7__wrap5_ = {}, GlobalNamespace::IPreviewBeatmapLevel* $beatmapLevel$5__7_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, beatmapLevelPacks{beatmapLevelPacks_}, songPackMask{songPackMask_}, onlyOwned{onlyOwned_}, additionalContentModel{additionalContentModel_}, cancellationToken{cancellationToken_}, $levels$5__2{$levels$5__2_}, $$7__wrap2{$$7__wrap2_}, $$7__wrap3{$$7__wrap3_}, $$7__wrap4{$$7__wrap4_}, $$7__wrap5{$$7__wrap5_}, $beatmapLevel$5__7{$beatmapLevel$5__7_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xEE3B30
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xEE3B38
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelFilterModel/<GetAllBeatmapLevelsAsync>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelFilterModel::$GetAllBeatmapLevelsAsync$d__2, "", "BeatmapLevelFilterModel/<GetAllBeatmapLevelsAsync>d__2");
