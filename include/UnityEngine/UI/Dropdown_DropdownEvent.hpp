// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.Dropdown/DropdownEvent
  // [] Offset: FFFFFFFF
  class Dropdown::DropdownEvent : public UnityEngine::Events::UnityEvent_1<int> {
    public:
    // Creating value type constructor for type: DropdownEvent
    DropdownEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x14C6438
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::DropdownEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Dropdown::DropdownEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::DropdownEvent*, creationType>()));
    }
  }; // UnityEngine.UI.Dropdown/DropdownEvent
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Dropdown::DropdownEvent*, "UnityEngine.UI", "Dropdown/DropdownEvent");
