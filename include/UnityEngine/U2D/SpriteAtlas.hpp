// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: UnityEngine.U2D
namespace UnityEngine::U2D {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.U2D.SpriteAtlas
  // [NativeHeaderAttribute] Offset: D90ECC
  // [NativeTypeAttribute] Offset: D90ECC
  class SpriteAtlas : public UnityEngine::Object {
    public:
    // Creating value type constructor for type: SpriteAtlas
    SpriteAtlas() noexcept {}
    // public System.Boolean CanBindTo(UnityEngine.Sprite sprite)
    // Offset: 0x2306AF8
    bool CanBindTo(UnityEngine::Sprite* sprite);
    // public UnityEngine.Sprite GetSprite(System.String name)
    // Offset: 0x2306B48
    UnityEngine::Sprite* GetSprite(::Il2CppString* name);
  }; // UnityEngine.U2D.SpriteAtlas
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::U2D::SpriteAtlas*, "UnityEngine.U2D", "SpriteAtlas");
