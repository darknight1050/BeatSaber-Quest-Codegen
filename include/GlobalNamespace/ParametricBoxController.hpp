// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: ParametricBoxController
  // [RequireComponent] Offset: DF3744
  // [RequireComponent] Offset: DF3744
  // [ExecuteInEditMode] Offset: DF3744
  class ParametricBoxController : public UnityEngine::MonoBehaviour {
    public:
    // public System.Single width
    // Size: 0x4
    // Offset: 0x18
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single height
    // Size: 0x4
    // Offset: 0x1C
    float height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single length
    // Size: 0x4
    // Offset: 0x20
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDF402C
    // public System.Single heightCenter
    // Size: 0x4
    // Offset: 0x24
    float heightCenter;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x28
    UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public System.Single alphaMultiplier
    // Size: 0x4
    // Offset: 0x38
    float alphaMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minAlpha
    // Size: 0x4
    // Offset: 0x3C
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDF4044
    // [RangeAttribute] Offset: 0xDF4044
    // public System.Single alphaStart
    // Size: 0x4
    // Offset: 0x40
    float alphaStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0xDF4084
    // public System.Single alphaEnd
    // Size: 0x4
    // Offset: 0x44
    float alphaEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single widthStart
    // Size: 0x4
    // Offset: 0x48
    float widthStart;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single widthEnd
    // Size: 0x4
    // Offset: 0x4C
    float widthEnd;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0xDF409C
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // Creating value type constructor for type: ParametricBoxController
    ParametricBoxController(float width_ = {}, float height_ = {}, float length_ = {}, float heightCenter_ = {}, UnityEngine::Color color_ = {}, float alphaMultiplier_ = {}, float minAlpha_ = {}, float alphaStart_ = {}, float alphaEnd_ = {}, float widthStart_ = {}, float widthEnd_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}) noexcept : width{width_}, height{height_}, length{length_}, heightCenter{heightCenter_}, color{color_}, alphaMultiplier{alphaMultiplier_}, minAlpha{minAlpha_}, alphaStart{alphaStart_}, alphaEnd{alphaEnd_}, widthStart{widthStart_}, widthEnd{widthEnd_}, meshRenderer{meshRenderer_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static UnityEngine::MaterialPropertyBlock* _get__materialPropertyBlock();
    // Set static field: static private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    static void _set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock* value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF40D4
    // Get static field: static private readonly System.Int32 _colorID
    static int _get__colorID();
    // Set static field: static private readonly System.Int32 _colorID
    static void _set__colorID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF40E4
    // Get static field: static private readonly System.Int32 _alphaStartID
    static int _get__alphaStartID();
    // Set static field: static private readonly System.Int32 _alphaStartID
    static void _set__alphaStartID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF40F4
    // Get static field: static private readonly System.Int32 _alphaEndID
    static int _get__alphaEndID();
    // Set static field: static private readonly System.Int32 _alphaEndID
    static void _set__alphaEndID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF4104
    // Get static field: static private readonly System.Int32 _widthStartID
    static int _get__widthStartID();
    // Set static field: static private readonly System.Int32 _widthStartID
    static void _set__widthStartID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xDF4114
    // Get static field: static private readonly System.Int32 _widthEndID
    static int _get__widthEndID();
    // Set static field: static private readonly System.Int32 _widthEndID
    static void _set__widthEndID(int value);
    // protected System.Void Awake()
    // Offset: 0x1D7599C
    void Awake();
    // protected System.Void OnEnable()
    // Offset: 0x1D759BC
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x1D75C9C
    void OnDisable();
    // public System.Void Refresh()
    // Offset: 0x1D759F0
    void Refresh();
    // public System.Void .ctor()
    // Offset: 0x1D75CBC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParametricBoxController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ParametricBoxController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParametricBoxController*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1D75CE0
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ParametricBoxController
  #pragma pack(pop)
  static check_size<sizeof(ParametricBoxController), 80 + sizeof(UnityEngine::MeshRenderer*)> __GlobalNamespace_ParametricBoxControllerSizeCheck;
  static_assert(sizeof(ParametricBoxController) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ParametricBoxController*, "", "ParametricBoxController");
