// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: PlayableOutput
  struct PlayableOutput;
  // Forward declaring type: PlayableGraph
  struct PlayableGraph;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Playables.PlayableBinding/CreateOutputMethod
  // [] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: CAA454
  class PlayableBinding::CreateOutputMethod : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: CreateOutputMethod
    CreateOutputMethod() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A79128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayableBinding::CreateOutputMethod* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Playables::PlayableBinding::CreateOutputMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayableBinding::CreateOutputMethod*, creationType>(object, method)));
    }
    // public UnityEngine.Playables.PlayableOutput Invoke(UnityEngine.Playables.PlayableGraph graph, System.String name)
    // Offset: 0x1A78D98
    UnityEngine::Playables::PlayableOutput Invoke_NEW(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Playables.PlayableGraph graph, System.String name, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A79138
    System::IAsyncResult* BeginInvoke_NEW(UnityEngine::Playables::PlayableGraph graph, ::Il2CppString* name, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public UnityEngine.Playables.PlayableOutput EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A791D0
    UnityEngine::Playables::PlayableOutput EndInvoke_NEW(System::IAsyncResult* result);
  }; // UnityEngine.Playables.PlayableBinding/CreateOutputMethod
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::PlayableBinding::CreateOutputMethod*, "UnityEngine.Playables", "PlayableBinding/CreateOutputMethod");
