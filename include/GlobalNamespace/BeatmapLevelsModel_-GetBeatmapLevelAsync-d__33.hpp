// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapLevelsModel
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: BeatmapLevelLoader/LoadBeatmapLevelResult
#include "GlobalNamespace/BeatmapLevelLoader.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelsModel/<GetBeatmapLevelAsync>d__33
  struct BeatmapLevelsModel::$GetBeatmapLevelAsync$d__33 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatmapLevelsModel/GetBeatmapLevelResult> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> $$t__builder;
    // public BeatmapLevelsModel <>4__this
    // Offset: 0x20
    GlobalNamespace::BeatmapLevelsModel* $$4__this;
    // public System.String levelID
    // Offset: 0x28
    ::CsString* levelID;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x30
    System::Threading::CancellationToken cancellationToken;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<AdditionalContentModel/EntitlementStatus> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<BeatmapLevelLoader/LoadBeatmapLevelResult> <>u__2
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult> $$u__2;
    // Creating value type constructor for type: $GetBeatmapLevelAsync$d__33
    $GetBeatmapLevelAsync$d__33(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevelResult> $$t__builder_ = {}, GlobalNamespace::BeatmapLevelsModel* $$4__this_ = {}, ::CsString* levelID_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::BeatmapLevelLoader::LoadBeatmapLevelResult> $$u__2_ = {}) : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelID{levelID_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // private System.Void MoveNext()
    // Offset: 0xA269FC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA26A04
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // BeatmapLevelsModel/<GetBeatmapLevelAsync>d__33
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelsModel::$GetBeatmapLevelAsync$d__33, "", "BeatmapLevelsModel/<GetBeatmapLevelAsync>d__33");
#pragma pack(pop)
