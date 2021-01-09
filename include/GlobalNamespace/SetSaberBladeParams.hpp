// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  // Autogenerated type: SetSaberBladeParams
  // [] Offset: FFFFFFFF
  class SetSaberBladeParams : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair
    class PropertyTintColorPair;
    // private SaberTypeObject _saber
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::SaberTypeObject* saber;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SaberTypeObject*) == 0x8);
    // private UnityEngine.MeshRenderer _meshRenderer
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::MeshRenderer* meshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // [NullAllowed] Offset: 0xDCAFA0
    // private SetSaberBladeParams/PropertyTintColorPair[] _propertyTintColorPairs
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>* propertyTintColorPairs;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>*) == 0x8);
    // [InjectAttribute] Offset: 0xDCAFD8
    // private ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // Creating value type constructor for type: SetSaberBladeParams
    SetSaberBladeParams(GlobalNamespace::SaberTypeObject* saber_ = {}, UnityEngine::MeshRenderer* meshRenderer_ = {}, ::Array<GlobalNamespace::SetSaberBladeParams::PropertyTintColorPair*>* propertyTintColorPairs_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}) noexcept : saber{saber_}, meshRenderer{meshRenderer_}, propertyTintColorPairs{propertyTintColorPairs_}, colorManager{colorManager_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFCC1CC
    void Start();
    // public System.Void .ctor()
    // Offset: 0xFCC2D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetSaberBladeParams* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SetSaberBladeParams::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetSaberBladeParams*, creationType>()));
    }
  }; // SetSaberBladeParams
  static check_size<sizeof(SetSaberBladeParams), 48 + sizeof(GlobalNamespace::ColorManager*)> __GlobalNamespace_SetSaberBladeParamsSizeCheck;
  static_assert(sizeof(SetSaberBladeParams) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetSaberBladeParams*, "", "SetSaberBladeParams");
#pragma pack(pop)
