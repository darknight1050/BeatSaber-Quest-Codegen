// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMCache`2<K, V>
  template<typename K, typename V>
  class HMCache_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SimpleTextureLoader
  class SimpleTextureLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SimpleTextureLoader::$LoadTextureCoroutine$d__2
    class $LoadTextureCoroutine$d__2;
    // Creating value type constructor for type: SimpleTextureLoader
    SimpleTextureLoader() noexcept {}
    // Get static field: static private HMCache`2<System.String,UnityEngine.Texture2D> _cache
    static GlobalNamespace::HMCache_2<::Il2CppString*, UnityEngine::Texture2D*>* _get__cache();
    // Set static field: static private HMCache`2<System.String,UnityEngine.Texture2D> _cache
    static void _set__cache(GlobalNamespace::HMCache_2<::Il2CppString*, UnityEngine::Texture2D*>* value);
    // static public System.Void LoadTexture(System.String filePath, System.Boolean useCache, System.Action`1<UnityEngine.Texture2D> finishedCallback)
    // Offset: 0x10EF008
    static void LoadTexture(::Il2CppString* filePath, bool useCache, System::Action_1<UnityEngine::Texture2D*>* finishedCallback);
    // static public System.Collections.IEnumerator LoadTextureCoroutine(System.String filePath, System.Boolean useCache, System.Action`1<UnityEngine.Texture2D> finishedCallback)
    // Offset: 0x10EF0D4
    static System::Collections::IEnumerator* LoadTextureCoroutine(::Il2CppString* filePath, bool useCache, System::Action_1<UnityEngine::Texture2D*>* finishedCallback);
    // static private System.Void .cctor()
    // Offset: 0x10EF188
    static void _cctor();
  }; // SimpleTextureLoader
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleTextureLoader*, "", "SimpleTextureLoader");
