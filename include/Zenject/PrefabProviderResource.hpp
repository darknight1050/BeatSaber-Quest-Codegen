// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.IPrefabProvider
#include "Zenject/IPrefabProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct CsObject;
struct CsString;
// Completed il2cpp-utils forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabProviderResource
  class PrefabProviderResource : public ::CsObject, public Zenject::IPrefabProvider {
    public:
    // private readonly System.String _resourcePath
    // Offset: 0x10
    ::CsString* resourcePath;
    // public System.Void .ctor(System.String resourcePath)
    // Offset: 0xFAFC8C
    static PrefabProviderResource* New_ctor(::CsString* resourcePath);
    // public UnityEngine.Object GetPrefab()
    // Offset: 0xFAFCC0
    // Implemented from: Zenject.IPrefabProvider
    // Base method: UnityEngine.Object IPrefabProvider::GetPrefab()
    UnityEngine::Object* GetPrefab();
  }; // Zenject.PrefabProviderResource
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabProviderResource*, "Zenject", "PrefabProviderResource");
#pragma pack(pop)
