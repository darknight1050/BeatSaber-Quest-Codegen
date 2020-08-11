// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
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
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlatformUserModelSO/GetUserNamesForUserIdsCompletionHandler
  class PlatformUserModelSO::GetUserNamesForUserIdsCompletionHandler : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xBB9AB0
    static PlatformUserModelSO::GetUserNamesForUserIdsCompletionHandler* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(PlatformUserModelSO/GetUserNamesForUserIdsResult result, System.String[] userNames)
    // Offset: 0xBC3AB8
    void Invoke(GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsResult result, ::Array<::CsString*>* userNames);
    // public System.IAsyncResult BeginInvoke(PlatformUserModelSO/GetUserNamesForUserIdsResult result, System.String[] userNames, System.AsyncCallback callback, System.Object object)
    // Offset: 0xBC3D40
    System::IAsyncResult* BeginInvoke(GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsResult result, ::Array<::CsString*>* userNames, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xBC3DD8
    void EndInvoke(System::IAsyncResult* result);
  }; // PlatformUserModelSO/GetUserNamesForUserIdsCompletionHandler
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlatformUserModelSO::GetUserNamesForUserIdsCompletionHandler*, "", "PlatformUserModelSO/GetUserNamesForUserIdsCompletionHandler");
#pragma pack(pop)
