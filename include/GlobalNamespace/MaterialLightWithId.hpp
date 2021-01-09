// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIdMonoBehaviour
#include "GlobalNamespace/LightWithIdMonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  // Autogenerated type: MaterialLightWithId
  // [] Offset: FFFFFFFF
  class MaterialLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
    public:
    // Writing base type padding for base size: 0x29 to desired offset: 0x30
    char ___base_padding[0x7] = {};
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // private System.Boolean _alphaIntoColor
    // Size: 0x1
    // Offset: 0x38
    bool alphaIntoColor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _setColorOnly
    // Size: 0x1
    // Offset: 0x39
    bool setColorOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: setColorOnly and: colorProperty
    char __padding2[0x6] = {};
    // private System.String _colorProperty
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* colorProperty;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [DrawIfAttribute] Offset: 0xDA5184
    // private System.Single _alphaIntensity
    // Size: 0x4
    // Offset: 0x48
    float alphaIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x4C
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // private System.Single _alpha
    // Size: 0x4
    // Offset: 0x5C
    float alpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _propertyId
    // Size: 0x4
    // Offset: 0x60
    int propertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MaterialLightWithId
    MaterialLightWithId(UnityEngine::MeshRenderer* meshRenderer_ = {}, bool alphaIntoColor_ = {}, bool setColorOnly_ = {}, ::Il2CppString* colorProperty_ = {}, float alphaIntensity_ = {}, UnityEngine::Color color_ = {}, float alpha_ = {}, int propertyId_ = {}) noexcept : meshRenderer{meshRenderer_}, alphaIntoColor{alphaIntoColor_}, setColorOnly{setColorOnly_}, colorProperty{colorProperty_}, alphaIntensity{alphaIntensity_}, color{color_}, alpha{alpha_}, propertyId{propertyId_} {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDA5228
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x187D864
    UnityEngine::Color get_color();
    // protected System.Void Awake()
    // Offset: 0x187D870
    void Awake();
    // public override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x187D8CC
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x187DA70
    // Implemented from: LightWithIdMonoBehaviour
    // Base method: System.Void LightWithIdMonoBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialLightWithId* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialLightWithId::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialLightWithId*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x187DAE0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // MaterialLightWithId
  static check_size<sizeof(MaterialLightWithId), 96 + sizeof(int)> __GlobalNamespace_MaterialLightWithIdSizeCheck;
  static_assert(sizeof(MaterialLightWithId) == 0x64);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialLightWithId*, "", "MaterialLightWithId");
#pragma pack(pop)
