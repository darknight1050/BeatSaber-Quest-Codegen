// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BakedReflectionProbeInstaller
#include "GlobalNamespace/BakedReflectionProbeInstaller.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BakedReflectionProbeInstaller/<>c
  // [CompilerGeneratedAttribute] Offset: E123BC
  class BakedReflectionProbeInstaller::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly BakedReflectionProbeInstaller/<>c <>9
    static GlobalNamespace::BakedReflectionProbeInstaller::$$c* _get_$$9();
    // Set static field: static public readonly BakedReflectionProbeInstaller/<>c <>9
    static void _set_$$9(GlobalNamespace::BakedReflectionProbeInstaller::$$c* value);
    // Get static field: static public System.Func`2<Zenject.BindingId,System.Boolean> <>9__7_0
    static System::Func_2<Zenject::BindingId, bool>* _get_$$9__7_0();
    // Set static field: static public System.Func`2<Zenject.BindingId,System.Boolean> <>9__7_0
    static void _set_$$9__7_0(System::Func_2<Zenject::BindingId, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x119DCA0
    static void _cctor();
    // System.Boolean <InstallBindings>b__7_0(Zenject.BindingId t)
    // Offset: 0x119DD0C
    bool $InstallBindings$b__7_0(Zenject::BindingId t);
    // public System.Void .ctor()
    // Offset: 0x119DD04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakedReflectionProbeInstaller::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BakedReflectionProbeInstaller::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakedReflectionProbeInstaller::$$c*, creationType>()));
    }
  }; // BakedReflectionProbeInstaller/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedReflectionProbeInstaller::$$c*, "", "BakedReflectionProbeInstaller/<>c");
