// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  // Autogenerated type: Zenject.DiContainer/<>c__DisplayClass86_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D93D48
  class DiContainer::$$c__DisplayClass86_0 : public ::Il2CppObject {
    public:
    // public Zenject.InjectContext context
    // Size: 0x8
    // Offset: 0x10
    Zenject::InjectContext* context;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass86_0
    $$c__DisplayClass86_0(Zenject::InjectContext* context_ = {}) noexcept : context{context_} {}
    // Creating conversion operator: operator Zenject::InjectContext*
    constexpr operator Zenject::InjectContext*() const noexcept {
      return context;
    }
    // System.Type <ResolveTypeAll>b__0(Zenject.DiContainer/ProviderInfo x)
    // Offset: 0x1292EB8
    System::Type* $ResolveTypeAll$b__0(Zenject::DiContainer::ProviderInfo* x);
    // public System.Void .ctor()
    // Offset: 0x1292EB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::$$c__DisplayClass86_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::DiContainer::$$c__DisplayClass86_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::$$c__DisplayClass86_0*, creationType>()));
    }
  }; // Zenject.DiContainer/<>c__DisplayClass86_0
  static check_size<sizeof(DiContainer::$$c__DisplayClass86_0), 16 + sizeof(Zenject::InjectContext*)> __Zenject_DiContainer_$$c__DisplayClass86_0SizeCheck;
  static_assert(sizeof(DiContainer::$$c__DisplayClass86_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::DiContainer::$$c__DisplayClass86_0*, "Zenject", "DiContainer/<>c__DisplayClass86_0");
#pragma pack(pop)
