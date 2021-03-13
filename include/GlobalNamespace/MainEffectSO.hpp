// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: MainEffectSO
  // [] Offset: FFFFFFFF
  class MainEffectSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Creating value type constructor for type: MainEffectSO
    MainEffectSO() noexcept {}
    // public System.Void PreRender()
    // Offset: 0x20FA454
    void PreRender_NEW();
    // public System.Void Render(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single fade)
    // Offset: 0x20FA458
    void Render_NEW(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float fade);
    // public System.Void PostRender(System.Single fade)
    // Offset: 0x20FA45C
    void PostRender_NEW(float fade);
    // public System.Boolean get_hasPostProcessEffect()
    // Offset: 0x20FA460
    bool get_hasPostProcessEffect_NEW();
    // public System.Void .ctor()
    // Offset: 0x20F9ADC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainEffectSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MainEffectSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainEffectSO*, creationType>()));
    }
  }; // MainEffectSO
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectSO*, "", "MainEffectSO");
