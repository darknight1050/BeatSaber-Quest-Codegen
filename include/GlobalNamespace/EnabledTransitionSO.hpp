// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseTransitionSO
#include "GlobalNamespace/BaseTransitionSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x26
  #pragma pack(push, 1)
  // Autogenerated type: EnabledTransitionSO
  class EnabledTransitionSO : public GlobalNamespace::BaseTransitionSO {
    public:
    // private System.Boolean _normalState
    // Size: 0x1
    // Offset: 0x20
    bool normalState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _highlightedState
    // Size: 0x1
    // Offset: 0x21
    bool highlightedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _pressedState
    // Size: 0x1
    // Offset: 0x22
    bool pressedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _disabledState
    // Size: 0x1
    // Offset: 0x23
    bool disabledState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _selectedState
    // Size: 0x1
    // Offset: 0x24
    bool selectedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _selectedAndHighlightedState
    // Size: 0x1
    // Offset: 0x25
    bool selectedAndHighlightedState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: EnabledTransitionSO
    EnabledTransitionSO(bool normalState_ = {}, bool highlightedState_ = {}, bool pressedState_ = {}, bool disabledState_ = {}, bool selectedState_ = {}, bool selectedAndHighlightedState_ = {}) noexcept : normalState{normalState_}, highlightedState{highlightedState_}, pressedState{pressedState_}, disabledState{disabledState_}, selectedState{selectedState_}, selectedAndHighlightedState{selectedAndHighlightedState_} {}
    // public System.Boolean get_normalState()
    // Offset: 0x10BDD40
    bool get_normalState();
    // public System.Boolean get_highlightedState()
    // Offset: 0x10BDD48
    bool get_highlightedState();
    // public System.Boolean get_pressedState()
    // Offset: 0x10BDD50
    bool get_pressedState();
    // public System.Boolean get_disabledState()
    // Offset: 0x10BDD58
    bool get_disabledState();
    // public System.Boolean get_selectedState()
    // Offset: 0x10BDD60
    bool get_selectedState();
    // public System.Boolean get_selectedAndHighlightedState()
    // Offset: 0x10BDD68
    bool get_selectedAndHighlightedState();
    // public System.Void .ctor()
    // Offset: 0x10BDD70
    // Implemented from: BaseTransitionSO
    // Base method: System.Void BaseTransitionSO::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnabledTransitionSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnabledTransitionSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnabledTransitionSO*, creationType>()));
    }
  }; // EnabledTransitionSO
  #pragma pack(pop)
  static check_size<sizeof(EnabledTransitionSO), 37 + sizeof(bool)> __GlobalNamespace_EnabledTransitionSOSizeCheck;
  static_assert(sizeof(EnabledTransitionSO) == 0x26);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnabledTransitionSO*, "", "EnabledTransitionSO");
