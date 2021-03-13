// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.AbstractEventData
  // [] Offset: FFFFFFFF
  class AbstractEventData : public ::Il2CppObject {
    public:
    // protected System.Boolean m_Used
    // Size: 0x1
    // Offset: 0x10
    bool m_Used;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AbstractEventData
    AbstractEventData(bool m_Used_ = {}) noexcept : m_Used{m_Used_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_Used;
    }
    // public System.Void Reset()
    // Offset: 0x130E688
    void Reset_NEW();
    // public System.Void Use()
    // Offset: 0x130E690
    void Use_NEW();
    // public System.Boolean get_used()
    // Offset: 0x130E69C
    bool get_used_NEW();
    // protected System.Void .ctor()
    // Offset: 0x130E6A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractEventData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::AbstractEventData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractEventData*, creationType>()));
    }
  }; // UnityEngine.EventSystems.AbstractEventData
  #pragma pack(pop)
  static check_size<sizeof(AbstractEventData), 16 + sizeof(bool)> __UnityEngine_EventSystems_AbstractEventDataSizeCheck;
  static_assert(sizeof(AbstractEventData) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::AbstractEventData*, "UnityEngine.EventSystems", "AbstractEventData");
