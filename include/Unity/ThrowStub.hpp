// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ObjectDisposedException
#include "System/ObjectDisposedException.hpp"
// Completed includes
// Type namespace: Unity
namespace Unity {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Unity.ThrowStub
  // [] Offset: FFFFFFFF
  class ThrowStub : public System::ObjectDisposedException {
    public:
    // Creating value type constructor for type: ThrowStub
    ThrowStub() noexcept {}
    // static public System.Void ThrowNotSupportedException()
    // Offset: 0x20DF17C
    static void ThrowNotSupportedException();
  }; // Unity.ThrowStub
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Unity::ThrowStub*, "Unity", "ThrowStub");
