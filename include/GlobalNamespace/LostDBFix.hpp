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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: LostDBFix
  class LostDBFix : public UnityEngine::MonoBehaviour {
    public:
    // Creating value type constructor for type: LostDBFix
    LostDBFix() noexcept {}
    // private System.Void OnPreRender()
    // Offset: 0x10D4ED4
    void OnPreRender();
    // private System.Void OnPostRender()
    // Offset: 0x10D4ED8
    void OnPostRender();
    // public System.Void .ctor()
    // Offset: 0x10D4EDC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LostDBFix* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LostDBFix::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LostDBFix*, creationType>()));
    }
  }; // LostDBFix
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LostDBFix*, "", "LostDBFix");
