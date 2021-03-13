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
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassLightTypeSO
  // [] Offset: FFFFFFFF
  class BloomPrePassLightTypeSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Int32 _renderingPriority
    // Size: 0x4
    // Offset: 0x18
    int renderingPriority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: renderingPriority and: material
    char __padding0[0x4] = {};
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: BloomPrePassLightTypeSO
    BloomPrePassLightTypeSO(int renderingPriority_ = {}, UnityEngine::Material* material_ = {}) noexcept : renderingPriority{renderingPriority_}, material{material_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Int32 get_renderingPriority()
    // Offset: 0x1CDA934
    int get_renderingPriority();
    // public UnityEngine.Material get_material()
    // Offset: 0x1CDA93C
    UnityEngine::Material* get_material();
    // public System.Void .ctor()
    // Offset: 0x1CDA944
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassLightTypeSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassLightTypeSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassLightTypeSO*, creationType>()));
    }
  }; // BloomPrePassLightTypeSO
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassLightTypeSO), 32 + sizeof(UnityEngine::Material*)> __GlobalNamespace_BloomPrePassLightTypeSOSizeCheck;
  static_assert(sizeof(BloomPrePassLightTypeSO) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassLightTypeSO*, "", "BloomPrePassLightTypeSO");
