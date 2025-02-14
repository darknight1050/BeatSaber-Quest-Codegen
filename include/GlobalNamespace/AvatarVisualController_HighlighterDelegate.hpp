// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AvatarVisualController
#include "GlobalNamespace/AvatarVisualController.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: AvatarVisualController/HighlighterDelegate
  class AvatarVisualController::HighlighterDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: HighlighterDelegate
    HighlighterDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1133AEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarVisualController::HighlighterDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarVisualController::HighlighterDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarVisualController::HighlighterDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Boolean highlighted, System.Int32 uvSegmentNumber)
    // Offset: 0x113435C
    void Invoke(bool highlighted, int uvSegmentNumber);
    // public System.IAsyncResult BeginInvoke(System.Boolean highlighted, System.Int32 uvSegmentNumber, System.AsyncCallback callback, System.Object object)
    // Offset: 0x113469C
    System::IAsyncResult* BeginInvoke(bool highlighted, int uvSegmentNumber, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x113474C
    void EndInvoke(System::IAsyncResult* result);
  }; // AvatarVisualController/HighlighterDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarVisualController::HighlighterDelegate*, "", "AvatarVisualController/HighlighterDelegate");
