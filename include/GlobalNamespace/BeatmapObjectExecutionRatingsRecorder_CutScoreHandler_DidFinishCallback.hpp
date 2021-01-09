// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler
#include "GlobalNamespace/BeatmapObjectExecutionRatingsRecorder_CutScoreHandler.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  // Autogenerated type: BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/DidFinishCallback
  // [] Offset: FFFFFFFF
  class BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: DidFinishCallback
    DidFinishCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A27590
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler cutScoreHandler)
    // Offset: 0x1A282A4
    void Invoke(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* cutScoreHandler);
    // public System.IAsyncResult BeginInvoke(BeatmapObjectExecutionRatingsRecorder/CutScoreHandler cutScoreHandler, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A2865C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler* cutScoreHandler, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A28680
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/DidFinishCallback
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectExecutionRatingsRecorder::CutScoreHandler::DidFinishCallback*, "", "BeatmapObjectExecutionRatingsRecorder/CutScoreHandler/DidFinishCallback");
#pragma pack(pop)
