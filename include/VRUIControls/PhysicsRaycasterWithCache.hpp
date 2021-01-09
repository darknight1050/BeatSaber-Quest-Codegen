// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Size: 0x1C
  // Autogenerated type: VRUIControls.PhysicsRaycasterWithCache
  // [] Offset: FFFFFFFF
  class PhysicsRaycasterWithCache : public ::Il2CppObject {
    public:
    // Nested type: VRUIControls::PhysicsRaycasterWithCache::CachedRaycast
    struct CachedRaycast;
    // Size: 0x50
    // Autogenerated type: VRUIControls.PhysicsRaycasterWithCache/CachedRaycast
    // [] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct CachedRaycast/*, public System::ValueType*/ {
      public:
      // public readonly System.Boolean wasHit
      // Size: 0x1
      // Offset: 0x0
      bool wasHit;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: wasHit and: ray
      char __padding0[0x3] = {};
      // public readonly UnityEngine.Ray ray
      // Size: 0x18
      // Offset: 0x4
      UnityEngine::Ray ray;
      // Field size check
      static_assert(sizeof(UnityEngine::Ray) == 0x18);
      // public readonly UnityEngine.RaycastHit hitInfo
      // Size: 0x2C
      // Offset: 0x1C
      UnityEngine::RaycastHit hitInfo;
      // Field size check
      static_assert(sizeof(UnityEngine::RaycastHit) == 0x2C);
      // public readonly System.Single maxDistance
      // Size: 0x4
      // Offset: 0x48
      float maxDistance;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public readonly System.Int32 layerMask
      // Size: 0x4
      // Offset: 0x4C
      int layerMask;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: CachedRaycast
      constexpr CachedRaycast(bool wasHit_ = {}, UnityEngine::Ray ray_ = {}, UnityEngine::RaycastHit hitInfo_ = {}, float maxDistance_ = {}, int layerMask_ = {}) noexcept : wasHit{wasHit_}, ray{ray_}, hitInfo{hitInfo_}, maxDistance{maxDistance_}, layerMask{layerMask_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // public System.Void .ctor(System.Boolean wasHit, UnityEngine.Ray ray, UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
      // Offset: 0xCB5CA0
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  CachedRaycast(bool wasHit, UnityEngine::Ray ray, UnityEngine::RaycastHit hitInfo, float maxDistance, int layerMask)
    }; // VRUIControls.PhysicsRaycasterWithCache/CachedRaycast
    static check_size<sizeof(PhysicsRaycasterWithCache::CachedRaycast), 76 + sizeof(int)> __VRUIControls_PhysicsRaycasterWithCache_CachedRaycastSizeCheck;
    static_assert(sizeof(PhysicsRaycasterWithCache::CachedRaycast) == 0x50);
    // private readonly System.Collections.Generic.List`1<VRUIControls.PhysicsRaycasterWithCache/CachedRaycast> _cachedRaycasts
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<VRUIControls::PhysicsRaycasterWithCache::CachedRaycast>* cachedRaycasts;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<VRUIControls::PhysicsRaycasterWithCache::CachedRaycast>*) == 0x8);
    // private System.Int32 _lastFrameCount
    // Size: 0x4
    // Offset: 0x18
    int lastFrameCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: PhysicsRaycasterWithCache
    PhysicsRaycasterWithCache(System::Collections::Generic::List_1<VRUIControls::PhysicsRaycasterWithCache::CachedRaycast>* cachedRaycasts_ = {}, int lastFrameCount_ = {}) noexcept : cachedRaycasts{cachedRaycasts_}, lastFrameCount{lastFrameCount_} {}
    // public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x198F8A0
    bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // public System.Void .ctor()
    // Offset: 0x198FD44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicsRaycasterWithCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("VRUIControls::PhysicsRaycasterWithCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicsRaycasterWithCache*, creationType>()));
    }
  }; // VRUIControls.PhysicsRaycasterWithCache
  static check_size<sizeof(PhysicsRaycasterWithCache), 24 + sizeof(int)> __VRUIControls_PhysicsRaycasterWithCacheSizeCheck;
  static_assert(sizeof(PhysicsRaycasterWithCache) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::PhysicsRaycasterWithCache*, "VRUIControls", "PhysicsRaycasterWithCache");
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::PhysicsRaycasterWithCache::CachedRaycast, "VRUIControls", "PhysicsRaycasterWithCache/CachedRaycast");
#pragma pack(pop)
