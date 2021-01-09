// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionSystem
#include "RootMotion/FinalIK/InteractionSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: RootMotion.FinalIK.InteractionObject
#include "RootMotion/FinalIK/InteractionObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x70
  // Autogenerated type: RootMotion.FinalIK.InteractionSystem/InteractionEventDelegate
  // [] Offset: FFFFFFFF
  class InteractionSystem::InteractionEventDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: InteractionEventDelegate
    InteractionEventDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x17EF9AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionSystem::InteractionEventDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionSystem::InteractionEventDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject, RootMotion.FinalIK.InteractionObject/InteractionEvent interactionEvent)
    // Offset: 0x17E9F1C
    void Invoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject, RootMotion::FinalIK::InteractionObject::InteractionEvent* interactionEvent);
    // public System.IAsyncResult BeginInvoke(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject, RootMotion.FinalIK.InteractionObject/InteractionEvent interactionEvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x17EF9C0
    System::IAsyncResult* BeginInvoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject, RootMotion::FinalIK::InteractionObject::InteractionEvent* interactionEvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x17EFA60
    void EndInvoke(System::IAsyncResult* result);
  }; // RootMotion.FinalIK.InteractionSystem/InteractionEventDelegate
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionSystem::InteractionEventDelegate*, "RootMotion.FinalIK", "InteractionSystem/InteractionEventDelegate");
#pragma pack(pop)
