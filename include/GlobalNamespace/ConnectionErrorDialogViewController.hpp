// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SimpleDialogPromptViewController
#include "GlobalNamespace/SimpleDialogPromptViewController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: DisconnectedReason
  struct DisconnectedReason;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x98
  // Autogenerated type: ConnectionErrorDialogViewController
  // [] Offset: FFFFFFFF
  class ConnectionErrorDialogViewController : public GlobalNamespace::SimpleDialogPromptViewController {
    public:
    // Nested type: GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Creating value type constructor for type: ConnectionErrorDialogViewController
    ConnectionErrorDialogViewController() noexcept {}
    // public System.Void Init(DisconnectedReason reason, System.Action buttonAction)
    // Offset: 0x1A53B90
    void Init(GlobalNamespace::DisconnectedReason reason, System::Action* buttonAction);
    // public System.Void .ctor()
    // Offset: 0x1A53DD4
    // Implemented from: SimpleDialogPromptViewController
    // Base method: System.Void SimpleDialogPromptViewController::.ctor()
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectionErrorDialogViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ConnectionErrorDialogViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectionErrorDialogViewController*, creationType>()));
    }
  }; // ConnectionErrorDialogViewController
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectionErrorDialogViewController*, "", "ConnectionErrorDialogViewController");
#pragma pack(pop)
