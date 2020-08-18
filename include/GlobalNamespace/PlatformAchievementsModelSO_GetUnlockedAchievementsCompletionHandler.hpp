// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformAchievementsModelSO
#include "GlobalNamespace/PlatformAchievementsModelSO.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler
  class PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x191A208
    static PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(PlatformAchievementsModelSO/GetUnlockedAchievementsResult result, System.String[] unlockedAchievementsIds)
    // Offset: 0x1919F78
    void Invoke(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult result, ::Array<::Il2CppString*>* unlockedAchievementsIds);
    // public System.IAsyncResult BeginInvoke(PlatformAchievementsModelSO/GetUnlockedAchievementsResult result, System.String[] unlockedAchievementsIds, System.AsyncCallback callback, System.Object object)
    // Offset: 0x191A21C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsResult result, ::Array<::Il2CppString*>* unlockedAchievementsIds, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x191A2B4
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformAchievementsModelSO::GetUnlockedAchievementsCompletionHandler*, "", "PlatformAchievementsModelSO/GetUnlockedAchievementsCompletionHandler");
#pragma pack(pop)
