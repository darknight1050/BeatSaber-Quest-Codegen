// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerConnectedPlayerFacade
#include "GlobalNamespace/MultiplayerConnectedPlayerFacade.hpp"
// Including type: Zenject.PlaceholderFactory`3
#include "Zenject/PlaceholderFactory_3.hpp"
// Including type: MultiplayerPlayerStartState
#include "GlobalNamespace/MultiplayerPlayerStartState.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: MultiplayerConnectedPlayerFacade/Factory
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerFacade::Factory : public Zenject::PlaceholderFactory_3<GlobalNamespace::IConnectedPlayer*, GlobalNamespace::MultiplayerPlayerStartState, GlobalNamespace::MultiplayerConnectedPlayerFacade*> {
    public:
    // Creating value type constructor for type: Factory
    Factory() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x103F118
    // Implemented from: Zenject.PlaceholderFactory`3
    // Base method: System.Void PlaceholderFactory_3::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerFacade::Factory* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerFacade::Factory*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerFacade/Factory
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerFacade::Factory*, "", "MultiplayerConnectedPlayerFacade/Factory");
