// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
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
// Begin il2cpp-utils forward declares
struct CsObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenInjectMethod
  class ZenInjectMethod : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1946350
    static ZenInjectMethod* New_ctor(::CsObject* object, System::IntPtr method);
    // public System.Void Invoke(System.Object obj, System.Object[] args)
    // Offset: 0x1946364
    void Invoke(::CsObject* obj, ::Array<::CsObject*>* args);
    // public System.IAsyncResult BeginInvoke(System.Object obj, System.Object[] args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1946768
    System::IAsyncResult* BeginInvoke(::CsObject* obj, ::Array<::CsObject*>* args, System::AsyncCallback* callback, ::CsObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1946798
    void EndInvoke(System::IAsyncResult* result);
  }; // Zenject.ZenInjectMethod
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenInjectMethod*, "Zenject", "ZenInjectMethod");
#pragma pack(pop)
