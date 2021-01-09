// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.InjectAttributeBase
#include "Zenject/InjectAttributeBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x24
  // Autogenerated type: Zenject.InjectAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D82394
  class InjectAttribute : public Zenject::InjectAttributeBase {
    public:
    // Creating value type constructor for type: InjectAttribute
    InjectAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x19EEBF8
    // Implemented from: Zenject.InjectAttributeBase
    // Base method: System.Void InjectAttributeBase::.ctor()
    // Base method: System.Void PreserveAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectAttribute*, creationType>()));
    }
  }; // Zenject.InjectAttribute
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectAttribute*, "Zenject", "InjectAttribute");
#pragma pack(pop)
