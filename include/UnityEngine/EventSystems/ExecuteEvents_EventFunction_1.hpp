// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: UnityEngine.EventSystems.ExecuteEvents
#include "UnityEngine/EventSystems/ExecuteEvents.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.ExecuteEvents/EventFunction`1
  template<typename T1>
  class ExecuteEvents::EventFunction_1 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static ExecuteEvents::EventFunction_1<T1>* New_ctor(::CsObject* object, System::IntPtr method) {
      return (ExecuteEvents::EventFunction_1<T1>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ExecuteEvents::EventFunction_1<T1>*>::get(), object, method));
    }
    // public System.Void Invoke(T1 handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0xFFFFFFFF
    void Invoke(T1 handler, UnityEngine::EventSystems::BaseEventData* eventData) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", handler, eventData));
    }
    // public System.IAsyncResult BeginInvoke(T1 handler, UnityEngine.EventSystems.BaseEventData eventData, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(T1 handler, UnityEngine::EventSystems::BaseEventData* eventData, System::AsyncCallback* callback, ::CsObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", handler, eventData, callback, object));
    }
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    void EndInvoke(System::IAsyncResult* result) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
    }
  }; // UnityEngine.EventSystems.ExecuteEvents/EventFunction`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1, "UnityEngine.EventSystems", "ExecuteEvents/EventFunction`1");
#pragma pack(pop)
