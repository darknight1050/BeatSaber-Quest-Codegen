// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: MemoryPoolWithActiveItems`1
#include "GlobalNamespace/MemoryPoolWithActiveItems_1.hpp"
// Including type: FlyingSpriteEffect
#include "GlobalNamespace/FlyingSpriteEffect.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FlyingSpriteEffect/Pool
  class FlyingSpriteEffect::Pool : public GlobalNamespace::MemoryPoolWithActiveItems_1<GlobalNamespace::FlyingSpriteEffect*> {
    public:
    // public System.Void .ctor()
    // Offset: 0xBDB5E0
    // Implemented from: MemoryPoolWithActiveItems`1
    // Base method: System.Void MemoryPoolWithActiveItems`1::.ctor()
    // Base method: System.Void MonoMemoryPool`1::.ctor()
    // Base method: System.Void MemoryPool`1::.ctor()
    // Base method: System.Void MemoryPoolBase`1::.ctor()
    // Base method: System.Void Object::.ctor()
    static FlyingSpriteEffect::Pool* New_ctor();
  }; // FlyingSpriteEffect/Pool
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingSpriteEffect::Pool*, "", "FlyingSpriteEffect/Pool");
#pragma pack(pop)
