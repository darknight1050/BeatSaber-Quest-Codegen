// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IImageAsyncLoader
#include "GlobalNamespace/IImageAsyncLoader.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: UnityEngine.Texture2D
#include "UnityEngine/Texture2D.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: IImageAsyncLoader.LoadImageAsync
System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* GlobalNamespace::IImageAsyncLoader::LoadImageAsync(::CsString* path, System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>*>(this, "LoadImageAsync", path, cancellationToken));
}
