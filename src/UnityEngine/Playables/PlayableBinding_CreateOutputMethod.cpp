// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Playables.PlayableBinding/CreateOutputMethod
#include "UnityEngine/Playables/PlayableBinding_CreateOutputMethod.hpp"
// Including type: UnityEngine.Playables.PlayableOutput
#include "UnityEngine/Playables/PlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableGraph
#include "UnityEngine/Playables/PlayableGraph.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.Playables.PlayableBinding/CreateOutputMethod..ctor
UnityEngine::Playables::PlayableBinding::CreateOutputMethod* UnityEngine::Playables::PlayableBinding::CreateOutputMethod::New_ctor(::CsObject* object, System::IntPtr method) {
  return (PlayableBinding::CreateOutputMethod*)THROW_UNLESS(il2cpp_utils::New("UnityEngine.Playables", "PlayableBinding/CreateOutputMethod", object, method));
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding/CreateOutputMethod.Invoke
UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableBinding::CreateOutputMethod::Invoke(UnityEngine::Playables::PlayableGraph graph, ::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableOutput>(this, "Invoke", graph, name));
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding/CreateOutputMethod.BeginInvoke
System::IAsyncResult* UnityEngine::Playables::PlayableBinding::CreateOutputMethod::BeginInvoke(UnityEngine::Playables::PlayableGraph graph, ::CsString* name, System::AsyncCallback* callback, ::CsObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", graph, name, callback, object));
}
// Autogenerated method: UnityEngine.Playables.PlayableBinding/CreateOutputMethod.EndInvoke
UnityEngine::Playables::PlayableOutput UnityEngine::Playables::PlayableBinding::CreateOutputMethod::EndInvoke(System::IAsyncResult* result) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Playables::PlayableOutput>(this, "EndInvoke", result));
}
