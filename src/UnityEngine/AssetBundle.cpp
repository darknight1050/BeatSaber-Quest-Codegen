// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AssetBundle
#include "UnityEngine/AssetBundle.hpp"
// Including type: UnityEngine.AssetBundleCreateRequest
#include "UnityEngine/AssetBundleCreateRequest.hpp"
// Including type: System.Type
#include "System/Type.hpp"
// Including type: UnityEngine.AssetBundleRequest
#include "UnityEngine/AssetBundleRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: UnityEngine.AssetBundle.LoadFromFileAsync_Internal
UnityEngine::AssetBundleCreateRequest* UnityEngine::AssetBundle::LoadFromFileAsync_Internal(::CsString* path, uint crc, uint64_t offset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AssetBundleCreateRequest*>("UnityEngine", "AssetBundle", "LoadFromFileAsync_Internal", path, crc, offset));
}
// Autogenerated method: UnityEngine.AssetBundle.LoadFromFileAsync
UnityEngine::AssetBundleCreateRequest* UnityEngine::AssetBundle::LoadFromFileAsync(::CsString* path) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AssetBundleCreateRequest*>("UnityEngine", "AssetBundle", "LoadFromFileAsync", path));
}
// Autogenerated method: UnityEngine.AssetBundle.LoadFromFile_Internal
UnityEngine::AssetBundle* UnityEngine::AssetBundle::LoadFromFile_Internal(::CsString* path, uint crc, uint64_t offset) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AssetBundle*>("UnityEngine", "AssetBundle", "LoadFromFile_Internal", path, crc, offset));
}
// Autogenerated method: UnityEngine.AssetBundle.LoadFromFile
UnityEngine::AssetBundle* UnityEngine::AssetBundle::LoadFromFile(::CsString* path) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AssetBundle*>("UnityEngine", "AssetBundle", "LoadFromFile", path));
}
// Autogenerated method: UnityEngine.AssetBundle.LoadAsset
UnityEngine::Object* UnityEngine::AssetBundle::LoadAsset(::CsString* name) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(this, "LoadAsset", name));
}
// Autogenerated method: UnityEngine.AssetBundle.LoadAsset
UnityEngine::Object* UnityEngine::AssetBundle::LoadAsset(::CsString* name, System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(this, "LoadAsset", name, type));
}
// Autogenerated method: UnityEngine.AssetBundle.LoadAsset_Internal
UnityEngine::Object* UnityEngine::AssetBundle::LoadAsset_Internal(::CsString* name, System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Object*>(this, "LoadAsset_Internal", name, type));
}
// Autogenerated method: UnityEngine.AssetBundle.LoadAssetAsync
UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAssetAsync(::CsString* name, System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AssetBundleRequest*>(this, "LoadAssetAsync", name, type));
}
// Autogenerated method: UnityEngine.AssetBundle.LoadAssetAsync_Internal
UnityEngine::AssetBundleRequest* UnityEngine::AssetBundle::LoadAssetAsync_Internal(::CsString* name, System::Type* type) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::AssetBundleRequest*>(this, "LoadAssetAsync_Internal", name, type));
}
// Autogenerated method: UnityEngine.AssetBundle.Unload
void UnityEngine::AssetBundle::Unload(bool unloadAllLoadedObjects) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Unload", unloadAllLoadedObjects));
}
// Autogenerated method: UnityEngine.AssetBundle.GetAllAssetNames
::Array<::CsString*>* UnityEngine::AssetBundle::GetAllAssetNames() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "GetAllAssetNames"));
}
// Autogenerated method: UnityEngine.AssetBundle.GetAllScenePaths
::Array<::CsString*>* UnityEngine::AssetBundle::GetAllScenePaths() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<::CsString*>*>(this, "GetAllScenePaths"));
}
// Autogenerated method: UnityEngine.AssetBundle..ctor
UnityEngine::AssetBundle* UnityEngine::AssetBundle::New_ctor() {
  return (AssetBundle*)THROW_UNLESS(il2cpp_utils::New("UnityEngine", "AssetBundle"));
}
