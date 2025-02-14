// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ReflectionMethodsCache
  class ReflectionMethodsCache : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::UI::ReflectionMethodsCache::Raycast3DCallback
    class Raycast3DCallback;
    // Nested type: UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback
    class RaycastAllCallback;
    // Nested type: UnityEngine::UI::ReflectionMethodsCache::GetRaycastNonAllocCallback
    class GetRaycastNonAllocCallback;
    // Nested type: UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback
    class Raycast2DCallback;
    // Nested type: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback
    class GetRayIntersectionAllCallback;
    // Nested type: UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback
    class GetRayIntersectionAllNonAllocCallback;
    // public UnityEngine.UI.ReflectionMethodsCache/Raycast3DCallback raycast3D
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::UI::ReflectionMethodsCache::Raycast3DCallback* raycast3D;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ReflectionMethodsCache::Raycast3DCallback*) == 0x8);
    // public UnityEngine.UI.ReflectionMethodsCache/RaycastAllCallback raycast3DAll
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback* raycast3DAll;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback*) == 0x8);
    // public UnityEngine.UI.ReflectionMethodsCache/GetRaycastNonAllocCallback getRaycastNonAlloc
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::ReflectionMethodsCache::GetRaycastNonAllocCallback* getRaycastNonAlloc;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ReflectionMethodsCache::GetRaycastNonAllocCallback*) == 0x8);
    // public UnityEngine.UI.ReflectionMethodsCache/Raycast2DCallback raycast2D
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback* raycast2D;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback*) == 0x8);
    // public UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllCallback getRayIntersectionAll
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback* getRayIntersectionAll;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback*) == 0x8);
    // public UnityEngine.UI.ReflectionMethodsCache/GetRayIntersectionAllNonAllocCallback getRayIntersectionAllNonAlloc
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*) == 0x8);
    // Creating value type constructor for type: ReflectionMethodsCache
    ReflectionMethodsCache(UnityEngine::UI::ReflectionMethodsCache::Raycast3DCallback* raycast3D_ = {}, UnityEngine::UI::ReflectionMethodsCache::RaycastAllCallback* raycast3DAll_ = {}, UnityEngine::UI::ReflectionMethodsCache::GetRaycastNonAllocCallback* getRaycastNonAlloc_ = {}, UnityEngine::UI::ReflectionMethodsCache::Raycast2DCallback* raycast2D_ = {}, UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllCallback* getRayIntersectionAll_ = {}, UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback* getRayIntersectionAllNonAlloc_ = {}) noexcept : raycast3D{raycast3D_}, raycast3DAll{raycast3DAll_}, getRaycastNonAlloc{getRaycastNonAlloc_}, raycast2D{raycast2D_}, getRayIntersectionAll{getRayIntersectionAll_}, getRayIntersectionAllNonAlloc{getRayIntersectionAllNonAlloc_} {}
    // Get static field: static private UnityEngine.UI.ReflectionMethodsCache s_ReflectionMethodsCache
    static UnityEngine::UI::ReflectionMethodsCache* _get_s_ReflectionMethodsCache();
    // Set static field: static private UnityEngine.UI.ReflectionMethodsCache s_ReflectionMethodsCache
    static void _set_s_ReflectionMethodsCache(UnityEngine::UI::ReflectionMethodsCache* value);
    // static public UnityEngine.UI.ReflectionMethodsCache get_Singleton()
    // Offset: 0x199B0C4
    static UnityEngine::UI::ReflectionMethodsCache* get_Singleton();
    // static private System.Void .cctor()
    // Offset: 0x199B184
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x199A5D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionMethodsCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::ReflectionMethodsCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionMethodsCache*, creationType>()));
    }
  }; // UnityEngine.UI.ReflectionMethodsCache
  #pragma pack(pop)
  static check_size<sizeof(ReflectionMethodsCache), 56 + sizeof(UnityEngine::UI::ReflectionMethodsCache::GetRayIntersectionAllNonAllocCallback*)> __UnityEngine_UI_ReflectionMethodsCacheSizeCheck;
  static_assert(sizeof(ReflectionMethodsCache) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ReflectionMethodsCache*, "UnityEngine.UI", "ReflectionMethodsCache");
