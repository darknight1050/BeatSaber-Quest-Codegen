// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.GUI
#include "UnityEngine/GUI.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUI/WindowFunction
  class GUI::WindowFunction : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: WindowFunction
    WindowFunction() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A72354
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUI::WindowFunction* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::GUI::WindowFunction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUI::WindowFunction*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 id)
    // Offset: 0x1A71E88
    void Invoke(int id);
    // public System.IAsyncResult BeginInvoke(System.Int32 id, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A72364
    System::IAsyncResult* BeginInvoke(int id, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A723F0
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.GUI/WindowFunction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUI::WindowFunction*, "UnityEngine", "GUI/WindowFunction");
