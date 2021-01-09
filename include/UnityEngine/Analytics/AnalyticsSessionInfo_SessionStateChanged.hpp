// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Analytics.AnalyticsSessionInfo
#include "UnityEngine/Analytics/AnalyticsSessionInfo.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Analytics
namespace UnityEngine::Analytics {
  // Forward declaring type: AnalyticsSessionState
  struct AnalyticsSessionState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Size: 0x70
  // Autogenerated type: UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
  // [] Offset: FFFFFFFF
  class AnalyticsSessionInfo::SessionStateChanged : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: SessionStateChanged
    SessionStateChanged() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A09EA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AnalyticsSessionInfo::SessionStateChanged* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AnalyticsSessionInfo::SessionStateChanged*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Analytics.AnalyticsSessionState sessionState, System.Int64 sessionId, System.Int64 sessionElapsedTime, System.Boolean sessionChanged)
    // Offset: 0x1A09778
    void Invoke(UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Analytics.AnalyticsSessionState sessionState, System.Int64 sessionId, System.Int64 sessionElapsedTime, System.Boolean sessionChanged, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A09EB4
    System::IAsyncResult* BeginInvoke(UnityEngine::Analytics::AnalyticsSessionState sessionState, int64_t sessionId, int64_t sessionElapsedTime, bool sessionChanged, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A09F9C
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.Analytics.AnalyticsSessionInfo/SessionStateChanged
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::AnalyticsSessionInfo::SessionStateChanged*, "UnityEngine.Analytics", "AnalyticsSessionInfo/SessionStateChanged");
#pragma pack(pop)
