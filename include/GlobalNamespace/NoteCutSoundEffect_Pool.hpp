// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NoteCutSoundEffect
#include "GlobalNamespace/NoteCutSoundEffect.hpp"
// Including type: Zenject.MonoMemoryPool`1
#include "Zenject/MonoMemoryPool_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NoteCutSoundEffect/Pool
  class NoteCutSoundEffect::Pool : public Zenject::MonoMemoryPool_1<GlobalNamespace::NoteCutSoundEffect*> {
    public:
    // Creating value type constructor for type: Pool
    Pool() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x11BABC8
    // Implemented from: Zenject.MonoMemoryPool`1
    // Base method: System.Void MonoMemoryPool_1::.ctor()
    // Base method: System.Void MemoryPool_1::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoteCutSoundEffect::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteCutSoundEffect::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoteCutSoundEffect::Pool*, creationType>()));
    }
  }; // NoteCutSoundEffect/Pool
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteCutSoundEffect::Pool*, "", "NoteCutSoundEffect/Pool");
