// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.CachedOpenTypeProvider
#include "Zenject/CachedOpenTypeProvider.hpp"
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: CachedProvider
  class CachedProvider;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.CachedOpenTypeProvider/<>c
  // [CompilerGeneratedAttribute] Offset: DDE508
  class CachedOpenTypeProvider::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly Zenject.CachedOpenTypeProvider/<>c <>9
    static Zenject::CachedOpenTypeProvider::$$c* _get_$$9();
    // Set static field: static public readonly Zenject.CachedOpenTypeProvider/<>c <>9
    static void _set_$$9(Zenject::CachedOpenTypeProvider::$$c* value);
    // Get static field: static public System.Func`2<Zenject.CachedProvider,System.Int32> <>9__8_0
    static System::Func_2<Zenject::CachedProvider*, int>* _get_$$9__8_0();
    // Set static field: static public System.Func`2<Zenject.CachedProvider,System.Int32> <>9__8_0
    static void _set_$$9__8_0(System::Func_2<Zenject::CachedProvider*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x1371478
    static void _cctor();
    // System.Int32 <get_NumInstances>b__8_0(Zenject.CachedProvider x)
    // Offset: 0x13714E4
    int $get_NumInstances$b__8_0(Zenject::CachedProvider* x);
    // public System.Void .ctor()
    // Offset: 0x13714DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedOpenTypeProvider::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::CachedOpenTypeProvider::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedOpenTypeProvider::$$c*, creationType>()));
    }
  }; // Zenject.CachedOpenTypeProvider/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::CachedOpenTypeProvider::$$c*, "Zenject", "CachedOpenTypeProvider/<>c");
