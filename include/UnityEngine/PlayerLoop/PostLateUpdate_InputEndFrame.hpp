// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.PlayerLoop.PostLateUpdate
#include "UnityEngine/PlayerLoop/PostLateUpdate.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CA9DC8
  struct PostLateUpdate::InputEndFrame/*, public System::ValueType*/ {
    public:
    // Creating value type constructor for type: InputEndFrame
    constexpr InputEndFrame() noexcept {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.PostLateUpdate/InputEndFrame
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::PostLateUpdate::InputEndFrame, "UnityEngine.PlayerLoop", "PostLateUpdate/InputEndFrame");
