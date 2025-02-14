// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassBackgroundTextureGradient
#include "GlobalNamespace/BloomPrePassBackgroundTextureGradient.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: NativeArray`1<T>
  template<typename T>
  struct NativeArray_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassBackgroundColorsGradient
  class BloomPrePassBackgroundColorsGradient : public GlobalNamespace::BloomPrePassBackgroundTextureGradient {
    public:
    // Nested type: GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element
    class Element;
    // private BloomPrePassBackgroundColorsGradient/Element[] _elements
    // Size: 0x8
    // Offset: 0x30
    ::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>* elements;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>*) == 0x8);
    // Creating value type constructor for type: BloomPrePassBackgroundColorsGradient
    BloomPrePassBackgroundColorsGradient(::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>* elements_ = {}) noexcept : elements{elements_} {}
    // public BloomPrePassBackgroundColorsGradient/Element[] get_elements()
    // Offset: 0x1D6AEE4
    ::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>* get_elements();
    // private UnityEngine.Color EvaluateColor(System.Single t)
    // Offset: 0x1D6AF58
    UnityEngine::Color EvaluateColor(float t);
    // protected override System.Void UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    // Offset: 0x1D6AEEC
    // Implemented from: BloomPrePassBackgroundTextureGradient
    // Base method: System.Void BloomPrePassBackgroundTextureGradient::UpdatePixels(Unity.Collections.NativeArray`1<UnityEngine.Color32> pixels, System.Int32 numberOfPixels)
    void UpdatePixels(Unity::Collections::NativeArray_1<UnityEngine::Color32> pixels, int numberOfPixels);
    // public System.Void .ctor()
    // Offset: 0x1D6B0E0
    // Implemented from: BloomPrePassBackgroundTextureGradient
    // Base method: System.Void BloomPrePassBackgroundTextureGradient::.ctor()
    // Base method: System.Void BloomPrePassNonLightPass::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassBackgroundColorsGradient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassBackgroundColorsGradient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassBackgroundColorsGradient*, creationType>()));
    }
  }; // BloomPrePassBackgroundColorsGradient
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassBackgroundColorsGradient), 48 + sizeof(::Array<GlobalNamespace::BloomPrePassBackgroundColorsGradient::Element*>*)> __GlobalNamespace_BloomPrePassBackgroundColorsGradientSizeCheck;
  static_assert(sizeof(BloomPrePassBackgroundColorsGradient) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundColorsGradient*, "", "BloomPrePassBackgroundColorsGradient");
