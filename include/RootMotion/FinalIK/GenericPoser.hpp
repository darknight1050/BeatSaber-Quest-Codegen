// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.Poser
#include "RootMotion/FinalIK/Poser.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.GenericPoser
  class GenericPoser : public RootMotion::FinalIK::Poser {
    public:
    // Writing base type padding for base size: 0x4D to desired offset: 0x50
    char ___base_padding[0x3] = {};
    // Nested type: RootMotion::FinalIK::GenericPoser::Map
    class Map;
    // public RootMotion.FinalIK.GenericPoser/Map[] maps
    // Size: 0x8
    // Offset: 0x50
    ::Array<RootMotion::FinalIK::GenericPoser::Map*>* maps;
    // Field size check
    static_assert(sizeof(::Array<RootMotion::FinalIK::GenericPoser::Map*>*) == 0x8);
    // Creating value type constructor for type: GenericPoser
    GenericPoser(::Array<RootMotion::FinalIK::GenericPoser::Map*>* maps_ = {}) noexcept : maps{maps_} {}
    // private System.Void StoreDefaultState()
    // Offset: 0x1C3D870
    void StoreDefaultState();
    // private UnityEngine.Transform GetTargetNamed(System.String tName, UnityEngine.Transform[] array)
    // Offset: 0x1C3D794
    UnityEngine::Transform* GetTargetNamed(::Il2CppString* tName, ::Array<UnityEngine::Transform*>* array);
    // public override System.Void AutoMapping()
    // Offset: 0x1C3D54C
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::AutoMapping()
    void AutoMapping();
    // protected override System.Void InitiatePoser()
    // Offset: 0x1C3D8D8
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::InitiatePoser()
    void InitiatePoser();
    // protected override System.Void UpdatePoser()
    // Offset: 0x1C3D8DC
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::UpdatePoser()
    void UpdatePoser();
    // protected override System.Void FixPoserTransforms()
    // Offset: 0x1C3DB84
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::FixPoserTransforms()
    void FixPoserTransforms();
    // public System.Void .ctor()
    // Offset: 0x1C3DC88
    // Implemented from: RootMotion.FinalIK.Poser
    // Base method: System.Void Poser::.ctor()
    // Base method: System.Void SolverManager::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GenericPoser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::GenericPoser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GenericPoser*, creationType>()));
    }
  }; // RootMotion.FinalIK.GenericPoser
  #pragma pack(pop)
  static check_size<sizeof(GenericPoser), 80 + sizeof(::Array<RootMotion::FinalIK::GenericPoser::Map*>*)> __RootMotion_FinalIK_GenericPoserSizeCheck;
  static_assert(sizeof(GenericPoser) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::GenericPoser*, "RootMotion.FinalIK", "GenericPoser");
