// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Bindings.NativeMethodAttribute
#include "UnityEngine/Bindings/NativeMethodAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x1C
  // Autogenerated type: UnityEngine.Bindings.FreeFunctionAttribute
  // [] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: D48F20
  // [AttributeUsageAttribute] Offset: D48F20
  class FreeFunctionAttribute : public UnityEngine::Bindings::NativeMethodAttribute {
    public:
    // Creating value type constructor for type: FreeFunctionAttribute
    FreeFunctionAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1A04034
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FreeFunctionAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::FreeFunctionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FreeFunctionAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x1A04068
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FreeFunctionAttribute* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::FreeFunctionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FreeFunctionAttribute*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.Boolean isThreadSafe)
    // Offset: 0x1A040BC
    // Implemented from: UnityEngine.Bindings.NativeMethodAttribute
    // Base method: System.Void NativeMethodAttribute::.ctor(System.String name, System.Boolean isThreadSafe)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FreeFunctionAttribute* New_ctor(::Il2CppString* name, bool isThreadSafe) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::FreeFunctionAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FreeFunctionAttribute*, creationType>(name, isThreadSafe)));
    }
  }; // UnityEngine.Bindings.FreeFunctionAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::FreeFunctionAttribute*, "UnityEngine.Bindings", "FreeFunctionAttribute");
#pragma pack(pop)
