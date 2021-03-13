// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.CustomYieldInstruction
  // [] Offset: FFFFFFFF
  class CustomYieldInstruction : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // Creating value type constructor for type: CustomYieldInstruction
    CustomYieldInstruction() noexcept {}
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // public System.Boolean get_keepWaiting()
    // Offset: 0xFFFFFFFF
    bool get_keepWaiting();
    // public System.Object get_Current()
    // Offset: 0x19C67EC
    ::Il2CppObject* get_Current_NEW();
    // public System.Boolean MoveNext()
    // Offset: 0x19C67F4
    bool MoveNext_NEW();
    // public System.Void Reset()
    // Offset: 0x19C6800
    void Reset_NEW();
    // protected System.Void .ctor()
    // Offset: 0x19C6804
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomYieldInstruction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::CustomYieldInstruction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomYieldInstruction*, creationType>()));
    }
  }; // UnityEngine.CustomYieldInstruction
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CustomYieldInstruction*, "UnityEngine", "CustomYieldInstruction");
