// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Bindings.VisibleToOtherModulesAttribute
  // [] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: D48C90
  // [AttributeUsageAttribute] Offset: D48C90
  class VisibleToOtherModulesAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: VisibleToOtherModulesAttribute
    VisibleToOtherModulesAttribute() noexcept {}
    // public System.Void .ctor(params System.String[] modules)
    // Offset: 0x1A04804
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisibleToOtherModulesAttribute* New_ctor(::Array<::Il2CppString*>* modules) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::VisibleToOtherModulesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisibleToOtherModulesAttribute*, creationType>(modules)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params System.String[] modules)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisibleToOtherModulesAttribute* New_ctor(std::initializer_list<::Il2CppString*> modules) {
      return New_ctor(::Array<::Il2CppString*>::New(modules));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params System.String[] modules)
    template<class ...TParams, ::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisibleToOtherModulesAttribute* New_ctor(TParams&&... modules) {
      return New_ctor({modules...});
    }
    // public System.Void .ctor()
    // Offset: 0x1A047FC
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisibleToOtherModulesAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::VisibleToOtherModulesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisibleToOtherModulesAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.VisibleToOtherModulesAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::VisibleToOtherModulesAttribute*, "UnityEngine.Bindings", "VisibleToOtherModulesAttribute");
#pragma pack(pop)
