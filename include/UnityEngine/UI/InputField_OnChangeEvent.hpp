// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.InputField
#include "UnityEngine/UI/InputField.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.InputField/OnChangeEvent
  // [] Offset: FFFFFFFF
  class InputField::OnChangeEvent : public UnityEngine::Events::UnityEvent_1<::Il2CppString*> {
    public:
    // Creating value type constructor for type: OnChangeEvent
    OnChangeEvent() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x182DB38
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputField::OnChangeEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::InputField::OnChangeEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputField::OnChangeEvent*, creationType>()));
    }
  }; // UnityEngine.UI.InputField/OnChangeEvent
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::InputField::OnChangeEvent*, "UnityEngine.UI", "InputField/OnChangeEvent");
