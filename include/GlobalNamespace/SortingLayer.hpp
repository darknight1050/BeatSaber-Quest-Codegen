// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SortingLayer
  class SortingLayer : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Renderer _renderer
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Renderer* renderer;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // Creating value type constructor for type: SortingLayer
    SortingLayer(UnityEngine::Renderer* renderer_ = {}) noexcept : renderer{renderer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.Renderer get_renderer()
    // Offset: 0x2351918
    UnityEngine::Renderer* get_renderer();
    // private System.Void Reset()
    // Offset: 0x2351920
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x2351978
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SortingLayer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SortingLayer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SortingLayer*, creationType>()));
    }
  }; // SortingLayer
  #pragma pack(pop)
  static check_size<sizeof(SortingLayer), 24 + sizeof(UnityEngine::Renderer*)> __GlobalNamespace_SortingLayerSizeCheck;
  static_assert(sizeof(SortingLayer) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SortingLayer*, "", "SortingLayer");
