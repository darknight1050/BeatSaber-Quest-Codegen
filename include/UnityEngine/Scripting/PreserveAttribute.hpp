// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 1)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Size: 0x10
  // Autogenerated type: UnityEngine.Scripting.PreserveAttribute
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: D4E2F8
  // [AttributeUsageAttribute] Offset: D4E2F8
  class PreserveAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: PreserveAttribute
    PreserveAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x16BEEC0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreserveAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::PreserveAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreserveAttribute*, creationType>()));
    }
  }; // UnityEngine.Scripting.PreserveAttribute
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::PreserveAttribute*, "UnityEngine.Scripting", "PreserveAttribute");
#pragma pack(pop)
