// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.IPlayableOutput
#include "UnityEngine/Playables/IPlayableOutput.hpp"
// Including type: UnityEngine.Playables.PlayableOutputHandle
#include "UnityEngine/Playables/PlayableOutputHandle.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.Playables
namespace UnityEngine::Experimental::Playables {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.Playables.TexturePlayableOutput
  // [NativeHeaderAttribute] Offset: D927A8
  // [NativeHeaderAttribute] Offset: D927A8
  // [NativeHeaderAttribute] Offset: D927A8
  // [StaticAccessorAttribute] Offset: D927A8
  // [RequiredByNativeCodeAttribute] Offset: D927A8
  struct TexturePlayableOutput/*, public System::ValueType, public UnityEngine::Playables::IPlayableOutput*/ {
    public:
    // private UnityEngine.Playables.PlayableOutputHandle m_Handle
    // Size: 0xC
    // Offset: 0x0
    UnityEngine::Playables::PlayableOutputHandle m_Handle;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableOutputHandle) == 0xC);
    // Creating value type constructor for type: TexturePlayableOutput
    constexpr TexturePlayableOutput(UnityEngine::Playables::PlayableOutputHandle m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::Playables::IPlayableOutput
    operator UnityEngine::Playables::IPlayableOutput() noexcept {
      return *reinterpret_cast<UnityEngine::Playables::IPlayableOutput*>(this);
    }
    // Creating conversion operator: operator UnityEngine::Playables::PlayableOutputHandle
    constexpr operator UnityEngine::Playables::PlayableOutputHandle() const noexcept {
      return m_Handle;
    }
    // public UnityEngine.Playables.PlayableOutputHandle GetHandle()
    // Offset: 0xF06ED4
    UnityEngine::Playables::PlayableOutputHandle GetHandle();
  }; // UnityEngine.Experimental.Playables.TexturePlayableOutput
  #pragma pack(pop)
  static check_size<sizeof(TexturePlayableOutput), 0 + sizeof(UnityEngine::Playables::PlayableOutputHandle)> __UnityEngine_Experimental_Playables_TexturePlayableOutputSizeCheck;
  static_assert(sizeof(TexturePlayableOutput) == 0xC);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Playables::TexturePlayableOutput, "UnityEngine.Experimental.Playables", "TexturePlayableOutput");
