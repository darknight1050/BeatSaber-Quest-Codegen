// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObservableVariableSO`1
#include "GlobalNamespace/ObservableVariableSO_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: BoolSO
  // [] Offset: FFFFFFFF
  class BoolSO : public GlobalNamespace::ObservableVariableSO_1<bool> {
    public:
    // Creating value type constructor for type: BoolSO
    BoolSO() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x102AA60
    // Implemented from: ObservableVariableSO`1
    // Base method: System.Void ObservableVariableSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoolSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BoolSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoolSO*, creationType>()));
    }
  }; // BoolSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BoolSO*, "", "BoolSO");
