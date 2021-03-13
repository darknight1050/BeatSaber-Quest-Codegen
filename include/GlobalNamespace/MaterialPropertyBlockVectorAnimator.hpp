// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MaterialPropertyBlockAnimator
#include "GlobalNamespace/MaterialPropertyBlockAnimator.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MaterialPropertyBlockVectorAnimator
  // [] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: CFFBB8
  class MaterialPropertyBlockVectorAnimator : public GlobalNamespace::MaterialPropertyBlockAnimator {
    public:
    // Writing base type padding for base size: 0x2D to desired offset: 0x30
    char ___base_padding[0x3] = {};
    // [SpaceAttribute] Offset: 0xD01070
    // private UnityEngine.Vector4 _vector
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Vector4 vector;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // Creating value type constructor for type: MaterialPropertyBlockVectorAnimator
    MaterialPropertyBlockVectorAnimator(UnityEngine::Vector4 vector_ = {}) noexcept : vector{vector_} {}
    // protected override System.Void SetProperty()
    // Offset: 0x1CE1F80
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::SetProperty_NEW()
    void SetProperty();
    // public System.Void .ctor()
    // Offset: 0x1CE1FC0
    // Implemented from: MaterialPropertyBlockAnimator
    // Base method: System.Void MaterialPropertyBlockAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaterialPropertyBlockVectorAnimator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MaterialPropertyBlockVectorAnimator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaterialPropertyBlockVectorAnimator*, creationType>()));
    }
  }; // MaterialPropertyBlockVectorAnimator
  #pragma pack(pop)
  static check_size<sizeof(MaterialPropertyBlockVectorAnimator), 48 + sizeof(UnityEngine::Vector4)> __GlobalNamespace_MaterialPropertyBlockVectorAnimatorSizeCheck;
  static_assert(sizeof(MaterialPropertyBlockVectorAnimator) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockVectorAnimator*, "", "MaterialPropertyBlockVectorAnimator");
