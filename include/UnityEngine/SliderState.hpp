// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x19
  // Autogenerated type: UnityEngine.SliderState
  // [] Offset: FFFFFFFF
  class SliderState : public ::Il2CppObject {
    public:
    // public System.Single dragStartPos
    // Size: 0x4
    // Offset: 0x10
    float dragStartPos;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single dragStartValue
    // Size: 0x4
    // Offset: 0x14
    float dragStartValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean isDragging
    // Size: 0x1
    // Offset: 0x18
    bool isDragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SliderState
    SliderState(float dragStartPos_ = {}, float dragStartValue_ = {}, bool isDragging_ = {}) noexcept : dragStartPos{dragStartPos_}, dragStartValue{dragStartValue_}, isDragging{isDragging_} {}
    // public System.Void .ctor()
    // Offset: 0x1611F64
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::SliderState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderState*, creationType>()));
    }
  }; // UnityEngine.SliderState
  static check_size<sizeof(SliderState), 24 + sizeof(bool)> __UnityEngine_SliderStateSizeCheck;
  static_assert(sizeof(SliderState) == 0x19);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SliderState*, "UnityEngine", "SliderState");
#pragma pack(pop)
